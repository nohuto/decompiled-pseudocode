/*
 * XREFs of StringCbPrintfW @ 0x18008394C
 * Callers:
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180083740 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpGetVolumeHandle @ 0x180089364 (RtlpGetVolumeHandle.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 * Callees:
 *     _vsnwprintf @ 0x180096E90 (_vsnwprintf.c)
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  HRESULT v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147024774;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v5;
}
