/*
 * XREFs of PiDmGetObject @ 0x1404E1F90
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiUEventHandleRegistration @ 0x14048DCAC (PiUEventHandleRegistration.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404C1CB4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1404C1D40 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataEncode @ 0x1404C3F78 (PiDmCacheDataEncode.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404CF3D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404E1C44 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404E1DD4 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404E22E4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     PiDmGetObjectConstraintList @ 0x1404E8DF8 (PiDmGetObjectConstraintList.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062EA84 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062ED30 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x1404E20C8 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
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
