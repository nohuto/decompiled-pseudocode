/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01A61E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0084D58 (-QueryDxgDmmVidPnInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084F6C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct DMMVIDPN *v17; // rbp
  __int64 v18; // rax
  VIDPN_MGR *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _DXGDMM_VIDPN_INTERFACE *v26; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v27[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
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
    v14 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*((_QWORD *)this + 266) )
  {
    v12 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v12 + 24) = this;
    goto LABEL_13;
  }
  v17 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  if ( v17 )
  {
    v19 = *(VIDPN_MGR **)(v15 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v27, (__int64)v19);
    v26 = 0LL;
    VIDPN_MGR::QueryDxgDmmVidPnInterface(v19, &v26);
    v28 = 0LL;
    v21 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v19, v17, &v28, v20);
    v11 = v21;
    if ( v21 >= 0 )
    {
      if ( v28 == -88 )
        v24 = 0LL;
      else
        v24 = v28;
      v28 = 0LL;
      *(_QWORD *)a3 = v24;
      LODWORD(v11) = 0;
      *a4 = (struct D3DKMDT_HVIDPN__ *)v26;
    }
    else
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v23 + 24) = v11;
      WdLogEvent5_WdDmmEvent(v23);
    }
    auto_rc<DMMVIDPN>::reset(&v28, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27[0] + 40LL));
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = a2;
    WdLogEvent5_WdError(v18);
    LODWORD(v11) = -1071774973;
  }
LABEL_23:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6054);
  return (unsigned int)v11;
}
