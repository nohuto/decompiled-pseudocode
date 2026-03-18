/*
 * XREFs of KeFlushSingleTb @ 0x1400076D8
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiNoFaultFound @ 0x14000A164 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1400D8BB0 (MiSwapStackPageNoDpc.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 *     MiMapSinglePage @ 0x1400FE59C (MiMapSinglePage.c)
 *     MiClearPageFileHash @ 0x14011454C (MiClearPageFileHash.c)
 *     MiDbgReleaseAddress @ 0x1401DDCD4 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401DE068 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x1401E5AB4 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14052F734 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140747934 (MxCopyPage.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 * Callees:
 *     KxFlushSingleTb @ 0x1400077D0 (KxFlushSingleTb.c)
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushSingleTb @ 0x1402214D4 (HvlFlushSingleTb.c)
 */

__int64 __fastcall KeFlushSingleTb(__int64 a1, unsigned int a2, unsigned int a3)
{
  char IsSecureProcessFlush; // bp
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush();
  if ( IsSecureProcessFlush || (unsigned int)KiFlushViaHypervisor() )
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
