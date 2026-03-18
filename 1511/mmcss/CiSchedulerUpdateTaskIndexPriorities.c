/*
 * XREFs of CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001370
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00019E0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001D40 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerThreadFunction @ 0x1C0001D60 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C0001930 (CiSchedulerSetPriority.c)
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
