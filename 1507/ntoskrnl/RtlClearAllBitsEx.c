/*
 * XREFs of RtlClearAllBitsEx @ 0x1400FE45C
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1403FF1F0 (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x14051C46C (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * (((*(_QWORD *)a1 & 0x1F) != 0) + (*(_QWORD *)a1 >> 5)));
}
