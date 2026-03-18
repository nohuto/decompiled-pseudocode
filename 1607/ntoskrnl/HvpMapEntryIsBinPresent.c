/*
 * XREFs of HvpMapEntryIsBinPresent @ 0x1400F011C
 * Callers:
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     HvpFreeAllocatedBins @ 0x140603A64 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpMapEntryIsBinPresent(__int64 a1)
{
  return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 || (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
