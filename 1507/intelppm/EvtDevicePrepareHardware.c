/*
 * XREFs of EvtDevicePrepareHardware @ 0x1C0012000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 */

__int64 __fastcall EvtDevicePrepareHardware(__int64 a1)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C000B018);
  *v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  v2[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, a1);
  v2[2] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  ProcLibDeviceStart(v2);
  return RegisterWmi(v2);
}
