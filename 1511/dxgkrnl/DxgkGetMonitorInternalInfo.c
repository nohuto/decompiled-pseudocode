/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C0155B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BC590 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3374 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C0186B94 (MonitorGetMonitorOrientationsFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 LowPart; // rcx
  DXGGLOBAL *Global; // rax
  DWORD v15; // ebx
  struct DXGADAPTER *v16; // rax
  __int64 v17; // rcx
  DXGADAPTER *v18; // rsi
  __int64 HighPart; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  _QWORD *v27; // rax
  int MonitorHandle; // eax
  __int64 v29; // rcx
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  struct HDXGMONITOR__ *v33; // rbx
  __int64 v34; // rax
  int CCDMonitorID; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // [rsp+30h] [rbp-50h] BYREF
  struct _LUID v40; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v41[64]; // [rsp+40h] [rbp-40h] BYREF
  struct _LUID v42; // [rsp+B0h] [rbp+30h] BYREF

  v42 = a1;
  v6 = a2;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v42, a2, &v40, &v39);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v42.HighPart;
    LowPart = v42.LowPart;
    v11[5] = v6;
    v11[6] = v10;
LABEL_3:
    v11[4] = LowPart;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  Global = DXGGLOBAL::GetGlobal(v9);
  v15 = v40.LowPart;
  v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v40);
  v18 = v16;
  if ( !v16 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    HighPart = v40.HighPart;
    v11[6] = 0LL;
    v11[3] = HighPart;
    LowPart = v15;
    LODWORD(v10) = -1073741811;
    v11[5] = -1073741811LL;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)v16 + 248) )
  {
    DXGADAPTER::ReleaseReference(v16);
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v11[3] = v40.HighPart;
    LowPart = v15;
    LODWORD(v10) = -1073741811;
    v11[5] = -1073741811LL;
    v11[6] = 1LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v16, 0LL);
  DXGADAPTER::ReleaseReference(v18);
  v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
  v26 = v21;
  if ( v21 >= 0 )
  {
    MonitorHandle = MonitorGetMonitorHandle(v18, v39, 0LL, DxgkGetMonitorInternalInfo, &v40);
    v26 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v33 = (struct HDXGMONITOR__ *)v40;
      if ( !*(_QWORD *)&v40 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v34 + 24) = 5632LL;
        WdLogEvent5_WdAssertion(v34);
      }
      if ( !a3
        || (CCDMonitorID = MonitorGetCCDMonitorID(v33, 260, (unsigned __int16 *)(a3 + 20)),
            v26 = CCDMonitorID,
            CCDMonitorID >= 0) )
      {
        if ( a4 || a5 )
          MonitorGetMonitorOrientationsFromMonitor(v33, a4, a5);
        if ( (int)MonitorReleaseMonitorHandle(v18, v33, DxgkGetMonitorInternalInfo, v30) < 0 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v38 + 24) = 5667LL;
          WdLogEvent5_WdAssertion(v38);
        }
        LODWORD(v26) = 0;
        goto LABEL_24;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v31[3] = v42.HighPart;
      v32 = v42.LowPart;
      v31[7] = 1LL;
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v31[3] = v42.HighPart;
      v32 = v42.LowPart;
      v31[7] = 0LL;
    }
    v31[6] = v26;
    v31[5] = v6;
    v31[4] = v32;
    WdLogEvent5_WdError(v31);
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v27[3] = v40.HighPart;
    v27[4] = v15;
    v27[5] = v26;
    WdLogEvent5_WdWarning(v27);
  }
LABEL_24:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
  return (unsigned int)v26;
}
