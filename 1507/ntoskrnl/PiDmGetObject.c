/*
 * XREFs of PiDmGetObject @ 0x140439850
 * Callers:
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404394C0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140439694 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140439BE0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiDmGetObjectConstraintList @ 0x1404DF3E0 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140547318 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14067FBE4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x1404399D0 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140439B88 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  __int64 ObjectManagerForObjectType; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  struct _KTHREAD *v10; // rdx
  __int16 v11; // cx
  _BYTE *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v14[112]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  Buffer = v14;
  if ( a2
    && (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(ObjectManagerForObjectType + 208), v14) >= 0
    && (v8 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104), &Buffer)) != 0LL )
  {
    v9 = *v8;
  }
  else
  {
    v9 = 0LL;
  }
  *a3 = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
