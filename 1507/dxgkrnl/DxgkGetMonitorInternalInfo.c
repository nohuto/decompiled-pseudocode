/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C01518F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C0099B70 (MonitorGetCCDMonitorID.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AF9EC (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 LowPart; // rcx
  DXGGLOBAL *Global; // rax
  DWORD v17; // ebx
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rcx
  DXGADAPTER *v20; // rsi
  __int64 HighPart; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  _QWORD *v29; // rax
  int MonitorHandle; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rcx
  struct HDXGMONITOR__ *v37; // rbx
  __int64 v38; // rax
  int CCDMonitorID; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _BYTE v47[64]; // [rsp+30h] [rbp-40h] BYREF
  struct _LUID v48; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v49; // [rsp+B0h] [rbp+40h] BYREF
  struct _LUID v50; // [rsp+B8h] [rbp+48h] BYREF

  v48 = a1;
  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, 0LL, a4);
    *(_QWORD *)(v6 + 24) = 5159LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v48, (unsigned int)v4, &v50, &v49);
  v12 = v7;
  if ( v7 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v13[3] = v48.HighPart;
    LowPart = v48.LowPart;
    v13[5] = v4;
    v13[6] = v12;
LABEL_5:
    v13[4] = LowPart;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
  v17 = v50.LowPart;
  v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v50);
  v20 = v18;
  if ( !v18 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    HighPart = v50.HighPart;
    v13[6] = 0LL;
    v13[3] = HighPart;
    LowPart = v17;
    LODWORD(v12) = -1073741811;
    v13[5] = -1073741811LL;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)v18 + 247) )
  {
    DXGADAPTER::ReleaseReference(v18);
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v13[3] = v50.HighPart;
    LowPart = v17;
    LODWORD(v12) = -1073741811;
    v13[5] = -1073741811LL;
    v13[6] = 1LL;
    goto LABEL_5;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v18, 0LL);
  DXGADAPTER::ReleaseReference(v20);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
  v28 = v23;
  if ( v23 >= 0 )
  {
    MonitorHandle = MonitorGetMonitorHandle(v20, v49, 0LL, DxgkGetMonitorInternalInfo, &v50);
    v28 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v37 = (struct HDXGMONITOR__ *)v50;
      if ( !*(_QWORD *)&v50 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        *(_QWORD *)(v38 + 24) = 5242LL;
        WdLogEvent5_WdAssertion(v38);
      }
      CCDMonitorID = MonitorGetCCDMonitorID(v37, 0x104u, (unsigned __int16 *)(a3 + 20));
      v28 = CCDMonitorID;
      if ( CCDMonitorID >= 0 )
      {
        if ( (int)MonitorReleaseMonitorHandle(v20, v37, DxgkGetMonitorInternalInfo, v41) < 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
          *(_QWORD *)(v46 + 24) = 5265LL;
          WdLogEvent5_WdAssertion(v46);
        }
        LODWORD(v28) = 0;
        goto LABEL_22;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v35[3] = v48.HighPart;
      v36 = v48.LowPart;
      v35[7] = 1LL;
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v35[3] = v48.HighPart;
      v36 = v48.LowPart;
      v35[7] = 0LL;
    }
    v35[6] = v28;
    v35[5] = v4;
    v35[4] = v36;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v29[3] = v50.HighPart;
    v29[4] = v17;
    v29[5] = v28;
    WdLogEvent5_WdWarning(v29);
  }
LABEL_22:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  return (unsigned int)v28;
}
