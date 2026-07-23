/*
 * XREFs of MmUnmapLockedPages @ 0x140025890
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     MiZeroPageWrite @ 0x14006AE64 (MiZeroPageWrite.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008E75C (MiUnlockFlushMdl.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x14011EF08 (SmKmUnlockMdl.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED4F4 (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x14020FF24 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140210044 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1405695D0 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x1406B81F0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140025988 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1401FC81C (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp

  v4 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v4 = MiRetardMdl(MemoryDescriptorList);
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace(BaseAddress, MemoryDescriptorList);
  }
  else
  {
    v5 = (unsigned __int64)BaseAddress - v4;
    v6 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (unsigned int)MiMappingHasIoTracker(v5) == 1 )
      MiZeroAndFlushPtes(v5, v6);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v6) = v6 + 1;
    if ( (dword_1403A913C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_1403278B0, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
