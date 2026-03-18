/*
 * XREFs of ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B2A18
 * Callers:
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01B1C80 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseAdditionalTiming(
        DXGMONITOR *this,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax

  if ( !a2 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 112);
  if ( v4 )
  {
    *((_DWORD *)this + 112) = v4 - 1;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this);
    WdLogEvent5_WdError(v5);
  }
  return 0LL;
}
