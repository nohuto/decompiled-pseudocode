/*
 * XREFs of imp_WdfDeviceRetrieveDeviceName @ 0x1C0073D70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0017008 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF
  FxString *pString; // [rsp+68h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
    if ( pDevice->m_DeviceName.Buffer )
    {
      return (unsigned int)FxString::Assign(pString, &pDevice->m_DeviceName);
    }
    else
    {
      v7 = -1073741811;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741811);
    }
    return v7;
  }
  return result;
}
