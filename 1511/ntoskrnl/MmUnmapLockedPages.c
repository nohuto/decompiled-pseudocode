/*
 * XREFs of MmUnmapLockedPages @ 0x14003A290
 * Callers:
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     MiZeroPageWrite @ 0x1400E0134 (MiZeroPageWrite.c)
 *     MiUnlockFlushMdl @ 0x1400E3A38 (MiUnlockFlushMdl.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x1401109B8 (SmKmUnlockMdl.c)
 *     MiPfCompleteCoalescedIo @ 0x140116FD4 (MiPfCompleteCoalescedIo.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1401E35D4 (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x1401F5F78 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1401F6098 (PspIumFreePhysicalPages.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x140538820 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x1405F7484 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x140675760 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140675B3C (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1406BD3E4 (ViFreeMapRegisterFile.c)
 *     VerifierMmUnmapLockedPages @ 0x1406D0484 (VerifierMmUnmapLockedPages.c)
 *     VfFillAllocatePagesForMdl @ 0x1406D060C (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1401E0BF8 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // ecx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int16 v7; // ax

  v3 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = MiRetardMdl(MemoryDescriptorList);
  if ( BaseAddress <= MmHighestUserAddress )
  {
    MiUnmapLockedPagesInUserSpace(BaseAddress, MemoryDescriptorList);
  }
  else
  {
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    v5 = (unsigned __int64)BaseAddress - v3;
    v6 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    v7 = MI_READ_PTE_LOCK_FREE(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v7 & 0x80u) == 0 )
      v7 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v7 & 0x200) != 0 )
      MiZeroAndFlushPtes(v5, v6);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v6) = v6 + 1;
    if ( (dword_1403810F0 & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_1402FF7B0, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
