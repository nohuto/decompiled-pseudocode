/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C0015BA8
 * Callers:
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0015B24 (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C009D78C (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0015C18 (RtlWideCharArrayVPrintfWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0015C70 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 RtlUnicodeStringPrintf(_UNICODE_STRING *DestinationString, const wchar_t *pszFormat, ...)
{
  int v3; // edx
  char *argList; // [rsp+20h] [rbp-38h]
  unsigned int v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 cchNewDestLength; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 cchDest; // [rsp+38h] [rbp-20h] BYREF
  wchar_t *pszDest; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  unsigned __int64 *v13; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, pszFormat);
  va_start(va, pszFormat);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int64 *);
  v3 = RtlUnicodeStringValidateDestWorker(
         DestinationString,
         &pszDest,
         &cchDest,
         v13,
         (const unsigned __int64)argList,
         v6);
  if ( v3 >= 0 )
  {
    cchNewDestLength = 0LL;
    v3 = RtlWideCharArrayVPrintfWorker(pszDest, cchDest, &cchNewDestLength, pszFormat, va);
    DestinationString->Length = 2 * cchNewDestLength;
  }
  return (unsigned int)v3;
}
