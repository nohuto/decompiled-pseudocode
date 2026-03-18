/*
 * XREFs of EtwUnregister @ 0x1404D02C4
 * Callers:
 *     BapdWriteEtwEvents @ 0x140127250 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 *     WmipGECleanup @ 0x1403B56EC (WmipGECleanup.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404A45AC (DbgkpStartSystemErrorHandler.c)
 *     WmipLegacyEtwWorker @ 0x1404C4D60 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140544F90 (WmipProcessLegacyEtwRegister.c)
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     sub_1406698B8 @ 0x1406698B8 (sub_1406698B8.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 *     VerifierEtwUnregister @ 0x1406D0E34 (VerifierEtwUnregister.c)
 *     PerfDiagInitialize @ 0x140755CA0 (PerfDiagInitialize.c)
 *     HvlpIumInitializeTelemetry @ 0x140782AA8 (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140438D8C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406639BC (EtwpEventWriteTemplateSessAndProv.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *v2; // rax
  unsigned __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  __int64 v13; // rtt
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rdi
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  __int64 v26; // rtt

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v20 = (unsigned __int64 *)(*(_QWORD *)(RegHandle + 40) + 384LL);
    v21 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 392LL) = KeGetCurrentThread();
  }
  v2 = KeGetCurrentThread();
  --v2->KernelApcDisable;
  v3 = (unsigned __int64 *)(*(_QWORD *)(RegHandle + 32) + 384LL);
  v4 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = KeGetCurrentThread();
  v6 = *(_QWORD *)RegHandle;
  v7 = *(_QWORD **)(RegHandle + 8);
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle || *v7 != RegHandle )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = *(_QWORD *)(RegHandle + 16);
  v9 = *(_QWORD **)(RegHandle + 24);
  if ( *(_QWORD *)(v8 + 8) != RegHandle + 16 || *v9 != RegHandle + 16 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 392LL) = 0LL;
  v10 = (__int64 *)(*(_QWORD *)(RegHandle + 32) + 384LL);
  _m_prefetchw(v10);
  v11 = *v10;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v12 = v11 - 16;
  else
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v10, v13 != _InterlockedCompareExchange64(v10, v12, v11)) )
    ExfReleasePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegion();
  v14 = *(_QWORD *)(RegHandle + 40);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 392) = 0LL;
    v23 = (__int64 *)(*(_QWORD *)(RegHandle + 40) + 384LL);
    _m_prefetchw(v23);
    v24 = *v23;
    if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v25 = v24 - 16;
    else
      v25 = 0LL;
    if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
      ExfReleasePushLock(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v15,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v16,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 24LL);
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v17 = *(__int64 **)(RegHandle + 40);
  if ( v17 )
    EtwpUnreferenceGuidEntry(v17);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
