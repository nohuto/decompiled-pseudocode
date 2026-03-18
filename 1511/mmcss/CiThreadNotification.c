/*
 * XREFs of CiThreadNotification @ 0x1C0001280
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadDereference @ 0x1C000B130 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx

  if ( Create )
    return;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v5 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = v5[7];
    if ( (unsigned __int64)CurrentThread >= v6 )
      break;
    v5 = (_QWORD *)*v5;
LABEL_5:
    if ( !v5 )
      goto LABEL_6;
  }
  if ( (unsigned __int64)CurrentThread > v6 )
  {
    v5 = (_QWORD *)v5[1];
    goto LABEL_5;
  }
  if ( v5 )
  {
    v4 = v5 - 5;
    if ( _InterlockedIncrement64(v5 - 1) <= 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  if ( v4 )
  {
    CiThreadCleanup(v4);
    CiThreadDereference(v4);
  }
}
