/*
 * XREFs of PspThreadDelete @ 0x1404A37B8
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KeCleanupThreadState @ 0x140088E78 (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x140088F04 (KeFoldProcessStatisticsThread.c)
 *     PspLockProcessExclusive @ 0x140088FB8 (PspLockProcessExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KeInsertQueueDpc @ 0x1400D82A0 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     KeEnumerateKernelStackSegments @ 0x1400F0B58 (KeEnumerateKernelStackSegments.c)
 *     PspUnlockProcessExclusive @ 0x1400F22D8 (PspUnlockProcessExclusive.c)
 *     KeBugCheck @ 0x14015D4F0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspDeleteThreadSecurity @ 0x1404A3BEC (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1404A3C38 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x14050DF14 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r9d
  _QWORD *v15; // r8
  const char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 *v19; // rbp
  __int64 *v20; // r14
  _BYTE *v21; // rax
  _BYTE *v22; // r15
  __int64 *v23; // rcx
  __int64 **v24; // rax

  KeCleanupThreadState(BugCheckParameter1);
  if ( *(_DWORD *)(BugCheckParameter1 + 1888) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1888), 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1784) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1784), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1788) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1788), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1792) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1792), 2uLL, 0LL);
  if ( *(_QWORD *)(BugCheckParameter1 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter1,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 1592) )
  {
    --CurrentThread->KernelApcDisable;
    v3 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1592));
    if ( !v3 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1592), v3);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
  }
  PspDeleteThreadSecurity(BugCheckParameter1);
  v7 = *(void **)(BugCheckParameter1 + 1992);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_1403261D0 )
  {
    v9 = qword_1403261C0;
    if ( qword_1403261C0 )
    {
      if ( (_DWORD)qword_1403261D8 )
      {
        v10 = 0LL;
        v11 = &ObpObjectTypes;
        v12 = (unsigned int)qword_1403261D8;
        do
        {
          v13 = *v11;
          if ( ((*(unsigned __int8 *)(*v11 + 66) >> 6) & 1) != _bittest64(&qword_1403261E0, v10) && !qword_140326190 )
          {
            qword_140326190 = (unsigned int)__ROL4__(1207959560, 133);
            qword_140326198 = 0LL;
            qword_1403261A0 = 0LL;
            qword_1403261A8 = 268LL;
            qword_1403261B0 = v13;
          }
          ++v10;
          ++v11;
          --v12;
        }
        while ( v12 );
        v9 = qword_1403261C0;
      }
      v14 = 64;
      v15 = (_QWORD *)(qword_140326200 + 112);
      v16 = (const char *)(qword_140326200 + 112);
      if ( qword_140326200 + 112 < (unsigned __int64)(qword_140326200 + 176) )
      {
        do
        {
          _mm_prefetch(v16, 0);
          v16 += 64;
        }
        while ( (unsigned __int64)v16 < qword_140326200 + 176 );
      }
      v17 = 8LL;
      do
      {
        v14 -= 8;
        v9 = __ROR8__(v9 - *v15++, qword_1403261C8);
        --v17;
      }
      while ( v17 );
      for ( ; v14; --v14 )
      {
        v18 = *(unsigned __int8 *)v15;
        v15 = (_QWORD *)((char *)v15 + 1);
        v9 = __ROR8__(v9 - v18, qword_1403261C8);
      }
      if ( qword_140326208 != v9 )
      {
        if ( qword_140326190 )
          goto LABEL_31;
        qword_140326190 = (unsigned int)__ROR4__(150994945, 152);
        qword_140326198 = 0LL;
        qword_1403261A0 = 0LL;
        qword_1403261A8 = 268LL;
        qword_1403261B0 = qword_140326200;
      }
    }
    if ( !qword_140326190 )
    {
LABEL_34:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1403261D0 = result;
      goto LABEL_35;
    }
LABEL_31:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_140326150.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140326150, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140326150);
    qword_1403261B8 = 1912080LL;
    KeInsertQueueDpc(&stru_140326150, 0LL, 0LL);
    goto LABEL_34;
  }
LABEL_35:
  v19 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v19 )
  {
    v20 = (__int64 *)(BugCheckParameter1 + 1688);
    if ( *(_QWORD *)(BugCheckParameter1 + 1688) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread);
      v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v19 + 214), 0LL, 0);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v19 + 428, 0LL) )
        ExfAcquirePushLockExclusiveEx(v19 + 214, v21, (ULONG_PTR)(v19 + 214));
      if ( v22 )
        v22[26] |= 1u;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v23 = (__int64 *)*v20;
      v24 = *(__int64 ***)(BugCheckParameter1 + 1696);
      if ( *(__int64 **)(*v20 + 8) != v20 || *v24 != v20 )
        __fastfail(3u);
      *v24 = v23;
      v23[1] = (__int64)v24;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v19 + 214);
      KeAbPostRelease((ULONG_PTR)(v19 + 214));
      PspUnlockProcessExclusive((__int64)v19, (__int64)CurrentThread);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1936) )
      xmmword_1403013B0(BugCheckParameter1);
    return ObfDereferenceObjectWithTag(v19, 0x72437350u);
  }
  return result;
}
