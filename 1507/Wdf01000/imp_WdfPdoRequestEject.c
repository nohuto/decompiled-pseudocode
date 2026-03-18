/*
 * XREFs of imp_WdfPdoRequestEject @ 0x1C00657D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C002BAE8 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, FxDevice **Device)
{
  int PdoPackageFromDeviceHandle; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _FX_DRIVER_GLOBALS *v5; // rbx
  FxDevice **OutDevice; // [rsp+28h] [rbp-8h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+10h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+20h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+28h] BYREF

  PdoPackageFromDeviceHandle = GetPdoPackageFromDeviceHandle(
                                 (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
                                 (unsigned __int64)Device,
                                 "imp_WdfPdoRequestEject",
                                 &pPkgPdo,
                                 &pFxDriverGlobals,
                                 &pDevice);
  if ( PdoPackageFromDeviceHandle < 0 )
  {
    v5 = pFxDriverGlobals;
    WPP_IFR_SF_d(pFxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxDevicePdoAPI_cpp_Traceguids, PdoPackageFromDeviceHandle);
  }
  else
  {
    if ( pDevice->m_PdoKnown )
    {
      m_DeviceObject = pDevice->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
      if ( m_DeviceObject )
      {
        IoRequestDeviceEject(m_DeviceObject);
        return;
      }
    }
    OutDevice = Device;
    v5 = pFxDriverGlobals;
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxDevicePdoAPI_cpp_Traceguids, OutDevice);
  }
  LODWORD(pFxDriverGlobals) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( v5->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
