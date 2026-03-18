/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C00BA340
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00B62B8 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00BA574 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  DXGADAPTER *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  int MonitorHandle; // eax
  __int64 v24; // rcx
  struct HDXGMONITOR__ *v25; // rbx
  __int64 v26; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 HighPart; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int CCDMonitorID; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // [rsp+38h] [rbp-41h] BYREF
  struct _LUID v41; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v43[80]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+5Fh] BYREF

  v44 = a1;
  v6 = (unsigned int)a2;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v44, a2, &v41, &v40);
  v10 = v8;
  if ( v8 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v29[3] = SHIDWORD(v44);
    v30 = (unsigned int)v44;
    v29[5] = v6;
    v29[6] = v10;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    LowPart = v41.LowPart;
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v41, &v42);
    v15 = v13;
    if ( v13 )
    {
      if ( *((_QWORD *)v13 + 266) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v13, 0LL);
        DXGADAPTER::ReleaseReference(v16);
        v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43);
        v22 = v17;
        if ( v17 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
          v32[3] = v41.HighPart;
          v32[4] = LowPart;
          v32[5] = v22;
          WdLogEvent5_WdWarning(v32);
        }
        else
        {
          MonitorHandle = MonitorGetMonitorHandle(v15, v40, 0, DxgkGetMonitorInternalInfo, (__int64)&v41);
          v22 = MonitorHandle;
          if ( MonitorHandle >= 0 )
          {
            v25 = (struct HDXGMONITOR__ *)v41;
            if ( !*(_QWORD *)&v41 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v24);
              *(_QWORD *)(v35 + 24) = 5812LL;
              WdLogEvent5_WdAssertion(v35);
            }
            if ( a3 )
            {
              CCDMonitorID = MonitorGetCCDMonitorID(v25, 260, (unsigned __int16 *)(a3 + 20));
              v22 = CCDMonitorID;
              if ( CCDMonitorID >= 0 )
                goto LABEL_10;
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v38[3] = SHIDWORD(v44);
              v38[4] = (unsigned int)v44;
              v38[5] = v6;
              v38[6] = v22;
              v38[7] = 1LL;
              WdLogEvent5_WdError(v38);
            }
            if ( (int)v22 < 0 )
            {
LABEL_12:
              if ( (int)MonitorReleaseMonitorHandle(v15, v25, DxgkGetMonitorInternalInfo) < 0 )
              {
                v39 = WdLogNewEntry5_WdAssertion(v26);
                *(_QWORD *)(v39 + 24) = 5847LL;
                WdLogEvent5_WdAssertion(v39);
              }
              LODWORD(v22) = 0;
              goto LABEL_15;
            }
LABEL_10:
            if ( a4 || a5 )
              MonitorGetMonitorOrientationsFromMonitor(v25, a4, a5);
            goto LABEL_12;
          }
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v33[3] = SHIDWORD(v44);
          v34 = (unsigned int)v44;
          v33[7] = 0LL;
          v33[4] = v34;
          v33[5] = v6;
          v33[6] = v22;
          WdLogEvent5_WdError(v33);
        }
LABEL_15:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        return (unsigned int)v22;
      }
      DXGADAPTER::ReleaseReference(v13);
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[3] = v41.HighPart;
      v30 = LowPart;
      LODWORD(v10) = -1073741811;
      v29[5] = -1073741811LL;
      v29[6] = 1LL;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      HighPart = v41.HighPart;
      v29[6] = 0LL;
      v29[3] = HighPart;
      v30 = LowPart;
      LODWORD(v10) = -1073741811;
      v29[5] = -1073741811LL;
    }
  }
  v29[4] = v30;
  WdLogEvent5_WdError(v29);
  return (unsigned int)v10;
}
