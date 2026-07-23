/*
 * XREFs of KeFlushSingleTb @ 0x1401083A8
 * Callers:
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x14001F078 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiMapSinglePage @ 0x140107F04 (MiMapSinglePage.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     MiSwapStackPageNoDpc @ 0x1401098D4 (MiSwapStackPageNoDpc.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiClearPageFileHash @ 0x140123EB0 (MiClearPageFileHash.c)
 *     MiDbgReleaseAddress @ 0x14012CD4C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140148D38 (MiDbgUnTranslatePhysicalAddress.c)
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x1401FE050 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x1407977D0 (MxCopyPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DA4C (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     KxFlushSingleTb @ 0x1401084A0 (KxFlushSingleTb.c)
 *     HvlFlushSingleTb @ 0x1401C1404 (HvlFlushSingleTb.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
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
