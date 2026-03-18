/*
 * XREFs of imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure @ 0x1C0030830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int ReleaseHardwareOrderOnFailure)
{
  _FX_DRIVER_GLOBALS *v4; // rax
  __int64 v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( ReleaseHardwareOrderOnFailure && ReleaseHardwareOrderOnFailure <= 2 )
  {
    DeviceInit->ReleaseHardwareOrderOnFailure = ReleaseHardwareOrderOnFailure;
  }
  else
  {
    WPP_IFR_SF_d(
      DeviceInit->DriverGlobals,
      2u,
      0x12u,
      0x25u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      ReleaseHardwareOrderOnFailure);
    v4 = DeviceInit->DriverGlobals;
    v7 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v4->Public.DriverName,
      (const char *)&v7,
      v4->Public.DriverName,
      (const char *)&v7);
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
}
