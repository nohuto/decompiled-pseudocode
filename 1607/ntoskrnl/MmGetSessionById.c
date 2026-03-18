/*
 * XREFs of MmGetSessionById @ 0x1400765C0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1401EC9D8 (MmGetSessionObjectById.c)
 *     PopWatchdogWorker @ 0x14020B81C (PopWatchdogWorker.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140469960 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140490A2C (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1404EA760 (PspAttachSession.c)
 *     PsGetSiloBySessionId @ 0x1405209F0 (PsGetSiloBySessionId.c)
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E460 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x140674B58 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetEffectiveServerSilo @ 0x140076688 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140076748 (MiSelectSessionAttachProcess.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  v8 = (_QWORD *)qword_140326920;
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
