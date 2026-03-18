/*
 * XREFs of ?MonitorInterfaceCallback@CMonitorPDO@@CAJPEAX0@Z @ 0x1C00AF4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorPDO::MonitorInterfaceCallback(
        const struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *NotificationStructure,
        CMonitorPDO *Context)
{
  return CMonitorPDO::MonitorInterfaceCallbackInternal(Context, NotificationStructure);
}
