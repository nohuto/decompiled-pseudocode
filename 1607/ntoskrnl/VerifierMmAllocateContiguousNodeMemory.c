/*
 * XREFs of VerifierMmAllocateContiguousNodeMemory @ 0x14071B888
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x140704240 (VfCheckPageProtection.c)
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140710920 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousNodeMemory(
        size_t Size,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
