/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x1C0125E60
 * Callers:
 *     <none>
 * Callees:
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0005F74 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, int *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  DC *v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( !v20[0] )
  {
    if ( a2 == 5 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (int *)W32UserProbeAddress;
      *a4 = 0x80000000;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    v7 = *((_DWORD *)v20[0] + 9) & 0x400;
    *((_DWORD *)v20[0] + 9) &= ~0x400u;
    goto LABEL_33;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v7 = *((_DWORD *)v20[0] + 627);
    *((_DWORD *)v20[0] + 627) = a3;
    goto LABEL_33;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v19 = *((_QWORD *)v20[0] + 10);
    v7 = *(_DWORD *)(v19 + 164);
    *(_DWORD *)(v19 + 164) = a3;
    goto LABEL_33;
  }
  v13 = v12 - 2;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v7 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v20[0] + 10);
        v7 = *(_DWORD *)(v18 + 104);
        *(_DWORD *)(v18 + 104) = a3;
      }
      goto LABEL_33;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v7 = *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 308LL);
      if ( v7 != a3 )
        v7 = DC::iSetMapMode(v20[0], a3);
      goto LABEL_33;
    }
    if ( v15 != 1 )
    {
      v8 = 0;
      goto LABEL_33;
    }
    v16 = *((_DWORD *)v20[0] + 44);
    if ( (*(_DWORD *)(*((_QWORD *)v20[0] + 10) + 312LL) & 1) != 0 )
    {
      v7 = 2 - ((v16 & 4) != 0);
      if ( a3 != 2 )
      {
        if ( a3 == 1 )
          goto LABEL_20;
        goto LABEL_24;
      }
    }
    else
    {
      v7 = ((v16 & 4) != 0) + 1;
      if ( a3 == 2 )
      {
LABEL_20:
        v17 = v16 | 4;
LABEL_23:
        *((_DWORD *)v20[0] + 44) = v17;
        goto LABEL_33;
      }
      if ( a3 != 1 )
      {
LABEL_24:
        EngSetLastError(0x57u);
        v7 = 0;
        goto LABEL_33;
      }
    }
    v17 = v16 & 0xFFFFFFFB;
    goto LABEL_23;
  }
LABEL_33:
  if ( v8 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (int *)W32UserProbeAddress;
    *a4 = v7;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
