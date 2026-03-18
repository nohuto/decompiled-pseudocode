/*
 * XREFs of MiDiscardTransitionPte @ 0x1401238C0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E0860 (MiReleaseCommitForResetPageCallback.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiSetPfnBlink @ 0x140107ACC (MiSetPfnBlink.c)
 */

PSLIST_ENTRY __fastcall MiDiscardTransitionPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  MiRestoreTransitionPte(a1, 0LL, a3, a4);
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
}
