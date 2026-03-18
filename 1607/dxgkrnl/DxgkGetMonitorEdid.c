/*
 * XREFs of DxgkGetMonitorEdid @ 0x1C017A560
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01B04B0 (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorEdid(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rcx
  DXGADAPTER *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  _QWORD *v25; // rax
  int MonitorHandle; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  struct HDXGMONITOR__ *v30; // rbx
  __int64 v31; // rax
  int EdidFromMonitor; // eax
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _LUID v39; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v41[80]; // [rsp+48h] [rbp-21h] BYREF
  struct _LUID v42; // [rsp+C8h] [rbp+5Fh] BYREF
  unsigned int v43; // [rsp+D8h] [rbp+6Fh] BYREF

  v42 = a1;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (a3 & 0x7F) != 0 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = v4;
    *(_QWORD *)(v6 + 32) = 128LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v42, a2, &v39, &v43);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v42.HighPart;
    v11[4] = v42.LowPart;
    v11[5] = v5;
    v11[6] = v10;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v10;
  }
  Global = DXGGLOBAL::GetGlobal(v9);
  LowPart = v39.LowPart;
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v39, &v40);
  v16 = v14;
  if ( !v14 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17[6] = 0LL;
LABEL_8:
    v17[3] = v39.HighPart;
    v17[5] = -1073741811LL;
    v17[4] = LowPart;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v14 + 266) )
  {
    DXGADAPTER::ReleaseReference(v14);
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v17[6] = 1LL;
    goto LABEL_8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v14, 0LL);
  DXGADAPTER::ReleaseReference(v16);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
  v24 = v19;
  if ( v19 >= 0 )
  {
    MonitorHandle = MonitorGetMonitorHandle(v16, v43, 0LL, &DxgkGetMonitorEdid, &v39);
    v24 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v30 = (struct HDXGMONITOR__ *)v39;
      if ( !*(_QWORD *)&v39 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v31 + 24) = 5974LL;
        WdLogEvent5_WdAssertion(v31);
      }
      EdidFromMonitor = MonitorGetEdidFromMonitor(v30, (unsigned int)v4);
      v35 = EdidFromMonitor;
      if ( EdidFromMonitor < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v36[3] = v42.HighPart;
        v36[4] = v42.LowPart;
        v36[5] = v5;
        v36[6] = v35;
        v36[7] = 1LL;
        WdLogEvent5_WdError(v36);
      }
      if ( (int)MonitorReleaseMonitorHandle(v16, v30, &DxgkGetMonitorEdid, v34) < 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v37);
        *(_QWORD *)(v38 + 24) = 5997LL;
        WdLogEvent5_WdAssertion(v38);
      }
      LODWORD(v24) = 0;
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v28[3] = v42.HighPart;
      v29 = v42.LowPart;
      v28[7] = 0LL;
      v28[4] = v29;
      v28[5] = v5;
      v28[6] = v24;
      WdLogEvent5_WdError(v28);
    }
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v25[3] = v39.HighPart;
    v25[4] = LowPart;
    v25[5] = v24;
    WdLogEvent5_WdWarning(v25);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
  return (unsigned int)v24;
}
