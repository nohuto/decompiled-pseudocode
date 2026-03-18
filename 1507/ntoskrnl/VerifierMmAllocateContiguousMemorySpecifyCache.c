/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407530F4
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140114D80 (MmAllocateContiguousNodeMemory.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x140746120 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCache(
        size_t Size,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        int a5)
{
  unsigned int v7; // ecx
  __int64 ContiguousNodeMemory; // rax
  _SLIST_ENTRY *v9; // rbx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v7 = 4;
  if ( a5 == 1 )
  {
    if ( (MmVerifierData & 0x2000000) == 0 )
      v7 = 64;
  }
  else
  {
    v7 = 516;
    if ( a5 == 2 )
      v7 = 1028;
  }
  ContiguousNodeMemory = pXdvMmAllocateContiguousNodeMemory(Size, a2, a3, a4, v7, 0x80000000);
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
