/*
 * XREFs of PepUpdatePlatformStateWorker @ 0x1C00213D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     UpdateKernelPlatformStates @ 0x1C00054A8 (UpdateKernelPlatformStates.c)
 */

void __fastcall PepUpdatePlatformStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _QWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    DeviceExtension[24],
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9D0,
    0LL);
  byte_1C000DEC0 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9D0);
  UpdateKernelPlatformStates((__int64)DeviceExtension, 0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    DeviceExtension[24]);
}
