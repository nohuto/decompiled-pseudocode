/*
 * XREFs of PipAreDriversLoaded @ 0x1400097DC
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1403F4B68 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
