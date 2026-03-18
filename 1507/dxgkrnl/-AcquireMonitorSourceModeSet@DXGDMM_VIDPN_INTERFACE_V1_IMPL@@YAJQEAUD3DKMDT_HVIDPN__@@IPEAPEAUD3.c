/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0177B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C009653C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C0182850 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  VIDPN_MGR *v19; // rsi
  __int64 v20; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // r9
  struct HDXGMONITOR__ *v38; // rsi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v39; // rax
  __int64 v40; // rax
  struct HDXGMONITOR__ *v42; // [rsp+60h] [rbp+18h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v43; // [rsp+68h] [rbp+20h]

  v6 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  v8 = 0;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 4619LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 4620LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    v8 = -1071774973;
    goto LABEL_27;
  }
  v19 = *(VIDPN_MGR **)(v11 + 48);
  if ( !*((_QWORD *)v19 + 1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v20);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(*((_QWORD *)v19 + 1) + 16LL));
  v23 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v22);
    if ( !*((_QWORD *)v19 + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      WdLogEvent5_WdAssertion(v29);
    }
    *(_QWORD *)(v26 + 24) = *(_QWORD *)(*((_QWORD *)v19 + 1) + 16LL);
    *(_QWORD *)(v26 + 32) = v23;
    WdLogEvent5_WdError(v26);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v19 + 12) + 72LL));
  v30 = *((_QWORD *)v19 + 12);
  v31 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v30, v6);
  if ( !v31 )
  {
    v34 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v34 + 24) = v6;
    WdLogEvent5_WdError(v34);
    v35 = -1071774971;
LABEL_24:
    if ( v30 )
      ReferenceCounted::Release((ReferenceCounted *)(v30 + 64));
    v8 = v35;
    goto LABEL_27;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v19, *(unsigned int *)(v31 + 24), &v42, v33) < 0 || (v38 = v42) == 0LL )
  {
    v40 = WdLogNewEntry5_WdWarning(v17, v36, v18, v37);
    *(_QWORD *)(v40 + 24) = v6;
    WdLogEvent5_WdWarning(v40);
    v35 = -1071774920;
    goto LABEL_24;
  }
  if ( v30 )
    ReferenceCounted::Release((ReferenceCounted *)(v30 + 64));
  v39 = v43;
  *a3 = v38;
  *a4 = v39;
LABEL_27:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 6038);
  return v8;
}
