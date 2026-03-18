/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C0155D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C00987D8 (DmmIsTargetForcable.c)
 *     MonitorGetMonitorType @ 0x1C00A6338 (MonitorGetMonitorType.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C018694C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // rax
  int v12; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DXGADAPTER *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // edi
  int MonitorHandle; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int MonitorType; // eax
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int SimulatedMonitor; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  int v58; // [rsp+20h] [rbp-60h]
  struct HDXGMONITOR__ *v59; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v60[7]; // [rsp+48h] [rbp-38h] BYREF
  int v62; // [rsp+C8h] [rbp+48h] BYREF
  BOOL v63; // [rsp+D0h] [rbp+50h]

  v4 = (int)a4;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v7 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(a1, a2, a3, a4);
  v7[3] = v5;
  v7[4] = v6;
  v7[5] = v4;
  v7[6] = a1.HighPart;
  v7[7] = a1.LowPart;
  WdLogEvent5_WdEvent(v7);
  v9 = v5;
  v10 = v5 & 0x7FFFFFFF;
  v63 = v9 < 0;
  if ( v10 > 2 )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = v10;
LABEL_50:
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v12 = 3;
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v11 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v11 + 24) = v4;
        goto LABEL_50;
      }
      v12 = 4;
    }
  }
  else
  {
    v12 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v8);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v19 = v14;
  if ( v14 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, v14, 0LL);
    v21 = (int)COREADAPTERACCESS::AcquireExclusive(v60);
    DXGADAPTER::ReleaseReference(v19);
    if ( (int)v21 < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = v19;
      *(_QWORD *)(v26 + 32) = v21;
      goto LABEL_47;
    }
    LOBYTE(v62) = 0;
    LODWORD(v21) = DmmIsTargetForcable((__int64)v19, v6, (bool *)&v62, 0);
    if ( (int)v21 >= 0 && !(_BYTE)v62 )
    {
      v31 = WdLogNewEntry5_WdEvent(v28, v27, v29, v30);
      *(_QWORD *)(v31 + 24) = v6;
      *(_QWORD *)(v31 + 32) = v19;
      WdLogEvent5_WdEvent(v31);
      LODWORD(v21) = -1073741811;
    }
    v32 = 0;
    v62 = 0;
    if ( (int)v21 < 0 )
      goto LABEL_44;
    v59 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v19, (unsigned int)v6, 0LL, &DxgkHandleForceProjectionMonitor, &v59);
    LODWORD(v21) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v59 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v35);
          *(_QWORD *)(v43 + 24) = 2414LL;
          WdLogEvent5_WdAssertion(v43);
        }
        LODWORD(v21) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v19, v59, &v62, v37);
      v32 = v62;
      LODWORD(v21) = MonitorType;
      if ( MonitorType >= 0 && !v62 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v41 + 24) = 2403LL;
        WdLogEvent5_WdAssertion(v41);
      }
      if ( (int)MonitorReleaseMonitorHandle(v19, v59, &DxgkHandleForceProjectionMonitor, v40) < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v42 + 24) = 2408LL;
        WdLogEvent5_WdAssertion(v42);
      }
    }
    if ( (int)v21 < 0 || v10 == 2 )
    {
LABEL_44:
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v60);
      if ( !v63 )
        goto LABEL_48;
      v51 = DxgkInvalidateMonitorConnections(1uLL, v48, v49, v50);
      v56 = v51;
      if ( v51 >= 0 )
        goto LABEL_48;
      v26 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
      *(_QWORD *)(v26 + 24) = v56;
LABEL_47:
      WdLogEvent5_WdWarning(v26);
LABEL_48:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      return (unsigned int)v21;
    }
    if ( !v10 )
    {
      if ( v32 && (v32 != 1 || v12 == 4) && v32 != 5 && v12 >= v32 )
      {
        v44 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v44 + 24) = v12;
        *(_QWORD *)(v44 + 32) = v32;
        WdLogEvent5_WdError(v44);
        goto LABEL_44;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(v19, v58, 0);
      goto LABEL_43;
    }
    if ( v32 )
    {
      if ( v12 == v32 )
      {
        SimulatedMonitor = MonitorDestroySimulatedMonitor(v19, v6);
LABEL_43:
        LODWORD(v21) = SimulatedMonitor;
        goto LABEL_44;
      }
      v47 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v47 + 24) = v12;
      *(_QWORD *)(v47 + 32) = v32;
      WdLogEvent5_WdWarning(v47);
    }
    else
    {
      v46 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v46 + 24) = v6;
      WdLogEvent5_WdError(v46);
    }
    LODWORD(v21) = -1073741811;
    goto LABEL_44;
  }
  v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
  *(_QWORD *)(v20 + 24) = 2346LL;
  WdLogEvent5_WdWarning(v20);
  return 3221225485LL;
}
