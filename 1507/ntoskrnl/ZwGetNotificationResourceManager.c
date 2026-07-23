/*
 * XREFs of ZwGetNotificationResourceManager @ 0x140180D50
 * Callers:
 *     VerifierZwGetNotificationResourceManager @ 0x14074259C (VerifierZwGetNotificationResourceManager.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(ResourceManagerHandle);
}
