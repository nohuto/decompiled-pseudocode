/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z @ 0x1C01537E8
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0155734 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C00987D8 (DmmIsTargetForcable.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017B624 (DmmIsTargetInClientVidPnTopology.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5)
{
  __int64 v6; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  int v30; // [rsp+20h] [rbp-68h]
  bool v31; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v32[7]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v15 = (__int64)v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v10, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(v32);
    IsTargetInClientVidPnTopology = v18;
    if ( v18 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v15, (unsigned int)v6, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
          v29[3] = v6;
          v29[4] = v15;
          IsTargetInClientVidPnTopology = 0;
          v29[5] = (int)HIDWORD(*(_QWORD *)(v15 + 252));
          v29[6] = *(unsigned int *)(v15 + 252);
        }
      }
      v31 = 0;
      if ( a4 || (int)DmmIsTargetForcable(v15, v6, &v31, a3) >= 0 && v31 )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor((DXGADAPTER *)v15, v30, a4);
    }
    else
    {
      if ( v18 == -1073741130 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v24[3] = v15;
        v24[4] = (int)HIDWORD(*(_QWORD *)(v15 + 252));
        v24[5] = *(unsigned int *)(v15 + 252);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = a1->HighPart;
    *(_QWORD *)(v16 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
