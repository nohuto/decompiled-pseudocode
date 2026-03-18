/*
 * XREFs of PiDmObjectRelease @ 0x14043D3D0
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x1403C10AC (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14043D0A0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x14043D254 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14043D764 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043DF10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14043EA04 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043EFE4 (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14043F444 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmEnumObjectsWithCallback @ 0x140440A34 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventRelease @ 0x140440DF0 (PiPnpRtlObjectEventRelease.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x14045ACDC (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14045CC84 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14045CD10 (PiDmObjectGetCachedObjectReference.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14045E7C8 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14045F6A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmGetObjectConstraintList @ 0x140496DAC (PiDmGetObjectConstraintList.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404EA254 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14051A6DC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 *     PiDmListInitEnumCallback @ 0x14051B57C (PiDmListInitEnumCallback.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140604BD0 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140604D74 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140604DC8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140605C1C (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x14043D898 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x14045ACDC (PiDmCacheDataFree.c)
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
