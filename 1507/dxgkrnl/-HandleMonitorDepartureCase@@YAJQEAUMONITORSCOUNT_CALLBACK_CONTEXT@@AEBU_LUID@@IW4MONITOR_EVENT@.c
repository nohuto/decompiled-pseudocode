/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0151734 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C017D524 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C017D67C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(__int64 a1, const struct _LUID *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct CCD_BTL *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbp
  int PathDescriptorByTarget; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE v49[76]; // [rsp+20h] [rbp-68h] BYREF
  int v50; // [rsp+6Ch] [rbp-1Ch]
  int v51; // [rsp+70h] [rbp-18h]

  v5 = (int)a4;
  v6 = (unsigned int)a3;
  v8 = DxgkInvalidateMonitorConnections(2uLL, (__int64)a2, a3, a4);
  v13 = v8;
  if ( v8 < 0 )
  {
    v14 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdEvent(v14);
  }
  *(_BYTE *)(a1 + 25) = 1;
  if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v6) < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v19[3] = a2->HighPart;
    v19[4] = a2->LowPart;
    v19[5] = v6;
    WdLogEvent5_WdWarning(v19);
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v49, 8u, 0);
  v24 = CCD_BTL::Global(v21, v20, v22, v23);
  v25 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v49, v24);
  v29 = v25;
  if ( v25 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v39[3] = v29;
    v39[4] = a2->HighPart;
    v39[5] = a2->LowPart;
    v39[6] = v6;
    v39[7] = v5;
    WdLogEvent5_WdError(v39);
    DxgkLogCodePointPacket(0x3Du, v29, 0, 0);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) == -1 )
      goto LABEL_16;
    *(_BYTE *)(a1 + 24) = 0;
    PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v49, a2, v6, 0LL);
    v33 = PathDescriptorByTarget;
    if ( PathDescriptorByTarget == -1073741275 )
    {
      v50 = 1;
      v51 = 4;
      v34 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v49, 0LL, v27, v28);
      v33 = v34;
      if ( v34 >= 0 )
      {
        v38 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v49, 0LL, v27, v28);
        v33 = v38;
        if ( v38 >= 0 )
        {
          *(_DWORD *)(a1 + 32) |= 0x20u;
          *(_BYTE *)(a1 + 25) = 0;
          goto LABEL_16;
        }
      }
      v37 = WdLogNewEntry5_WdWarning(v36, v35, v27, v28);
    }
    else
    {
      if ( PathDescriptorByTarget >= 0 )
        goto LABEL_16;
      v37 = WdLogNewEntry5_WdWarning(v32, v31, v27, v28);
      *(_QWORD *)(v37 + 32) = v6;
    }
    *(_QWORD *)(v37 + 24) = v33;
    WdLogEvent5_WdWarning(v37);
  }
LABEL_16:
  v40 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v27, v28);
  v45 = v40;
  if ( v40 < 0 )
  {
    v46 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
    *(_QWORD *)(v46 + 24) = v45;
    WdLogEvent5_WdEvent(v46);
    LODWORD(v45) = 0;
  }
  v47 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
  *(_QWORD *)(v47 + 24) = (int)v45;
  WdLogEvent5_WdEvent(v47);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v49);
  return (unsigned int)v45;
}
