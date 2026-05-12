/*
 * XREFs of RaUnitIgnorePnpIrp @ 0x1C0050F48
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C000B400 (RaUnitQueryInterfaceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIgnorePnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
}
