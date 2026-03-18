/*
 * XREFs of PnpCompareGuid @ 0x1404E0E6C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404E0D6C (PnpProcessTargetDeviceEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1404EEE18 (PnpSetPlugPlayEvent.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 */

bool __fastcall PnpCompareGuid(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
