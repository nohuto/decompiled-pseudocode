/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C00BF364
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00BEC0C (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rdi
  struct DXGMONITOR *v9; // rcx
  char *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18);
  if ( (int)result >= 0 )
  {
    v8 = v18;
    if ( !v18 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 240), 1u);
    if ( a2 )
    {
      v11 = (_QWORD *)((char *)v8 + 208);
      v12 = (_QWORD *)*((_QWORD *)v8 + 26);
      if ( v12 == (_QWORD *)((char *)v8 + 208) )
      {
LABEL_25:
        v17 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = v8;
        WdLogEvent5_WdError(v17);
        v15 = -1071774928;
        goto LABEL_19;
      }
      v13 = (_QWORD *)(a2 + 48);
      while ( v12 != v13 )
      {
        if ( v11 == v12 )
          goto LABEL_25;
        v12 = (_QWORD *)*v12;
      }
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v11 )
      {
        if ( v14 )
        {
          v10 = (char *)(v14 - 6);
LABEL_10:
          if ( v10 )
          {
            *a3 = v10;
LABEL_12:
            ExReleaseResourceLite((PERESOURCE)((char *)v8 + 240));
            KeLeaveCriticalRegion();
            return v3;
          }
          goto LABEL_18;
        }
LABEL_20:
        v10 = 0LL;
        goto LABEL_10;
      }
    }
    else
    {
      v9 = (struct DXGMONITOR *)*((_QWORD *)v8 + 26);
      if ( v9 != (struct DXGMONITOR *)((char *)v8 + 208) )
      {
        if ( v9 )
        {
          v10 = (char *)v9 - 48;
          goto LABEL_10;
        }
        goto LABEL_20;
      }
    }
LABEL_18:
    v15 = 1075708748;
LABEL_19:
    v3 = v15;
    goto LABEL_12;
  }
  return result;
}
