/*
 * XREFs of PsDereferenceMonitorContextServerSilo @ 0x1400F0720
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     EtwpValidateEnableNotification @ 0x1404D5D50 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     ObDereferenceDeviceMap @ 0x14050423C (ObDereferenceDeviceMap.c)
 *     ExpWnfDeleteScopeById @ 0x1405043FC (ExpWnfDeleteScopeById.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 *     ObpGetShadowDirectory @ 0x140510DC0 (ObpGetShadowDirectory.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14053F768 (ExpWnfEnumerateScopeInstances.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 *     PerfDiagpRestartCKCL @ 0x140558A0C (PerfDiagpRestartCKCL.c)
 *     ObpDeleteSymbolicLinkName @ 0x14055B27C (ObpDeleteSymbolicLinkName.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140593C50 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140593CBC (ExpWnfCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140593D20 (ObInitServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405BA3D8 (ObIsDosDeviceLocallyMapped.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     EtwpRegisterSecurityProvider @ 0x1405C2950 (EtwpRegisterSecurityProvider.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 *     PspInitializeServerSiloDeferred @ 0x1406C1E74 (PspInitializeServerSiloDeferred.c)
 *     PspNotifySeverSiloDeletion @ 0x1406C2388 (PspNotifySeverSiloDeletion.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406FC3FC (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PspFreeMonitorContextServerSilo @ 0x1406C1D2C (PspFreeMonitorContextServerSilo.c)
 */

void __fastcall PsDereferenceMonitorContextServerSilo(__int64 a1)
{
  __int64 v1; // rax

  v1 = a1 - 96;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 96 + 48), 0xFFFFFFFF) == 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      *(_QWORD *)(v1 + 80) = v1;
      *(_QWORD *)(v1 + 72) = PspFreeMonitorContextServerSilo;
      *(_QWORD *)(v1 + 56) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 56), DelayedWorkQueue);
    }
    else
    {
      PspFreeMonitorContextServerSilo((PVOID)v1);
    }
  }
}
