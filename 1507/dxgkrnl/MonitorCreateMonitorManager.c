/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C00C7D6C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C000D824 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  MONITOR_MGR *v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( a1 && a2 )
  {
    *a2 = 0LL;
    v7 = (MONITOR_MGR *)operator new[](0x308uLL, 0x4D677844u, (POOL_TYPE)512);
    if ( v7 )
      v12 = MONITOR_MGR::MONITOR_MGR(v7, a1);
    else
      v12 = 0LL;
    if ( v12 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v12;
      result = 0LL;
      *((_BYTE *)v12 + 4) = 1;
      *a2 = v12;
      return result;
    }
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)a1 + 2);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = a1;
    *(_QWORD *)(v13 + 32) = a2;
  }
  WdLogEvent5_WdError(v13);
  return 3221225485LL;
}
