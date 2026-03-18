/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178868
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179FF4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01A4BB0 (DmmIsTargetInClientVidPnTopology.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  int v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+30h] [rbp-78h]
  bool v33; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v35[10]; // [rsp+50h] [rbp-58h] BYREF

  v7 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v34);
  v16 = (__int64)v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v11, 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive(v35);
    IsTargetInClientVidPnTopology = v19;
    if ( v19 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v16, (unsigned int)v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
          IsTargetInClientVidPnTopology = 0;
          v30[3] = v7;
          v30[4] = v16;
          v30[5] = *(int *)(v16 + 272);
          v30[6] = *(unsigned int *)(v16 + 268);
        }
      }
      v33 = 0;
      if ( a4 || (int)DmmIsTargetForcable(v16, v7, &v33, a3) >= 0 && v33 )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor((DXGADAPTER *)v16, v31, a4, v32, a6);
    }
    else
    {
      if ( v19 == -1073741130 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        v25[3] = v16;
        v25[4] = *(int *)(v16 + 272);
        v25[5] = *(unsigned int *)(v16 + 268);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
