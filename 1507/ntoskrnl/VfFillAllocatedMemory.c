/*
 * XREFs of VfFillAllocatedMemory @ 0x140746120
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x14075304C (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407530F4 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407531C8 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14075329C (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140753474 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x1407540D8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
