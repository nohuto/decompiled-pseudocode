/*
 * XREFs of MmGetPhysicalAddress @ 0x14002500C
 * Callers:
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 *     PopGetNextTable @ 0x14011347C (PopGetNextTable.c)
 *     BgpFwLibraryEnable @ 0x140126FDC (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140139B58 (HvlEnlightenProcessor.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB294 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC614 (HvlpSetupCachedHypercallPages.c)
 *     HvlpGetSecurePageList @ 0x1401C1F94 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401C2120 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401C22A8 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401C28CC (VslFinalizeLiveDumpInSk.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401C3268 (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1401C5F50 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401C6354 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401C8154 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401D0094 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1401D0674 (PnprRecopyAddress.c)
 *     SmEtwLogStoreCorruption @ 0x1402204F0 (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140222168 (SmPrepareForFatalPageError.c)
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x1403CD0C4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14054E4D8 (HvlInitializeProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626F48 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140025030 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
