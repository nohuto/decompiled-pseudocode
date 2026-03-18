/*
 * XREFs of RtlStringCbPrintfExA @ 0x1401A865C
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     sub_140136C24 @ 0x140136C24 (sub_140136C24.c)
 *     sub_140141D84 @ 0x140141D84 (sub_140141D84.c)
 *     unknown_libname_2 @ 0x1401A87EC (unknown_libname_2.c)
 *     sub_1401A8810 @ 0x1401A8810 (sub_1401A8810.c)
 */

NTSTATUS RtlStringCbPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  char *v10; // r12
  size_t v11; // rsi
  const char *v12; // r9
  unsigned __int64 v13; // rax
  NTSTRSAFE_PSTR v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v16[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = sub_140141D84((__int64)pszDest, cbDest, (__int64)ppszDestEnd, dwFlags);
  if ( v9 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v15 = pszDest;
    v10 = pszDest;
    v16[0] = cbDest;
    v11 = cbDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = &File;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cbDest )
        *pszDest = 0;
    }
    else if ( cbDest )
    {
      v16[0] = 0LL;
      v9 = sub_140136C24(pszDest, cbDest, v16, v12, va);
      v13 = v16[0];
      v11 = cbDest - v16[0];
      v16[0] = cbDest - v16[0];
      v10 = &pszDest[v13];
      v15 = &pszDest[v13];
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          unknown_libname_2(&pszDest[v13], v11, dwFlags);
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_15:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcbRemaining )
          *pcbRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      sub_1401A8810(pszDest, cbDest, 0LL, &v15, v16, dwFlags);
      v10 = v15;
      v11 = v16[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_15;
  }
  return v9;
}
