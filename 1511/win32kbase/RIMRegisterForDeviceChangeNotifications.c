/*
 * XREFs of RIMRegisterForDeviceChangeNotifications @ 0x1C0010898
 * Callers:
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RIMRegisterForDeviceChangeNotifications(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        void *Context,
        PVOID *NotificationEntry)
{
  void *v5; // r8

  v5 = *(void **)(a1 + 224);
  if ( v5 )
    return IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             v5,
             a2,
             RIMDeviceNotify,
             Context,
             NotificationEntry);
  else
    return -1073741823;
}
