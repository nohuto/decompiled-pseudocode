/*
 * XREFs of IoRegisterPlugPlayNotification_0 @ 0x1C000FEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoRegisterPlugPlayNotification_0(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  return IoRegisterPlugPlayNotification(
           EventCategory,
           EventCategoryFlags,
           EventCategoryData,
           DriverObject,
           CallbackRoutine,
           Context,
           NotificationEntry);
}
