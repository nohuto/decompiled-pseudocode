/*
 * XREFs of VerifierIoRegisterPlugPlayNotification @ 0x140741FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  return pXdvIoRegisterPlugPlayNotification(
           EventCategory,
           EventCategoryFlags,
           EventCategoryData,
           DriverObject,
           CallbackRoutine,
           Context,
           NotificationEntry);
}
