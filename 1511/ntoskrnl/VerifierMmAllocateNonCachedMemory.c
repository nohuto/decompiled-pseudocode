/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x1406CF9A8
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateNonCachedMemory @ 0x140623364 (MmAllocateNonCachedMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1406C485C (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
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
