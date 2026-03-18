/*
 * XREFs of PsGetServerSiloGlobals @ 0x140102754
 * Callers:
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     PsDeleteMonitorContextServerSilo @ 0x1401F57A8 (PsDeleteMonitorContextServerSilo.c)
 *     ExShutdownSystem @ 0x1403B2E04 (ExShutdownSystem.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     SeQuerySessionIdTokenEx @ 0x14044086C (SeQuerySessionIdTokenEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     PspTerminateProcessesJobCallback @ 0x1404BD074 (PspTerminateProcessesJobCallback.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404E1E04 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x14050D124 (RtlGetCurrentServiceSessionId.c)
 *     PspStartMonitorDeferred @ 0x140526910 (PspStartMonitorDeferred.c)
 *     ObInitServerSilo @ 0x140526E34 (ObInitServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14063F7A8 (PsGetServerSiloServiceSessionId.c)
 *     PspBeginServerSiloShutdown @ 0x14063FDC0 (PspBeginServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140640B1C (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1406418B0 (PspFreezeProcessWorker.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14064D8F4 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 */

void *__fastcall PsGetServerSiloGlobals(_QWORD *a1)
{
  _QWORD *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v3; // rax
  _QWORD *ServerSiloForSilo; // rax
  char v5; // cl
  void *v6; // rdi

  v1 = a1;
  if ( a1 == (_QWORD *)-1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
    ServerSiloForSilo = (_QWORD *)PspGetServerSiloForSilo(v3);
    v1 = ServerSiloForSilo;
    if ( ServerSiloForSilo )
      ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v1 )
    v6 = *(void **)(v1[156] + 136LL);
  else
    v6 = &InfrastructureSiloGlobals;
  if ( v5 && v1 )
    ObfDereferenceObject(v1);
  return v6;
}
