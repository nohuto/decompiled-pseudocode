/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x1401801B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
