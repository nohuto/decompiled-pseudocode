/*
 * XREFs of ExpWorkerThreadBalanceManager @ 0x140566648
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeTimeOutQueueWaiters @ 0x1400A6788 (KeTimeOutQueueWaiters.c)
 *     ExpNewThreadNecessary @ 0x1400BED20 (ExpNewThreadNecessary.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x1401DAF28 (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1403E5BC4 (ExpCreateWorkerThread.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExpAllocatePoolForNode @ 0x1406B6078 (ExpAllocatePoolForNode.c)
 */

void __fastcall __noreturn ExpWorkerThreadBalanceManager(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  LARGE_INTEGER *Alertable; // r9
  char v4; // r14
  bool v5; // r12
  __int64 v6; // rsi
  char *v7; // rcx
  __int64 WaitMode; // rbx
  struct _KTIMER *v9; // r13
  char v10; // bp
  NTSTATUS v11; // eax
  __int64 v12; // r8
  struct _KDPC *v13; // r9
  int v14; // eax
  int v15; // ebx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  struct _KDPC **v18; // rdx
  __int64 v19; // r8
  struct _KDPC *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int WorkerThread; // eax
  unsigned __int64 v26; // r13
  _DWORD **v27; // rbx
  __int64 v28; // rdi
  _DWORD *v29; // rcx
  unsigned int v30; // r8d
  __int64 PoolForNode; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r10
  int v35; // eax
  USHORT Count; // [rsp+50h] [rbp-78h] BYREF
  struct _KTHREAD *v37; // [rsp+58h] [rbp-70h]
  __int64 v38; // [rsp+60h] [rbp-68h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-60h] BYREF
  PVOID Object[3]; // [rsp+78h] [rbp-50h] BYREF

  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 0xCu);
  Alertable = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = KeNodeBlock[a1];
  v7 = (char *)&KiNodeInit + 320 * a1;
  WaitMode = 1LL;
  if ( (char *)v6 == v7 )
    v6 = 0LL;
  v9 = (struct _KTIMER *)(v6 + 1848);
  v38 = 10000000LL * ExpWorkerThreadTimeoutInSeconds;
  Object[1] = (PVOID)(v6 + 1824);
  Object[2] = (PVOID)(v6 + 1912);
  Object[0] = (PVOID)(v6 + 1848);
  while ( 1 )
  {
    v10 = (char)Alertable;
    v11 = KeWaitForMultipleObjects(
            3u,
            Object,
            (WAIT_TYPE)WaitMode,
            Executive,
            WaitMode,
            (BOOLEAN)Alertable,
            Alertable,
            (PKWAIT_BLOCK)(v6 + 1936));
    v13 = 0LL;
    if ( v11 )
    {
      v14 = v11 - 1;
      if ( !v14 )
      {
        v15 = 0;
        v16 = (__int64 *)(v6 + 320);
        do
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( (v17 & 1) == 0
              || (PoolForNode = ExpAllocatePoolForNode(v6, (unsigned int)v15, v12, v13),
                  v13 = 0LL,
                  (v17 = PoolForNode) != 0) )
            {
              if ( ExpNewThreadNecessary(v17, *(_DWORD *)(v17 + 712)) )
              {
                WorkerThread = ExpCreateWorkerThread(v6, v24);
                v13 = 0LL;
                if ( WorkerThread < 0 )
                  v10 = 1;
              }
            }
            else
            {
              v10 = 1;
            }
          }
          ++v15;
          ++v16;
        }
        while ( v15 < 8 );
LABEL_9:
        CurrentThread = v37;
        WaitMode = 1LL;
        goto LABEL_10;
      }
      if ( v14 == 1 )
      {
        v26 = v38;
        v27 = (_DWORD **)(v6 + 320);
        v28 = 8LL;
        do
        {
          v29 = *v27;
          if ( ((unsigned __int8)*v27 & 1) == 0 )
          {
            if ( v29 )
            {
              if ( (v29[176] & 0x4000) == 0 && !v29[1] )
              {
                v30 = (v29[176] & 0x3FFF) - ((2 * v29[177]) >> 1);
                if ( v30 )
                {
                  KeTimeOutQueueWaiters((__int64)v29, v26, v30);
                  v13 = 0LL;
                }
              }
            }
          }
          ++v27;
          --v28;
        }
        while ( v28 );
        v9 = (struct _KTIMER *)(v6 + 1848);
        goto LABEL_9;
      }
    }
    else
    {
      v4 = 0;
      v32 = 0LL;
      do
      {
        v33 = *(_QWORD *)(v6 + 8 * v32 + 320);
        v34 = 1LL;
        if ( (v33 & 1) != 0 )
          v33 = (__int64)v13;
        if ( *(_DWORD *)(v33 + 696) == *(_DWORD *)(v33 + 700) && ExpNewThreadNecessary(v33, 0x3FFF) )
        {
          if ( (ExpWorkerQueueTestFlags & 2) != 0 )
            KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v13);
          if ( v32 == v34 && !v5 )
            v5 = (unsigned int)DbgkWerCaptureLiveKernelDump(
                                 L"IoThreadpool",
                                 (__int64)v13,
                                 (__int64)v13,
                                 (__int64)v13,
                                 (__int64)v13,
                                 0) != -1073741267;
          v35 = ExpCreateWorkerThread(v6, v33);
          v13 = 0LL;
          WaitMode = 1LL;
          if ( v35 < 0 )
            v10 = 1;
        }
        else
        {
          WaitMode = v34;
        }
        v32 += WaitMode;
      }
      while ( v32 <= WaitMode );
    }
LABEL_10:
    if ( !v4 )
    {
      v18 = (struct _KDPC **)(v6 + 320);
      v19 = 2LL;
      do
      {
        v20 = *v18;
        if ( ((unsigned __int8)*v18 & (unsigned __int8)WaitMode) != 0 )
          v20 = v13;
        HIDWORD(v20[10].DpcData) = v20[10].DpcData;
        if ( (signed int)(v20[11].TargetInfoAsUlong & 0x3FFF) >= SLODWORD(v20[11].DpcListEntry.Next) || v10 )
          v4 = WaitMode;
        ++v18;
        v19 -= WaitMode;
      }
      while ( v19 );
      if ( v4 )
        KeSetCoalescableTimer(v9, (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v13);
    }
    KeQueryNodeActiveAffinity(*(_WORD *)(v6 + 146), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity);
    v21 = (__int64 *)(v6 + 320);
    v22 = 8LL;
    Alertable = 0LL;
    do
    {
      v23 = *v21;
      if ( ((unsigned __int8)*v21 & (unsigned __int8)WaitMode) == 0 && v23 && *(_DWORD *)(v23 + 664) != Count )
        KeSetMaximumCountPriQueue(v23, Count);
      ++v21;
      v22 -= WaitMode;
    }
    while ( v22 );
  }
}
