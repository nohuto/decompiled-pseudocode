/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0155734 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z @ 0x1C01537E8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(__int64 a1, struct MONITORSCOUNT_CALLBACK_CONTEXT *a2)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v2; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct DXGGLOBAL *v23; // rax
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+3Ch] [rbp-24h]
  int v28; // [rsp+44h] [rbp-1Ch]
  int v29; // [rsp+48h] [rbp-18h]
  __int16 v30; // [rsp+4Ch] [rbp-14h]
  int v31; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+80h] [rbp+20h] BYREF
  bool v33; // [rsp+84h] [rbp+24h]

  v28 = -1;
  v2 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v25;
  v29 = 257;
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0;
  if ( a2 )
    v2 = a2;
  v30 = 0;
  v31 = 0;
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v2 + 8) |= 4u;
  v32 = 4;
  v33 = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v7 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
              (__int64)&v32,
              1);
  if ( (a1 & 1) == 0 )
  {
    v17 = WdLogNewEntry5_WdEvent(v6, v5, v8, v9);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = v7;
    WdLogEvent5_WdEvent(v17);
    return (unsigned int)v7;
  }
  *(_QWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 0;
  v10 = DXGGLOBAL::GetGlobal(v6);
  v11 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v10,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v2,
          1);
  v7 = v11;
  if ( v11 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v7;
  }
  if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 > 1u )
    {
      if ( *((_DWORD *)v2 + 2) )
        *((_DWORD *)v2 + 8) |= 2u;
      v32 = 5;
      v33 = 0;
      v24 = DXGGLOBAL::GetGlobal(v13);
      LODWORD(v7) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)v24,
                      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                      (__int64)&v32,
                      1);
    }
    return (unsigned int)v7;
  }
  if ( *((_DWORD *)v2 + 2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v19 + 24) = 3030LL;
    WdLogEvent5_WdAssertion(v19);
  }
  *((_DWORD *)v2 + 8) |= 1u;
  v20 = *((unsigned int *)v2 + 5);
  if ( (_DWORD)v20 != -1 )
  {
    LOBYTE(v15) = *((_BYTE *)v2 + 29);
    LOBYTE(v32) = 0;
    LODWORD(v7) = DisplayConfigHelperCreateSimulateMonitor((char *)v2 + 12, v20, 5LL, v15, &v32);
    if ( (int)v7 < 0 || !(_BYTE)v32 )
    {
LABEL_20:
      if ( (a1 & 4) != 0 )
      {
        v23 = DXGGLOBAL::GetGlobal(v22);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v23,
          (__int64 (__fastcall *)(_QWORD *, __int64))sub_1C01557F0,
          0LL,
          1);
      }
      return (unsigned int)v7;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v2 + 25) = 0;
      goto LABEL_20;
    }
    return (unsigned int)v7;
  }
  v21 = WdLogNewEntry5_WdWarning(v13, v20, v14, v15);
  *(_QWORD *)(v21 + 24) = a1;
  WdLogEvent5_WdWarning(v21);
  return 3223191554LL;
}
