/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x1406CF580
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1400BD454 (MmAllocateContiguousNodeMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1406C485C (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemory(size_t Size, __int64 a2)
{
  __int64 ContiguousNodeMemory; // rax
  _SLIST_ENTRY *v5; // rbx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  ContiguousNodeMemory = pXdvMmAllocateContiguousNodeMemory(
                           Size,
                           0LL,
                           a2,
                           0,
                           (MmVerifierData & 0x2000000) != 0 ? 4 : 64,
                           0x80000000);
  v5 = (_SLIST_ENTRY *)ContiguousNodeMemory;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(ContiguousNodeMemory, Size);
  if ( v5 )
  {
    VfFillAllocatedMemory(v5, Size);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v5, Size);
  }
  return v5;
}
