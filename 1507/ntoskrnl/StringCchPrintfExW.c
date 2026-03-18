/*
 * XREFs of StringCchPrintfExW @ 0x14026DEF8
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     sub_14026E0B8 @ 0x14026E0B8 (sub_14026E0B8.c)
 *     StringVPrintfWorkerW @ 0x14026E170 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags,
        STRSAFE_LPCWSTR pszFormat,
        ...)
{
  HRESULT v9; // ebx
  STRSAFE_LPWSTR v10; // r13
  size_t v11; // rsi
  const wchar_t *v12; // r9
  HRESULT v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR v16; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -2147024809;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v16 = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&word_140196B30;
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
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = StringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      sub_14026E0B8(pszDest, 2 * cchDest, ppszDestEnd, &v16, pcchNewDestLength, dwFlags);
      v10 = v16;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_22;
  }
  return v9;
}
