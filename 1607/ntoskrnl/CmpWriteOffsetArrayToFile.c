/*
 * XREFs of CmpWriteOffsetArrayToFile @ 0x140604F5C
 * Callers:
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 * Callees:
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x14015AB50 (ZwFlushBuffersFile.c)
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 */

int __fastcall CmpWriteOffsetArrayToFile(__int64 a1, unsigned int a2, __int64 a3, int a4, HANDLE FileHandle)
{
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v12 = 0;
  v11 = a4;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v11, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    if ( CmpDoFileWrite(v9, v8, FileHandle, a3, a2, &v13, 0) )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
    else
      return -1073741491;
  }
  return result;
}
