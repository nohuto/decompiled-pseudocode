/*
 * XREFs of RaUnitCreateIrp @ 0x1C0006AA0
 * Callers:
 *     RaDriverCloseIrp @ 0x1C0050650 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00506F0 (RaDriverCreateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
