/*
 * XREFs of MiPurgePartitionStandby @ 0x140144FC0
 * Callers:
 *     MiPurgeTransitionList @ 0x140144F88 (MiPurgeTransitionList.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  ULONG_PTR i; // rsi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = a2;
  result = MiRemoveLowestPriorityStandbyPage(a1, a2, a3, a4);
  for ( i = result; result != -1; i = result )
  {
    v8 = 48 * i - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(i, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    result = MiRemoveLowestPriorityStandbyPage(a1, v4, v11, v12);
  }
  return result;
}
