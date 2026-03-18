/*
 * XREFs of FsRtlInitSystem @ 0x1407E124C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     FsFilterInit @ 0x14016D484 (FsFilterInit.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x1405B9438 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeSmssEvent @ 0x1407E13D0 (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeWorkerThread @ 0x1407E14A8 (FsRtlInitializeWorkerThread.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1407E1578 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeFileLocks @ 0x1407E1684 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1407E17F8 (FsRtlInitializeTunnels.c)
 */

char FsRtlInitSystem()
{
  char *PoolWithTag; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+60h] [rbp+8h]

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x680uLL, 0x74725346u);
  FsRtlPagingIoResources = (__int64)PoolWithTag;
  v1 = 0LL;
  v2 = 16LL;
  while ( 1 )
  {
    ExInitializeResourceLite((PERESOURCE)&PoolWithTag[v1]);
    v1 += 104LL;
    if ( !--v2 )
      break;
    PoolWithTag = (char *)FsRtlPagingIoResources;
  }
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&FsRtlFirstMappingLookasideList,
    0LL,
    0LL,
    0,
    0x78uLL,
    0x6D695346u,
    4u);
  ExInitializeNPagedLookasideList(&FsRtlFastMutexLookasideList, 0LL, 0LL, 0x200u, 0x38uLL, 0x6D665346u, 0x20u);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  if ( (int)FsRtlGetCompatibilityModeValue(&ValueName) >= 0 && v5 )
    FsRtlSafeExtensions = 0;
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  return 1;
}
