/*
 * XREFs of ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C0039B20
 * Callers:
 *     imp_WdfPdoGetParent @ 0x1C0039AC0 (imp_WdfPdoGetParent.c)
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C00701E0 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C0070250 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfPdoMarkMissing @ 0x1C00702A0 (imp_WdfPdoMarkMissing.c)
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C0070300 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoRequestEject @ 0x1C0070380 (imp_WdfPdoRequestEject.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x1C0070440 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x1C00704D0 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_sq @ 0x1C003A640 (WPP_IFR_SF_sq.c)
 */

__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  FxDevice *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // r10
  _FX_DRIVER_GLOBALS **v12; // r11
  FxDevice *pDevice; // [rsp+40h] [rbp-18h] BYREF

  FxObjectHandleGetPtr(CallersGlobals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  v9 = pDevice;
  *ObjectGlobals = pDevice->m_Globals;
  if ( OutDevice )
    *OutDevice = v9;
  if ( FxDevice::IsPdo(v9) )
  {
    *Package = *(FxPkgPdo **)(v11 + 648);
  }
  else
  {
    WPP_IFR_SF_sq(*v12, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, Device);
    return (unsigned int)-1073741811;
  }
  return v10;
}
