/*
 * XREFs of RtlClearAllBitsEx @ 0x1400BC0AC
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403AEDC4 (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * (((*(_QWORD *)a1 & 0x1F) != 0) + (*(_QWORD *)a1 >> 5)));
}
