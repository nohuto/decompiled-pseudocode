/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x14008BD70
 * Callers:
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwWriteKMSecurityEvent @ 0x14014494C (EtwWriteKMSecurityEvent.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AD08 (EtwpSetCompressionSettings.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F52A0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGenerateStateName @ 0x1403F5D2C (ExpWnfGenerateStateName.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x14045FF9C (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x140476998 (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404773A8 (NtOpenPrivateNamespace.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14048845C (ObSetCurrentProcessDeviceMap.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404AE73C (ExpWnfEnumerateScopeInstances.c)
 *     ObpRemoveNamespaceFromTable @ 0x1404B91E4 (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x1404C1864 (RtlGetSuiteMask.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404C6DC8 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1404C71EC (WmiQueryTraceInformation.c)
 *     EtwEnableTrace @ 0x1404C7C18 (EtwEnableTrace.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1404CB308 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404CD96C (PsQueryCurrentApiSetSchema.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404D1CA4 (ObpDeleteSymbolicLinkName.c)
 *     RtlIsMultiSessionSku @ 0x1404E674C (RtlIsMultiSessionSku.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MmIsSessionLeaderProcess @ 0x1405372D8 (MmIsSessionLeaderProcess.c)
 *     RtlSetActiveConsoleId @ 0x140548CB8 (RtlSetActiveConsoleId.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140579580 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x14057FC38 (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x14066550C (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x14067DFE0 (PsGetCurrentServerSiloName.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406BA04C (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v1; // rcx
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    v1 = CurrentThread->Process[1].Affinity.Bitmap[16];
    if ( !v1 )
      return &PspHostSiloGlobals;
    do
    {
      if ( (*(_DWORD *)(v1 + 1304) & 0x40000000) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 1056);
    }
    while ( v1 );
  }
  else
  {
    v1 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  }
  if ( !v1 )
    return &PspHostSiloGlobals;
  while ( !(unsigned __int8)PspIsServerSilo() )
    ;
  if ( !v3 )
    return &PspHostSiloGlobals;
  return *(void **)(v3 + 1256);
}
