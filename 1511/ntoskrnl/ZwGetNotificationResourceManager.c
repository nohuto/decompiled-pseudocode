/*
 * XREFs of ZwGetNotificationResourceManager @ 0x1401523A0
 * Callers:
 *     VerifierZwGetNotificationResourceManager @ 0x1406C0D5C (VerifierZwGetNotificationResourceManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, TransactionNotification, *(_QWORD *)&NotificationLength);
}
