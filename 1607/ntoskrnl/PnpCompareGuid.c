/*
 * XREFs of PnpCompareGuid @ 0x14048A570
 * Callers:
 *     CmEqualTrans @ 0x1403FC890 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x1403FE1D4 (CmpSearchForTrans.c)
 *     PiEventRemovalGetDeleteType @ 0x1404869DC (PiEventRemovalGetDeleteType.c)
 *     PnpProcessTargetDeviceEvent @ 0x14048A17C (PnpProcessTargetDeviceEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 */

bool __fastcall PnpCompareGuid(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
