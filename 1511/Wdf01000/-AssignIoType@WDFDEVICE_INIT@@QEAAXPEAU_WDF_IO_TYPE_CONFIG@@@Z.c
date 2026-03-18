/*
 * XREFs of ?AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z @ 0x1C001C710
 * Callers:
 *     imp_WdfDeviceInitSetIoType @ 0x1C00338D0 (imp_WdfDeviceInitSetIoType.c)
 *     imp_WdfDeviceInitSetIoTypeEx @ 0x1C0063CA0 (imp_WdfDeviceInitSetIoTypeEx.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 */

void __fastcall WDFDEVICE_INIT::AssignIoType(WDFDEVICE_INIT *this, _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  _WDF_DEVICE_IO_TYPE _a1; // eax

  _a1 = IoTypeConfig->ReadWriteIoType;
  if ( _a1 && _a1 <= WdfDeviceIoDirect )
  {
    this->ReadWriteIoType = _a1;
  }
  else
  {
    WPP_IFR_SF_dd(this->DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInitKm_cpp_Traceguids, _a1, -1073741811);
    FxVerifierDbgBreakPoint(this->DriverGlobals);
  }
}
