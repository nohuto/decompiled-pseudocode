/*
 * XREFs of MiDiscardTransitionPte @ 0x140123E30
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
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
