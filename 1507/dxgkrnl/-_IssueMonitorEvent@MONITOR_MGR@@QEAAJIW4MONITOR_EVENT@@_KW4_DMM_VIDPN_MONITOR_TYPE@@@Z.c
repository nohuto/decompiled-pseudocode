/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C008D2C8 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00BE1D4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C01817EC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z @ 0x1C018192C (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C000A0EC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000A1C8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        __int64 a3,
        const GUID *a4,
        int a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  LIST_ENTRY *Flink; // rdi
  bool i; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+40h] [rbp-91h] BYREF
  int v25; // [rsp+48h] [rbp-89h] BYREF
  int v26; // [rsp+4Ch] [rbp-85h] BYREF
  const GUID *v27; // [rsp+50h] [rbp-81h] BYREF
  __int64 v28; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-71h] BYREF
  unsigned int *v30; // [rsp+80h] [rbp-51h]
  __int64 v31; // [rsp+88h] [rbp-49h]
  __int64 *v32; // [rsp+90h] [rbp-41h]
  __int64 v33; // [rsp+98h] [rbp-39h]
  int *v34; // [rsp+A0h] [rbp-31h]
  __int64 v35; // [rsp+A8h] [rbp-29h]
  const GUID **v36; // [rsp+B0h] [rbp-21h]
  __int64 v37; // [rsp+B8h] [rbp-19h]
  int *v38; // [rsp+C0h] [rbp-11h]
  __int64 v39; // [rsp+C8h] [rbp-9h]

  v6 = (int)a3;
  v24 = a2;
  v27 = a4;
  if ( (unsigned int)dword_1C0046830 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v31 = 4LL;
    v30 = &v24;
    v18 = *((_QWORD *)a1->Owner + 2);
    v28 = *(_QWORD *)(v18 + 252);
    v32 = &v28;
    v34 = &v26;
    v36 = &v27;
    v38 = &v25;
    v33 = 8LL;
    v26 = v6;
    v35 = 4LL;
    v37 = 8LL;
    v25 = a5;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)v18, &unk_1C00306A0, 0LL, a4, 7u, &pData);
  }
  if ( (unsigned int)v6 > 3 && (unsigned int)(v6 - 7) > 2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  for ( i = Flink == &a1[2].Event.Header.WaitListHead; ; i = Flink == &a1[2].Event.Header.WaitListHead )
  {
    if ( i )
      Flink = 0LL;
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v23);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, const GUID *, int))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v24,
           Flink[1].Blink,
           (unsigned int)v6,
           v27,
           a5) < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v21[3] = Flink[1].Flink;
      v21[4] = Flink[1].Blink;
      v21[5] = v6;
      v21[6] = v24;
      WdLogEvent5_WdError(v21);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v22);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
  }
  return 0LL;
}
