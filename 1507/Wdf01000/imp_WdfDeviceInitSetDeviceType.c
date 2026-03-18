/*
 * XREFs of imp_WdfDeviceInitSetDeviceType @ 0x1C00300E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int DeviceType)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  DeviceInit->DeviceType = DeviceType;
}
