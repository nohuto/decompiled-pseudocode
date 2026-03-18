/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01787E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0097060 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct DMMVIDPN *v20; // rbp
  __int64 v21; // rax
  VIDPN_MGR *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct _DXGDMM_VIDPN_INTERFACE *v31; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v32[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v33; // [rsp+60h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  if ( !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a2;
    WdLogEvent5_WdError(v8);
    LODWORD(v11) = -1073741811;
    goto LABEL_23;
  }
  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v12);
    LODWORD(v11) = -1071775742;
    goto LABEL_23;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_QWORD *)this + 247) )
  {
    v12 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v12 + 24) = this;
    goto LABEL_13;
  }
  v20 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  if ( v20 )
  {
    v22 = *(VIDPN_MGR **)(v18 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v32, (__int64)v22);
    v31 = 0LL;
    VIDPN_MGR::QueryDxgDmmVidPnInterface(v22, &v31, v23, v24);
    v33 = 0LL;
    v26 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v22, v20, &v33, v25);
    v11 = v26;
    if ( v26 >= 0 )
    {
      if ( v33 == -88 )
        v29 = 0LL;
      else
        v29 = v33;
      v33 = 0LL;
      *(_QWORD *)a3 = v29;
      LODWORD(v11) = 0;
      *a4 = (struct D3DKMDT_HVIDPN__ *)v31;
    }
    else
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v27);
      *(_QWORD *)(v28 + 24) = v11;
      WdLogEvent5_WdDmmEvent(v28);
    }
    auto_rc<DMMVIDPN>::reset(&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32[0] + 40LL));
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = a2;
    WdLogEvent5_WdError(v21);
    LODWORD(v11) = -1071774973;
  }
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6054);
  return (unsigned int)v11;
}
