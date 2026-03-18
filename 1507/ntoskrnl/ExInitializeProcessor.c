/*
 * XREFs of ExInitializeProcessor @ 0x14015F3F0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExpHotAddProcessorToWorkers @ 0x140264F14 (ExpHotAddProcessorToWorkers.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403F7CAC (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  PVOID PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x43497845u);
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList((_DWORD)PoolWithTag, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2048) = PoolWithTag;
  }
  if ( a2 )
  {
    ExpHotAddProcessorToWorkers(a1);
    *(_QWORD *)(a1 + 26792) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}
