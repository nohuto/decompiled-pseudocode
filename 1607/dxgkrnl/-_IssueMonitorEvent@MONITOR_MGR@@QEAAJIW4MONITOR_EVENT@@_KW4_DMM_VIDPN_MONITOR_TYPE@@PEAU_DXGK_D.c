/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089560 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2BAC (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F38CC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF4DC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01B0318 (MonitorEnableDisableTargetAsHMD.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  LIST_ENTRY *i; // rdi
  __int64 v10; // rcx
  const GUID *v12; // r9
  GUID *p_ActivityId; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+40h] [rbp-A9h] BYREF
  int v20; // [rsp+48h] [rbp-A1h] BYREF
  int v21; // [rsp+4Ch] [rbp-9Dh] BYREF
  __int64 v22; // [rsp+50h] [rbp-99h] BYREF
  __int64 v23; // [rsp+58h] [rbp-91h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-79h] BYREF
  unsigned int *v26; // [rsp+90h] [rbp-59h]
  __int64 v27; // [rsp+98h] [rbp-51h]
  __int64 *v28; // [rsp+A0h] [rbp-49h]
  __int64 v29; // [rsp+A8h] [rbp-41h]
  int *v30; // [rsp+B0h] [rbp-39h]
  __int64 v31; // [rsp+B8h] [rbp-31h]
  __int64 *v32; // [rsp+C0h] [rbp-29h]
  __int64 v33; // [rsp+C8h] [rbp-21h]
  int *v34; // [rsp+D0h] [rbp-19h]
  __int64 v35; // [rsp+D8h] [rbp-11h]

  v7 = a3;
  v19 = a2;
  v22 = a4;
  if ( !a3 || a3 == 7 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C00568C0 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00568C0, 0x400000000080uLL) )
      {
        v27 = 4LL;
        v26 = &v19;
        v23 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 268LL);
        v28 = &v23;
        v30 = &v20;
        v32 = &v22;
        v34 = &v21;
        v29 = 8LL;
        v20 = v7;
        v31 = 4LL;
        v33 = 8LL;
        v21 = a5;
        v35 = 4LL;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C00568C0, &unk_1C003E1B2, p_ActivityId, v12, 7u, &pData);
      }
    }
  }
  if ( (unsigned int)v7 > 3 && (unsigned int)(v7 - 7) > 3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  KeAcquireGuardedMutex(a1 + 4);
  for ( i = a1[2].Event.Header.WaitListHead.Flink; ; i = i->Flink )
  {
    if ( i == &a1[2].Event.Header.WaitListHead )
      i = 0LL;
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v18);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !i )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int, __int64))i[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v19,
           i[1].Blink,
           (unsigned int)v7,
           v22,
           a5,
           a6) < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v16[3] = i[1].Flink;
      v16[4] = i[1].Blink;
      v16[5] = v7;
      v16[6] = v19;
      WdLogEvent5_WdError(v16);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v17);
    }
    KeAcquireGuardedMutex(a1 + 4);
  }
  return 0LL;
}
