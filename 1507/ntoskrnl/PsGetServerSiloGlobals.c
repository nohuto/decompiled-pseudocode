/*
 * XREFs of PsGetServerSiloGlobals @ 0x140026D98
 * Callers:
 *     PsGetCurrentServerSiloGlobals @ 0x140154878 (PsGetCurrentServerSiloGlobals.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     PsDeleteMonitorContextServerSilo @ 0x140243B90 (PsDeleteMonitorContextServerSilo.c)
 *     ExShutdownSystem @ 0x1404040B8 (ExShutdownSystem.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     SeQuerySessionIdTokenEx @ 0x14043ED78 (SeQuerySessionIdTokenEx.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     PspStartMonitorDeferred @ 0x1405939AC (PspStartMonitorDeferred.c)
 *     ObInitServerSilo @ 0x140593D20 (ObInitServerSilo.c)
 *     PsGetServerSiloDefaultCompartmentId @ 0x1406C0B30 (PsGetServerSiloDefaultCompartmentId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1406C0B44 (PsGetServerSiloServiceSessionId.c)
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     PspInitializeServerSiloDeferred @ 0x1406C1E74 (PspInitializeServerSiloDeferred.c)
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1406C3DD0 (PspFreezeProcessWorker.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406D0D40 (SepCopyClientTokenAndSetSilo.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 */

void *__fastcall PsGetServerSiloGlobals(_QWORD *CurrentServerSilo)
{
  char v1; // dl
  void *v2; // rbx

  if ( CurrentServerSilo == (_QWORD *)-1LL )
  {
    CurrentServerSilo = (_QWORD *)PsGetCurrentServerSilo();
    v1 = 1;
  }
  else
  {
    v1 = 0;
  }
  if ( CurrentServerSilo )
  {
    if ( ((PspDebugFlags & 0x10) != 0 && *(int *)(CurrentServerSilo[32] + 112LL) < 1
       || *(int *)(CurrentServerSilo[32] + 112LL) >= 3)
      && (PspDebugFlags & 0x20) != 0 )
    {
      __debugbreak();
    }
    v2 = (void *)CurrentServerSilo[32];
  }
  else
  {
    v2 = &InfrastructureSiloGlobals;
  }
  if ( v1 && CurrentServerSilo )
    ObfDereferenceObjectWithTag(CurrentServerSilo, 0x746C6644u);
  return v2;
}
