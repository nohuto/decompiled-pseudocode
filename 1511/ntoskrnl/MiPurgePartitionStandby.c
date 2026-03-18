/*
 * XREFs of MiPurgePartitionStandby @ 0x14011236C
 * Callers:
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     MiPurgeTransitionList @ 0x1401E4210 (MiPurgeTransitionList.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 2048LL);
    v8 = v5;
    if ( v5 == -1 )
      break;
    v9 = 48 * v5 - 0x58000000000LL;
    MiLockPageAtDpcInline(v9, v6, v7);
    *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v8, 2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
