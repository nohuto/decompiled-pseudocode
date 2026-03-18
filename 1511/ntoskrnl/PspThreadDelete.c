/*
 * XREFs of PspThreadDelete @ 0x1403F1F50
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     KeEnumerateKernelStackSegments @ 0x14002BF20 (KeEnumerateKernelStackSegments.c)
 *     KeCleanupThreadState @ 0x14002DBCC (KeCleanupThreadState.c)
 *     KeFoldProcessStatisticsThread @ 0x14002DC54 (KeFoldProcessStatisticsThread.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PspDeleteThreadSecurity @ 0x1403F2108 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1403F2154 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rbp
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r9d
  _QWORD *v17; // r8
  const char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  KeCleanupThreadState(BugCheckParameter1);
  if ( *(_DWORD *)(BugCheckParameter1 + 1880) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1880), 0LL);
  if ( *(_DWORD *)(BugCheckParameter1 + 1788) )
    KeBugCheckEx(0x13Cu, BugCheckParameter1, *(unsigned int *)(BugCheckParameter1 + 1788), 0LL, 0LL);
  if ( *(_QWORD *)(BugCheckParameter1 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter1,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 1584) )
  {
    --CurrentThread->KernelApcDisable;
    v3 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1584));
    if ( !v3 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 1584), v3);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter1);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_1402FE100 )
  {
    v11 = qword_1402FE0F0;
    if ( qword_1402FE0F0 )
    {
      if ( (_DWORD)qword_1402FE108 )
      {
        v12 = 0LL;
        v13 = &ObpObjectTypes;
        v14 = (unsigned int)qword_1402FE108;
        do
        {
          v15 = *v13;
          if ( ((*(unsigned __int8 *)(*v13 + 66) >> 6) & 1) != _bittest64(qword_1402FE110, v12) && !qword_1402FE0C0 )
          {
            qword_1402FE0C0 = (unsigned int)__ROL4__(-2147483516, 97);
            qword_1402FE0C8 = 0LL;
            qword_1402FE0D0 = 0LL;
            qword_1402FE0D8 = 268LL;
            qword_1402FE0E0 = v15;
          }
          ++v12;
          ++v13;
          --v14;
        }
        while ( v14 );
        v11 = qword_1402FE0F0;
      }
      v16 = 64;
      v17 = (_QWORD *)(qword_1402FE130 + 112);
      v18 = (const char *)(qword_1402FE130 + 112);
      if ( qword_1402FE130 + 112 < (unsigned __int64)(qword_1402FE130 + 176) )
      {
        do
        {
          _mm_prefetch(v18, 0);
          v18 += 64;
        }
        while ( (unsigned __int64)v18 < qword_1402FE130 + 176 );
      }
      v19 = 8LL;
      do
      {
        v16 -= 8;
        v11 = __ROR8__(v11 - *v17++, qword_1402FE0F8);
        --v19;
      }
      while ( v19 );
      for ( ; v16; --v16 )
      {
        v20 = *(unsigned __int8 *)v17;
        v17 = (_QWORD *)((char *)v17 + 1);
        v11 = __ROR8__(v11 - v20, qword_1402FE0F8);
      }
      if ( qword_1402FE138 != v11 )
      {
        if ( qword_1402FE0C0 )
          goto LABEL_45;
        qword_1402FE0C0 = (unsigned int)__ROR4__(277872640, 116);
        qword_1402FE0C8 = 0LL;
        qword_1402FE0D0 = 0LL;
        qword_1402FE0D8 = 268LL;
        qword_1402FE0E0 = qword_1402FE130;
      }
    }
    if ( !qword_1402FE0C0 )
    {
LABEL_48:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1402FE100 = result;
      goto LABEL_9;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_1402FE080.DeferredRoutine != sub_140218690 )
      KeInitializeDpc(&stru_1402FE080, (PKDEFERRED_ROUTINE)sub_140218690, &stru_1402FE080);
    qword_1402FE0E8 = 1829520LL;
    KeInsertQueueDpc(&stru_1402FE080, 0LL, 0LL);
    goto LABEL_48;
  }
LABEL_9:
  v5 = *(unsigned __int64 **)(BugCheckParameter1 + 544);
  if ( v5 )
  {
    v6 = (__int64 *)(BugCheckParameter1 + 1680);
    if ( *(_QWORD *)(BugCheckParameter1 + 1680) )
    {
      PspLockProcessExclusive(*(_QWORD *)(BugCheckParameter1 + 544), (__int64)CurrentThread);
      v7 = KeAbPreAcquire((ULONG_PTR)(v5 + 212), 0LL, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5 + 424, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5 + 212, v7, (ULONG_PTR)(v5 + 212));
      if ( v8 )
        *(_BYTE *)(v8 + 26) |= 1u;
      KeFoldProcessStatisticsThread(BugCheckParameter1);
      v9 = (__int64 *)*v6;
      v10 = *(__int64 ***)(BugCheckParameter1 + 1688);
      if ( *(__int64 **)(*v6 + 8) != v6 || *v10 != v6 )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = (__int64)v10;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 212, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5 + 212);
      KeAbPostRelease((ULONG_PTR)(v5 + 212));
      PspUnlockProcessExclusive((__int64)v5, (__int64)CurrentThread);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 1928) )
      qword_1402DC030(BugCheckParameter1);
    return ObfDereferenceObjectWithTag(v5, 0x72437350u);
  }
  return result;
}
