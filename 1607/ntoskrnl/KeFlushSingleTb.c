/*
 * XREFs of KeFlushSingleTb @ 0x14010A628
 * Callers:
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x14001F4F8 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x1400267B0 (MiValidateInPage.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiMapSinglePage @ 0x14010A184 (MiMapSinglePage.c)
 *     MiTradeActivePage @ 0x14010B184 (MiTradeActivePage.c)
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 *     MiSwapStackPageNoDpc @ 0x14010BB54 (MiSwapStackPageNoDpc.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiClearPageFileHash @ 0x140123940 (MiClearPageFileHash.c)
 *     MiDbgReleaseAddress @ 0x14012C7DC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401487C8 (MiDbgUnTranslatePhysicalAddress.c)
 *     MmStealTopLevelPage @ 0x1401E36D8 (MmStealTopLevelPage.c)
 *     MiLargePageFault @ 0x1401EF82C (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x1401FE224 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14054E27C (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x1407977D0 (MxCopyPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DECC (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400E1020 (KiFlushViaHypervisor.c)
 *     KxFlushSingleTb @ 0x14010A720 (KxFlushSingleTb.c)
 *     HvlFlushSingleTb @ 0x1401C1520 (HvlFlushSingleTb.c)
 *     VmFlushTb @ 0x140223CE0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14022EB0C (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  bool IsSecureProcessFlush; // bp
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  if ( IsSecureProcessFlush || KiFlushViaHypervisor() )
  {
    if ( a3 )
      v9 = 0LL;
    else
      v9 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v7) = IsSecureProcessFlush;
    if ( KiKvaShadow )
      v9 = 0LL;
    result = HvlFlushSingleTb(v9, 0LL, v7, a1);
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  if ( VmTbFlushEnabled )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v11);
  }
  if ( ExTbFlushActive )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v11, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
