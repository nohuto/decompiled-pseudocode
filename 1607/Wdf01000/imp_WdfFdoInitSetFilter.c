/*
 * XREFs of imp_WdfFdoInitSetFilter @ 0x1C0038FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfFdoInitSetFilter(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v3, 2u, 0x12u, 0x28u, WPP_FxDeviceInitApi_cpp_Traceguids);
      FxVerifierDbgBreakPoint(v3);
    }
    else
    {
      DeviceInit->Fdo.Filter = 1;
    }
  }
}
