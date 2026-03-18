/*
 * XREFs of MiDiscardTransitionPte @ 0x14014AE5C
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 */

int __fastcall MiDiscardTransitionPte(__int64 a1)
{
  MiRestoreTransitionPte(a1, 0);
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
}
