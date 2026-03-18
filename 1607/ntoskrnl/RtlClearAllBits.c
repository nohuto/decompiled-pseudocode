/*
 * XREFs of RtlClearAllBits @ 0x14008487C
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     HvResetUnreconciledData @ 0x14047E8D0 (HvResetUnreconciledData.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x140480374 (CmCheckRegistry.c)
 *     MiInitializePrivateFixupBitmap @ 0x1404809D0 (MiInitializePrivateFixupBitmap.c)
 *     HvResetDirtyData @ 0x140481C90 (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x14048218C (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14054847C (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x140567FC0 (MmStoreRegister.c)
 *     MiExpandPartitionIds @ 0x1406603B4 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14069AAD8 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1406A834C (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x140708620 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1407257D8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5)));
}
