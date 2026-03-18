/*
 * XREFs of CiSchedulerRemoveDeadline @ 0x1C0001A40
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00019E0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001C70 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0001D60 (CiSchedulerThreadFunction.c)
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
