/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180054E14
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180053C60 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180054C04 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlDosSearchPath_U @ 0x180057930 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_U @ 0x180079480 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x1800BBDBC (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && RtlDoesFileExists_UstrEx(&DestinationString, a2);
}
