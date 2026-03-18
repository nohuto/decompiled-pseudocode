/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x14008C610
 * Callers:
 *     NtTraceEvent @ 0x1400D5560 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1400D5D90 (EtwpTraceMessageVa.c)
 *     EtwWriteKMSecurityEvent @ 0x1401443DC (EtwWriteKMSecurityEvent.c)
 *     EtwTraceEvent @ 0x14022528C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402256C4 (EtwTraceRaw.c)
 *     EtwpGetCompressionSettings @ 0x14022AA2C (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14022AEDC (EtwpSetCompressionSettings.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F63DC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGenerateStateName @ 0x1403F6E6C (ExpWnfGenerateStateName.c)
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     ObpReferenceDeviceMap @ 0x140421DE0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x140422220 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x1404610CC (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     NtCreatePrivateNamespace @ 0x1404776D4 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x140477AC8 (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404784D8 (NtOpenPrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     ObpCreateSymbolicLinkName @ 0x1404B8FE8 (ObpCreateSymbolicLinkName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C2A0C (ExpWnfEnumerateScopeInstances.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404CAA3C (ObSetCurrentProcessDeviceMap.c)
 *     ObpRemoveNamespaceFromTable @ 0x1404D5BE0 (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x1404DE260 (RtlGetSuiteMask.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1404E4110 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x1404E4534 (WmiQueryTraceInformation.c)
 *     EtwEnableTrace @ 0x1404E4F60 (EtwEnableTrace.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1404E9218 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404EB8E4 (PsQueryCurrentApiSetSchema.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404EFC88 (ObpDeleteSymbolicLinkName.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MmIsSessionLeaderProcess @ 0x140536D98 (MmIsSessionLeaderProcess.c)
 *     RtlSetActiveConsoleId @ 0x140548778 (RtlSetActiveConsoleId.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140579040 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x14057F78C (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x140665428 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x14067DEFC (PsGetCurrentServerSiloName.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     ExpRaiseHardError @ 0x1406B634C (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406B9F14 (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
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
