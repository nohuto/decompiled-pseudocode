/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00C2B40 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179FF4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178868 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct DXGGLOBAL *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct DXGGLOBAL *v22; // rax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  char v30; // [rsp+A0h] [rbp+30h] BYREF

  HIDWORD(v27) = -1;
  v3 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v26;
  LODWORD(v28) = 257;
  v26 = 0LL;
  *(_QWORD *)((char *)&v27 + 4) = 0LL;
  LODWORD(v27) = 0;
  if ( a2 )
    v3 = a2;
  WORD2(v28) = 0;
  v29 = 0;
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v3 + 8) |= 4u;
  LODWORD(v24) = 4;
  v25 = a3;
  BYTE4(v24) = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v8 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
              (__int64)&v24,
              1);
  if ( (a1 & 1) == 0 )
  {
    v16 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v16 + 24) = a1;
    *(_QWORD *)(v16 + 32) = v8;
    WdLogEvent5_WdEvent(v16);
    return (unsigned int)v8;
  }
  *(_QWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 0;
  v9 = DXGGLOBAL::GetGlobal(v7);
  v10 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v9,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v3,
          1);
  v8 = v10;
  if ( v10 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = v8;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 > 1u )
    {
      if ( *((_DWORD *)v3 + 2) )
        *((_DWORD *)v3 + 8) |= 2u;
      LODWORD(v24) = 5;
      BYTE4(v24) = 0;
      v25 = a3;
      v23 = DXGGLOBAL::GetGlobal(v12);
      LODWORD(v8) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)v23,
                      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                      (__int64)&v24,
                      1);
    }
    return (unsigned int)v8;
  }
  if ( *((_DWORD *)v3 + 2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v18 + 24) = 3069LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *((_DWORD *)v3 + 8) |= 1u;
  v19 = *((unsigned int *)v3 + 5);
  if ( (_DWORD)v19 != -1 )
  {
    LOBYTE(v14) = *((_BYTE *)v3 + 29);
    v30 = 0;
    LODWORD(v8) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v3 + 12,
                    v19,
                    5LL,
                    v14,
                    &v30,
                    a3,
                    v24,
                    v25,
                    v26,
                    v27,
                    *((_QWORD *)&v27 + 1),
                    v28,
                    v29);
    if ( (int)v8 < 0 || !v30 )
    {
LABEL_20:
      if ( (a1 & 4) != 0 )
      {
        v22 = DXGGLOBAL::GetGlobal(v21);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v22,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          1);
      }
      return (unsigned int)v8;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v3 + 25) = 0;
      goto LABEL_20;
    }
    return (unsigned int)v8;
  }
  v20 = WdLogNewEntry5_WdWarning(v12, v19, v13, v14);
  *(_QWORD *)(v20 + 24) = a1;
  WdLogEvent5_WdWarning(v20);
  return 3223191554LL;
}
