/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001AF0 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfMemoryCreate @ 0x1C00029F0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRequestCreate @ 0x1C0006160 (imp_WdfRequestCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C00156C0 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0016240 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0016680 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfInterruptCreate @ 0x1C00188E0 (imp_WdfInterruptCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0018BD0 (imp_WdfRegistryQueryMultiString.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0019178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfTimerCreate @ 0x1C0019540 (imp_WdfTimerCreate.c)
 *     imp_WdfDriverCreate @ 0x1C0019790 (imp_WdfDriverCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C001B570 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C001B830 (imp_WdfSpinLockCreate.c)
 *     imp_WdfWaitLockCreate @ 0x1C001BA70 (imp_WdfWaitLockCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C001BCD0 (imp_WdfWorkItemCreate.c)
 *     imp_WdfObjectCreate @ 0x1C001C530 (imp_WdfObjectCreate.c)
 *     imp_WdfDeviceCreate @ 0x1C001ED00 (imp_WdfDeviceCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C002F270 (imp_WdfIoTargetCreate.c)
 *     imp_WdfStringCreate @ 0x1C0030FE0 (imp_WdfStringCreate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0033F00 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0035700 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00358B0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0036CD0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0036D80 (imp_WdfDeviceOpenRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0036E70 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfIoQueueCreate @ 0x1C0037D20 (imp_WdfIoQueueCreate.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C00382F0 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C003A3D0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C003B110 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C003C380 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C003CF80 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C0068D60 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0069D10 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfDpcCreate @ 0x1C006F700 (imp_WdfDpcCreate.c)
 *     imp_WdfChildListCreate @ 0x1C006F980 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C00764B0 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0077870 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C007A040 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C007A420 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfLookasideListCreate @ 0x1C007AA40 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C007C5B8 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfIoResourceListCreate @ 0x1C00830F0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0084130 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0084350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C00873D0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C00898B0 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C008AB50 (imp_WdfUsbInterfaceSelectSetting.c)
 *     FxUsbTargetDeviceCreate @ 0x1C008ACEC (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C008B230 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008BD80 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008F3CC (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008F5F4 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     VfAllocateContext @ 0x1C00D2048 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLd @ 0x1C002FA34 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qiid @ 0x1C006F424 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0080CA8 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqid @ 0x1C0080E38 (WPP_IFR_SF_qqid.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags,
        unsigned __int16 a4)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL _a3; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  void *ParentObject; // rcx
  unsigned __int64 ContextSize; // r11
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  int globals; // [rsp+40h] [rbp-18h]

  if ( Attributes )
  {
    if ( Attributes->Size != 56 )
    {
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
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
        (unsigned __int8)Attributes,
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
                (unsigned __int8)Attributes,
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
                (unsigned __int8)Attributes,
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
