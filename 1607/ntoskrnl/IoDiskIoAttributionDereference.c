/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14001F3AC
 * Callers:
 *     IoRecordIoAttribution @ 0x14001F26C (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     CcCopyReadEx @ 0x140032C70 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14006EA30 (MiCheckAndUpdateIoAttribution.c)
 *     CcCompleteAsyncRead @ 0x14006EAE4 (CcCompleteAsyncRead.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcPerformReadAhead @ 0x140072334 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14007641C (IoSetDiskIoAttributionOnProcess.c)
 *     MmUpdateSectionIoAttribution @ 0x1400A7A10 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x1400B5FD8 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400B610C (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoNotifyQuotaState @ 0x1401CC084 (IoNotifyQuotaState.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1404F22AC (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
