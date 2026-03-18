/*
 * XREFs of RtlClearAllBits @ 0x14001B168
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     HvResetDirtyData @ 0x14044D6FC (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x14044D860 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     HvResetUnreconciledData @ 0x14055A6AC (HvResetUnreconciledData.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     SepInitializeLowBoxNumberTable @ 0x14056C2F0 (SepInitializeLowBoxNumberTable.c)
 *     MiCaptureImageExceptionValues @ 0x140576874 (MiCaptureImageExceptionValues.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1406E99B8 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x14073D098 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x14075CC38 (BgpFwInitializeReservePool.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5)));
}
