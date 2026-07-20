/*
 * XREFs of SmpCleanupStalePageFiles @ 0x14000B1A8
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400084FC (RtlStringCbPrintfW.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000A848 (SmpFreeSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpDeletePagingFile @ 0x14000FBE8 (SmpDeletePagingFile.c)
 */

__int64 SmpCleanupStalePageFiles()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (__int64 *)SmpExistingPageFilesList;
  while ( v0 != &SmpExistingPageFilesList )
  {
    v1 = v0;
    SmpDeletePagingFile(v0 + 2);
    v0 = (__int64 *)*v0;
    result = SmpFreeSavedRegistryEntry(v1);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    return SmpDeletePagingFile(&DestinationString);
  }
  return result;
}
