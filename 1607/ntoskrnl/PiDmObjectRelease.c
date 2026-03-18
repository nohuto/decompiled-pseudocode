/*
 * XREFs of PiDmObjectRelease @ 0x1404FEFC0
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14048A260 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048BD04 (PiDqQueryActionQueueEntryFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404DE6B0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1404DE73C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataFree @ 0x1404E9A74 (PiDmCacheDataFree.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404ED31C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404FECB4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404FEE44 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140500AB8 (PiDmListEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405012F0 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405015D8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlObjectEventRelease @ 0x140501E38 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     PiDmGetObjectConstraintList @ 0x140505E68 (PiDmGetObjectConstraintList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140506180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140506288 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListInitEnumCallback @ 0x14054D120 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062E9D0 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14062EB74 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EBC8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14062EC24 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x14062FDFC (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDmCacheDataFree @ 0x1404E9A74 (PiDmCacheDataFree.c)
 *     PiDmGetCacheKeys @ 0x1404FF4E4 (PiDmGetCacheKeys.c)
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
        PiDmCacheDataFree((__int64)v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}
