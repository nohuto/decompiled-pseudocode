/*
 * XREFs of ZwCancelIoFile @ 0x1401511C0
 * Callers:
 *     VfZwCancelIoFile @ 0x1406D1814 (VfZwCancelIoFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
