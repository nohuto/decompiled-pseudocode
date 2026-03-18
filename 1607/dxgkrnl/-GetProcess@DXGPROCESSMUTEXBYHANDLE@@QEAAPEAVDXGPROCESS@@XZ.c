/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00CDED0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00CDF90 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatistics @ 0x1C014FEC0 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01504E0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01529E0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C0153870 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0174110 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0174250 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkTrimProcessCommitment @ 0x1C0174760 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !*((_BYTE *)this + 28) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 1106LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1107LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
