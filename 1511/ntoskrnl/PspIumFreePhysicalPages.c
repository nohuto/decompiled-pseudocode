/*
 * XREFs of PspIumFreePhysicalPages @ 0x1401F6098
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401D37F4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401D3934 (MmUnmapReservedMapping.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1)
{
  KIRQL v1; // di
  struct _MDL *v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v4; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v4 = a1;
  MemoryDescriptorList.Next = 0LL;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  v2 = (struct _MDL *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v2 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v2 = (struct _MDL *)MmMapLockedPagesWithReservedMapping(
                          PspIumFreeMapping,
                          0x466D7356u,
                          &MemoryDescriptorList,
                          MmCached);
  }
  MmFreePagesFromMdl(v2);
  if ( v2 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v2, 0x466D7356u, &MemoryDescriptorList);
    KeReleaseSpinLock(&PspIumFreeMappingLock, v1);
  }
  else
  {
    MmUnmapLockedPages(v2, &MemoryDescriptorList);
  }
  MmFreePagesFromMdl(&MemoryDescriptorList);
}
