/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C017B420
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00032D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00CA928 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int128 v40; // [rsp+20h] [rbp-40h]
  __int128 v41; // [rsp+40h] [rbp-20h] BYREF
  __int64 v42; // [rsp+50h] [rbp-10h]
  __int64 v43; // [rsp+80h] [rbp+20h] BYREF

  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(
                                                     (__int64)this,
                                                     (__int64)a2,
                                                     (__int64)a3,
                                                     (__int64)a4) + 13);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7002);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v13 = 0;
  v11[3] = v5;
  v11[4] = this;
  v11[5] = a3;
  if ( !a3 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = 0LL;
    v14[4] = v5;
    v14[5] = this;
    WdLogEvent5_WdError(v14);
    LODWORD(v5) = -1073741811;
LABEL_26:
    v13 = (unsigned int)v5;
    goto LABEL_27;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v21 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    LODWORD(v5) = -1071774968;
    goto LABEL_26;
  }
  v23 = v5 - 4;
  if ( !v5 )
    v23 = 0LL;
  if ( !v23 || *(_DWORD *)v23 != 305419896 )
  {
    v38 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v38 + 24) = v5;
    WdLogEvent5_WdError(v38);
    LODWORD(v5) = -1071774960;
    goto LABEL_26;
  }
  v24 = *((_QWORD *)v23 + 1);
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference(v21 + 32, v24) )
  {
    v28 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v28 + 24) = v23;
    *(_QWORD *)(v28 + 32) = v21;
    WdLogEvent5_WdError(v28);
    LODWORD(v5) = -1071774928;
    goto LABEL_26;
  }
  DWORD2(v40) = 0;
  *(_QWORD *)&v40 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v43 = 0LL;
  v41 = v40;
  v42 = v24;
  v29 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v21,
          (__int64)&v41,
          &v43,
          v27);
  v5 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v29;
  if ( v29 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v30, v16, v31) + 24) = v21;
    if ( v43 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v32, v16, v33);
      WdLogEvent5_WdAssertion(v34);
    }
    LODWORD(v5) = 1075708748;
    goto LABEL_26;
  }
  if ( v29 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v35[3] = v23;
    v35[4] = v21;
    v35[5] = v5;
    WdLogEvent5_WdError(v35);
    goto LABEL_26;
  }
  v36 = v43;
  if ( !v43 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v15, v30, v16, v31);
    WdLogEvent5_WdAssertion(v37);
  }
  *(_QWORD *)&a3->Id = v36;
LABEL_27:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7002);
  return v13;
}
