/*
 * XREFs of ZwSetEaFile @ 0x140181E90
 * Callers:
 *     VfZwSetEaFile @ 0x140757E30 (VfZwSetEaFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
