/*
 * XREFs of MiPurgePartitionStandby @ 0x140120EAC
 * Callers:
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401E9FC8 (MiTrimAllSystemPagableMemory.c)
 *     MiPurgeTransitionList @ 0x1401F378C (MiPurgeTransitionList.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 2048LL);
    v6 = v5;
    if ( v5 == -1 )
      break;
    v7 = 48 * v5 - 0x58000000000LL;
    MiLockPageAtDpcInline(v7);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v6, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
