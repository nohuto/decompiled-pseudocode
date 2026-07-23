/*
 * XREFs of ZwCancelIoFile @ 0x14017FB90
 * Callers:
 *     VfZwCancelIoFile @ 0x1407553DC (VfZwCancelIoFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
