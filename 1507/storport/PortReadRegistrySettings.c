/*
 * XREFs of PortReadRegistrySettings @ 0x1C005016C
 * Callers:
 *     PortGetRegistrySettings @ 0x1C0050100 (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C0050200 (PortpReadUncachedExtAlignmentEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C0050270 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C00502E0 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C0050350 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C00503C0 (PortpReadMaximumLogicalUnitEntry.c)
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
