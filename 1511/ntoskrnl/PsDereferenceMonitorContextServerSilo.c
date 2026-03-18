/*
 * XREFs of PsDereferenceMonitorContextServerSilo @ 0x1400775C0
 * Callers:
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 *     ObDereferenceDeviceMap @ 0x1403E3C30 (ObDereferenceDeviceMap.c)
 *     ExpWnfDeleteScopeById @ 0x1403E3D80 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     ObpGetShadowDirectory @ 0x14041CE20 (ObpGetShadowDirectory.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1404AA07C (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404AA1A0 (NtOpenPrivateNamespace.c)
 *     ObpRemoveNamespaceFromTable @ 0x1404AE154 (ObpRemoveNamespaceFromTable.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C094C (ExpWnfEnumerateScopeInstances.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404C4630 (ObpDeleteSymbolicLinkName.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpLookupLoggerIdByName @ 0x1404CA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
 *     PerfDiagpRestartCKCL @ 0x1405086B0 (PerfDiagpRestartCKCL.c)
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140526CE4 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140526D50 (ExpWnfCreateServerSiloCallback.c)
 *     CmpCreateServerSiloCallback @ 0x140526DB4 (CmpCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140526E34 (ObInitServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140542750 (ObIsDosDeviceLocallyMapped.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     EtwpRegisterSecurityProvider @ 0x14054B668 (EtwpRegisterSecurityProvider.c)
 *     EtwpTracingProvEnableCallback @ 0x14054B854 (EtwpTracingProvEnableCallback.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     PspUnregisterMonitorDeferred @ 0x140640C04 (PspUnregisterMonitorDeferred.c)
 *     EtwpGetDisallowList @ 0x1406601A0 (EtwpGetDisallowList.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1406A10C4 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PspFreeMonitorContextServerSilo @ 0x1406404D0 (PspFreeMonitorContextServerSilo.c)
 */

void __fastcall PsDereferenceMonitorContextServerSilo(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v1; // rax

  v1 = (struct _WORK_QUEUE_ITEM *)(a1 - 128);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 128 + 24), 0xFFFFFFFF) == 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v1[1].Parameter = v1;
      v1[1].WorkerRoutine = (void (__fastcall *)(void *))PspFreeMonitorContextServerSilo;
      v1[1].List.Flink = 0LL;
      ExQueueWorkItem(v1 + 1, DelayedWorkQueue);
    }
    else
    {
      PspFreeMonitorContextServerSilo(v1);
    }
  }
}
