/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C00A6254
 * Callers:
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rdi
  struct DXGMONITOR *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v17);
  if ( (int)result >= 0 )
  {
    v8 = v17;
    if ( !v17 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 240), 1u);
    if ( a2 )
    {
      v11 = (_QWORD *)((char *)v8 + 208);
      v12 = (_QWORD *)*((_QWORD *)v8 + 26);
      if ( v12 == (_QWORD *)((char *)v8 + 208) )
      {
LABEL_22:
        v16 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v16 + 24) = a2;
        *(_QWORD *)(v16 + 32) = v8;
        WdLogEvent5_WdError(v16);
        v14 = -1071774928;
        goto LABEL_18;
      }
      v13 = (_QWORD *)(a2 + 48);
      while ( v12 != v13 )
      {
        if ( v11 == v12 )
          goto LABEL_22;
        v12 = (_QWORD *)*v12;
      }
      if ( (_QWORD *)*v13 != v11 )
      {
        v10 = *v13 - 48LL;
LABEL_9:
        if ( v10 )
        {
          *a3 = v10;
LABEL_11:
          ExReleaseResourceLite((PERESOURCE)((char *)v8 + 240));
          KeLeaveCriticalRegion();
          return v3;
        }
      }
    }
    else
    {
      v9 = (struct DXGMONITOR *)*((_QWORD *)v8 + 26);
      if ( v9 != (struct DXGMONITOR *)((char *)v8 + 208) )
      {
        v10 = (__int64)v9 - 48;
        goto LABEL_9;
      }
    }
    v14 = 1075708748;
LABEL_18:
    v3 = v14;
    goto LABEL_11;
  }
  return result;
}
