/*
 * XREFs of NtNotifyChangeKey @ 0x140499C68
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140497FF8 (SepAdtRegNotificationCallback.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14052EE38 (SepAdtOpenRegAndSetupNotification.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
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
