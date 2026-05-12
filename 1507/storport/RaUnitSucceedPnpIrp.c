/*
 * XREFs of RaUnitSucceedPnpIrp @ 0x1C005064C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitSucceedPnpIrp(__int64 a1, IRP *a2)
{
  return RaidCompleteRequestEx(a2, 0, 0);
}
