/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x14071B7B4
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140710920 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCacheNode(
        size_t Size,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v8; // ecx
  __int64 ContiguousNodeMemory; // rax
  _SLIST_ENTRY *v10; // rbx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v8 = 4;
  if ( a5 == 1 )
  {
    if ( (MmVerifierData & 0x2000000) == 0 )
      v8 = 64;
  }
  else
  {
    v8 = 516;
    if ( a5 == 2 )
      v8 = 1028;
  }
  ContiguousNodeMemory = pXdvMmAllocateContiguousNodeMemory(Size, a2, a3, a4, v8, a6);
  v10 = (_SLIST_ENTRY *)ContiguousNodeMemory;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(ContiguousNodeMemory, Size);
  if ( v10 )
  {
    VfFillAllocatedMemory(v10, Size);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v10, Size);
  }
  return v10;
}
