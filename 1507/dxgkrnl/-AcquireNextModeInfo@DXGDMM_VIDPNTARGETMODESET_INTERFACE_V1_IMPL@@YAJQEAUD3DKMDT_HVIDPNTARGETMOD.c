/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D4070
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004620 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00885C4 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edi
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v35)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-40h] BYREF
  int v36; // [rsp+28h] [rbp-38h]
  __int64 v37; // [rsp+30h] [rbp-30h]
  __int64 v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6011);
  v7 = 0;
  if ( !a3 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v27[3] = 0LL;
    v27[4] = a2;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v22 = -1073741811;
LABEL_21:
    v7 = v22;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v12 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v22 = -1071774967;
    goto LABEL_21;
  }
  if ( a2 )
    v13 = a2 - 4;
  else
    v13 = 0LL;
  if ( !v13 || *(_DWORD *)v13 != 305419896 )
  {
    v34 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v34 + 24) = v13;
    WdLogEvent5_WdError(v34);
    v22 = -1071774959;
    goto LABEL_21;
  }
  v14 = *((_QWORD *)v13 + 1);
  if ( !v14 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v12 + 32, v14) )
  {
    v30 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v30 + 24) = v13;
    *(_QWORD *)(v30 + 32) = v12;
    WdLogEvent5_WdError(v30);
    v22 = -1071774928;
    goto LABEL_21;
  }
  v36 = 0;
  v35 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v38 = v14;
  v39 = 0LL;
  v37 = v14;
  v17 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v12,
          (__int64)&v35,
          &v39,
          v16);
  v22 = v17;
  if ( v17 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = v12;
    if ( v39 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v19, v25, v20, v26);
      WdLogEvent5_WdAssertion(v31);
    }
    v22 = 1075708748;
    goto LABEL_21;
  }
  if ( v17 < 0 )
  {
    v32 = WdLogNewEntry5_WdDmmEvent(v19);
    *(_QWORD *)(v32 + 24) = v13;
    *(_QWORD *)(v32 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v32);
    goto LABEL_21;
  }
  v23 = v39;
  if ( !v39 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v33);
  }
  *(_QWORD *)&a3->Id = v23;
LABEL_16:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 6011);
  return v7;
}
