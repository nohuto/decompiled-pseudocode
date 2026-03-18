/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00DB1A0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 *     DxgkQueryStatistics @ 0x1C012B490 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C012BA90 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C012E080 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C012F410 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C014A300 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C014A420 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !*((_BYTE *)this + 25) )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 1102LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 1103LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
