/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D3160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0001D70 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00046EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007E99C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r14
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edi
  __int64 v19; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v29)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-40h] BYREF
  int v30; // [rsp+28h] [rbp-38h]
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  v7 = 0;
  if ( !a3 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v21[3] = 0LL;
    v21[4] = a2;
    v21[5] = this;
    WdLogEvent5_WdError(v21);
    v18 = -1073741811;
LABEL_21:
    v7 = v18;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v9 )
  {
    v22 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    v18 = -1071774967;
    goto LABEL_21;
  }
  if ( a2 )
    v10 = a2 - 4;
  else
    v10 = 0LL;
  if ( !v10 || *(_DWORD *)v10 != 305419896 )
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = v10;
    WdLogEvent5_WdError(v28);
    v18 = -1071774959;
    goto LABEL_21;
  }
  v11 = *((_QWORD *)v10 + 1);
  if ( !v11 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v9 + 32, v11) )
  {
    v24 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v24 + 24) = v10;
    *(_QWORD *)(v24 + 32) = v9;
    WdLogEvent5_WdError(v24);
    v18 = -1071774928;
    goto LABEL_21;
  }
  v30 = 0;
  v29 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v32 = v11;
  v33 = 0LL;
  v31 = v11;
  v13 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v9,
          (__int64)&v29,
          &v33);
  v18 = v13;
  if ( v13 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v9;
    if ( v33 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v25);
    }
    v18 = 1075708748;
    goto LABEL_21;
  }
  if ( v13 < 0 )
  {
    v26 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v26 + 24) = v10;
    *(_QWORD *)(v26 + 32) = v9;
    WdLogEvent5_WdDmmEvent(v26);
    goto LABEL_21;
  }
  v19 = v33;
  if ( !v33 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)&a3->Id = v19;
LABEL_16:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 6011);
  return v7;
}
