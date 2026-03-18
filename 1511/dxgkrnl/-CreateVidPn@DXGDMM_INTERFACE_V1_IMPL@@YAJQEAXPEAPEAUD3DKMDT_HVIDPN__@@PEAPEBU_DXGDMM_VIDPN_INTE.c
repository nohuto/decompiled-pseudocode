/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C017CAA0
 * Callers:
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017E1E0 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C008FC94 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  VIDPN_MGR *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v24; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6052);
  if ( !a2 || !a3 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdError(v7);
    LODWORD(v6) = -1073741811;
    goto LABEL_21;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v10);
    LODWORD(v6) = -1071775742;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)v6 + 248);
  if ( !v13 )
  {
    v10 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v10 + 24) = v6;
    goto LABEL_13;
  }
  v14 = *(VIDPN_MGR **)(v13 + 112);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v22, (__int64)v14);
  v24 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnInterface(v14, &v24);
  v23 = 0LL;
  v15 = VIDPN_MGR::CreateClientVidPn(v14, &v23);
  v6 = (DXGDMM_INTERFACE_V1_IMPL *)v15;
  if ( v15 >= 0 )
  {
    v18 = v23;
    v23 = 0LL;
    v19 = v18 + 88;
    if ( v19 )
      v20 = v19 - 88;
    else
      v20 = 0LL;
    *a2 = v20;
    LODWORD(v6) = 0;
    *a3 = (struct D3DKMDT_HVIDPN__ *)v24;
  }
  else
  {
    v17 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v17 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v17);
  }
  auto_rc<DMMVIDPN>::reset(&v23, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v22[0] + 40));
LABEL_21:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6052);
  return (unsigned int)v6;
}
