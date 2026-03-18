/*
 * XREFs of imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0070720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0076AA0 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        __int32 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  FxDevice *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  unsigned __int8 CurrentIrql; // cl
  FxPropertyType Offset; // [rsp+20h] [rbp-68h]
  FxDevice *pDevice; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDevice, (void *)Device, 0x1002u, v10);
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      Device,
      0xCu,
      0x38u,
      WPP_FxDeviceApi_cpp_Traceguids,
      DeviceProperty->Size,
      24,
      -1073741820);
    return -1073741820;
  }
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 1);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
    if ( FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType((_POOL_TYPE)PoolType, retaddr, m_Globals->Tag);
  }
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Type )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PropertyMemory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0, PoolType);
  if ( result >= 0 )
    return FxDevice::_AllocAndQueryPropertyEx(
             m_Globals,
             0LL,
             pDevice,
             DeviceProperty,
             Offset,
             (_POOL_TYPE)PoolType,
             PropertyMemoryAttributes,
             PropertyMemory,
             Type);
  return result;
}
