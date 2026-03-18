/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0151500 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z @ 0x1C01504D4 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGGLOBAL *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGGLOBAL *v28; // rax
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+28h] [rbp-28h]
  __int64 v32; // [rsp+38h] [rbp-18h]
  int v33; // [rsp+40h] [rbp-10h]
  int v34; // [rsp+70h] [rbp+20h] BYREF
  bool v35; // [rsp+74h] [rbp+24h]

  HIDWORD(v31) = -1;
  v4 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v30;
  LODWORD(v32) = 257;
  v30 = 0LL;
  *(_QWORD *)((char *)&v31 + 4) = 0LL;
  LODWORD(v31) = 0;
  if ( a2 )
    v4 = a2;
  BYTE4(v32) = 0;
  v33 = 0;
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v4 + 8) |= 4u;
  v34 = 4;
  v35 = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2, a3, a4);
  v9 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
              (__int64)&v34,
              1LL);
  if ( (a1 & 1) == 0 )
  {
    v19 = WdLogNewEntry5_WdEvent(v8, v7, v10, v11);
    *(_QWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 32) = v9;
    WdLogEvent5_WdEvent(v19);
    return (unsigned int)v9;
  }
  *(_QWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  v12 = DXGGLOBAL::GetGlobal(v8, v7, v10, v11);
  v13 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v12,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v4,
          1LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v20 + 24) = v9;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v9;
  }
  if ( *(_DWORD *)v4 )
  {
    if ( *(_DWORD *)v4 > 1u )
    {
      if ( *((_DWORD *)v4 + 2) )
        *((_DWORD *)v4 + 8) |= 2u;
      v34 = 5;
      v35 = 0;
      v29 = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
      LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)v29,
                      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                      (__int64)&v34,
                      1LL);
    }
    return (unsigned int)v9;
  }
  if ( *((_DWORD *)v4 + 2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = 2922LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *((_DWORD *)v4 + 8) |= 1u;
  v22 = *((unsigned int *)v4 + 5);
  if ( (_DWORD)v22 != -1 )
  {
    LOBYTE(v34) = 0;
    LODWORD(v9) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v4 + 12,
                    v22,
                    5LL,
                    &v34,
                    v30,
                    v31,
                    *((_QWORD *)&v31 + 1),
                    v32,
                    v33);
    if ( (int)v9 < 0 || !(_BYTE)v34 )
    {
LABEL_20:
      if ( (a1 & 4) != 0 )
      {
        v28 = DXGGLOBAL::GetGlobal(v25, v24, v26, v27);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v28,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          1LL);
      }
      return (unsigned int)v9;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v4 + 25) = 0;
      goto LABEL_20;
    }
    return (unsigned int)v9;
  }
  v23 = WdLogNewEntry5_WdWarning(v15, v22, v16, v17);
  *(_QWORD *)(v23 + 24) = a1;
  WdLogEvent5_WdWarning(v23);
  return 3223191554LL;
}
