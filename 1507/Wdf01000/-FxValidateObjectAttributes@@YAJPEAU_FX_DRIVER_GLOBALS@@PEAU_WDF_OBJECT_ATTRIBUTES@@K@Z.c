/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0007710 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfIoQueueCreate @ 0x1C000AB00 (imp_WdfIoQueueCreate.c)
 *     imp_WdfDeviceCreate @ 0x1C000CD80 (imp_WdfDeviceCreate.c)
 *     imp_WdfObjectCreate @ 0x1C0012010 (imp_WdfObjectCreate.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0017710 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C001EBC0 (imp_WdfDeviceOpenRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfWaitLockCreate @ 0x1C001EEF0 (imp_WdfWaitLockCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C001F260 (imp_WdfWorkItemCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C0020B30 (imp_WdfIoTargetCreate.c)
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0023480 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfTimerCreate @ 0x1C0023E50 (imp_WdfTimerCreate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00242B0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C0025970 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0025B20 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C0029630 (imp_WdfInterruptCreate.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfCollectionCreate @ 0x1C002CFC0 (imp_WdfCollectionCreate.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C002D120 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfStringCreate @ 0x1C002D430 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C002DAF0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C002E9A0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C002FFA0 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0030590 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C005E310 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C00600C0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfChildListCreate @ 0x1C0065BB0 (imp_WdfChildListCreate.c)
 *     imp_WdfDpcCreate @ 0x1C0066780 (imp_WdfDpcCreate.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C006BAF0 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00700C0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C00703A0 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0070720 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0072FD0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007D2B0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C007D690 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfIoResourceListCreate @ 0x1C007E8E0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0082D70 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0086364 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0086910 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0087CC0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0088C20 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089D20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     VfAllocateContext @ 0x1C00CDD30 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qLd @ 0x1C0028BB8 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiid @ 0x1C0063FF0 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007A20C (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqid @ 0x1C007A398 (WPP_IFR_SF_qqid.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags,
        unsigned __int16 a4)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // r10
  unsigned __int64 ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL _a3; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // r10d
  void *ParentObject; // r10
  unsigned __int64 ContextSize; // r11
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  int globals; // [rsp+40h] [rbp-18h]

  if ( Attributes )
  {
    if ( Attributes->Size != 56 )
    {
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
        6u,
        0xBu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
      return 3221225476LL;
    }
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( !ContextTypeInfo )
      goto LABEL_6;
    if ( ((ContextTypeInfo->Size - 24) & 0xFFFFFFEF) != 0 )
    {
      WPP_IFR_SF_qqddd(
        FxDriverGlobals,
        (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
        6u,
        0xCu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ContextTypeInfo,
        ContextTypeInfo->Size,
        40,
        -1073741820);
      return 3221225476LL;
    }
    if ( ContextTypeInfo->ContextSize && !ContextTypeInfo->ContextName )
    {
      WPP_IFR_SF_qqid(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        Flags,
        a4,
        traceGuid,
        Attributes,
        ContextTypeInfo,
        ContextTypeInfo->ContextSize,
        globals);
    }
    else
    {
LABEL_6:
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        goto LABEL_7;
      if ( !ContextTypeInfo )
      {
        WPP_IFR_SF_qid(
          FxDriverGlobals,
          2u,
          6u,
          0xEu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextSizeOverride,
          -1071644151);
        return 3223323145LL;
      }
      ContextSize = ContextTypeInfo->ContextSize;
      if ( ContextSizeOverride < ContextSize )
      {
        WPP_IFR_SF_qiid(
          FxDriverGlobals,
          2u,
          6u,
          0xFu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextSizeOverride,
          ContextSize,
          -1071644151);
      }
      else
      {
LABEL_7:
        if ( (Flags & 1) != 0 )
        {
          ParentObject = Attributes->ParentObject;
          if ( ParentObject )
          {
            WPP_IFR_SF_qid(
              FxDriverGlobals,
              2u,
              6u,
              0x10u,
              WPP_FxValidateFunctions_cpp_Traceguids,
              Attributes,
              (__int64)ParentObject,
              -1071644145);
            return 3223323151LL;
          }
        }
        else if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
        {
          WPP_IFR_SF_qd(
            FxDriverGlobals,
            2u,
            0x12u,
            0x11u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            -1071644142);
          return 3223323154LL;
        }
        _a3 = Attributes->ExecutionLevel;
        if ( _a3 && _a3 <= WdfExecutionLevelDispatch )
        {
          SynchronizationScope = Attributes->SynchronizationScope;
          if ( SynchronizationScope && SynchronizationScope <= WdfSynchronizationScopeNone )
          {
            if ( (Flags & 4) != 0
              || SynchronizationScope == WdfSynchronizationScopeInheritFromParent
              || SynchronizationScope == WdfSynchronizationScopeNone )
            {
              if ( (Flags & 2) != 0 || _a3 == WdfExecutionLevelInheritFromParent )
                return 0LL;
              WPP_IFR_SF_qLd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x15u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                _a3,
                -1071644143);
              return 3223323153LL;
            }
            else
            {
              WPP_IFR_SF_qLd(
                FxDriverGlobals,
                (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
                6u,
                0x14u,
                WPP_FxValidateFunctions_cpp_Traceguids,
                Attributes,
                SynchronizationScope,
                -1071644144);
              return 3223323152LL;
            }
          }
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x13u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            SynchronizationScope,
            -1071644151);
        }
        else
        {
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x12u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            -1071644151);
        }
      }
    }
    return 3223323145LL;
  }
  if ( (Flags & 8) == 0 )
    return 0LL;
  WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, -1071644142);
  return 3223323154LL;
}
