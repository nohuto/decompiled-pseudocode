/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C00AFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0097060 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  VIDPN_MGR *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v30; // [rsp+48h] [rbp+10h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v31; // [rsp+58h] [rbp+20h] BYREF

  v6 = this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  if ( !a2 || !a3 )
  {
    v26 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = v6;
    WdLogEvent5_WdError(v26);
    LODWORD(v6) = -1073741811;
    goto LABEL_13;
  }
  *a2 = 0LL;
  *a3 = 0LL;
  if ( !v6 )
  {
    v25 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v25 + 24) = 0LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v27);
  }
  v11 = *((_QWORD *)v6 + 247);
  if ( !v11 )
  {
    v25 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v25 + 24) = v6;
LABEL_16:
    WdLogEvent5_WdError(v25);
    LODWORD(v6) = -1071775742;
    goto LABEL_13;
  }
  v12 = *(VIDPN_MGR **)(v11 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v29, (__int64)v12);
  v31 = 0LL;
  VIDPN_MGR::QueryDxgDmmVidPnInterface(v12, &v31, v13, v14);
  v30 = 0LL;
  v17 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12, &v30, v15, v16);
  v6 = (DXGDMM_INTERFACE_V1_IMPL *)v17;
  if ( v17 < 0 )
  {
    v28 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v28 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v28);
  }
  else
  {
    v19 = v30;
    v30 = 0LL;
    v20 = v19 + 88;
    if ( v20 )
      v21 = v20 - 88;
    else
      v21 = 0LL;
    *a2 = v21;
    LODWORD(v6) = 0;
    *a3 = (struct D3DKMDT_HVIDPN__ *)v31;
  }
  auto_rc<DMMVIDPN>::reset(&v30, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29[0] + 40));
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 6053);
  return (unsigned int)v6;
}
