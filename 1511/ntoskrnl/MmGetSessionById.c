/*
 * XREFs of MmGetSessionById @ 0x140091A20
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 *     PspAttachSession @ 0x1404BF4E0 (PspAttachSession.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x1404E24F4 (PiUEventBroadcastEventWorker.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14060412C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406041B0 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x14063C538 (PopLazySensorActiveInput.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     MiSelectSessionAttachProcess @ 0x140091AC8 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmGetSessionById(int a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v3; // rax
  void *ServerSiloForSilo; // rax
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 *i; // rax
  __int64 *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v3);
  v5 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  v6 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  for ( i = (__int64 *)qword_1402FF750; i != &qword_1402FF750; i = (__int64 *)*i )
  {
    v8 = i - 18;
    if ( (!v5 || (void *)v8[998] == v5) && *((_DWORD *)v8 + 2) == a1 )
    {
      v6 = MiSelectSessionAttachProcess(v8, &qword_1402FF750);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
    ObfDereferenceObject(v5);
  return v6;
}
