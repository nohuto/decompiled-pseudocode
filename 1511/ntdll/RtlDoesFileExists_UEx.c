/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18003FE78
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x18003FC68 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800426C0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDosSearchPath_U @ 0x1800443C0 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_U @ 0x180086500 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x1800C8ADC (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && RtlDoesFileExists_UstrEx(&DestinationString, a2);
}
