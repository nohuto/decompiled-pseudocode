/*
 * XREFs of ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007D580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18007DE80 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::OnHandleDeviceStateChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager *Context,
        PTP_WORK Work)
{
  CMonitorManager::ProcessDeviceStateChanged(Context);
  if ( Context )
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)Context + 16LL))(Context);
}
