/*
 * XREFs of MmGetSessionById @ 0x140076640
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
 *     PopWatchdogWorker @ 0x14020B648 (PopWatchdogWorker.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140461CC0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1404CC854 (PspAttachSession.c)
 *     PsGetSiloBySessionId @ 0x140503A58 (PsGetSiloBySessionId.c)
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E514 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E598 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x140674C3C (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400767C8 (MiSelectSessionAttachProcess.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  __int64 JobSilo; // rax
  __int64 EffectiveServerSilo; // rsi
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16], a2, a3);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  EffectiveServerSilo = PsGetEffectiveServerSilo(JobSilo);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v8 = (_QWORD *)qword_140326960;
  while ( v8 )
  {
    v9 = *((_DWORD *)v8 - 38);
    if ( a1 > v9 )
    {
      v8 = (_QWORD *)v8[1];
    }
    else
    {
      if ( a1 >= v9 )
      {
        v10 = v8 - 20;
        if ( (!EffectiveServerSilo || v10[1015] == EffectiveServerSilo) && *((_DWORD *)v10 + 2) == a1 )
          v4 = MiSelectSessionAttachProcess();
        break;
      }
      v8 = (_QWORD *)*v8;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
