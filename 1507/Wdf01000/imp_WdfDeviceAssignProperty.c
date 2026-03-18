/*
 * XREFs of imp_WdfDeviceAssignProperty @ 0x1C00709A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C0075C50 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int Type,
        unsigned int BufferLength,
        void *PropertyBuffer)
{
  FxDevice *v8; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int _a2; // edx
  int v12; // edi
  unsigned __int8 CurrentIrql; // al
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LODWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  _a2 = DeviceProperty->Size;
  if ( DeviceProperty->Size != 24 )
  {
    v12 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, _a2, 0xCu, 0x39u, WPP_FxDeviceApi_cpp_Traceguids, _a2, 24, -1073741820);
    return v12;
  }
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql > 1u) )
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
  else
  {
    if ( !BufferLength && PropertyBuffer )
    {
      v12 = -1073741811;
      WPP_IFR_SF_d(m_Globals, 2u, BufferLength + 18, BufferLength + 58, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
      return v12;
    }
    return FxDevice::AssignProperty(v8, DeviceProperty, (FxPropertyType)Offset, Type, BufferLength, PropertyBuffer);
  }
}
