/*
 * XREFs of imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C006B200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfControlDeviceInitSetShutdownNotification(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *Notification)(WDFDEVICE__ *),
        unsigned __int8 Flags)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v4 = DeviceInit->DriverGlobals;
  if ( !Notification )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
  {
    if ( (Flags & 0xFC) == 0 )
    {
      DeviceInit->Control.Flags |= Flags;
      DeviceInit->Control.ShutdownNotification = Notification;
      return;
    }
    WPP_IFR_SF_D(v4, (unsigned __int8)DeviceInit, 0x12u, 0x49u, WPP_FxDeviceInitApi_cpp_Traceguids, Flags);
  }
  else
  {
    WPP_IFR_SF_(v4, 2u, 0x12u, 0x48u, WPP_FxDeviceInitApi_cpp_Traceguids);
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( v4->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
