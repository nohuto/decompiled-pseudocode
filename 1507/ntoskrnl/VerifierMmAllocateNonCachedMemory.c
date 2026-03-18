/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x140753474
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateNonCachedMemory @ 0x1406A2544 (MmAllocateNonCachedMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140746120 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t Size)
{
  _SLIST_ENTRY *NonCachedMemory; // rax
  _SLIST_ENTRY *v4; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  NonCachedMemory = (_SLIST_ENTRY *)pXdvMmAllocateNonCachedMemory(Size);
  v4 = NonCachedMemory;
  if ( VfPoolTraces )
    ViPoolLogStackTrace((__int64)NonCachedMemory, Size);
  if ( v4 )
  {
    VfFillAllocatedMemory(v4, Size);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v4, Size);
  }
  return v4;
}
