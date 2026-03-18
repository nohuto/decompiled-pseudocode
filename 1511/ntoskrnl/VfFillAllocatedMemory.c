/*
 * XREFs of VfFillAllocatedMemory @ 0x1406C485C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1406CF580 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1406CF628 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1406CF6FC (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1406CF7D0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1406CF9A8 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x1406D060C (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

void *__fastcall VfFillAllocatedMemory(void *a1, size_t Size)
{
  unsigned __int8 LowPart; // al
  size_t v5; // r8
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  v5 = 256LL;
  if ( Size < 0x100 )
    v5 = Size;
  if ( v5 != 256 )
    return memset(a1, LowPart | 1u, v5);
  result = (void *)(((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL | ((((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}
