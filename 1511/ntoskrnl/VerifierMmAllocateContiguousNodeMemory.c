/*
 * XREFs of VerifierMmAllocateContiguousNodeMemory @ 0x1406CF7D0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1400BD454 (MmAllocateContiguousNodeMemory.c)
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1406C485C (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousNodeMemory(
        size_t Size,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5,
        int a6)
{
  __int64 ContiguousNodeMemory; // rax
  _SLIST_ENTRY *v9; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VfCheckPageProtection(a5, retaddr);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  ContiguousNodeMemory = pXdvMmAllocateContiguousNodeMemory(Size, a2, a3, a4, a5, a6);
  v9 = (_SLIST_ENTRY *)ContiguousNodeMemory;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(ContiguousNodeMemory, Size);
  if ( v9 )
  {
    VfFillAllocatedMemory(v9, Size);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v9, Size);
  }
  return v9;
}
