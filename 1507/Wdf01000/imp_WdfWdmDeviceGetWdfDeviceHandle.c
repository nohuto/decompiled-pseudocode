/*
 * XREFs of imp_WdfWdmDeviceGetWdfDeviceHandle @ 0x1C002FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  __int64 v2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v2 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  if ( *(_WORD *)(v2 + 10) )
    return (WDFDEVICE__ *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
