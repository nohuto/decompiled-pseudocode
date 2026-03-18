/*
 * XREFs of CiThreadNotification @ 0x1C0001200
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadDereference @ 0x1C000B130 (CiThreadDereference.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx

  if ( Create )
    return;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v5 = *(_QWORD **)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    goto LABEL_3;
  while ( 1 )
  {
    v6 = v5[7];
    if ( (unsigned __int64)CurrentThread < v6 )
    {
      v5 = (_QWORD *)*v5;
      goto LABEL_9;
    }
    if ( (unsigned __int64)CurrentThread <= v6 )
      break;
    v5 = (_QWORD *)v5[1];
LABEL_9:
    if ( !v5 )
      goto LABEL_3;
  }
  if ( v5 )
  {
    v3 = v5 - 5;
    if ( _InterlockedIncrement64(v5 - 1) <= 1 )
      __fastfail(0xEu);
  }
LABEL_3:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  if ( v3 )
  {
    CiThreadCleanup(v3);
    CiThreadDereference(v3);
  }
}
