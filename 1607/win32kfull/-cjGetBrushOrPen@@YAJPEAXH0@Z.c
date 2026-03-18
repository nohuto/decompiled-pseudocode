/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0138C9C
 * Callers:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C010D440 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C010D46C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013A180 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  struct BRUSH *v6; // r11
  int v7; // eax
  struct BRUSH *v8; // rcx
  int v9; // eax
  struct BRUSH *v11; // rcx
  int v12; // esi
  int v13; // r14d
  float *v14; // rdi
  _DWORD *v15; // rdx
  __int64 v16; // rax
  struct BRUSH *v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v17, a1);
  v6 = v17[0];
  if ( !v17[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)v17[0] + 12);
  if ( (v7 & 0x800) != 0 )
  {
    bSyncBrushObj(v17[0]);
    if ( a3 )
    {
      if ( v3 < 0x10 )
        goto LABEL_10;
      v11 = v17[0];
      if ( (_DWORD)v3 == 32 && *((_DWORD *)v17[0] + 40) == 5 )
      {
        a3[1] = 0LL;
        a3[2] = 0LL;
        *((_DWORD *)a3 + 6) = 0;
        v5 = 32;
        *a3 = 5LL;
        goto LABEL_10;
      }
      *(_DWORD *)a3 = *((_DWORD *)v17[0] + 40);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v11 + 38);
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 3) = *((_DWORD *)v11 + 21);
    }
    goto LABEL_9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    if ( (*((_BYTE *)v17[0] + 160) & 0xF) == 7 )
      v12 = *((_DWORD *)v17[0] + 44);
    else
      v12 = 0;
    v13 = 4 * v12 + 28;
    if ( a3 )
    {
      if ( (int)v3 < v13 )
        goto LABEL_10;
      *(_DWORD *)a3 = *((_DWORD *)v17[0] + 40);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 38);
      *((_DWORD *)a3 + 6) = v12;
      if ( v12 )
      {
        v14 = (float *)*((_QWORD *)v6 + 21);
        v15 = (_DWORD *)a3 + 7;
        do
        {
          if ( (*((_DWORD *)v6 + 40) & 0xF0000) != 0 )
            bFToL(*v14, v15, 6);
          else
            *v15 = *(_DWORD *)v14;
          ++v15;
          ++v14;
          --v12;
        }
        while ( v12 );
      }
      *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 46);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 21);
      a3[2] = *((_QWORD *)v6 + 24);
    }
    v5 = v13;
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
    bSyncBrushObj(v17[0]);
    v8 = v17[0];
    v9 = *((_DWORD *)v17[0] + 12);
    if ( (v9 & 0x10) != 0 )
    {
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 21);
LABEL_8:
      a3[1] = 0LL;
      goto LABEL_9;
    }
    if ( (v9 & 0x40) != 0 )
    {
      *a3 = 3LL;
    }
    else
    {
      if ( (v9 & 0x20) != 0 )
      {
        *(_DWORD *)a3 = 2;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 21);
        v16 = *((unsigned int *)v8 + 6);
LABEL_39:
        a3[1] = v16;
        goto LABEL_9;
      }
      if ( (v9 & 0x100) != 0 )
      {
        *a3 = 1LL;
        goto LABEL_8;
      }
      if ( (v9 & 0x80u) == 0 )
        goto LABEL_9;
      *(_DWORD *)a3 = 5;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 21);
    }
    v16 = *((_QWORD *)v8 + 5);
    goto LABEL_39;
  }
LABEL_10:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v17);
  return v5;
}
