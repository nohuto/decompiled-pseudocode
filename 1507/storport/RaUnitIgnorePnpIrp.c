/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C004D240
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0009248 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
