/*
 * XREFs of imp_WdfCxDeviceInitAllocate @ 0x1C0079D90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     FxValiateCx @ 0x1C0079D24 (FxValiateCx.c)
 *     ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007E114 (-_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_WdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v4; // rbp
  WDFCXDEVICE_INIT *v5; // rbx
  WDFCXDEVICE_INIT *CxDeviceInit; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v4 = DeviceInit->DriverGlobals;
  v5 = 0LL;
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, DriverName) >= 0 && (int)FxVerifierCheckIrqlLevel(v4, 0) >= 0 )
  {
    CxDeviceInit = WDFCXDEVICE_INIT::_AllocateCxDeviceInit(DeviceInit);
    v5 = CxDeviceInit;
    if ( CxDeviceInit )
    {
      CxDeviceInit->ClientDriverGlobals = v4;
      CxDeviceInit->CxDriverGlobals = DriverName;
    }
  }
  return v5;
}
