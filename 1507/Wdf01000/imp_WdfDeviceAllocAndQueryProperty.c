/*
 * XREFs of imp_WdfDeviceAllocAndQueryProperty @ 0x1C0025B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0025C18 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        __int32 DeviceProperty,
        __int32 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFDEVICE__ *v8; // rdi
  FxDevice *v9; // rcx
  WDFMEMORY__ **v10; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_OBJECT_ATTRIBUTES *v12; // rbp
  __int64 result; // rax
  int Property; // eax
  unsigned int v15; // esi
  unsigned __int8 CurrentIrql; // cl
  FxDevice *pDevice; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v19; // [rsp+88h] [rbp+10h] BYREF

  v8 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    Device = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - Device);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDevice, v8, 0x1002u, Device);
    v9 = pDevice;
  }
  v10 = PropertyMemory;
  m_Globals = v9->m_Globals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PropertyMemory = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v19 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v19,
        m_Globals->Public.DriverName,
        (const char *)&v19);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
    if ( FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType((_POOL_TYPE)PoolType, retaddr, m_Globals->Tag);
  }
  v12 = PropertyMemoryAttributes;
  result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0, PoolType);
  if ( (int)result < 0 )
    return result;
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x20u, WPP_FxDeviceApi_cpp_Traceguids, v8, -1073741808);
    return 3221225488LL;
  }
  Property = FxDevice::_AllocAndQueryProperty(
               m_Globals,
               0LL,
               pDevice,
               0LL,
               (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
               (_POOL_TYPE)PoolType,
               v12,
               v10);
  v15 = Property;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x21u, WPP_FxDeviceApi_cpp_Traceguids, v8, DeviceProperty, Property);
  return v15;
}
