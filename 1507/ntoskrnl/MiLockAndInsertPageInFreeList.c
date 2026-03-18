/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x14015F7F4
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiEnableNewPfns @ 0x1402128C8 (MiEnableNewPfns.c)
 *     MiFreeBootPageTable @ 0x1407C67D8 (MiFreeBootPageTable.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 *     MiFreeEmptyBootPageTable @ 0x1407FB334 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
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
  MiInsertPageInFreeOrZeroedList(v2, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
