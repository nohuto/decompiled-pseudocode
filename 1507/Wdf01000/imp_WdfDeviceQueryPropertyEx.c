/*
 * XREFs of imp_WdfDeviceQueryPropertyEx @ 0x1C0071740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C007600C (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *RequiredSize,
        unsigned int *Type)
{
  FxDevice *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int _a2; // edx
  int v13; // edi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v16; // r9
  FxPropertyType Offset; // [rsp+20h] [rbp-48h]
  FxDevice *pDevice; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

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
  _a2 = DeviceProperty->Size;
  if ( DeviceProperty->Size != 24 )
  {
    v13 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, _a2, 0xCu, 0x35u, WPP_FxDeviceApi_cpp_Traceguids, _a2, 24, -1073741820);
    return v13;
  }
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 1u) )
  {
    if ( !RequiredSize )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( !Type )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( BufferLength )
    {
      if ( !PropertyBuffer )
      {
        v16 = 54;
LABEL_27:
        v13 = -1073741811;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v16, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
        return v13;
      }
    }
    else if ( PropertyBuffer )
    {
      v16 = 55;
      goto LABEL_27;
    }
    return FxDevice::_QueryPropertyEx(
             m_Globals,
             0LL,
             v9,
             DeviceProperty,
             Offset,
             BufferLength,
             PropertyBuffer,
             RequiredSize,
             Type);
  }
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
