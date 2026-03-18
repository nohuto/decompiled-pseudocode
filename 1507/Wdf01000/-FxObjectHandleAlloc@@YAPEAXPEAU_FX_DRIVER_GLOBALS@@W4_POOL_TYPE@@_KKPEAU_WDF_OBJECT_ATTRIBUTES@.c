/*
 * XREFs of ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0007710 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0009924 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0009A8C (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0009DD0 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0009F74 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E9B8 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000EF70 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001F3B4 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0020C1C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023D90 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025330 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@@PEAPEAVFxMemoryObject@@@Z @ 0x1C0025E34 (-_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0029810 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002B800 (imp_WdfPdoInitAddHardwareID.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C002CC50 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfCollectionCreate @ 0x1C002CFC0 (imp_WdfCollectionCreate.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C002D230 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C002D330 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfStringCreate @ 0x1C002D430 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C002DAF0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C002E140 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfCommonBufferCreate @ 0x1C00600C0 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063640 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063754 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0063964 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0068574 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C006BFC0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0072FD0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C007885C (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0078D0C (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007D2B0 (imp_WdfRegistryCreateKey.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C007E184 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E2B8 (FxIoResourceListInsertDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007E8E0 (imp_WdfIoResourceListCreate.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0086364 (FxUsbTargetDeviceCreate.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008BB00 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0099170 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CCAC (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C009CE6C (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00A2E3C (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A692C (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0079714 (WPP_IFR_SF_DDxd.c)
 */

_QWORD *__fastcall FxObjectHandleAlloc(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int32 PoolType,
        SIZE_T Size,
        ULONG Tag,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int16 ExtraSize,
        FxObjectType ObjectType)
{
  ULONG v7; // edi
  int v8; // r15d
  _LIST_ENTRY *Caller; // r14
  unsigned __int64 flags; // r8
  unsigned __int64 v14; // rax
  SIZE_T v15; // rcx
  bool v16; // cf
  int v17; // eax
  int id; // edx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v24; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  const _GUID *v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+0h]
  int v31; // [rsp+C0h] [rbp+38h]

  v7 = Tag;
  v8 = Size;
  if ( !Tag )
    v7 = FxDriverGlobals->Tag;
  Caller = 0LL;
  if ( ObjectType == FxObjectTypeInternal )
  {
    if ( !FxDriverGlobals->FxVerifierHandle )
    {
      v15 = Size;
      goto LABEL_12;
    }
    v15 = Size + 32;
    if ( Size + 32 < Size )
    {
      v15 = -1LL;
      v17 = -1073741675;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    flags = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        flags = Attributes->ContextSizeOverride;
        if ( !flags )
          flags = ContextTypeInfo->ContextSize;
      }
    }
    v14 = (((v8 + 15) & 0xFFF0) + ((ExtraSize + 15) & 0xFFF0) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = v14 + 48;
    v16 = v14 + 48 < v14;
    v29 = v14 + 48;
    v17 = -1073741675;
    if ( v16 )
    {
      v29 = -1LL;
      id = -1073741675;
      v31 = -1073741675;
LABEL_42:
      WPP_IFR_SF_DDxd(FxDriverGlobals, id, flags, Tag, v28, (unsigned __int16)v8, ExtraSize, flags, id);
      id = v31;
      v15 = v29;
LABEL_10:
      v17 = id;
      goto LABEL_11;
    }
    id = 0;
    v31 = 0;
    if ( !flags )
    {
LABEL_7:
      if ( id >= 0 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          v27 = v15 + 32;
          if ( v15 + 32 < v15 )
          {
            v15 = -1LL;
            v31 = -1073741675;
            v29 = -1LL;
            id = -1073741675;
          }
          else
          {
            v15 += 32LL;
            v29 = v27;
            id = 0;
            v31 = 0;
          }
        }
        if ( id >= 0 )
          goto LABEL_10;
      }
      goto LABEL_42;
    }
    v26 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v26 >= flags )
    {
      LOWORD(Tag) = v26 + v15;
      if ( v26 + v15 < v15 )
      {
        v15 = -1LL;
        id = -1073741675;
      }
      else
      {
        v15 += v26;
        id = 0;
      }
      v31 = id;
      v29 = v15;
      goto LABEL_7;
    }
  }
LABEL_11:
  if ( v17 < 0 )
    return 0LL;
LABEL_12:
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  v19 = FxPoolAllocator(FxDriverGlobals, (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks, PoolType, v15, v7, Caller);
  v20 = v19;
  if ( v19 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v19, 0, 0x20uLL);
      *((_DWORD *)v20 + 7) = 1146058822;
      v20 += 4;
    }
    if ( ObjectType == FxObjectTypeExternal )
    {
      v21 = (_QWORD *)((char *)v20 + (unsigned __int16)(((ExtraSize + 15) & 0xFFF0) + ((v8 + 15) & 0xFFF0)));
      v21[1] = 0LL;
      v21[2] = 0LL;
      v21[3] = 0LL;
      v21[4] = 0LL;
      v21[5] = 0LL;
      *v21 = v20;
      if ( Attributes )
      {
        v24 = Attributes->ContextTypeInfo;
        if ( v24 )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = v24->ContextSize;
          memset(v21 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v21[4] = Attributes->ContextTypeInfo;
      }
    }
  }
  return v20;
}
