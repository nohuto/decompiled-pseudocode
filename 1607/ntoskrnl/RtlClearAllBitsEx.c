/*
 * XREFs of RtlClearAllBitsEx @ 0x1400966C4
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403DAE30 (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x1404BA9CC (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * (((*(_QWORD *)a1 & 0x1F) != 0) + (*(_QWORD *)a1 >> 5)));
}
