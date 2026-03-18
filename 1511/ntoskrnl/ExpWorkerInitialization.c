/*
 * XREFs of ExpWorkerInitialization @ 0x14076B754
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 *     KeSelectIdealProcessor @ 0x1400937E0 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     KeInitializePriQueue @ 0x14013F23C (KeInitializePriQueue.c)
 *     ExQueueDebuggerWorker @ 0x14013F2AC (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x14013F2E0 (ExpLegacyWorkerInitialization.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x1404D1234 (ExpCreateSystemThreadForNode.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  int SystemThreadForNode; // r15d
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v4; // rdi
  USHORT v5; // cx
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ecx
  int v17; // ebx
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  __int64 *v20; // rdx
  signed __int64 *v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  _QWORD *v25; // r8
  const char *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-10h] BYREF
  USHORT Count; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  SystemThreadForNode = 0;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v2 = ExpWorkerThreadTimeoutInSeconds;
  if ( ExpWorkerThreadTimeoutInSeconds > 3600 )
  {
    v2 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v2 < 60 )
    ExpWorkerThreadTimeoutInSeconds = 60;
  v3 = 0;
  for ( ExpInstanceAllocationMask = -2; v3 < (unsigned __int16)KeNumberNodes; ++v3 )
  {
    v4 = KeNodeBlock[v3];
    if ( (_UNKNOWN *)v4 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)v3) )
      v4 = 0LL;
    v5 = *(_WORD *)(v4 + 146);
    *(_DWORD *)(v4 + 1308) = 0;
    KeQueryNodeActiveAffinity(v5, &Affinity, &Count);
    memset((void *)(v4 + 320), 0, 0x2D0uLL);
    *(_DWORD *)(v4 + 1028) &= 0x80000000;
    v6 = Count;
    *(_QWORD *)(v4 + 1008) = v4;
    *(_DWORD *)(v4 + 1032) = ExpMaximumKernelWorkerThreads;
    *(_DWORD *)(v4 + 1036) = 0;
    KeInitializePriQueue(v4 + 320, v6);
    v7 = (_QWORD *)(v4 + 264);
    *(_QWORD *)(v4 + 256) = v4 + 320;
    v8 = 7LL;
    do
    {
      *v7++ = 0LL;
      --v8;
    }
    while ( v8 );
    *(_WORD *)(v4 + 1040) = 1;
    *(_BYTE *)(v4 + 1042) = 6;
    *(_DWORD *)(v4 + 1044) = 1;
    *(_QWORD *)(v4 + 1056) = v4 + 1048;
    *(_QWORD *)(v4 + 1048) = v4 + 1048;
    *(_QWORD *)(v4 + 1064) = 0LL;
    *(_BYTE *)(v4 + 1064) = 9;
    *(_QWORD *)(v4 + 1080) = v4 + 1072;
    *(_QWORD *)(v4 + 1072) = v4 + 1072;
    *(_QWORD *)(v4 + 1088) = 0LL;
    *(_QWORD *)(v4 + 1120) = 0LL;
    *(_WORD *)(v4 + 1128) = 1;
    *(_BYTE *)(v4 + 1130) = 6;
    *(_DWORD *)(v4 + 1132) = 0;
    *(_QWORD *)(v4 + 1144) = v4 + 1136;
    *(_QWORD *)(v4 + 1136) = v4 + 1136;
    *(_DWORD *)(v4 + 1308) |= 2u;
    if ( Affinity.Mask )
    {
      *(_DWORD *)(v4 + 1304) = KeSelectIdealProcessor(v4, (__int64)&Affinity, 0LL);
      SystemThreadForNode = ExpCreateSystemThreadForNode((int)&Handle, v4, (__int64)ExpWorkerThreadBalanceManager, v3);
      if ( SystemThreadForNode < 0 )
        break;
      ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
      v9 = Handle;
      *(_QWORD *)(v4 + 1296) = Object;
      ZwClose(v9);
      *(_DWORD *)(v4 + 1308) |= 1u;
    }
  }
  KeInitializeTimer2((__int64)ExpThreadReaperTimer, (__int64)ExpSetThreadReaperEvents, 0LL, 8);
  v31[0] = 0LL;
  v31[1] = -1LL;
  KeSetTimer2(
    ExpThreadReaperTimer,
    -((10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v31);
  ExpLegacyWorkerInitialization();
  if ( !qword_1402FE0F0 )
  {
    v10 = __rdtsc();
    v11 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) >> 4)) ^ 0xB8ALL;
    if ( !v11 )
      v11 = 1LL;
    qword_1402FE0F0 = v11;
    qword_1402FE0F8 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5C5LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
    v14 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (ULONG_PTR)v13);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = 0;
    v17 = 64;
    v18 = *((unsigned int *)ObpTypeObjectType + 11);
    qword_1402FE108 = v18;
    v19 = (unsigned int)v18;
    if ( (_DWORD)v18 )
    {
      v20 = ObpObjectTypes;
      while ( *v20 )
      {
        if ( (*(_BYTE *)(*v20 + 66) & 0x40) != 0 )
          _bittestandset64(qword_1402FE110, v16);
        ++v16;
        ++v20;
        if ( v16 >= (unsigned int)v18 )
          goto LABEL_31;
      }
      v19 = v16;
      LODWORD(v18) = v16;
      qword_1402FE108 = v16;
    }
LABEL_31:
    v21 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
    _m_prefetchw((char *)ObpTypeObjectType + 184);
    v22 = *v21;
    v23 = *v21 - 16;
    if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v23 = 0LL;
    if ( (v22 & 2) != 0 || (v24 = *v21, v24 != _InterlockedCompareExchange64(v21, v23, v22)) )
      ExfReleasePushLock(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( (_DWORD)v18 )
    {
      qword_1402FE130 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v19];
      v25 = (_QWORD *)(qword_1402FE130 + 112);
      v26 = (const char *)(qword_1402FE130 + 112);
      if ( qword_1402FE130 + 112 < (unsigned __int64)(qword_1402FE130 + 176) )
      {
        do
        {
          _mm_prefetch(v26, 0);
          v26 += 64;
        }
        while ( (unsigned __int64)v26 < qword_1402FE130 + 176 );
      }
      v27 = qword_1402FE0F0;
      v28 = 8LL;
      do
      {
        v27 = __ROR8__(v27 - *v25++, qword_1402FE0F8);
        v17 -= 8;
        --v28;
      }
      while ( v28 );
      for ( ; v17; --v17 )
      {
        v30 = *(unsigned __int8 *)v25;
        v25 = (_QWORD *)((char *)v25 + 1);
        v27 = __ROR8__(v27 - v30, qword_1402FE0F8);
      }
      qword_1402FE138 = v27;
      qword_1402FE100 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
    }
    else
    {
      qword_1402FE0F0 = 0LL;
    }
  }
  LODWORD(ExpDebuggerDpc) = 275;
  qword_1402D5FD8 = (__int64)ExpDebuggerDpcRoutine;
  qword_1402D6030 = (__int64)ExpDebuggerWorker;
  qword_1402D5FE0 = 0LL;
  qword_1402D5FF8 = 0LL;
  qword_1402D5FD0 = 0LL;
  qword_1402D6038 = 0LL;
  ExpDebuggerWorkItem = 0LL;
  ExpDebuggerWork = 1;
  ExQueueDebuggerWorker();
  return (unsigned int)SystemThreadForNode;
}
