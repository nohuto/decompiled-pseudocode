/*
 * XREFs of HvpMapEntryIsBinPresent @ 0x1400EDF9C
 * Callers:
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvpFreeAllocatedBins @ 0x140603B18 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpMapEntryIsBinPresent(__int64 a1)
{
  return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 || (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
