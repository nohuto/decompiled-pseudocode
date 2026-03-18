/*
 * XREFs of CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001DF0
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001480 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00024B0 (CiSchedulerCancelTaskIndexYield.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C0002400 (CiSchedulerSetPriority.c)
 */

__int64 __fastcall CiSchedulerUpdateTaskIndexPriorities(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v1 != i; v1 = (_QWORD *)*v1 )
    result = CiSchedulerSetPriority(v1 - 10);
  return result;
}
