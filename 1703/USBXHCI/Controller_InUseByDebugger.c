/*
 * XREFs of Controller_InUseByDebugger @ 0x1C0008488
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_LPEEnterExitCallback @ 0x1C001B580 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) >> 25) & 1;
}
