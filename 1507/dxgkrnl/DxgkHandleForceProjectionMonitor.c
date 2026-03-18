/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C0151B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 *     MonitorGetMonitorType @ 0x1C009BB94 (MonitorGetMonitorType.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01822FC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // r15d
  __int64 v14; // rax
  int v15; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGADAPTER *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // edi
  int MonitorHandle; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int MonitorType; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int SimulatedMonitor; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  struct HDXGMONITOR__ *v63; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v64[7]; // [rsp+38h] [rbp-38h] BYREF
  int v66; // [rsp+B8h] [rbp+48h] BYREF
  BOOL v67; // [rsp+C0h] [rbp+50h]

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
  v12 = v5;
  v13 = v5 & 0x7FFFFFFF;
  v67 = v12 < 0;
  if ( v13 > 2 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = v13;
LABEL_50:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v15 = 3;
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v14 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v14 + 24) = v4;
        goto LABEL_50;
      }
      v15 = 4;
    }
  }
  else
  {
    v15 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v22 = v17;
  if ( v17 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v17, 0LL);
    v24 = (int)COREADAPTERACCESS::AcquireExclusive(v64);
    DXGADAPTER::ReleaseReference(v22);
    if ( (int)v24 < 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = v22;
      *(_QWORD *)(v29 + 32) = v24;
      goto LABEL_47;
    }
    LOBYTE(v66) = 0;
    LODWORD(v24) = DmmIsTargetForcable((__int64)v22, v6, (bool *)&v66, 0);
    if ( (int)v24 >= 0 && !(_BYTE)v66 )
    {
      v34 = WdLogNewEntry5_WdEvent(v31, v30, v32, v33);
      *(_QWORD *)(v34 + 24) = v6;
      *(_QWORD *)(v34 + 32) = v22;
      WdLogEvent5_WdEvent(v34);
      LODWORD(v24) = -1073741811;
    }
    v35 = 0;
    v66 = 0;
    if ( (int)v24 < 0 )
      goto LABEL_44;
    v63 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v22, (unsigned int)v6, 0LL, &DxgkHandleForceProjectionMonitor, &v63);
    LODWORD(v24) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v63 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
          *(_QWORD *)(v48 + 24) = 2313LL;
          WdLogEvent5_WdAssertion(v48);
        }
        LODWORD(v24) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v22, v63, &v66, v40);
      v35 = v66;
      LODWORD(v24) = MonitorType;
      if ( MonitorType >= 0 && !v66 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
        *(_QWORD *)(v46 + 24) = 2302LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( (int)MonitorReleaseMonitorHandle(v22, v63, &DxgkHandleForceProjectionMonitor, v45) < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
        *(_QWORD *)(v47 + 24) = 2307LL;
        WdLogEvent5_WdAssertion(v47);
      }
    }
    if ( (int)v24 < 0 || v13 == 2 )
    {
LABEL_44:
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v64);
      if ( !v67 )
        goto LABEL_48;
      v56 = DxgkInvalidateMonitorConnections(1uLL, v53, v54, v55);
      v61 = v56;
      if ( v56 >= 0 )
        goto LABEL_48;
      v29 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
      *(_QWORD *)(v29 + 24) = v61;
LABEL_47:
      WdLogEvent5_WdWarning(v29);
LABEL_48:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      return (unsigned int)v24;
    }
    if ( !v13 )
    {
      if ( v35 && (v35 != 1 || v15 == 4) && v35 != 5 && v15 >= v35 )
      {
        v49 = WdLogNewEntry5_WdError(v38);
        *(_QWORD *)(v49 + 24) = v15;
        *(_QWORD *)(v49 + 32) = v35;
        WdLogEvent5_WdError(v49);
        goto LABEL_44;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(v22);
      goto LABEL_43;
    }
    if ( v35 )
    {
      if ( v15 == v35 )
      {
        SimulatedMonitor = MonitorDestroySimulatedMonitor(v22, v6);
LABEL_43:
        LODWORD(v24) = SimulatedMonitor;
        goto LABEL_44;
      }
      v52 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
      *(_QWORD *)(v52 + 24) = v15;
      *(_QWORD *)(v52 + 32) = v35;
      WdLogEvent5_WdWarning(v52);
    }
    else
    {
      v51 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v51 + 24) = v6;
      WdLogEvent5_WdError(v51);
    }
    LODWORD(v24) = -1073741811;
    goto LABEL_44;
  }
  v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v23 + 24) = 2245LL;
  WdLogEvent5_WdWarning(v23);
  return 3221225485LL;
}
