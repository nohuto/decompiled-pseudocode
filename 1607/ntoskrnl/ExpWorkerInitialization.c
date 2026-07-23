/*
 * XREFs of ExpWorkerInitialization @ 0x1407B4A64
 * Callers:
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeSelectIdealProcessor @ 0x14007D230 (KeSelectIdealProcessor.c)
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     ExQueueDebuggerWorker @ 0x140083F98 (ExQueueDebuggerWorker.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializePriQueue @ 0x1401481A4 (KeInitializePriQueue.c)
 *     ExpLegacyWorkerInitialization @ 0x140148214 (ExpLegacyWorkerInitialization.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpCreateSystemThreadForNode @ 0x1403E5C70 (ExpCreateSystemThreadForNode.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  int SystemThreadForNode; // r12d
  int v2; // eax
  unsigned __int16 v3; // r15
  __int64 v4; // r14
  USHORT v5; // cx
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rdi
  _BYTE *v14; // rax
  _BYTE *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rsi
  int v18; // ebx
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
  __int64 v29; // rax
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
  for ( ExpInstanceAllocationMask = -4; v3 < (unsigned __int16)KeNumberNodes; ++v3 )
  {
    v4 = KeNodeBlock[v3];
    if ( (_UNKNOWN *)v4 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * v3) )
      v4 = 0LL;
    v5 = *(_WORD *)(v4 + 146);
    *(_DWORD *)(v4 + 2092) = 0;
    KeQueryNodeActiveAffinity(v5, &Affinity, &Count);
    memset((void *)(v4 + 384), 0, 0x2D0uLL);
    *(_DWORD *)(v4 + 1092) &= 0x80000000;
    v6 = Count;
    *(_QWORD *)(v4 + 1072) = v4;
    *(_DWORD *)(v4 + 1096) = ExpMaximumKernelWorkerThreads;
    *(_DWORD *)(v4 + 1100) = 0;
    KeInitializePriQueue(v4 + 384, v6);
    memset((void *)(v4 + 1104), 0, 0x2D0uLL);
    *(_DWORD *)(v4 + 1812) &= 0x80000000;
    *(_QWORD *)(v4 + 1792) = v4;
    *(_DWORD *)(v4 + 1816) = ExpMaximumKernelWorkerThreads;
    *(_DWORD *)(v4 + 1820) = 1;
    KeInitializePriQueue(v4 + 1104, v6);
    *(_QWORD *)(v4 + 320) = v4 + 384;
    v7 = (_QWORD *)(v4 + 336);
    *(_QWORD *)(v4 + 328) = v4 + 1104;
    v8 = 6LL;
    do
    {
      *v7++ = 0LL;
      --v8;
    }
    while ( v8 );
    *(_WORD *)(v4 + 1824) = 1;
    *(_BYTE *)(v4 + 1826) = 6;
    *(_DWORD *)(v4 + 1828) = 1;
    *(_QWORD *)(v4 + 1840) = v4 + 1832;
    *(_QWORD *)(v4 + 1832) = v4 + 1832;
    *(_QWORD *)(v4 + 1848) = 0LL;
    *(_BYTE *)(v4 + 1848) = 9;
    *(_QWORD *)(v4 + 1864) = v4 + 1856;
    *(_QWORD *)(v4 + 1856) = v4 + 1856;
    *(_QWORD *)(v4 + 1872) = 0LL;
    *(_QWORD *)(v4 + 1904) = 0LL;
    *(_WORD *)(v4 + 1912) = 1;
    *(_BYTE *)(v4 + 1914) = 6;
    *(_DWORD *)(v4 + 1916) = 0;
    *(_QWORD *)(v4 + 1928) = v4 + 1920;
    *(_QWORD *)(v4 + 1920) = v4 + 1920;
    *(_DWORD *)(v4 + 2092) |= 2u;
    if ( Affinity.Mask )
    {
      *(_DWORD *)(v4 + 2088) = KeSelectIdealProcessor(v4, (__int64)&Affinity, 0LL);
      SystemThreadForNode = ExpCreateSystemThreadForNode((int)&Handle, v4, (__int64)ExpWorkerThreadBalanceManager, v3);
      if ( SystemThreadForNode < 0 )
        break;
      ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
      v9 = Handle;
      *(_QWORD *)(v4 + 2080) = Object;
      ZwClose(v9);
      *(_DWORD *)(v4 + 2092) |= 1u;
    }
  }
  KeInitializeTimer2((__int64)&ExpThreadReaperTimer, (__int64)ExpSetThreadReaperEvents, 0LL, 8);
  v31[0] = 0LL;
  v31[1] = -1LL;
  KeSetTimer2(
    (__int64)&ExpThreadReaperTimer,
    -((10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v31);
  ExpLegacyWorkerInitialization();
  if ( !qword_140326200 )
  {
    v10 = __rdtsc();
    v11 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) >> 4)) ^ 0xBC6LL;
    if ( !v11 )
      v11 = 1LL;
    qword_140326200 = v11;
    qword_140326208 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5E3LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
    v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (ULONG_PTR)v13);
    if ( v15 )
      v15[26] |= 1u;
    v16 = 0;
    v17 = *((unsigned int *)ObpTypeObjectType + 11);
    v18 = 64;
    qword_140326218 = v17;
    v19 = (unsigned int)v17;
    if ( (_DWORD)v17 )
    {
      v20 = ObpObjectTypes;
      while ( *v20 )
      {
        if ( (*(_BYTE *)(*v20 + 66) & 0x40) != 0 )
          _bittestandset64(&qword_140326220, v16);
        ++v16;
        ++v20;
        if ( v16 >= (unsigned int)v17 )
          goto LABEL_33;
      }
      v19 = v16;
      LODWORD(v17) = v16;
      qword_140326218 = v16;
    }
LABEL_33:
    v21 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
    _m_prefetchw((char *)ObpTypeObjectType + 184);
    v22 = *v21;
    if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v23 = 0LL;
    else
      v23 = v22 - 16;
    if ( (v22 & 2) != 0 || (v24 = *v21, v24 != _InterlockedCompareExchange64(v21, v23, v22)) )
      ExfReleasePushLock(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( (_DWORD)v17 )
    {
      qword_140326240 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v19];
      v25 = (_QWORD *)(qword_140326240 + 112);
      v26 = (const char *)(qword_140326240 + 112);
      if ( qword_140326240 + 112 < (unsigned __int64)(qword_140326240 + 176) )
      {
        do
        {
          _mm_prefetch(v26, 0);
          v26 += 64;
        }
        while ( (unsigned __int64)v26 < qword_140326240 + 176 );
      }
      v27 = qword_140326200;
      v28 = 8LL;
      do
      {
        v27 = __ROR8__(v27 - *v25++, qword_140326208);
        v18 -= 8;
        --v28;
      }
      while ( v28 );
      for ( ; v18; --v18 )
      {
        v29 = *(unsigned __int8 *)v25;
        v25 = (_QWORD *)((char *)v25 + 1);
        v27 = __ROR8__(v27 - v29, qword_140326208);
      }
      qword_140326248 = v27;
      qword_140326210 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
    }
    else
    {
      qword_140326200 = 0LL;
    }
  }
  LODWORD(ExpDebuggerDpc) = 275;
  qword_1402FB438 = (__int64)ExpDebuggerDpcRoutine;
  qword_1402FB410 = (__int64)ExpDebuggerWorker;
  qword_1402FB440 = 0LL;
  qword_1402FB458 = 0LL;
  qword_1402FB430 = 0LL;
  qword_1402FB418 = 0LL;
  ExpDebuggerWorkItem = 0LL;
  ExpDebuggerWork = 1;
  ExQueueDebuggerWorker();
  return (unsigned int)SystemThreadForNode;
}
