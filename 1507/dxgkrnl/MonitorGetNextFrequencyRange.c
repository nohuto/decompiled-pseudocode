/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C0099C20
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00987A0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGMONITOR *v11; // rdi
  struct DXGMONITOR *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v20);
  if ( (int)result >= 0 )
  {
    v11 = v20;
    if ( !v20 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    if ( a2 )
    {
      v14 = (_QWORD *)((char *)v11 + 208);
      v15 = (_QWORD *)*((_QWORD *)v11 + 26);
      if ( v15 == (_QWORD *)((char *)v11 + 208) )
      {
LABEL_22:
        v19 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v19 + 24) = a2;
        *(_QWORD *)(v19 + 32) = v11;
        WdLogEvent5_WdError(v19);
        v17 = -1071774928;
        goto LABEL_18;
      }
      v16 = (_QWORD *)(a2 + 48);
      while ( v15 != v16 )
      {
        if ( v14 == v15 )
          goto LABEL_22;
        v15 = (_QWORD *)*v15;
      }
      if ( (_QWORD *)*v16 != v14 )
      {
        v13 = *v16 - 48LL;
LABEL_9:
        if ( v13 )
        {
          *a3 = v13;
LABEL_11:
          ExReleaseResourceLite((PERESOURCE)((char *)v11 + 240));
          KeLeaveCriticalRegion();
          return v3;
        }
      }
    }
    else
    {
      v12 = (struct DXGMONITOR *)*((_QWORD *)v11 + 26);
      if ( v12 != (struct DXGMONITOR *)((char *)v11 + 208) )
      {
        v13 = (__int64)v12 - 48;
        goto LABEL_9;
      }
    }
    v17 = 1075708748;
LABEL_18:
    v3 = v17;
    goto LABEL_11;
  }
  return result;
}
