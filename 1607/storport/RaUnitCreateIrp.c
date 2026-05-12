/*
 * XREFs of RaUnitCreateIrp @ 0x1C00095E4
 * Callers:
 *     RaDriverCloseIrp @ 0x1C0057620 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00576C0 (RaDriverCreateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
