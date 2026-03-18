/*
 * XREFs of RtlClearAllBits @ 0x14001ABDC
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 *     HvResetUnreconciledData @ 0x1403CD990 (HvResetUnreconciledData.c)
 *     MiCaptureImageExceptionValues @ 0x1403CFF70 (MiCaptureImageExceptionValues.c)
 *     MiInitializePrivateFixupBitmap @ 0x1403D0478 (MiInitializePrivateFixupBitmap.c)
 *     HvResetDirtyData @ 0x1403D0520 (HvResetDirtyData.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14050D018 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1406667D0 (EtwpUpdateStackTracing.c)
 *     ViAllocateContiguousMemory @ 0x1406BC5AC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1406D9BF0 (BgpFwInitializeReservePool.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5)));
}
