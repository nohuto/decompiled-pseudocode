/*
 * XREFs of MiReleaseFreshPage @ 0x1400FCD50
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiCleanupPageTablePages @ 0x14021EA6C (MiCleanupPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MiFreeReadListPages @ 0x14049D6C4 (MiFreeReadListPages.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  char v5; // dl
  int v6; // eax
  __int64 result; // rax

  v2 = (a1 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 35) &= 0xCFu;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  v5 = 1;
  v6 = *(_DWORD *)(a1 + 16);
  *(_WORD *)(a1 + 32) = 0;
  if ( (v6 & 0x3E0) != 0 )
    v5 = 2;
  MiInsertPageInFreeOrZeroedList(v2, v5);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
