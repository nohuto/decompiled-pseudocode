/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x1405FD8EC
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x1405FDF28 (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     ZwWriteFile @ 0x140150720 (ZwWriteFile.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(void *a1, void *a2, ULONG a3, LARGE_INTEGER *a4)
{
  __int64 v5; // rdi
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v5 = a3;
  Status = ZwWriteFile(a1, 0LL, 0LL, 0LL, &IoStatusBlock, a2, a3, a4, 0LL);
  if ( Status >= 0 )
  {
    Status = IoStatusBlock.Status;
    if ( IoStatusBlock.Status >= 0 )
      a4->QuadPart += v5;
  }
  return (unsigned int)Status;
}
