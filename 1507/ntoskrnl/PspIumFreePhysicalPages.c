/*
 * XREFs of PspIumFreePhysicalPages @ 0x140244CE0
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _MDL *v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v4; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+8h]

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v4 = a1;
  CurrentIrql = 0;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.ByteCount = 4096;
  v2 = (struct _MDL *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x20u);
  if ( !v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PspIumFreeMappingLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PspIumFreeMappingLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PspIumFreeMappingLock);
    }
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PspIumFreeMappingLock, retaddr);
    else
      _InterlockedAnd64(&PspIumFreeMappingLock, 0LL);
    __writecr8(CurrentIrql);
  }
  else
  {
    MmUnmapLockedPages(v2, &MemoryDescriptorList);
  }
  MmFreePagesFromMdl(&MemoryDescriptorList);
}
