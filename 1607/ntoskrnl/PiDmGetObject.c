/*
 * XREFs of PiDmGetObject @ 0x1404FF000
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404DE6B0 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1404DE73C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataEncode @ 0x1404E0974 (PiDmCacheDataEncode.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404ED31C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404FECB4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404FEE44 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405015D8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     PiDmGetObjectConstraintList @ 0x140505E68 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062E9D0 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062EC7C (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EE40 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062EFB8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C3B20 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x1404FF138 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404FF308 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebp
  __int64 ObjectManagerForObjectType; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v15[112]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
  Buffer = v15;
  if ( a2
    && (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(ObjectManagerForObjectType + 208), v15) >= 0
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v5;
}
