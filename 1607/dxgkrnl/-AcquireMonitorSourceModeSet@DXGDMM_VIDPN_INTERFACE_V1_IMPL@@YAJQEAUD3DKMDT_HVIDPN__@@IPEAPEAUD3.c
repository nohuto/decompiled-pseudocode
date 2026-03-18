/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01A5540
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000199C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0082CBC (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C01B086C (MonitorQueryDmmSourceModeSetInterface.c)
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
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  VIDPN_MGR *v16; // rsi
  __int64 v17; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // r9
  struct HDXGMONITOR__ *v31; // rsi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v32; // rax
  __int64 v33; // rax
  struct HDXGMONITOR__ *v35; // [rsp+60h] [rbp+18h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v36; // [rsp+68h] [rbp+20h]

  v6 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  v8 = 0;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 4687LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 4688LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v8 = -1071774973;
    goto LABEL_27;
  }
  v16 = *(VIDPN_MGR **)(v11 + 48);
  if ( !*((_QWORD *)v16 + 1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v17);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(*((_QWORD *)v16 + 1) + 16LL));
  v20 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    if ( !*((_QWORD *)v16 + 1) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v23);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL);
    *(_QWORD *)(v22 + 32) = v20;
    WdLogEvent5_WdError(v22);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v16 + 12) + 72LL));
  v24 = *((_QWORD *)v16 + 12);
  v25 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v24, v6);
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v6;
    WdLogEvent5_WdError(v27);
    v28 = -1071774971;
LABEL_24:
    if ( v24 )
      ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
    v8 = v28;
    goto LABEL_27;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v16, *(_DWORD *)(v25 + 24), &v35) < 0 || (v31 = v35) == 0LL )
  {
    v33 = WdLogNewEntry5_WdWarning(v14, v29, v15, v30);
    *(_QWORD *)(v33 + 24) = v6;
    WdLogEvent5_WdWarning(v33);
    v28 = -1071774920;
    goto LABEL_24;
  }
  if ( v24 )
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 64));
  v32 = v36;
  *a3 = v31;
  *a4 = v32;
LABEL_27:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 6038);
  return v8;
}
