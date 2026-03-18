/*
 * XREFs of _PnpIsValidGuidString @ 0x14043FF5C
 * Callers:
 *     _CmValidateInstallerClassName @ 0x140440558 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x140538284 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A84A0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
