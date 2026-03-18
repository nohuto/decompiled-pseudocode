/*
 * XREFs of SmKmStoreFileDelete @ 0x1406991DC
 * Callers:
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140699E38 (SmcCacheCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140074CB8 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14015A160 (ZwSetInformationFile.c)
 */

__int64 __fastcall SmKmStoreFileDelete(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // si
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)a1;
  FileInformation = 1;
  v4 = v2;
  Status = ZwSetInformationFile(v3, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    Status = 0;
  IoSetThreadHardErrorMode(v4);
  return (unsigned int)Status;
}
