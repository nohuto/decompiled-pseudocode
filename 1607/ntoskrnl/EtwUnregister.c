/*
 * XREFs of EtwUnregister @ 0x1405488B0
 * Callers:
 *     BapdWriteEtwEvents @ 0x140131F3C (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x14014C4A8 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     PopBootLoaderTraceProcess @ 0x14053185C (PopBootLoaderTraceProcess.c)
 *     WmipGECleanup @ 0x140532810 (WmipGECleanup.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140574F70 (WmipProcessLegacyEtwRegister.c)
 *     RegistryUnload @ 0x140612D80 (RegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061A9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14061ADEC (DbgkCaptureLiveDump.c)
 *     sub_1406AEF3C @ 0x1406AEF3C (sub_1406AEF3C.c)
 *     sub_1406AF784 @ 0x1406AF784 (sub_1406AF784.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFB08 (ExpTriggerFastCacheReeval.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     BapdpRecordIumStatus @ 0x1407A9B94 (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x1407BBA24 (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x1407BC73C (VslpIumInitializeTelemetry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040DA54 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040ED4C (EtwpUnreferenceGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406A430C (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  _BYTE *v4; // rax
  _BYTE *v5; // rdi
  struct _KTHREAD *v6; // rax
  unsigned __int64 *v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  __int64 v17; // rtt
  __int64 v18; // rax
  __int64 *v19; // rdi
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 v22; // rtt
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rcx

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = (unsigned __int64 *)(*(_QWORD *)(RegHandle + 40) + 384LL);
    v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
    if ( v5 )
      v5[26] |= 1u;
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 392LL) = KeGetCurrentThread();
  }
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v7 = (unsigned __int64 *)(*(_QWORD *)(RegHandle + 32) + 384LL);
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    v9[26] |= 1u;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = KeGetCurrentThread();
  v10 = *(_QWORD *)RegHandle;
  v11 = *(_QWORD **)(RegHandle + 8);
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || *v11 != RegHandle )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = *(_QWORD *)(RegHandle + 16);
  v13 = *(_QWORD **)(RegHandle + 24);
  if ( *(_QWORD *)(v12 + 8) != RegHandle + 16 || *v13 != RegHandle + 16 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = 0LL;
  v14 = (__int64 *)(*(_QWORD *)(RegHandle + 32) + 384LL);
  _m_prefetchw(v14);
  v15 = *v14;
  if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v16 = v15 - 16;
  else
    v16 = 0LL;
  if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
    ExfReleasePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegion();
  v18 = *(_QWORD *)(RegHandle + 40);
  if ( v18 )
  {
    *(_QWORD *)(v18 + 392) = 0LL;
    v19 = (__int64 *)(*(_QWORD *)(RegHandle + 40) + 384LL);
    _m_prefetchw(v19);
    v20 = *v19;
    if ( (*v19 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v21 = v20 - 16;
    else
      v21 = 0LL;
    if ( (v20 & 2) != 0 || (v22 = *v19, v22 != _InterlockedCompareExchange64(v19, v21, v20)) )
      ExfReleasePushLock(v19);
    KeAbPostRelease((ULONG_PTR)v19);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v23,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v24,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 24LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v25 = *(__int64 **)(RegHandle + 40);
  if ( v25 )
    EtwpUnreferenceGuidEntry(v25);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
