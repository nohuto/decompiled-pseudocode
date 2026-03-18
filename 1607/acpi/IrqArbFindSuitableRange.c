/*
 * XREFs of IrqArbFindSuitableRange @ 0x1C008BDC0
 * Callers:
 *     <none>
 * Callees:
 *     PcisuppIsPciDevice @ 0x1C008A248 (PcisuppIsPciDevice.c)
 *     ArbFindSuitableRange @ 0x1C008C030 (ArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C008C4D4 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C008CB70 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C008CDB4 (IrqArbpFindSuitableRangePci.c)
 */

char __fastcall IrqArbFindSuitableRange(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)ArbFindSuitableRange() )
    return 0;
  if ( (unsigned __int64)(*a2 - 4293918720LL) <= 0xFFFFE )
    return IrqArbpFindSuitableRangeMsi(a1, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40LL) + 4LL) & 0x20) != 0 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32LL), &v6) < 0 )
    return 0;
  if ( !v6 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  return IrqArbpFindSuitableRangePci(v4, a2);
}
