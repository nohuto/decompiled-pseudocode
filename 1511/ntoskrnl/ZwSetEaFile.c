/*
 * XREFs of ZwSetEaFile @ 0x140153520
 * Callers:
 *     VfZwSetEaFile @ 0x1406D4268 (VfZwSetEaFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
