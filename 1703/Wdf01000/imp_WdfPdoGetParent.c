/*
 * XREFs of imp_WdfPdoGetParent @ 0x1C0039AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C0039B20 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 */

WDFDEVICE__ *__fastcall imp_WdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  int _a1; // eax
  FxDevice *m_ParentDevice; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFDEVICE__ *result; // rax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+20h] BYREF

  _a1 = GetPdoPackageFromDeviceHandle(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          Device,
          "imp_WdfPdoGetParent",
          &pPkgPdo,
          &pFxDriverGlobals,
          &pDevice);
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(pFxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxDevicePdoAPI_cpp_Traceguids, _a1);
    return 0LL;
  }
  else
  {
    m_ParentDevice = pDevice->m_ParentDevice;
    m_ObjectSize = m_ParentDevice->m_ObjectSize;
    result = (WDFDEVICE__ *)((unsigned __int64)m_ParentDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      return 0LL;
  }
  return result;
}
