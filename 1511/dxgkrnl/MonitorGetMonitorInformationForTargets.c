/*
 * XREFs of MonitorGetMonitorInformationForTargets @ 0x1C00A57EC
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A2170 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetMonitorInformationForTargets(__int64 a1, __int64 a2, void *a3, int a4)
{
  __int64 v5; // rax
  MONITOR_MGR *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a1 && CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback )
  {
    v5 = *(_QWORD *)(a1 + 1984);
    if ( !v5 )
    {
      v8 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v8 + 24) = a1;
      WdLogEvent5_WdError(v8);
      return 3221226021LL;
    }
    v6 = *(MONITOR_MGR **)(v5 + 120);
    if ( v6 )
      return MONITOR_MGR::_GetMonitorInformationForTargets(
               v6,
               (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
               a3,
               a4);
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
  }
  return 3221225485LL;
}
