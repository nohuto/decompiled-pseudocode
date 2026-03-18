/*
 * XREFs of VerifierZwGetNotificationResourceManager @ 0x14074259C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwGetNotificationResourceManager(
        HANDLE ResourceManagerHandle,
        PTRANSACTION_NOTIFICATION TransactionNotification,
        ULONG NotificationLength,
        PLARGE_INTEGER Timeout,
        PULONG ReturnLength,
        ULONG Asynchronous,
        ULONG_PTR AsynchronousContext)
{
  return pXdvZwGetNotificationResourceManager(
           ResourceManagerHandle,
           TransactionNotification,
           NotificationLength,
           Timeout,
           ReturnLength,
           Asynchronous,
           AsynchronousContext);
}
