/*
 * XREFs of ExpWorkerThreadBalanceManager @ 0x1405B12E8
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     KeTimeOutQueueWaiters @ 0x140120854 (KeTimeOutQueueWaiters.c)
 *     KeSetAffinityThread @ 0x14015B334 (KeSetAffinityThread.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x14020A608 (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1404FAE8C (ExpCreateWorkerThread.c)
 *     ExpAllocatePoolForNode @ 0x1406F778C (ExpAllocatePoolForNode.c)
 */

void __fastcall __noreturn ExpWorkerThreadBalanceManager(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rax
  int v4; // ebx
  char v5; // r12
  __int64 v6; // rbp
  struct _KTIMER *v7; // r13
  __int64 *v8; // r14
  char v9; // si
  NTSTATUS v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r13
  __int64 v13; // rdi
  __int64 *v14; // rbx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r8d
  __int64 *v23; // rdi
  __int64 PoolForNode; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // ecx
  USHORT Count; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((__int64)CurrentThread, 0xCu);
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = KeNodeBlock[v3];
  if ( (_UNKNOWN *)v6 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * v3) )
    v6 = 0LL;
  v7 = (struct _KTIMER *)(v6 + 1064);
  v29 = 10000000LL * ExpWorkerThreadTimeoutInSeconds;
  v8 = (__int64 *)(v6 + 256);
  Object[0] = (PVOID)(v6 + 1064);
  Object[1] = (PVOID)(v6 + 1040);
  Object[2] = (PVOID)(v6 + 1128);
  while ( 1 )
  {
    v9 = 0;
    v10 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, (PKWAIT_BLOCK)(v6 + 1152));
    if ( v10 )
      break;
    v26 = *v8;
    v5 = 0;
    if ( (*v8 & 1) != 0 )
      v26 = 0LL;
    if ( *(_DWORD *)(v26 + 696) == *(_DWORD *)(v26 + 700) )
    {
      v27 = *(_DWORD *)(v26 + 704);
      if ( v27 < (2 * *(_DWORD *)(v26 + 708)) >> 1
        || v27 < 0x3FFF && *(_QWORD *)(v26 + 8) == v26 + 8 && (*(_DWORD *)(v26 + 4) || *(int *)(v26 + 708) < 0) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, 0LL);
        if ( (int)ExpCreateWorkerThread(v6, v26) < 0 )
        {
          v9 = 1;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    v16 = (_DWORD *)*v8;
    if ( (*v8 & 1) != 0 )
      v16 = 0LL;
    v16[175] = v16[174];
    if ( (v16[176] & 0x3FFF) >= v16[178] || v9 )
    {
      KeSetCoalescableTimer(v7, (LARGE_INTEGER)-10000000LL, 0, 0xA0u, 0LL);
      v5 = 1;
    }
LABEL_18:
    KeQueryNodeActiveAffinity(*(_WORD *)(v6 + 146), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity, v17, v18);
    v19 = v8;
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
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_13;
    v12 = v29;
    v13 = 8LL;
    v14 = v8;
    do
    {
      v15 = (_DWORD *)*v14;
      if ( (*v14 & 1) == 0 )
      {
        if ( v15 )
        {
          if ( (v15[176] & 0x4000) == 0 && !v15[1] )
          {
            v22 = (v15[176] & 0x3FFF) - ((2 * v15[177]) >> 1);
            if ( v22 )
              KeTimeOutQueueWaiters((__int64)v15, v12, v22);
          }
        }
      }
      ++v14;
      --v13;
    }
    while ( v13 );
    v8 = (__int64 *)(v6 + 256);
  }
  else
  {
    v23 = v8;
    do
    {
      PoolForNode = *v23;
      if ( *v23 )
      {
        if ( (PoolForNode & 1) == 0 || (PoolForNode = ExpAllocatePoolForNode(v6, (unsigned int)v4)) != 0 )
        {
          v25 = *(_DWORD *)(PoolForNode + 704);
          if ( (v25 < (2 * *(_DWORD *)(PoolForNode + 708)) >> 1
             || v25 < *(_DWORD *)(PoolForNode + 712)
             && *(_QWORD *)(PoolForNode + 8) == PoolForNode + 8
             && (*(_DWORD *)(PoolForNode + 4) || *(int *)(PoolForNode + 708) < 0))
            && (int)ExpCreateWorkerThread(v6, PoolForNode) < 0 )
          {
            v9 = 1;
          }
        }
        else
        {
          v9 = 1;
        }
      }
      ++v4;
      ++v23;
    }
    while ( v4 < 8 );
  }
  v4 = 0;
  v7 = (struct _KTIMER *)(v6 + 1064);
LABEL_13:
  if ( v5 )
    goto LABEL_18;
  goto LABEL_14;
}
