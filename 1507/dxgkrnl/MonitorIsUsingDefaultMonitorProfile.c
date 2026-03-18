/*
 * XREFs of MonitorIsUsingDefaultMonitorProfile @ 0x1C0182748
 * Callers:
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C01792A0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsUsingDefaultMonitorProfile(struct HDXGMONITOR__ *a1, bool *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGMONITOR *v8; // rdi
  __int64 v9; // rax
  struct DXGMONITOR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v10);
  if ( (int)result >= 0 )
  {
    v8 = v10;
    if ( !v10 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 240), 1u);
    *a2 = (*((_BYTE *)v8 + 24) & 8) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v8 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
