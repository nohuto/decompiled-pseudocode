/*
 * XREFs of PspIumFreePhysicalPages @ 0x140210044
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E3E60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 */

__int16 __fastcall PspIumFreePhysicalPages(__int64 a1)
{
  KIRQL v1; // di
  PVOID v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v5 = a1;
  MemoryDescriptorList.Next = 0LL;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  v2 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v2 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v2 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  MiFreePagesFromMdl((ULONG_PTR)v2, 0);
  if ( v2 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v2, 0x466D7356u, &MemoryDescriptorList);
    KeReleaseSpinLock(&PspIumFreeMappingLock, v1);
  }
  else
  {
    MmUnmapLockedPages(v2, &MemoryDescriptorList);
  }
  return MiFreePagesFromMdl((ULONG_PTR)&MemoryDescriptorList, 0);
}
