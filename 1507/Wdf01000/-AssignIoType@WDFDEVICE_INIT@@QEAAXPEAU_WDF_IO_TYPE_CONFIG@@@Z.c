/*
 * XREFs of ?AssignIoType@WDFDEVICE_INIT@@QEAAXPEAU_WDF_IO_TYPE_CONFIG@@@Z @ 0x1C000EF48
 * Callers:
 *     imp_WdfDeviceInitSetIoType @ 0x1C0030090 (imp_WdfDeviceInitSetIoType.c)
 *     imp_WdfDeviceInitSetIoTypeEx @ 0x1C006B900 (imp_WdfDeviceInitSetIoTypeEx.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

void __fastcall WDFDEVICE_INIT::AssignIoType(WDFDEVICE_INIT *this, _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  _WDF_DEVICE_IO_TYPE _a1; // eax
  _FX_DRIVER_GLOBALS *DriverGlobals; // rax
  __int64 v5; // rax
  int v6; // [rsp+58h] [rbp+10h] BYREF

  _a1 = IoTypeConfig->ReadWriteIoType;
  if ( _a1 && _a1 <= WdfDeviceIoDirect )
  {
    this->ReadWriteIoType = _a1;
  }
  else
  {
    WPP_IFR_SF_dd(this->DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceInitKm_cpp_Traceguids, _a1, -1073741811);
    DriverGlobals = this->DriverGlobals;
    v6 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      DriverGlobals->Public.DriverName,
      (const char *)&v6,
      DriverGlobals->Public.DriverName,
      (const char *)&v6);
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
}
