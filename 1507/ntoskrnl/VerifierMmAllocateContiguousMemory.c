/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x14075304C
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140114D80 (MmAllocateContiguousNodeMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140746120 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
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
