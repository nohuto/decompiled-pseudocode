/*
 * XREFs of PnpCompareGuid @ 0x140460920
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     PnpProcessTargetDeviceEvent @ 0x140460714 (PnpProcessTargetDeviceEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 */

bool __fastcall PnpCompareGuid(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
