/*
 * XREFs of ExpWorkerThreadBalanceManager @ 0x140536444
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     ExpNewThreadNecessary @ 0x1401007CC (ExpNewThreadNecessary.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x1401CB618 (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1404D070C (ExpCreateWorkerThread.c)
 *     ExpAllocatePoolForNode @ 0x14067323C (ExpAllocatePoolForNode.c)
 */

void __fastcall __noreturn ExpWorkerThreadBalanceManager(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rax
  int v6; // ebx
  char v7; // r12
  __int64 v8; // rbp
  struct _KTIMER *v9; // r13
  __int64 *v10; // r14
  char v11; // si
  NTSTATUS v12; // eax
  int v13; // eax
  unsigned __int64 v14; // r13
  __int64 v15; // rdi
  __int64 *v16; // rbx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rdi
  __int64 PoolForNode; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  USHORT Count; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12LL, a3);
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = KeNodeBlock[v5];
  if ( (_UNKNOWN *)v8 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * v5) )
    v8 = 0LL;
  v9 = (struct _KTIMER *)(v8 + 1064);
  v29 = 10000000LL * ExpWorkerThreadTimeoutInSeconds;
  v10 = (__int64 *)(v8 + 256);
  Object[0] = (PVOID)(v8 + 1064);
  Object[1] = (PVOID)(v8 + 1040);
  Object[2] = (PVOID)(v8 + 1128);
  while ( 1 )
  {
    v11 = 0;
    v12 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, (PKWAIT_BLOCK)(v8 + 1152));
    if ( v12 )
      break;
    v26 = *v10;
    v7 = 0;
    if ( (*v10 & 1) != 0 )
      v26 = 0LL;
    if ( *(_DWORD *)(v26 + 696) == *(_DWORD *)(v26 + 700) && ExpNewThreadNecessary(v26, 0x3FFF) )
    {
      if ( (ExpWorkerQueueTestFlags & 2) != 0 )
        KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, 0LL);
      if ( (int)ExpCreateWorkerThread(v8, v27) < 0 )
      {
        v11 = 1;
        goto LABEL_13;
      }
    }
LABEL_14:
    v18 = (_DWORD *)*v10;
    if ( (*v10 & 1) != 0 )
      v18 = 0LL;
    v18[175] = v18[174];
    if ( (v18[176] & 0x3FFF) >= v18[178] || v11 )
    {
      KeSetCoalescableTimer(v9, (LARGE_INTEGER)-10000000LL, 0, 0xA0u, 0LL);
      v7 = 1;
    }
LABEL_18:
    KeQueryNodeActiveAffinity(*(_WORD *)(v8 + 146), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity);
    v19 = v10;
    v20 = 8LL;
    do
    {
      v21 = *v19;
      if ( (*v19 & 1) == 0 && v21 && *(_DWORD *)(v21 + 664) != Count )
        KeSetMaximumCountPriQueue(v21, Count);
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      goto LABEL_13;
    v14 = v29;
    v15 = 8LL;
    v16 = v10;
    do
    {
      v17 = (_DWORD *)*v16;
      if ( (*v16 & 1) == 0 )
      {
        if ( v17 )
        {
          if ( (v17[176] & 0x4000) == 0 && !v17[1] )
          {
            v22 = (v17[176] & 0x3FFFu) - ((2 * v17[177]) >> 1);
            if ( (_DWORD)v22 )
              KeTimeOutQueueWaiters((__int64)v17, v14, v22);
          }
        }
      }
      ++v16;
      --v15;
    }
    while ( v15 );
    v10 = (__int64 *)(v8 + 256);
  }
  else
  {
    v23 = v10;
    do
    {
      PoolForNode = *v23;
      if ( *v23 )
      {
        if ( (PoolForNode & 1) == 0 || (PoolForNode = ExpAllocatePoolForNode(v8, (unsigned int)v6)) != 0 )
        {
          if ( ExpNewThreadNecessary(PoolForNode, *(_DWORD *)(PoolForNode + 712))
            && (int)ExpCreateWorkerThread(v8, v25) < 0 )
          {
            v11 = 1;
          }
        }
        else
        {
          v11 = 1;
        }
      }
      ++v6;
      ++v23;
    }
    while ( v6 < 8 );
  }
  v6 = 0;
  v9 = (struct _KTIMER *)(v8 + 1064);
LABEL_13:
  if ( v7 )
    goto LABEL_18;
  goto LABEL_14;
}
