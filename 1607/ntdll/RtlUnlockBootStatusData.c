/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800898C0
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwFsControlFile @ 0x1800A6B40 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x1800A6D80 (ZwFlushBuffersFile.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &v4, 2u, 0LL, 0);
  ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  return NtClose(FileHandle);
}
