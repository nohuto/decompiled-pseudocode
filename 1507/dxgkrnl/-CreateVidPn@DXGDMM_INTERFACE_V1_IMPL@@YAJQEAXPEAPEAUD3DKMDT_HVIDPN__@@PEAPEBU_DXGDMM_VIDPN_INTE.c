/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0178640
 * Callers:
 *     ?CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0179D80 (-CreateVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIPEAPEAUD3DKMDT_HVIDPN__@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0097060 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  VIDPN_MGR *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v30; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v31; // [rsp+58h] [rbp+20h] BYREF

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
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)v6 + 247);
  if ( !v16 )
  {
    v10 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v10 + 24) = v6;
    goto LABEL_13;
  }
  v17 = *(VIDPN_MGR **)(v16 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v29, (__int64)v17);
  v31 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnInterface(v17, &v31, v18, v19);
  v30 = 0LL;
  v22 = VIDPN_MGR::CreateClientVidPn(v17, &v30, v20, v21);
  v6 = (DXGDMM_INTERFACE_V1_IMPL *)v22;
  if ( v22 >= 0 )
  {
    v25 = v30;
    v30 = 0LL;
    v26 = v25 + 88;
    if ( v26 )
      v27 = v26 - 88;
    else
      v27 = 0LL;
    *a2 = v27;
    LODWORD(v6) = 0;
    *a3 = (struct D3DKMDT_HVIDPN__ *)v31;
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v23);
    *(_QWORD *)(v24 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v24);
  }
  auto_rc<DMMVIDPN>::reset(&v30, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29[0] + 40));
LABEL_21:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 6052);
  return (unsigned int)v6;
}
