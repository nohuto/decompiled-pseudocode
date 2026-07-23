/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18006A6B8
 * Callers:
 *     RtlDoesFileExists_U @ 0x1800675A0 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x1800675B0 (RtlDosSearchPath_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800692C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18006A4A4 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpCheckDeviceName @ 0x1800CFF7C (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044724 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && RtlDoesFileExists_UstrEx(&DestinationString, a2);
}
