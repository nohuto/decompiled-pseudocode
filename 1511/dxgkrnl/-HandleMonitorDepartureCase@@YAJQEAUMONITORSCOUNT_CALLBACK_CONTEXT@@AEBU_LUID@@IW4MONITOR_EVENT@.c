/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0155984 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C017B624 (DmmIsTargetInClientVidPnTopology.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C018199C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0181AF4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(__int64 a1, struct _LUID *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // r15
  struct DXGGLOBAL *Global; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  DXGGLOBAL *v18; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  DXGADAPTER *v21; // r12
  _QWORD *v22; // rax
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // rcx
  struct DXGGLOBAL *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rcx
  struct CCD_BTL *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r14
  unsigned int v56; // r14d
  __int64 v57; // rax
  int PathDescriptorByTarget; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rsi
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // eax
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  struct _D3DKMT_GETPATHSMODALITY *v80[9]; // [rsp+20h] [rbp-71h] BYREF
  int v81; // [rsp+6Ch] [rbp-25h]
  int v82; // [rsp+70h] [rbp-21h]
  _BYTE v83[64]; // [rsp+80h] [rbp-11h] BYREF
  char v84; // [rsp+108h] [rbp+77h] BYREF

  v5 = (int)a4;
  v7 = (unsigned int)a3;
  if ( (_DWORD)a4 == 10 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    Global = DXGGLOBAL::GetGlobal(a1);
    v10 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v5 - 9);
    v15 = v10;
    if ( v10 >= 0 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return 0LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v15;
    }
  }
  if ( a5 != 5 )
  {
    v36 = DxgkInvalidateMonitorConnections(2uLL, (__int64)a2, a3, a4);
    v23 = 0;
    v41 = v36;
    if ( v36 < 0 )
    {
      v42 = WdLogNewEntry5_WdEvent(v38, v37, v39, v40);
      *(_QWORD *)(v42 + 24) = v41;
      WdLogEvent5_WdEvent(v42);
    }
    *(_BYTE *)(a1 + 25) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v7) < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
      v47[3] = a2->HighPart;
      v47[4] = a2->LowPart;
      v47[5] = v7;
      WdLogEvent5_WdWarning(v47);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v80, 8u, 0);
    v49 = CCD_BTL::Global(v48);
    v50 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v80, v49);
    v55 = v50;
    if ( v50 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v71[3] = v55;
      v71[4] = a2->HighPart;
      v71[5] = a2->LowPart;
      v71[6] = v7;
      v71[7] = v5;
      WdLogEvent5_WdError(v71);
      DxgkLogCodePointPacket(0x3Du, v55, 0, 0);
      goto LABEL_34;
    }
    v56 = dword_1C0046E54;
    if ( (unsigned int)dword_1C0046E54 > 1 )
    {
      v57 = WdLogNewEntry5_WdWarning(v52, v51, v53, v54);
      *(_QWORD *)(v57 + 24) = 3527LL;
      WdLogEvent5_WdWarning(v57);
      DxgkLogCodePointPacket(0x51u, v56, 0, 0);
      *(_BYTE *)(a1 + 25) = 1;
LABEL_39:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v80);
      return v23;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v80, a2, v7, 0LL);
      v63 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v81 = 1;
        v82 = 4;
        v64 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v80, 0LL, v61, v62);
        v63 = v64;
        if ( v64 >= 0 )
        {
          v70 = CCD_TOPOLOGY::Persist(v80, 0LL, v67, v68);
          v63 = v70;
          if ( v70 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            goto LABEL_34;
          }
        }
        v69 = WdLogNewEntry5_WdWarning(v66, v65, v67, v68);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_34;
        v69 = WdLogNewEntry5_WdWarning(v60, v59, v61, v62);
        *(_QWORD *)(v69 + 32) = v7;
      }
      *(_QWORD *)(v69 + 24) = v63;
      WdLogEvent5_WdWarning(v69);
    }
LABEL_34:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v7;
    }
    v72 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
    v77 = v72;
    if ( v72 < 0 )
    {
      v78 = WdLogNewEntry5_WdEvent(v74, v73, v75, v76);
      *(_QWORD *)(v78 + 24) = v77;
      WdLogEvent5_WdEvent(v78);
      LODWORD(v77) = 0;
    }
    v79 = WdLogNewEntry5_WdEvent(v74, v73, v75, v76);
    *(_QWORD *)(v79 + 24) = (int)v77;
    WdLogEvent5_WdEvent(v79);
    v23 = v77;
    goto LABEL_39;
  }
  v18 = DXGGLOBAL::GetGlobal(a1);
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(v18, *a2);
  v21 = v19;
  if ( !v19 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23 = -1073741811;
    v22[3] = a2->HighPart;
    v22[4] = a2->LowPart;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return v23;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v19, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v83);
  v26 = v24;
  if ( v24 >= 0 )
  {
    v84 = 0;
    if ( (int)DmmIsTargetInClientVidPnTopology(v21, (unsigned int)v7, &v84) >= 0 && !v84 )
      *(_BYTE *)(a1 + 25) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v83);
    *(_BYTE *)(a1 + 24) = 0;
    v29 = DXGGLOBAL::GetGlobal(v28);
    v30 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v29,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            1);
    v26 = v30;
    if ( v30 >= 0 )
    {
      LODWORD(v26) = 0;
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = v26;
      WdLogEvent5_WdWarning(v35);
    }
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = a2->HighPart;
    v27[4] = a2->LowPart;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v83);
  return (unsigned int)v26;
}
