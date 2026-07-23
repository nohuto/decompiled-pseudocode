/*
 * XREFs of PsGetServerSiloGlobals @ 0x140076730
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x140076520 (RtlGetCurrentServiceSessionId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetNtProductType @ 0x1400AB154 (RtlGetNtProductType.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     SessionIsInteractive @ 0x1400F9DE0 (SessionIsInteractive.c)
 *     IopCheckSessionDeviceAccess @ 0x1401C92A8 (IopCheckSessionDeviceAccess.c)
 *     ExShutdownSystem @ 0x1403DFB38 (ExShutdownSystem.c)
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x14045FCC0 (ObDereferenceDeviceMap.c)
 *     ExpWnfGetHostSiloContext @ 0x140462BB8 (ExpWnfGetHostSiloContext.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     MmMapApiSetView @ 0x14046AC1C (MmMapApiSetView.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     PsBootPhaseComplete @ 0x14055E510 (PsBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14056BF00 (SepRmLsaConnectRequest.c)
 *     ObInitServerSilo @ 0x14057A53C (ObInitServerSilo.c)
 *     PspBeginServerSiloShutdown @ 0x14067E34C (PspBeginServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdown @ 0x14067E440 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EE9C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EF24 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14067FDE0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14068CBD8 (SeInitServerSilo.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
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
