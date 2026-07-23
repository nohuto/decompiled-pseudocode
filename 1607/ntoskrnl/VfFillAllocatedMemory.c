/*
 * XREFs of VfFillAllocatedMemory @ 0x140710920
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x14071B638 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x14071B6E0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x14071B7B4 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14071B888 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x14071BA60 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
