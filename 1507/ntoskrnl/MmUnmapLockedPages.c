/*
 * XREFs of MmUnmapLockedPages @ 0x1400ADB20
 * Callers:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x140085148 (MiUnlockFlushMdl.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x140218FB0 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140244CE0 (PspIumFreePhysicalPages.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1405B5120 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x1406F9F24 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     VerifierMmUnmapLockedPages @ 0x140753F50 (VerifierMmUnmapLockedPages.c)
 *     VfFillAllocatePagesForMdl @ 0x1407540D8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x1400ADA8C (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140226DF4 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v4; // ecx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp

  v4 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v4 = MiRetardMdl(MemoryDescriptorList);
  if ( BaseAddress <= MmHighestUserAddress )
  {
    MiUnmapLockedPagesInUserSpace(BaseAddress, MemoryDescriptorList);
  }
  else
  {
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    v5 = (unsigned __int64)BaseAddress - v4;
    v6 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    if ( (unsigned int)MiMappingHasIoTracker(v5) == 1 )
      MiZeroAndFlushPtes(v5, v6);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v6) = v6 + 1;
    if ( (dword_1403D00E0 & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_14034FC70, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
