/*
 * XREFs of EtwUnregister @ 0x140558318
 * Callers:
 *     BapdWriteEtwEvents @ 0x140157A80 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 *     WmipGECleanup @ 0x14040A558 (WmipGECleanup.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405BBEFC (WmipProcessLegacyEtwRegister.c)
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     EtwpServerSiloTerminateNotify @ 0x1406E6DD0 (EtwpServerSiloTerminateNotify.c)
 *     sub_1406ECE4C @ 0x1406ECE4C (sub_1406ECE4C.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 *     VerifierEtwUnregister @ 0x1407549FC (VerifierEtwUnregister.c)
 *     PerfDiagInitialize @ 0x1407E6FFC (PerfDiagInitialize.c)
 *     HvlpIumInitializeTelemetry @ 0x1407F922C (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1404CED94 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406E6A9C (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)RegHandle;
  v3 = *(_QWORD **)(RegHandle + 8);
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || *v3 != RegHandle )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = *(_QWORD *)(RegHandle + 16);
  v5 = *(_QWORD **)(RegHandle + 24);
  if ( *(_QWORD *)(v4 + 8) != RegHandle + 16 || *v5 != RegHandle + 16 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v7,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v8,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 24LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32), v6, v8, v9);
  v13 = *(__int64 **)(RegHandle + 40);
  if ( v13 )
    EtwpUnreferenceGuidEntry(v13, v10, v11, v12);
  EtwpReleaseProviderTraitsReference(RegHandle, v10, v11, v12);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
