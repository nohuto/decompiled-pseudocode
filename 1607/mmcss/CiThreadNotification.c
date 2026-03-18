/*
 * XREFs of CiThreadNotification @ 0x1C0001620
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadDereference @ 0x1C000B230 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B2C0 (CiThreadCleanup.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // ecx

  if ( Create )
    return;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v5 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_9;
  while ( 1 )
  {
    v6 = v5[7];
    if ( (unsigned __int64)CurrentThread < v6 )
      v7 = -1;
    else
      v7 = (unsigned __int64)CurrentThread > v6;
    if ( v7 < 0 )
    {
      v5 = (_QWORD *)*v5;
      goto LABEL_8;
    }
    if ( v7 <= 0 )
      break;
    v5 = (_QWORD *)v5[1];
LABEL_8:
    if ( !v5 )
      goto LABEL_9;
  }
  if ( v5 )
  {
    v4 = v5 - 5;
    if ( _InterlockedIncrement64(v5 - 1) <= 1 )
      __fastfail(0xEu);
  }
LABEL_9:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  if ( v4 )
  {
    CiThreadCleanup(v4);
    CiThreadDereference(v4);
  }
}
