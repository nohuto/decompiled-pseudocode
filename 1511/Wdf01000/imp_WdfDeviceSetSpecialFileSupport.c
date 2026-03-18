/*
 * XREFs of imp_WdfDeviceSetSpecialFileSupport @ 0x1C0031910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?_SpecialTypeToUsage@FxPkgPnp@@KA?AW4_DEVICE_USAGE_NOTIFICATION_TYPE@@W4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1C0033308 (-_SpecialTypeToUsage@FxPkgPnp@@KA-AW4_DEVICE_USAGE_NOTIFICATION_TYPE@@W4_WDF_SPECIAL_FILE_TYPE@@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C005E7E0 (WPP_IFR_SF_D.c)
 */

void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 FileType,
        unsigned __int8 Supported)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_USAGE_NOTIFICATION_TYPE v8; // eax
  __int64 v9; // rdx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (unsigned int)(FileType - 1) > 3 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
    v8 = FxPkgPnp::_SpecialTypeToUsage((_WDF_SPECIAL_FILE_TYPE)FileType);
    *(_BYTE *)((unsigned int)(v8 - 1) + v9 + 273) = Supported;
  }
}
