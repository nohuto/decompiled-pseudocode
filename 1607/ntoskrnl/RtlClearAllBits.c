/*
 * XREFs of RtlClearAllBits @ 0x1400829DC
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     HvResetUnreconciledData @ 0x14047D624 (HvResetUnreconciledData.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 *     MiInitializePrivateFixupBitmap @ 0x14047F724 (MiInitializePrivateFixupBitmap.c)
 *     HvResetDirtyData @ 0x1404809E4 (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x140480EE0 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405489BC (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1406A8484 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x140708650 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1407257D8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5)));
}
