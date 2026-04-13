/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800083D8
 * Callers:
 *     ??1?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ @ 0x18001A1A4 (--1-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AA50 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AB30 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180008250 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v4, retaddr, v5, (int)a4);
}
