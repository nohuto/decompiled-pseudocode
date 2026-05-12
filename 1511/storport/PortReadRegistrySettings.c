/*
 * XREFs of PortReadRegistrySettings @ 0x1C00541EC
 * Callers:
 *     PortGetRegistrySettings @ 0x1C0054180 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C0054280 (PortpReadUncachedExtAlignmentEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C00542F0 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C0054360 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C00543D0 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C0054440 (PortpReadMaximumLogicalUnitEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
