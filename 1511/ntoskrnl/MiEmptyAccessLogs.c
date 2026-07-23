/*
 * XREFs of MiEmptyAccessLogs @ 0x140116604
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetNextSession @ 0x1400E6E30 (MiGetNextSession.c)
 *     MiQueuePageAccessLog @ 0x1400F152C (MiQueuePageAccessLog.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  void *i; // rcx
  __int64 NextProcess; // rax
  void *v2; // rbx
  __int64 v3; // rdi
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  KIRQL v8; // si
  _QWORD *j; // rcx
  _QWORD *NextSession; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  KIRQL v17; // si
  volatile LONG *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  KIRQL v21; // bp
  __int64 v22; // r8
  PSLIST_ENTRY v23; // rbx
  _SLIST_ENTRY *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v26; // [rsp+38h] [rbp-40h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FEDC0, &LockHandle);
  if ( dword_1402FED88 )
  {
    stru_1402FED90.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    do
    {
      stru_1402FED90.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      for ( i = 0LL; ; i = v2 )
      {
        NextProcess = PsGetNextProcess(i);
        v2 = (void *)NextProcess;
        if ( !NextProcess )
          break;
        v3 = NextProcess + 1280;
        if ( *(_QWORD *)(NextProcess + 1296) )
        {
          KiStackAttachProcess((_KPROCESS *)NextProcess, 0LL, (__int64)&v26);
          if ( *(_QWORD *)(v3 + 16) )
          {
            v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
            v7 = *(_QWORD **)(v3 + 16);
            v8 = v4;
            if ( v7 )
            {
              MiEmptyPageAccessLog(v7);
              *(_QWORD *)(v3 + 16) = 0LL;
            }
            LOBYTE(v5) = v8;
            MiUnlockWorkingSetExclusive(v3, v5, v6);
          }
          KiUnstackDetachProcess(&v26, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v11 )
      {
        NextSession = MiGetNextSession(j);
        v11 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
          if ( *(_QWORD *)(v12 + 2984) )
          {
            v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 2968));
            v16 = *(_QWORD **)(v12 + 2984);
            v17 = v13;
            if ( v16 )
            {
              MiEmptyPageAccessLog(v16);
              *(_QWORD *)(v12 + 2984) = 0LL;
            }
            LOBYTE(v14) = v17;
            MiUnlockWorkingSetExclusive(v12 + 2968, v14, v15);
          }
          MmDetachSession(v11, (__int64)&v26);
        }
      }
      v18 = (volatile LONG *)&unk_1402FF890;
      v19 = 3LL;
      do
      {
        if ( *(_QWORD *)v18 )
        {
          v21 = ExAcquireSpinLockExclusive(v18 - 4);
          if ( *(_QWORD *)v18 )
          {
            MiEmptyPageAccessLog(*(_QWORD **)v18);
            *(_QWORD *)v18 = 0LL;
          }
          LOBYTE(v20) = v21;
          MiUnlockWorkingSetExclusive((__int64)(v18 - 4), v20, v22);
        }
        v18 += 64;
        --v19;
      }
      while ( v19 );
      v23 = 0LL;
      if ( qword_1402FED80 )
      {
        v24 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_1402FED80, 0LL);
        if ( v24 )
          MiQueuePageAccessLog(v24);
      }
      KeAcquireInStackQueuedSpinLock(&qword_1402FEDC0, &LockHandle);
    }
    while ( stru_1402FED90.Parameter != (void *)2 );
    if ( !dword_1402FED88 )
    {
      v23 = P;
      P = 0LL;
    }
    stru_1402FED90.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
  }
}
