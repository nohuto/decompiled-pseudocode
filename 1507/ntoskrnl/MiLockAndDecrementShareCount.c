/*
 * XREFs of MiLockAndDecrementShareCount @ 0x1400EF4F4
 * Callers:
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400EE63C (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiReleaseInPageRefs @ 0x14012CE5C (MiReleaseInPageRefs.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 *     MiReturnDriverLoadPages @ 0x1407FB4F0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int IsZero; // esi
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  CurrentIrql = KeGetCurrentIrql();
  IsZero = 2;
  __writecr8(2uLL);
  v6 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (a1 + 0x58000000000LL) / 48,
      *(_BYTE *)(a1 + 34) & 7,
      *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = (v7 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(a1 + 24) = v7 ^ (v8 ^ v7) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v7 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    IsZero = MiPfnShareCountIsZero(a1, v8);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return IsZero;
}
