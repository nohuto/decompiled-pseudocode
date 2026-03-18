/*
 * XREFs of CiThreadCreate @ 0x1C000A890
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000A650 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiTryIncrementTotalThreadCount @ 0x1C0001560 (CiTryIncrementTotalThreadCount.c)
 *     CiThreadInsertInTree @ 0x1C0001580 (CiThreadInsertInTree.c)
 *     CiSchedulerPoke @ 0x1C0001700 (CiSchedulerPoke.c)
 *     CiSchedulerAddThread @ 0x1C0001740 (CiSchedulerAddThread.c)
 *     CiDecrementTotalThreadCount @ 0x1C0001BD0 (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0001BE0 (CiTaskIndexDereference.c)
 *     memset @ 0x1C00030C0 (memset.c)
 *     CiLogThreadJoin @ 0x1C0003F90 (CiLogThreadJoin.c)
 *     WPP_SF_ @ 0x1C0004214 (WPP_SF_.c)
 *     WPP_SF_dI @ 0x1C00045FC (WPP_SF_dI.c)
 *     CiProcessCreate @ 0x1C000A170 (CiProcessCreate.c)
 *     CiProcessLocate @ 0x1C000AB10 (CiProcessLocate.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ABD0 (CiThreadIncrementScheduledCount.c)
 *     CiThreadUpdatePriorities @ 0x1C000AC30 (CiThreadUpdatePriorities.c)
 *     CiThreadDereference @ 0x1C000B230 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B2C0 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000B420 (CiProcessDereference.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiThreadCreate(struct _KTHREAD *Object, volatile signed __int64 *P, __int64 *a3)
{
  __int64 v3; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rsi
  int v9; // ebx
  PVOID PoolWithQuotaTag; // rax
  __int64 v11; // rbx
  NTSTATUS InformationThread; // r15d
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _BYTE ThreadInformation[32]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+58h] [rbp-40h]
  int v25; // [rsp+5Ch] [rbp-3Ch]
  __int64 v26; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)P + 17);
  ThreadProcess = PsGetThreadProcess(Object);
  v27 = CiProcessLocate(ThreadProcess);
  v8 = v27;
  if ( !v27 )
  {
    v9 = CiProcessCreate(&v27);
    if ( v9 < 0 )
    {
LABEL_26:
      CiTaskIndexDereference(P);
      return (unsigned int)v9;
    }
    v8 = v27;
  }
  v9 = CiTryIncrementTotalThreadCount(&CiTotalThreads, 256);
  if ( v9 < 0 )
  {
LABEL_25:
    CiProcessDereference((PVOID)v8);
    goto LABEL_26;
  }
  v9 = CiTryIncrementTotalThreadCount((volatile signed __int32 *)(v8 + 92), CiMaxThreadsPerProcess);
  if ( v9 < 0 )
  {
    v19 = &CiTotalThreads;
LABEL_24:
    CiDecrementTotalThreadCount(v19);
    goto LABEL_25;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x98uLL, 0x4873634Du);
  v11 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v9 = -1073741801;
    CiDecrementTotalThreadCount(&CiTotalThreads);
    v19 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_24;
  }
  memset(PoolWithQuotaTag, 0, 0x98uLL);
  *(_QWORD *)(v11 + 32) = 1LL;
  *(_DWORD *)v11 = 0;
  *(_QWORD *)(v11 + 72) = P;
  *(_QWORD *)(v11 + 64) = *((_QWORD *)P + 17);
  *(_QWORD *)(v11 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_22;
  *(_DWORD *)(v11 + 108) = v24;
  *(_DWORD *)(v11 + 144) = v25;
  *(_QWORD *)(v11 + 136) = v23;
  v13 = *(_BYTE *)(v3 + 1);
  if ( !v13 )
    v13 = 1;
  *(_BYTE *)(v11 + 106) = v13;
  *(_BYTE *)(v11 + 105) = 8;
  *(_BYTE *)(v11 + 104) = *(_BYTE *)v3;
  v26 = *(_QWORD *)(v3 + 32);
  if ( v26 != v23 )
  {
    v26 = *(_QWORD *)(v3 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v26, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_dI((__int64)WPP_GLOBAL_Control->AttachedDevice, v20, v21, InformationThread, v26);
      if ( InformationThread != -1073741811 || (~qword_1C00071F0 & v26) != 0 )
        goto LABEL_22;
    }
  }
  *(_QWORD *)(v11 + 96) = Object;
  if ( !CiThreadInsertInTree(v11) )
  {
    *(_QWORD *)(v11 + 96) = 0LL;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xCu,
        (__int64)&WPP_891be88a029732f2742d53d2e7317bcb_Traceguids);
    InformationThread = -1073740542;
LABEL_22:
    CiThreadCleanup(v11);
    CiThreadDereference(v11);
    return (unsigned int)InformationThread;
  }
  CiThreadUpdatePriorities(v11, v3, 0LL);
  if ( byte_1C0007290 )
    CiLogThreadJoin(v14);
  ObfReferenceObject(Object);
  CiSystemAcquirePushLock(v8 + 16);
  v15 = *(_QWORD *)(v11 + 128);
  v16 = (_QWORD *)(v11 + 112);
  v17 = *(_QWORD **)(v15 + 72);
  if ( *v17 != v15 + 64 )
    __fastfail(3u);
  *v16 = v15 + 64;
  *(_QWORD *)(v11 + 120) = v17;
  *v17 = v16;
  *(_QWORD *)(v15 + 72) = v16;
  *(_BYTE *)(v11 + 148) ^= (*(_BYTE *)(v11 + 148) ^ *(_BYTE *)(v15 + 88)) & 1;
  if ( (*(_BYTE *)(v3 + 3) & 1) != 0 )
    CiSchedulerAddThread((__int64)P, v11);
  if ( (*(_BYTE *)(v11 + 148) & 1) == 0 )
    CiThreadIncrementScheduledCount(v11);
  *(_QWORD *)(v8 + 24) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  *a3 = v11;
  CiSchedulerPoke(1u);
  return 0LL;
}
