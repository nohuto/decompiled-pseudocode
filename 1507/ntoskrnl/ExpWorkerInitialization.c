/*
 * XREFs of ExpWorkerInitialization @ 0x1407E01DC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KeInitializePriQueue @ 0x14016CF90 (KeInitializePriQueue.c)
 *     ExQueueDebuggerWorker @ 0x14016CFF0 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x14016D024 (ExpLegacyWorkerInitialization.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExpCreateSystemThreadForNode @ 0x1404FA334 (ExpCreateSystemThreadForNode.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  NTSTATUS v1; // r15d
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v4; // rdi
  USHORT v5; // cx
  int v6; // edx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  HANDLE v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned int v19; // ecx
  int v20; // ebx
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  signed __int64 *v23; // rdi
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  _QWORD *v29; // r8
  const char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v34; // rax
  _QWORD v35[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-10h] BYREF
  USHORT Count; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF

  byte_1403250BA = 6;
  qword_1403250A8 = 0LL;
  qword_1403250C8 = (__int64)&qword_1403250C0;
  qword_1403250C0 = (__int64)&qword_1403250C0;
  v0 = ExpMaximumKernelWorkerThreads;
  v1 = 0;
  LODWORD(ExpWorkerSwapinMutex) = 1;
  dword_1403250B0 = 0;
  word_1403250B8 = 1;
  dword_1403250BC = 0;
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
      v1 = ExpCreateSystemThreadForNode(&Handle, v4, (__int64)ExpWorkerThreadBalanceManager, v3);
      if ( v1 < 0 )
        break;
      ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
      v9 = Handle;
      *(_QWORD *)(v4 + 1296) = Object;
      ZwClose(v9);
      *(_DWORD *)(v4 + 1308) |= 1u;
    }
  }
  KeInitializeTimer2((__int64)&ExpThreadReaperTimer, (__int64)ExpSetThreadReaperEvents, 0LL, 8);
  v35[0] = 0LL;
  v35[1] = -1LL;
  KeSetTimer2(
    (__int64)&ExpThreadReaperTimer,
    -((10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v35);
  ExpLegacyWorkerInitialization();
  if ( !qword_14034E590 )
  {
    v11 = __rdtsc();
    v12 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) >> 4)) ^ 0xB8ALL;
    if ( !v12 )
      v12 = 1LL;
    qword_14034E590 = v12;
    qword_14034E598 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5C5LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v14 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
    v15 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0LL, v10);
    v18 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (ULONG_PTR)v14, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v19 = 0;
    v20 = 64;
    v21 = *((unsigned int *)ObpTypeObjectType + 11);
    qword_14034E5A8 = v21;
    v22 = (unsigned int)v21;
    if ( (_DWORD)v21 )
    {
      v16 = ObpObjectTypes;
      while ( *v16 )
      {
        if ( (*(_BYTE *)(*v16 + 66) & 0x40) != 0 )
          _bittestandset64(qword_14034E5B0, v19);
        ++v19;
        ++v16;
        if ( v19 >= (unsigned int)v21 )
          goto LABEL_31;
      }
      v22 = v19;
      LODWORD(v21) = v19;
      qword_14034E5A8 = v19;
    }
LABEL_31:
    v23 = (signed __int64 *)((char *)ObpTypeObjectType + 184);
    _m_prefetchw((char *)ObpTypeObjectType + 184);
    v24 = *v23;
    v25 = *v23 - 16;
    if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v25 = 0LL;
    if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
      ExfReleasePushLock(v23, (__int64)v16);
    KeAbPostRelease((ULONG_PTR)v23);
    v27 = KeGetCurrentThread();
    v28 = v27->SpecialApcDisable + 1;
    v27->SpecialApcDisable = v28;
    if ( !v28 && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    if ( (_DWORD)v21 )
    {
      qword_14034E5D0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v22];
      v29 = (_QWORD *)(qword_14034E5D0 + 112);
      v30 = (const char *)(qword_14034E5D0 + 112);
      if ( qword_14034E5D0 + 112 < (unsigned __int64)(qword_14034E5D0 + 176) )
      {
        do
        {
          _mm_prefetch(v30, 0);
          v30 += 64;
        }
        while ( (unsigned __int64)v30 < qword_14034E5D0 + 176 );
      }
      v31 = qword_14034E590;
      v32 = 8LL;
      do
      {
        v31 = __ROR8__(v31 - *v29++, qword_14034E598);
        v20 -= 8;
        --v32;
      }
      while ( v32 );
      for ( ; v20; --v20 )
      {
        v34 = *(unsigned __int8 *)v29;
        v29 = (_QWORD *)((char *)v29 + 1);
        v31 = __ROR8__(v31 - v34, qword_14034E598);
      }
      qword_14034E5D8 = v31;
      qword_14034E5A0 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
    }
    else
    {
      qword_14034E590 = 0LL;
    }
  }
  ExpDebuggerDpc = 275;
  qword_1403251D8 = (__int64)ExpDebuggerDpcRoutine;
  qword_140325110 = (__int64)ExpDebuggerWorker;
  qword_1403251E0 = 0LL;
  qword_1403251F8 = 0LL;
  qword_1403251D0 = 0LL;
  qword_140325118 = 0LL;
  ExpDebuggerWorkItem = 0LL;
  ExpDebuggerWork = 1;
  ExQueueDebuggerWorker();
  return (unsigned int)v1;
}
