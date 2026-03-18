/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C0097B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004620 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00885C4 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v30; // rdx
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int128 v40; // [rsp+20h] [rbp-40h]
  __int128 v41; // [rsp+40h] [rbp-20h] BYREF
  __int64 v42; // [rsp+50h] [rbp-10h]
  __int64 v43; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     (__int64)this,
                                                     (__int64)a2,
                                                     (__int64)a3,
                                                     (__int64)a4) + 17);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7010);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v13 = 0;
  v11[3] = a2;
  v11[4] = v6;
  v11[5] = a3;
  if ( !a3 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v32[3] = 0LL;
    v32[4] = a2;
    v32[5] = v6;
    WdLogEvent5_WdError(v32);
    LODWORD(v6) = -1073741811;
LABEL_21:
    v13 = v6;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v18 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v6);
  if ( !v18 )
  {
    v33 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v33 + 24) = v6;
    WdLogEvent5_WdError(v33);
    LODWORD(v6) = -1071774967;
    goto LABEL_21;
  }
  if ( a2 )
    v19 = a2 - 4;
  else
    v19 = 0LL;
  if ( !v19 || *(_DWORD *)v19 != 305419896 )
  {
    v39 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v39 + 24) = v19;
    WdLogEvent5_WdError(v39);
    LODWORD(v6) = -1071774959;
    goto LABEL_21;
  }
  v20 = *((_QWORD *)v19 + 1);
  if ( !v20 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v18 + 32, v20) )
  {
    v35 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v35 + 24) = v19;
    *(_QWORD *)(v35 + 32) = v18;
    WdLogEvent5_WdError(v35);
    LODWORD(v6) = -1071774928;
    goto LABEL_21;
  }
  DWORD2(v40) = 0;
  *(_QWORD *)&v40 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v43 = 0LL;
  v41 = v40;
  v42 = v20;
  v23 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v18,
          (__int64)&v41,
          &v43,
          v22);
  v6 = v23;
  if ( v23 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v24, v26, v27) + 24) = v18;
    if ( v43 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25, v30, v26, v31);
      WdLogEvent5_WdAssertion(v36);
    }
    LODWORD(v6) = 1075708748;
    goto LABEL_21;
  }
  if ( v23 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v37[3] = v19;
    v37[4] = v18;
    v37[5] = v6;
    WdLogEvent5_WdError(v37);
    goto LABEL_21;
  }
  v28 = v43;
  if ( !v43 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    WdLogEvent5_WdAssertion(v38);
  }
  *(_QWORD *)&a3->Id = v28;
LABEL_16:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 7010);
  return v13;
}
