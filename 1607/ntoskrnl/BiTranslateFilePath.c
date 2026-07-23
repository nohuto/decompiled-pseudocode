/*
 * XREFs of BiTranslateFilePath @ 0x1406D5A34
 * Callers:
 *     BiCreateBootEntry @ 0x1406D40EC (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1406D45D0 (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x1406D4FD4 (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14015D7F0 (ZwTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14053C260 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14053C2AC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiTranslateFilePath(PFILE_PATH InputFilePath, ULONG OutputType, _FILE_PATH **a3)
{
  _FILE_PATH *v5; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  _FILE_PATH *PoolWithTag; // rax
  unsigned int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG OutputFilePathLength; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v7 = BiAcquirePrivilege(0x16u, (__int64)v11);
  if ( v7 >= 0 )
  {
    OutputFilePathLength = 0;
    v8 = ZwTranslateFilePath(InputFilePath, OutputType, 0LL, (ULONG)&OutputFilePathLength);
    v7 = v8;
    if ( v8 == -1073741789 )
    {
      PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, OutputFilePathLength, 0x4B444342u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
        v7 = ZwTranslateFilePath(InputFilePath, OutputType, PoolWithTag, (ULONG)&OutputFilePathLength);
      else
        v7 = -1073741670;
    }
    else if ( v8 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v11);
    if ( v7 < 0 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0x4B444342u);
    }
    else
    {
      *a3 = v5;
    }
  }
  return (unsigned int)v7;
}
