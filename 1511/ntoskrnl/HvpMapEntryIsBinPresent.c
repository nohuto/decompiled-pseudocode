/*
 * XREFs of HvpMapEntryIsBinPresent @ 0x140039058
 * Callers:
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvpFreeAllocatedBins @ 0x1405E48E8 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HvpMapEntryIsBinPresent(__int64 a1)
{
  return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 || (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
