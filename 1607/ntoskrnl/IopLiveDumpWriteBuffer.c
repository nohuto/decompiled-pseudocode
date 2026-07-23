/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x140627614
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x140627FE0 (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     SecureDump_Encrypt_DmpData @ 0x1401CB6A8 (SecureDump_Encrypt_DmpData.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v7 = Length;
  if ( !*(_BYTE *)(a5 + 640)
    || a6
    || (result = SecureDump_Encrypt_DmpData((__int64)Buffer, Length, (__int64)Buffer, Length, (unsigned __int64 *)&a5),
        (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, ByteOffset, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        ByteOffset->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
