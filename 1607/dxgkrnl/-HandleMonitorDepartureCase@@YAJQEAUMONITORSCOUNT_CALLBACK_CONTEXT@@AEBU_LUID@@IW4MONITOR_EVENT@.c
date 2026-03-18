/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C017ABA0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B8BD4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C2B40 (DxgkInvalidateMonitorConnections.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C017A3A0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01A4BB0 (DmmIsTargetInClientVidPnTopology.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01AAD64 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01AAEBC (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  DXGGLOBAL *v19; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rcx
  DXGADAPTER *v22; // r12
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rcx
  struct DXGGLOBAL *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rcx
  struct CCD_BTL *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  unsigned int v54; // r14d
  __int64 v55; // rax
  int PathDescriptorByTarget; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rsi
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  int v68; // eax
  _QWORD *v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // [rsp+20h] [rbp-99h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v76[9]; // [rsp+30h] [rbp-89h] BYREF
  int v77; // [rsp+7Ch] [rbp-3Dh]
  int v78; // [rsp+80h] [rbp-39h]
  _BYTE v79[80]; // [rsp+90h] [rbp-29h] BYREF
  char v80; // [rsp+128h] [rbp+6Fh] BYREF

  v6 = a4;
  v8 = a3;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    Global = DXGGLOBAL::GetGlobal(2LL);
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v6 - 9);
    v16 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return 0LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
      return (unsigned int)v16;
    }
  }
  if ( a5 != 5 )
  {
    v37 = DxgkInvalidateMonitorConnections(2LL);
    v24 = 0;
    v39 = v37;
    if ( v37 < 0 )
    {
      v40 = WdLogNewEntry5_WdEvent(v38);
      *(_QWORD *)(v40 + 24) = v39;
      WdLogEvent5_WdEvent(v40);
    }
    *(_BYTE *)(a1 + 25) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v8) < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
      v45[3] = a2->HighPart;
      v45[4] = a2->LowPart;
      v45[5] = v8;
      WdLogEvent5_WdWarning(v45);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v76, 8u, 0);
    v47 = CCD_BTL::Global(v46);
    v48 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v76, v47);
    v53 = v48;
    if ( v48 < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v50);
      v69[3] = v53;
      v69[4] = a2->HighPart;
      v69[5] = a2->LowPart;
      v69[6] = v8;
      v69[7] = v6;
      WdLogEvent5_WdError(v69);
      DxgkLogCodePointPacket(0x3Du, v53, 0, 0);
      goto LABEL_35;
    }
    v54 = dword_1C0057014;
    if ( (unsigned int)dword_1C0057014 > 1 )
    {
      v55 = WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
      *(_QWORD *)(v55 + 24) = 3573LL;
      WdLogEvent5_WdWarning(v55);
      DxgkLogCodePointPacket(0x52u, v54, 0, 0);
      *(_BYTE *)(a1 + 25) = 1;
LABEL_40:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v76);
      return v24;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v76, a2, v8, 0LL);
      v61 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v77 = 1;
        v78 = 4;
        v62 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v76, 0LL, v59, v60);
        v61 = v62;
        if ( v62 >= 0 )
        {
          v68 = CCD_TOPOLOGY::Persist(v76, 0LL, v65, v66);
          v61 = v68;
          if ( v68 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            goto LABEL_35;
          }
        }
        v67 = WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_35;
        v67 = WdLogNewEntry5_WdWarning(v58, v57, v59, v60);
        *(_QWORD *)(v67 + 32) = v8;
      }
      *(_QWORD *)(v67 + 24) = v61;
      WdLogEvent5_WdWarning(v67);
    }
LABEL_35:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v8;
    }
    v70 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v72 = v70;
    if ( v70 < 0 )
    {
      v73 = WdLogNewEntry5_WdEvent(v71);
      *(_QWORD *)(v73 + 24) = v72;
      WdLogEvent5_WdEvent(v73);
      LODWORD(v72) = 0;
    }
    v74 = WdLogNewEntry5_WdEvent(v71);
    *(_QWORD *)(v74 + 24) = (int)v72;
    WdLogEvent5_WdEvent(v74);
    v24 = v72;
    goto LABEL_40;
  }
  v19 = DXGGLOBAL::GetGlobal(2LL);
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(v19, *a2, &v75);
  v22 = v20;
  if ( !v20 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v24 = -1073741811;
    v23[3] = a2->HighPart;
    v23[4] = a2->LowPart;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    return v24;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, v20, 0LL);
  DXGADAPTER::ReleaseReference(v22);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79);
  v27 = v25;
  if ( v25 >= 0 )
  {
    v80 = 0;
    if ( (int)DmmIsTargetInClientVidPnTopology(v22, (unsigned int)v8, &v80) >= 0 && !v80 )
      *(_BYTE *)(a1 + 25) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v79);
    *(_BYTE *)(a1 + 24) = 0;
    v30 = DXGGLOBAL::GetGlobal(v29);
    v31 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v30,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            1);
    v27 = v31;
    if ( v31 >= 0 )
    {
      LODWORD(v27) = 0;
    }
    else
    {
      v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      *(_QWORD *)(v36 + 24) = v27;
      WdLogEvent5_WdWarning(v36);
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v28[3] = a2->HighPart;
    v28[4] = a2->LowPart;
    v28[5] = v27;
    WdLogEvent5_WdError(v28);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
  return (unsigned int)v27;
}
