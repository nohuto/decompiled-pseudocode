/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x14071BA60
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140710920 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t Size)
{
  __int64 NonCachedMemory; // rax
  _SLIST_ENTRY *v4; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  NonCachedMemory = pXdvMmAllocateNonCachedMemory(Size);
  v4 = (_SLIST_ENTRY *)NonCachedMemory;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(NonCachedMemory, Size);
  if ( v4 )
  {
    VfFillAllocatedMemory(v4, Size);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v4, Size);
  }
  return v4;
}
