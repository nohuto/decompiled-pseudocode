/*
 * XREFs of CiSchedulerRemoveDeadline @ 0x1C00027C0
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00024B0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C00026F0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSchedulerRemoveDeadline(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1);
    if ( CiSchedulerTimerNode == a1 )
      CiSchedulerTimerNode = 2LL;
  }
  return result;
}
