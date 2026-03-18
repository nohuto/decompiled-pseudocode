/*
 * XREFs of ExInitializeProcessor @ 0x140134140
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExpHotAddProcessorToWorkers @ 0x140214C74 (ExpHotAddProcessorToWorkers.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
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
