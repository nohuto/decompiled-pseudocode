/*
 * XREFs of NtNotifyChangeKey @ 0x14042C848
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     SepAdtRegNotificationCallback @ 0x14055C038 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405929F4 (SepAdtOpenRegAndSetupNotification.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __stdcall NtNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN Asynchroneous,
        PVOID ChangeBuffer,
        ULONG Length,
        BOOLEAN WatchSubtree)
{
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           Asynchroneous,
           ChangeBuffer,
           Length,
           WatchSubtree);
}
