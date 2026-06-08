/*
 * XREFs of EvtDevicePrepareHardware @ 0x1C0013D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 */

__int64 __fastcall EvtDevicePrepareHardware(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  PWDF_DRIVER_GLOBALS v6; // rcx

  v2 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C000C048);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  v4 = WdfFunctions_01015;
  *v2 = v3;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v4 + 264))(WdfDriverGlobals, a1);
  v6 = WdfDriverGlobals;
  v2[1] = v5;
  v2[2] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(v6, a1);
  ProcLibDeviceStart(v2);
  return RegisterWmi(v2);
}
