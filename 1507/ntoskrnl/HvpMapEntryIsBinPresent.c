/*
 * XREFs of HvpMapEntryIsBinPresent @ 0x140062178
 * Callers:
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvpFreeAllocatedBins @ 0x14065B830 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpMapEntryIsBinPresent(__int64 a1)
{
  return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 || (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
