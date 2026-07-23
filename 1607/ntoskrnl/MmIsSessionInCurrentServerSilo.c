/*
 * XREFs of MmIsSessionInCurrentServerSilo @ 0x1401EC880
 * Callers:
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 */

char __fastcall MmIsSessionInCurrentServerSilo(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v4; // bl
  __int64 JobSilo; // rax
  __int64 EffectiveServerSilo; // rsi
  _QWORD *v7; // rcx
  unsigned int v8; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) == a1 )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  EffectiveServerSilo = PsGetEffectiveServerSilo(JobSilo);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v7 = (_QWORD *)qword_140326960;
  while ( v7 )
  {
    v8 = *((_DWORD *)v7 - 38);
    if ( a1 > v8 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( a1 >= v8 )
      {
        if ( v7[995] == EffectiveServerSilo && v8 == a1 && (*((_DWORD *)v7 - 39) & 2) == 0 )
          v4 = *(v7 - 18) != (_QWORD)(v7 - 18);
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
