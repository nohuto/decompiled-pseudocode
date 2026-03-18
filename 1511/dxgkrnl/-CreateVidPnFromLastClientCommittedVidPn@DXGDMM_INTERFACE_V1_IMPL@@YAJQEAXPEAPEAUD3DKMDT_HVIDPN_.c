/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00BCE50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C008FC94 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDPN_MGR *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v24; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  if ( !a2 || !a3 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v6) = -1073741811;
    goto LABEL_13;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  if ( !v6 )
  {
    v18 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v18 + 24) = 0LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v20);
  }
  v8 = *((_QWORD *)v6 + 248);
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = v6;
LABEL_16:
    WdLogEvent5_WdError(v18);
    LODWORD(v6) = -1071775742;
    goto LABEL_13;
  }
  v9 = *(VIDPN_MGR **)(v8 + 112);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v22, (__int64)v9);
  v24 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnInterface(v9, &v24);
  v23 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v23);
  v6 = (DXGDMM_INTERFACE_V1_IMPL *)v10;
  if ( v10 < 0 )
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v21 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v21);
  }
  else
  {
    v12 = v23;
    v23 = 0LL;
    v13 = v12 + 88;
    if ( v13 )
      v14 = v13 - 88;
    else
      v14 = 0LL;
    *a2 = v14;
    LODWORD(v6) = 0;
    *a3 = (struct D3DKMDT_HVIDPN__ *)v24;
  }
  auto_rc<DMMVIDPN>::reset(&v23, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v22[0] + 40));
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 6053);
  return (unsigned int)v6;
}
