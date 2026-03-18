/*
 * XREFs of MmGetPhysicalAddress @ 0x14010429C
 * Callers:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     PopGetNextTable @ 0x140118DF8 (PopGetNextTable.c)
 *     BgpFwLibraryEnable @ 0x14011BDB8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401AFDE4 (HvlpSetupCachedHypercallPages.c)
 *     HvlFinalizeLiveDumpInSk @ 0x1401B3014 (HvlFinalizeLiveDumpInSk.c)
 *     HvlpAddLiveDumpBufferChunk @ 0x1401B3598 (HvlpAddLiveDumpBufferChunk.c)
 *     HvlpGetSecurePageList @ 0x1401B54B8 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401B5648 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401B57D0 (HvlSetupLiveDumpBuffer.c)
 *     IoFreeDumpRange @ 0x1401B819C (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401B8568 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401BA328 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401C0B44 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1401C1130 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 *     SmEtwLogStoreCorruption @ 0x1402080D0 (SmEtwLogStoreCorruption.c)
 *     PopBuildMemoryImageHeader @ 0x14039F1FC (PopBuildMemoryImageHeader.c)
 *     PopWriteHiberPages @ 0x1403A0160 (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x1403A0E54 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403A1D5C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403A2D00 (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1405FD2D4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiScrubNonPagedPool @ 0x1406250D4 (MiScrubNonPagedPool.c)
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     HvlpInitializeIum @ 0x1407829C0 (HvlpInitializeIum.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1401042C0 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
