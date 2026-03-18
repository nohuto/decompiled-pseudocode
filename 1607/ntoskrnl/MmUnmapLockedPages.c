/*
 * XREFs of MmUnmapLockedPages @ 0x140025D10
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     MiZeroPageWrite @ 0x14006B2E4 (MiZeroPageWrite.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14008EFFC (MiUnlockFlushMdl.c)
 *     MiFreePagesFromMdl @ 0x140099EF8 (MiFreePagesFromMdl.c)
 *     MiMapPageFileHash @ 0x140116930 (MiMapPageFileHash.c)
 *     SmFpFree @ 0x14011ADA8 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x14011E998 (SmKmUnlockMdl.c)
 *     MiPfCompleteCoalescedIo @ 0x140125BC0 (MiPfCompleteCoalescedIo.c)
 *     BgpFwFreeMemory @ 0x14012968C (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiFlushComplete @ 0x1401EAD40 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED6C8 (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x1402100F8 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140210218 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140222168 (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x140569090 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x1406B80B8 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1406B8494 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x140709458 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140025E08 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14009B608 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x1401E2EB0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1401FC9F0 (MiRemovePteTracker.c)
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
    MiReleasePtes(&qword_140327870, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v6);
  }
}
