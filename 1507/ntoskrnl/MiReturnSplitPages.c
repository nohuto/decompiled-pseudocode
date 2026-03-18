/*
 * XREFs of MiReturnSplitPages @ 0x14015FA8C
 * Callers:
 *     MiJoinBitmapPages @ 0x14021ED0C (MiJoinBitmapPages.c)
 *     MiEliminatePageTablesOfOnes @ 0x1407CB738 (MiEliminatePageTablesOfOnes.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiReturnSplitPages(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rdi
  unsigned __int64 v2; // rbx
  volatile signed __int32 *v3; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v5; // esi
  __int64 result; // rax

  v1 = a1;
  v2 = 0LL;
  if ( a1 )
  {
    do
    {
      v3 = *(volatile signed __int32 **)v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v5 = 0;
      while ( _interlockedbittestandset64(v1 + 6, 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
        while ( *((__int64 *)v1 + 3) < 0 );
      }
      *((_WORD *)v1 + 16) = 0;
      *((_QWORD *)v1 + 3) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(v1 + 0x16000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)v1 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  MiReturnResidentAvailable(v2);
  _InterlockedExchangeAdd64(&qword_14034F870, v2);
  result = MiReturnCommit((__int64)MiSystemPartition, v2);
  _InterlockedExchangeAdd64(&qword_14034FCE8, -(__int64)v2);
  return result;
}
