/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x1400A0F7C
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplacePageOfProtoPool @ 0x1400A1EB0 (MiReplacePageOfProtoPool.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiConfirmPageIsZero @ 0x1400AD8D0 (MiConfirmPageIsZero.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiSwitchKstackPages @ 0x1400D85D0 (MiSwitchKstackPages.c)
 *     MiSwapStackPageNoDpc @ 0x1400D8BB0 (MiSwapStackPageNoDpc.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400F3D38 (MiUnlockNestedProtoPoolPage.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiSwapHardFaultPage @ 0x1401D54F0 (MiSwapHardFaultPage.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v5, a2, a3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
