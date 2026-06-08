/*
 * XREFs of PepUpdateIdleStateWorker @ 0x1C0021690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepUpdateIdleStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _BYTE *DeviceExtension; // rbx
  __int64 v3; // rax
  PWDF_DRIVER_GLOBALS v4; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD10,
    0LL);
  v3 = WdfFunctions_01015;
  v4 = WdfDriverGlobals;
  DeviceExtension[1104] = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v3 + 2512))(v4, qword_1C000DD10);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 24),
    0LL);
  ((void (__fastcall *)(_BYTE *))qword_1C000E040)(DeviceExtension);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 24));
}
