/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C00089CC
 * Callers:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EDEF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EDF2C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C00FEB54 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  int v8; // eax
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // r14d
  _DWORD *v13; // rdi
  _DWORD *v14; // rdx
  __int64 v15; // rax
  struct BRUSH *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v16, a1);
  v6 = v16[0];
  if ( !v16[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)v16[0] + 12);
  if ( (v7 & 0x800) != 0 )
  {
    bSyncBrushObj(v16[0]);
    if ( a3 )
    {
      if ( v3 < 0x10 )
        goto LABEL_10;
      if ( (_DWORD)v3 == 32 && *((_DWORD *)v6 + 40) == 5 )
      {
        a3[1] = 0LL;
        a3[2] = 0LL;
        *((_DWORD *)a3 + 6) = 0;
        v5 = 32;
        *a3 = 5LL;
        goto LABEL_10;
      }
      *(_DWORD *)a3 = *((_DWORD *)v6 + 40);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 38);
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 21);
    }
    goto LABEL_9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    v10 = *((unsigned int *)v16[0] + 40);
    if ( (*((_BYTE *)v16[0] + 160) & 0xF) == 7 )
      v11 = *((_DWORD *)v16[0] + 44);
    else
      v11 = 0;
    v12 = 4 * v11 + 28;
    if ( a3 )
    {
      if ( (int)v3 < v12 )
        goto LABEL_10;
      *(_DWORD *)a3 = v10;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 38);
      *((_DWORD *)a3 + 6) = v11;
      if ( v11 )
      {
        v13 = (_DWORD *)*((_QWORD *)v6 + 21);
        v14 = (_DWORD *)a3 + 7;
        do
        {
          if ( (*((_DWORD *)v6 + 40) & 0xF0000) != 0 )
            bFToL(v10, v14, 6LL);
          else
            *v14 = *v13;
          ++v14;
          ++v13;
          --v11;
        }
        while ( v11 );
      }
      *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 46);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 21);
      a3[2] = *((_QWORD *)v6 + 24);
    }
    v5 = v12;
    goto LABEL_10;
  }
  if ( !a3 )
  {
LABEL_9:
    v5 = 16;
    goto LABEL_10;
  }
  if ( v3 >= 0x10 )
  {
    bSyncBrushObj(v16[0]);
    v8 = *((_DWORD *)v6 + 12);
    if ( (v8 & 0x10) != 0 )
    {
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 21);
LABEL_8:
      a3[1] = 0LL;
      goto LABEL_9;
    }
    if ( (v8 & 0x40) != 0 )
    {
      *a3 = 3LL;
    }
    else
    {
      if ( (v8 & 0x20) != 0 )
      {
        *(_DWORD *)a3 = 2;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 21);
        v15 = *((unsigned int *)v6 + 6);
LABEL_39:
        a3[1] = v15;
        goto LABEL_9;
      }
      if ( (v8 & 0x100) != 0 )
      {
        *a3 = 1LL;
        goto LABEL_8;
      }
      if ( (v8 & 0x80u) == 0 )
        goto LABEL_9;
      *(_DWORD *)a3 = 5;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 21);
    }
    v15 = *((_QWORD *)v6 + 5);
    goto LABEL_39;
  }
LABEL_10:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v16);
  return v5;
}
