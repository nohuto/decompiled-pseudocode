/*
 * XREFs of RaUnitCreateIrp @ 0x1C0005AD4
 * Callers:
 *     RaDriverCloseIrp @ 0x1C004C610 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C004C6B0 (RaDriverCreateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCreateIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 40));
}
