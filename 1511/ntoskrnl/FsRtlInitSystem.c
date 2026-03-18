/*
 * XREFs of FsRtlInitSystem @ 0x14076C038
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     FsFilterInit @ 0x14013FAE8 (FsFilterInit.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1404D17DC (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x140542F60 (FsRtlInitializeTieringHeat.c)
 *     FsRtlInitializeSmssEvent @ 0x14076C1BC (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeWorkerThread @ 0x14076C294 (FsRtlInitializeWorkerThread.c)
 *     FsRtlGetCompatibilityModeValue @ 0x14076C364 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeFileLocks @ 0x14076C470 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x14076C5E4 (FsRtlInitializeTunnels.c)
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
