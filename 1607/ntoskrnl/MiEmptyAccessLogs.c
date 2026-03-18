/*
 * XREFs of MiEmptyAccessLogs @ 0x140086B20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MmDetachSession @ 0x1400764B8 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007651C (MmAttachSession.c)
 *     MiGetNextSession @ 0x140086628 (MiGetNextSession.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140086DB4 (MiCheckAndProcessCcAccessLog.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x140508FFC (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  void *i; // rcx
  __int64 NextProcess; // rax
  ULONG_PTR v2; // rdi
  __int64 v3; // rbp
  LONG *SharedVm; // rsi
  LONG *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  struct _SLIST_ENTRY *v9; // rcx
  _QWORD *j; // rcx
  _QWORD *NextSession; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  LONG *v15; // rbp
  LONG *v16; // rbx
  KIRQL v17; // al
  __int64 v18; // rdx
  KIRQL v19; // r14
  struct _SLIST_ENTRY *v20; // rcx
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rcx
  LONG *v25; // r14
  LONG *v26; // rbx
  KIRQL v27; // al
  __int64 v28; // rdx
  KIRQL v29; // r15
  struct _SLIST_ENTRY *v30; // rcx
  PSLIST_ENTRY v31; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v33[48]; // [rsp+38h] [rbp-50h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403271C0, &LockHandle);
  if ( dword_140327188 )
  {
    WorkItem.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    do
    {
      WorkItem.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      for ( i = 0LL; ; i = (void *)v2 )
      {
        NextProcess = PsGetNextProcess(i);
        v2 = NextProcess;
        if ( !NextProcess )
          break;
        v3 = NextProcess + 1280;
        SharedVm = MiGetSharedVm(NextProcess + 1280);
        if ( *((_QWORD *)SharedVm + 5) )
        {
          KiStackAttachProcess(v2);
          if ( *((_QWORD *)SharedVm + 5) )
          {
            v5 = MiGetSharedVm(v3);
            v6 = ExAcquireSpinLockExclusive(v5);
            v5[1] = 0;
            v8 = v6;
            v9 = (struct _SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
            if ( v9 )
            {
              MiEmptyPageAccessLog(v9);
              *((_QWORD *)SharedVm + 5) = 0LL;
            }
            LOBYTE(v7) = v8;
            MiUnlockWorkingSetExclusive(v3, v7);
          }
          KiUnstackDetachProcess(v33, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v12 )
      {
        NextSession = MiGetNextSession(j);
        v12 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          v13 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
          v15 = MiGetSharedVm(v13);
          if ( *((_QWORD *)v15 + 5) )
          {
            v16 = MiGetSharedVm(v14);
            v17 = ExAcquireSpinLockExclusive(v16);
            v16[1] = 0;
            v19 = v17;
            v20 = (struct _SLIST_ENTRY *)*((_QWORD *)v15 + 5);
            if ( v20 )
            {
              MiEmptyPageAccessLog(v20);
              *((_QWORD *)v15 + 5) = 0LL;
            }
            LOBYTE(v18) = v19;
            MiUnlockWorkingSetExclusive(v13, v18);
          }
          MmDetachSession(v12, (__int64)v33);
        }
      }
      v21 = (__int64 *)&unk_140326DB8;
      v22 = 3LL;
      do
      {
        v23 = *v21;
        if ( *v21 )
        {
          if ( *(_QWORD *)(v23 + 104) )
          {
            v25 = MiGetSharedVm(*v21);
            if ( *((_QWORD *)v25 + 5) )
            {
              v26 = MiGetSharedVm(v24);
              v27 = ExAcquireSpinLockExclusive(v26);
              v26[1] = 0;
              v29 = v27;
              v30 = (struct _SLIST_ENTRY *)*((_QWORD *)v25 + 5);
              if ( v30 )
              {
                MiEmptyPageAccessLog(v30);
                *((_QWORD *)v25 + 5) = 0LL;
              }
              LOBYTE(v28) = v29;
              MiUnlockWorkingSetExclusive(v23, v28);
            }
          }
        }
        ++v21;
        --v22;
      }
      while ( v22 );
      v31 = 0LL;
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_1403271C0, &LockHandle);
    }
    while ( WorkItem.Parameter != (void *)2 );
    if ( !dword_140327188 )
    {
      v31 = P;
      P = 0LL;
    }
    WorkItem.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
  }
}
