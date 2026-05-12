/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C0058844
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C000F724 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
