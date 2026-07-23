/*
 * XREFs of DrvDbGetConfigurationSubKeyCallback @ 0x14023B224
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x1404DFCAC (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1406D7150 (_PnpCtxRegCloseKey.c)
 */

__int64 __fastcall DrvDbGetConfigurationSubKeyCallback(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v7; // r12d
  __int64 v8; // rcx
  NTSTATUS v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v20 = 0LL;
  v19 = 0;
  v7 = 0;
  v21 = 0;
  v18 = 0;
  if ( !a4 )
    return 3;
  v9 = PnpCtxRegOpenKey(a1, a2, a3, 0LL, 1, &v20);
  if ( v9 >= 0 )
  {
    v17 = 4;
    if ( *(_BYTE *)(a4 + 16) )
    {
      v10 = PnpCtxRegQueryValue(v8, v20, L"ConfigScope", &v18, &v19, &v17);
      v9 = v10;
      if ( v10 < 0 || v18 != 4 || v17 != 4 )
      {
        if ( v10 == -1073741772 )
          v9 = 0;
        goto LABEL_33;
      }
      v7 = v19;
    }
    else
    {
      v11 = PnpCtxRegQueryValue(v8, v20, L"ConfigFlags", &v18, &v21, &v17);
      v9 = v11;
      if ( v11 < 0 || v18 != 4 || v17 != 4 )
      {
        if ( v11 == -1073741772 )
          v9 = 0;
        goto LABEL_33;
      }
    }
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( a3[v13] );
    v14 = *(unsigned int *)(a4 + 12);
    if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v14 + v13) )
      v9 = -1073741789;
    else
      memmove((void *)(*(_QWORD *)a4 + 2 * v14), a3, 2LL * (unsigned int)v13);
    *(_DWORD *)(a4 + 12) += v13;
    v15 = *(unsigned int *)(a4 + 12);
    if ( !*(_BYTE *)(a4 + 16) )
    {
LABEL_27:
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v15 + 1) )
        v9 = -1073741789;
      else
        *(_WORD *)(*(_QWORD *)a4 + 2 * v15) = 0;
      ++*(_DWORD *)(a4 + 12);
      goto LABEL_33;
    }
    if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v15 + 1) )
      *(_WORD *)(*(_QWORD *)a4 + 2 * v15) = 58;
    ++*(_DWORD *)(a4 + 12);
    v9 = RtlStringCchPrintfW(pszDest, 9uLL, L"%X", v7);
    if ( v9 >= 0 )
    {
      do
        ++v12;
      while ( pszDest[v12] );
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v12 + *(_DWORD *)(a4 + 12)) )
        v9 = -1073741789;
      else
        memmove((void *)(*(_QWORD *)a4 + 2LL * *(unsigned int *)(a4 + 12)), pszDest, 2LL * (unsigned int)v12);
      *(_DWORD *)(a4 + 12) += v12;
      v15 = *(unsigned int *)(a4 + 12);
      goto LABEL_27;
    }
  }
LABEL_33:
  if ( v20 )
    PnpCtxRegCloseKey();
  if ( v9 < 0 )
  {
    *(_DWORD *)(a4 + 20) = v9;
    if ( v9 != -1073741789 )
      return 3;
  }
  return v4;
}
