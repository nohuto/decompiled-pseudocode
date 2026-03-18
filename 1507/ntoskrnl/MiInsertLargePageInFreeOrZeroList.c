/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x1400C65C0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiDemoteLargeFreePage @ 0x1401591E0 (MiDemoteLargeFreePage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiInsertLargePageInFreeOrZeroList(unsigned __int64 a1)
{
  ULONG_PTR v1; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 result; // rax

  v1 = (__int64)(a1 + 0x58000000000LL) / 48;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 < a1 + 24576 )
  {
    v3 = a1 + 24;
    v4 = 512LL;
    do
    {
      v5 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
        while ( (*(_QWORD *)v3 & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)v3, 0x3FuLL) );
      }
      *(_QWORD *)v3 &= 0xC000000000000000uLL;
      *(_QWORD *)(v3 + 16) &= 0xFFFFFFF000000000uLL;
      MiInsertPageInFreeOrZeroedList(v1);
      _InterlockedAnd64((volatile signed __int64 *)v3, 0x7FFFFFFFFFFFFFFFuLL);
      v3 += 48LL;
      ++v1;
      --v4;
    }
    while ( v4 );
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
