/*
 * XREFs of MmGetPhysicalAddress @ 0x140024B8C
 * Callers:
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     PopGetNextTable @ 0x1401139EC (PopGetNextTable.c)
 *     BgpFwLibraryEnable @ 0x14012754C (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC4F8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpGetSecurePageList @ 0x1401C1E78 (HvlpGetSecurePageList.c)
 *     HvlpSetupPageListIteration @ 0x1401C2004 (HvlpSetupPageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1401C218C (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401C27B0 (VslFinalizeLiveDumpInSk.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1401C314C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1401C5DF0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401C61F4 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401C7FF4 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x1401D04A0 (PnprRecopyAddress.c)
 *     SmEtwLogStoreCorruption @ 0x14022031C (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x1403CD0C4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626FFC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140024BB0 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
