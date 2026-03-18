/*
 * XREFs of MonitorIsUsingDefaultMonitorProfile @ 0x1C0186DF4
 * Callers:
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C017D700 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsUsingDefaultMonitorProfile(struct HDXGMONITOR__ *a1, bool *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rdi
  __int64 v6; // rax
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    if ( !v7 )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v6);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 240), 1u);
    *a2 = (*((_BYTE *)v5 + 24) & 8) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
