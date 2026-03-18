/*
 * XREFs of HUBPDO_EvtDeviceQueryRemove @ 0x1C00674B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceQueryRemove(__int64 a1)
{
  _InterlockedOr(
    (volatile signed __int32 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_1C0058070)
                              + 32),
    0x800u);
  return 0LL;
}
