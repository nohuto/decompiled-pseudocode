/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001B7B8
 * Callers:
 *     ??1?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C588 (--1-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C6B4 (--1-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C7E0 (--1-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C90C (--1-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CA38 (--1-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CB64 (--1-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CC90 (--1-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CDBC (--1-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CEE8 (--1-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DBC4 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18001B630 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, (unsigned int)a2, a3, (__int64)a4, v4, retaddr, v5, (int)a4);
}
