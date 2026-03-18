/*
 * XREFs of imp_WdfDeviceAssignProperty @ 0x1C00733A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C0078EC8 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        unsigned int Type,
        unsigned int BufferLength,
        void *PropertyBuffer)
{
  unsigned __int8 v8; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v10; // edi
  FxPropertyType v12; // r8d
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v10 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v8, 0xCu, 0x39u, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v10;
  }
  v10 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v10 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v10;
  }
  if ( !BufferLength && PropertyBuffer )
  {
    v10 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x3Au, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
    return v10;
  }
  return FxDevice::AssignProperty(pDevice, DeviceProperty, v12, Type, BufferLength, PropertyBuffer);
}
