/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C00985A0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00CC8A8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00DF4EC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185CE8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C0185E3C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(struct _FAST_MUTEX *a1, unsigned int a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  const GUID *v7; // r9
  __int64 v8; // rcx
  LIST_ENTRY *Flink; // rdi
  bool i; // zf
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+40h] [rbp-91h] BYREF
  int v20; // [rsp+48h] [rbp-89h] BYREF
  int v21; // [rsp+4Ch] [rbp-85h] BYREF
  __int64 v22; // [rsp+50h] [rbp-81h] BYREF
  __int64 v23; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-71h] BYREF
  unsigned int *v25; // [rsp+80h] [rbp-51h]
  __int64 v26; // [rsp+88h] [rbp-49h]
  __int64 *v27; // [rsp+90h] [rbp-41h]
  __int64 v28; // [rsp+98h] [rbp-39h]
  int *v29; // [rsp+A0h] [rbp-31h]
  __int64 v30; // [rsp+A8h] [rbp-29h]
  __int64 *v31; // [rsp+B0h] [rbp-21h]
  __int64 v32; // [rsp+B8h] [rbp-19h]
  int *v33; // [rsp+C0h] [rbp-11h]
  __int64 v34; // [rsp+C8h] [rbp-9h]

  v6 = a3;
  v19 = a2;
  v22 = a4;
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v26 = 4LL;
    v25 = &v19;
    v13 = *((_QWORD *)a1->Owner + 2);
    v23 = *(_QWORD *)(v13 + 252);
    v27 = &v23;
    v29 = &v21;
    v31 = &v22;
    v33 = &v20;
    v28 = 8LL;
    v21 = v6;
    v30 = 4LL;
    v32 = 8LL;
    v20 = a5;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)v13, &unk_1C0030896, 0LL, v7, 7u, &pData);
  }
  if ( (unsigned int)v6 > 3 && (unsigned int)(v6 - 7) > 3 )
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
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  for ( i = Flink == &a1[2].Event.Header.WaitListHead; ; i = Flink == &a1[2].Event.Header.WaitListHead )
  {
    if ( i )
      Flink = 0LL;
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v18);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v19,
           Flink[1].Blink,
           (unsigned int)v6,
           v22,
           a5) < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v16[3] = Flink[1].Flink;
      v16[4] = Flink[1].Blink;
      v16[5] = v6;
      v16[6] = v19;
      WdLogEvent5_WdError(v16);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v17 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v17);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
  }
  return 0LL;
}
