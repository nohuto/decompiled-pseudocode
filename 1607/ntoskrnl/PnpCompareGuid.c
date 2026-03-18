/*
 * XREFs of PnpCompareGuid @ 0x1403F02F8
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1403EF8F0 (PnpProcessTargetDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PnpSetPlugPlayEvent @ 0x1403F01EC (PnpSetPlugPlayEvent.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 *     CmEqualTrans @ 0x1403FD9D0 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x1403FF314 (CmpSearchForTrans.c)
 *     PiEventRemovalGetDeleteType @ 0x1404C5B40 (PiEventRemovalGetDeleteType.c)
 * Callees:
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 */

bool __fastcall PnpCompareGuid(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
