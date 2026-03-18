/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001A10 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00087F0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfMemoryCreate @ 0x1C000D480 (imp_WdfMemoryCreate.c)
 *     imp_WdfDeviceCreate @ 0x1C001D4C0 (imp_WdfDeviceCreate.c)
 *     imp_WdfIoQueueCreate @ 0x1C001D870 (imp_WdfIoQueueCreate.c)
 *     imp_WdfDriverCreate @ 0x1C0020270 (imp_WdfDriverCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C0023660 (imp_WdfSpinLockCreate.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0023780 (imp_WdfDeviceOpenRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfWaitLockCreate @ 0x1C0023AD0 (imp_WdfWaitLockCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C0023D20 (imp_WdfWorkItemCreate.c)
 *     imp_WdfObjectCreate @ 0x1C0024530 (imp_WdfObjectCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C00248C0 (imp_WdfCollectionCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0024C10 (imp_WdfTimerCreate.c)
 *     imp_WdfIoTargetCreate @ 0x1C00253F0 (imp_WdfIoTargetCreate.c)
 *     imp_WdfStringCreate @ 0x1C00278F0 (imp_WdfStringCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0028310 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002A650 (imp_WdfDmaEnablerCreate.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C002DCA0 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C002DF70 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfInterruptCreate @ 0x1C002E980 (imp_WdfInterruptCreate.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C002F720 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0031564 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C00325E0 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x1C0033560 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0033E30 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C0034CF0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfDmaTransactionCreate @ 0x1C00581B0 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0059580 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfChildListCreate @ 0x1C005E9B0 (imp_WdfChildListCreate.c)
 *     imp_WdfDpcCreate @ 0x1C005F280 (imp_WdfDpcCreate.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0063E60 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00661E0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0066410 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0066C50 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0067450 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C00681E0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C00685B0 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0069FB4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0071140 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C0071350 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfIoResourceListCreate @ 0x1C0071DA0 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0074ED0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0077CD4 (FxUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0078200 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078C90 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0079600 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0079D50 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B404 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C007B624 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     VfAllocateContext @ 0x1C00B7B94 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLd @ 0x1C002D878 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiid @ 0x1C005CFE8 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqddd @ 0x1C006E1B0 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qqid @ 0x1C006E33C (WPP_IFR_SF_qqid.c)
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
