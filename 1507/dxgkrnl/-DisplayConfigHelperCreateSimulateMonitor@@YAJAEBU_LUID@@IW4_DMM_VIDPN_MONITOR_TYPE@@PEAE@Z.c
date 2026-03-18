/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z @ 0x1C01504D4
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0151500 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017708C (DmmIsTargetInClientVidPnTopology.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // r14d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  bool v29; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v30[7]; // [rsp+38h] [rbp-40h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v14 = (__int64)v9;
  if ( v9 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v9, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive(v30);
    IsTargetInClientVidPnTopology = v17;
    if ( v17 >= 0 )
    {
      if ( a4 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v14, (unsigned int)v5, a4);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
          v28[3] = v5;
          v28[4] = v14;
          IsTargetInClientVidPnTopology = 0;
          v28[5] = (int)HIDWORD(*(_QWORD *)(v14 + 252));
          v28[6] = *(unsigned int *)(v14 + 252);
        }
      }
      v29 = 0;
      if ( (int)DmmIsTargetForcable(v14, v5, &v29, v6) >= 0 && v29 )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor((DXGADAPTER *)v14);
    }
    else
    {
      if ( v17 == -1073741130 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        v23[3] = v14;
        v23[4] = (int)HIDWORD(*(_QWORD *)(v14 + 252));
        v23[5] = *(unsigned int *)(v14 + 252);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v15 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
