/*
 * XREFs of ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001920 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0014578 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C00146A0 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@@PEAPEAVFxMemoryObject@@@Z @ 0x1C0014BAC (-_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0014EC8 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0015BB8 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0015CB0 (imp_WdfRegistryQueryMultiString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00162C8 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00163D0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfStringCreate @ 0x1C00164A0 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0016880 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0016960 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0016B60 (imp_WdfPdoInitAddHardwareID.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0017328 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfCollectionCreate @ 0x1C0019200 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019450 (imp_WdfSpinLockCreate.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0019654 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F96C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C002009C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002D380 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0030700 (imp_WdfDmaEnablerCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0030C3C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00398D0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0066580 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0068760 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0069B8C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C006A244 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C006D188 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0072B10 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0073A30 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x1C0076A70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0076EC0 (imp_WdfDeviceMiniportCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0078764 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C007B3CC (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C007E790 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E874 (FxIoResourceListInsertDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007EC40 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007FBB0 (imp_WdfRegistryCreateKey.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0087144 (FxUsbTargetDeviceCreate.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008879C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C008B16C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B514 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B734 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0092020 (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0096140 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00962E0 (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C009BA1C (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C009E624 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 */

_QWORD *__fastcall FxObjectHandleAlloc(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _POOL_TYPE PoolType,
        SIZE_T Size,
        ULONG Tag,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int16 ExtraSize,
        FxObjectType ObjectType)
{
  ULONG v7; // ebp
  _POOL_TYPE v9; // eax
  void *Caller; // r15
  unsigned __int64 v12; // r8
  unsigned __int64 flags; // rdx
  unsigned __int64 v14; // rax
  SIZE_T v15; // rcx
  int id; // ebx
  int v17; // eax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSizeOverride; // r8
  const _GUID *v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v7 = Tag;
  v9 = PoolType;
  if ( !Tag )
    v7 = FxDriverGlobals->Tag;
  Caller = 0LL;
  LODWORD(v12) = 65520;
  if ( ObjectType != FxObjectTypeInternal )
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
    v14 = ((int)(((Size + 15) & 0xFFF0) + ((ExtraSize + 15) & 0xFFF0)) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = v14 + 48;
    v26 = v14 + 48;
    if ( v14 + 48 < v14 )
    {
      v26 = -1LL;
      id = -1073741675;
    }
    else
    {
      id = 0;
      v17 = -1073741675;
      if ( flags )
      {
        v12 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v12 < flags )
          goto LABEL_11;
        LOWORD(Tag) = v12 + v15;
        if ( v12 + v15 < v15 )
        {
          v15 = -1LL;
          id = -1073741675;
        }
        else
        {
          v15 += v12;
        }
        v26 = v15;
      }
      if ( id >= 0 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          LODWORD(v12) = v15 + 32;
          if ( v15 + 32 < v15 )
          {
            v15 = -1LL;
            id = -1073741675;
          }
          else
          {
            v15 += 32LL;
            id = 0;
          }
          v26 = v15;
        }
        if ( id >= 0 )
          goto LABEL_10;
      }
    }
    WPP_IFR_SF_DDxd(FxDriverGlobals, flags, v12, Tag, v25, (unsigned __int16)Size, ExtraSize, flags, id);
    v15 = v26;
LABEL_10:
    v17 = id;
    goto LABEL_11;
  }
  if ( !FxDriverGlobals->FxVerifierHandle )
  {
    v15 = Size;
    goto LABEL_13;
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
LABEL_11:
  if ( v17 < 0 )
    return 0LL;
  v9 = PoolType;
LABEL_13:
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  v18 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v9, v15, v7, Caller);
  v19 = v18;
  if ( v18 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v18, 0, 0x20uLL);
      *((_DWORD *)v19 + 7) = 1146058822;
      v19 += 4;
    }
    if ( ObjectType == FxObjectTypeExternal )
    {
      v20 = (_QWORD *)((char *)v19 + (unsigned __int16)(((ExtraSize + 15) & 0xFFF0) + ((Size + 15) & 0xFFF0)));
      v20[1] = 0LL;
      v20[2] = 0LL;
      v20[3] = 0LL;
      v20[4] = 0LL;
      v20[5] = 0LL;
      *v20 = v19;
      if ( Attributes )
      {
        v23 = Attributes->ContextTypeInfo;
        if ( v23 )
        {
          ContextSizeOverride = Attributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = v23->ContextSize;
          memset(v20 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v20[4] = Attributes->ContextTypeInfo;
      }
    }
  }
  return v19;
}
