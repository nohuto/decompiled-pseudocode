/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C017A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorGetMonitorType @ 0x1C00B7244 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C2B40 (DxgkInvalidateMonitorConnections.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01B00BC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r15d
  __int64 v14; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGADAPTER *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edi
  int MonitorHandle; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int MonitorType; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int SimulatedMonitor; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  int v54; // [rsp+20h] [rbp-B9h]
  int v55; // [rsp+30h] [rbp-A9h]
  bool v56; // [rsp+40h] [rbp-99h] BYREF
  int v57; // [rsp+44h] [rbp-95h] BYREF
  struct HDXGMONITOR__ *v58; // [rsp+48h] [rbp-91h] BYREF
  BOOL v59; // [rsp+50h] [rbp-89h]
  LONG HighPart; // [rsp+54h] [rbp-85h]
  unsigned __int64 v61; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v62[10]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v63[8]; // [rsp+B0h] [rbp-29h] BYREF

  v4 = a2;
  v6 = a3;
  HighPart = a1.HighPart;
  v7 = a4;
  memset(v63, 0, sizeof(v63));
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v63[1]);
  v63[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v63[3]) = 41;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v9);
  v10[6] = HighPart;
  v10[7] = a1.LowPart;
  v10[3] = v6;
  v10[4] = v4;
  v10[5] = v7;
  WdLogEvent5_WdEvent(v10);
  v12 = v6;
  v13 = v6 & 0x7FFFFFFF;
  v59 = v12 < 0;
  if ( v13 > 2 )
  {
    v14 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v14 + 24) = v13;
LABEL_49:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( (_DWORD)v7 != 2 )
      {
        v14 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v14 + 24) = v7;
        goto LABEL_49;
      }
      v8 = 4;
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v11);
  v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v61);
  v21 = v16;
  if ( v16 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v16, 0LL);
    v23 = (int)COREADAPTERACCESS::AcquireExclusive(v62);
    DXGADAPTER::ReleaseReference(v21);
    if ( (int)v23 < 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v28 + 24) = v21;
      *(_QWORD *)(v28 + 32) = v23;
      goto LABEL_46;
    }
    v56 = 0;
    LODWORD(v23) = DmmIsTargetForcable((__int64)v21, v4, &v56, 0);
    if ( (int)v23 >= 0 && !v56 )
    {
      v30 = WdLogNewEntry5_WdEvent(v29);
      *(_QWORD *)(v30 + 24) = v4;
      *(_QWORD *)(v30 + 32) = v21;
      WdLogEvent5_WdEvent(v30);
      LODWORD(v23) = -1073741811;
    }
    v31 = 0;
    v57 = 0;
    if ( (int)v23 < 0 )
      goto LABEL_43;
    v58 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v21, (unsigned int)v4, 0LL, DxgkHandleForceProjectionMonitor, &v58);
    LODWORD(v23) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v58 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v34);
          *(_QWORD *)(v42 + 24) = 2443LL;
          WdLogEvent5_WdAssertion(v42);
        }
        LODWORD(v23) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v21, v58, &v57, v36);
      v31 = v57;
      LODWORD(v23) = MonitorType;
      if ( MonitorType >= 0 && !v57 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v40 + 24) = 2432LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( (int)MonitorReleaseMonitorHandle(v21, v58, DxgkHandleForceProjectionMonitor, v39) < 0 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v41 + 24) = 2437LL;
        WdLogEvent5_WdAssertion(v41);
      }
    }
    if ( (int)v23 < 0 || v13 == 2 )
    {
LABEL_43:
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v62);
      if ( !v59 )
        goto LABEL_47;
      v47 = DxgkInvalidateMonitorConnections(1LL);
      v52 = v47;
      if ( v47 >= 0 )
        goto LABEL_47;
      v28 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v28 + 24) = v52;
LABEL_46:
      WdLogEvent5_WdWarning(v28);
LABEL_47:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      return (unsigned int)v23;
    }
    if ( !v13 )
    {
      if ( v31 && (v31 != 1 || v8 == 4) && v31 != 5 && v8 >= v31 )
      {
        v43 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v43 + 24) = v8;
        *(_QWORD *)(v43 + 32) = v31;
        WdLogEvent5_WdError(v43);
        goto LABEL_43;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(v21, v54, 0, v55, (__int64)v63);
      goto LABEL_42;
    }
    if ( v31 )
    {
      if ( v8 == v31 )
      {
        SimulatedMonitor = MonitorDestroySimulatedMonitor(v21, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v63);
LABEL_42:
        LODWORD(v23) = SimulatedMonitor;
        goto LABEL_43;
      }
      v46 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      *(_QWORD *)(v46 + 24) = v8;
      *(_QWORD *)(v46 + 32) = v31;
      WdLogEvent5_WdWarning(v46);
    }
    else
    {
      v45 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v45 + 24) = v4;
      WdLogEvent5_WdError(v45);
    }
    LODWORD(v23) = -1073741811;
    goto LABEL_43;
  }
  v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v22 + 24) = 2375LL;
  WdLogEvent5_WdWarning(v22);
  return 3221225485LL;
}
