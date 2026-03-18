/*
 * XREFs of imp_WdfDeviceQueryProperty @ 0x1C0025A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C0025D44 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        __int32 DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int Property; // eax
  unsigned int v12; // esi
  unsigned __int8 CurrentIrql; // r8
  FxDevice *pDevice; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+78h] [rbp+10h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
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
    FxObjectHandleGetPtrQI(v9, (void **)&pDevice, _a1, 0x1002u, Device);
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v17 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v17,
        m_Globals->Public.DriverName,
        (const char *)&v17);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( v9->m_Legacy )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x1Eu, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741808);
    return 3221225488LL;
  }
  Property = FxDevice::_QueryProperty(
               m_Globals,
               0LL,
               v9,
               0LL,
               (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
               BufferLength,
               PropertyBuffer,
               ResultLength);
  v12 = Property;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x1Fu, WPP_FxDeviceApi_cpp_Traceguids, _a1, DeviceProperty, Property);
  return v12;
}
