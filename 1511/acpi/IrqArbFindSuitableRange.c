/*
 * XREFs of IrqArbFindSuitableRange @ 0x1C006C1A0
 * Callers:
 *     <none>
 * Callees:
 *     PcisuppIsPciDevice @ 0x1C0069F6C (PcisuppIsPciDevice.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C006C094 (IrqArbpFindSuitableRangeMsi.c)
 *     ArbFindSuitableRange @ 0x1C006C230 (ArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006C4D0 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C006C928 (IrqArbpFindSuitableRangePci.c)
 */

char __fastcall IrqArbFindSuitableRange(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned __int8)ArbFindSuitableRange(a1, a2) )
    return 0;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 4293918720LL) <= 0xFFFFE )
    return IrqArbpFindSuitableRangeMsi(a1, (_DWORD *)a2);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 0x20) != 0 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), &v6) < 0 )
    return 0;
  if ( !v6 )
    return IrqArbpFindSuitableRangeIsa(a1, a2);
  return IrqArbpFindSuitableRangePci(v5, a2);
}
