/*
 * XREFs of PsGetServerSiloGlobals @ 0x1400766B0
 * Callers:
 *     PsGetServerSiloServiceSessionId @ 0x140007F34 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetActiveConsoleId @ 0x140008ADC (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x1400764A0 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetNtProductType @ 0x1400ACBEC (RtlGetNtProductType.c)
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 *     SessionIsInteractive @ 0x1400FC060 (SessionIsInteractive.c)
 *     IopCheckSessionDeviceAccess @ 0x1401C9408 (IopCheckSessionDeviceAccess.c)
 *     ExShutdownSystem @ 0x1403DFB38 (ExShutdownSystem.c)
 *     ObQueryDeviceMapInformation @ 0x140422220 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140422458 (ObfDereferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140460DF0 (ObDereferenceDeviceMap.c)
 *     ExpWnfGetHostSiloContext @ 0x140463CE8 (ExpWnfGetHostSiloContext.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     MmMapApiSetView @ 0x14046BD4C (MmMapApiSetView.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     PsBootPhaseComplete @ 0x14055DFD0 (PsBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     PspBeginServerSiloShutdown @ 0x14067E268 (PspBeginServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdown @ 0x14067E35C (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x14067E960 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EDB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EE40 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EEF4 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14067FCFC (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14068CAF4 (SeInitServerSilo.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v2; // rcx

  if ( a1 != -1 )
    goto LABEL_5;
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    v2 = CurrentThread->Process[1].Affinity.Bitmap[16];
    if ( !v2 )
      goto LABEL_4;
    do
    {
      if ( (*(_DWORD *)(v2 + 1304) & 0x40000000) != 0 )
        break;
      v2 = *(_QWORD *)(v2 + 1056);
    }
    while ( v2 );
  }
  else
  {
    v2 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  }
  if ( v2 )
  {
    while ( !(unsigned __int8)PspIsServerSilo() )
      ;
    goto LABEL_5;
  }
LABEL_4:
  a1 = 0LL;
LABEL_5:
  if ( a1 )
    return *(void **)(a1 + 1256);
  else
    return &PspHostSiloGlobals;
}
