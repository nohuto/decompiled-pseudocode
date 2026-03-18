/*
 * XREFs of MmGetSessionById @ 0x1400FD644
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x14051C288 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14067EDA8 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1406BCB94 (PopLazySensorActiveInput.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400FD6CC (MiSelectSessionAttachProcess.c)
 */

__int64 __fastcall MmGetSessionById(int a1)
{
  __int64 v2; // rdi
  void *CurrentServerSilo; // rbx
  __int64 *i; // rax
  __int64 *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)qword_14034FC10; i != &qword_14034FC10; i = (__int64 *)*i )
  {
    v5 = i - 18;
    if ( (!CurrentServerSilo || (void *)v5[998] == CurrentServerSilo) && *((_DWORD *)v5 + 2) == a1 )
    {
      v2 = MiSelectSessionAttachProcess(v5);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( CurrentServerSilo )
    ObfDereferenceObjectWithTag(CurrentServerSilo, 0x746C6644u);
  return v2;
}
