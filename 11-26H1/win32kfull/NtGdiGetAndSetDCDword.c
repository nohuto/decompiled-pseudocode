/*
 * XREFs of NtGdiGetAndSetDCDword @ 0x1401D5070
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1401D52B8 (-iSetMapMode@DC@@QEAAHH@Z.c)
 */

__int64 __fastcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, void *a4)
{
  unsigned int v7; // r14d
  int v8; // ebx
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-98h] BYREF
  DC *v21[14]; // [rsp+40h] [rbp-88h] BYREF

  v7 = 1;
  v8 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      v8 = *((_DWORD *)v21[0] + 9) & 0x400;
      *((_DWORD *)v21[0] + 9) &= ~0x400u;
      goto LABEL_10;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = *((_DWORD *)v21[0] + 528);
      *((_DWORD *)v21[0] + 528) = a3;
      goto LABEL_10;
    }
    v11 = v10 - 2;
    if ( !v11 )
    {
      v19 = *((_QWORD *)v21[0] + 122);
      v8 = *(_DWORD *)(v19 + 352);
      *(_DWORD *)(v19 + 352) = a3;
      goto LABEL_10;
    }
    v12 = v11 - 2;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          v8 = *(_DWORD *)(*((_QWORD *)v21[0] + 122) + 104LL);
          if ( v8 != a3 )
            v8 = DC::iSetMapMode(v21[0], a3);
          goto LABEL_10;
        }
        if ( v14 != 1 )
        {
          v7 = 0;
          goto LABEL_10;
        }
        v16 = *((_DWORD *)v21[0] + 62);
        if ( (*(_DWORD *)(*((_QWORD *)v21[0] + 122) + 108LL) & 1) != 0 )
        {
          v8 = 2 - ((v16 & 4) != 0);
          if ( a3 != 2 )
          {
            if ( a3 == 1 )
              goto LABEL_19;
            goto LABEL_24;
          }
        }
        else
        {
          v8 = ((v16 & 4) != 0) + 1;
          if ( a3 == 2 )
          {
LABEL_19:
            v17 = v16 | 4;
LABEL_20:
            *((_DWORD *)v21[0] + 62) = v17;
            goto LABEL_10;
          }
          if ( a3 != 1 )
          {
LABEL_24:
            EngSetLastError(0x57u);
            v8 = 0;
            goto LABEL_10;
          }
        }
        v17 = v16 & 0xFFFFFFFB;
        goto LABEL_20;
      }
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v8 = -1;
      }
      else
      {
        v18 = *((_QWORD *)v21[0] + 122);
        v8 = *(_DWORD *)(v18 + 236);
        *(_DWORD *)(v18 + 236) = a3;
      }
    }
LABEL_10:
    if ( v7 )
    {
      v20[0] = v8;
      GreProbeAndWriteToUntrustedVa(a4, 4uLL, v20, 4uLL, 1uLL);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    return v7;
  }
  if ( a2 == 5 )
  {
    v20[0] = 0x80000000;
    GreProbeAndWriteToUntrustedVa(a4, 4uLL, v20, 4uLL, 1uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  return 0LL;
}
