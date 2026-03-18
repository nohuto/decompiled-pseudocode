/*
 * XREFs of PiDmObjectRelease @ 0x140439810
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x140417154 (PiUEventFreeClientRegistrationContext.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404394C0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140439694 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140439BE0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x14043C01C (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140442488 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiDmGetObjectConstraintList @ 0x1404DF3E0 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PiDmCacheDataFree @ 0x1404E0850 (PiDmCacheDataFree.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14053D5D8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140547318 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14058E624 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14067FB38 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14067FB8C (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140680984 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1404E0850 (PiDmCacheDataFree.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 26);
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
