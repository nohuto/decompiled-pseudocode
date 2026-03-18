/*
 * XREFs of Controller_InUseByDebugger @ 0x1C00094D0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009270 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_LPEEnterExitCallback @ 0x1C001F190 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) >> 25) & 1;
}
