/*
 * XREFs of SmpCleanupStalePageFiles @ 0x140009C8C
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004D08 (RtlStringCbPrintfW.c)
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     SmpDeletePagingFile @ 0x14000FFFC (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCleanupStalePageFiles(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v3 = (__int64 *)SmpExistingPageFilesList;
  while ( v3 != &SmpExistingPageFilesList )
  {
    v4 = v3;
    SmpDeletePagingFile(v3 + 2, a2, a3);
    v3 = (__int64 *)*v3;
    result = SmpFreeSavedRegistryEntry(v4);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    return SmpDeletePagingFile(&DestinationString, v6, v7);
  }
  return result;
}
