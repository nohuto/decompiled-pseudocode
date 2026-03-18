/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00BCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0004F58 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000BB18 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0092DE8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
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
  __int64 v14; // rcx
  __int64 v15; // r14
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // [rsp+20h] [rbp-40h]
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 17);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7010);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v13 = 0;
  v11[3] = a2;
  v11[4] = v6;
  v11[5] = a3;
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v26[3] = 0LL;
    v26[4] = a2;
    v26[5] = v6;
    WdLogEvent5_WdError(v26);
    LODWORD(v6) = -1073741811;
LABEL_21:
    v13 = v6;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v15 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v6);
  if ( !v15 )
  {
    v27 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v27 + 24) = v6;
    WdLogEvent5_WdError(v27);
    LODWORD(v6) = -1071774967;
    goto LABEL_21;
  }
  if ( a2 )
    v16 = a2 - 4;
  else
    v16 = 0LL;
  if ( !v16 || *(_DWORD *)v16 != 305419896 )
  {
    v33 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v33 + 24) = v16;
    WdLogEvent5_WdError(v33);
    LODWORD(v6) = -1071774959;
    goto LABEL_21;
  }
  v17 = *((_QWORD *)v16 + 1);
  if ( !v17 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(v15 + 32, v17) )
  {
    v29 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v29 + 24) = v16;
    *(_QWORD *)(v29 + 32) = v15;
    WdLogEvent5_WdError(v29);
    LODWORD(v6) = -1071774928;
    goto LABEL_21;
  }
  DWORD2(v34) = 0;
  *(_QWORD *)&v34 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v37 = 0LL;
  v35 = v34;
  v36 = v17;
  v19 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
          v15,
          (__int64)&v35,
          &v37);
  v6 = v19;
  if ( v19 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v15;
    if ( v37 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v30);
    }
    LODWORD(v6) = 1075708748;
    goto LABEL_21;
  }
  if ( v19 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v31[3] = v16;
    v31[4] = v15;
    v31[5] = v6;
    WdLogEvent5_WdError(v31);
    goto LABEL_21;
  }
  v24 = v37;
  if ( !v37 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v32);
  }
  *(_QWORD *)&a3->Id = v24;
LABEL_16:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 7010);
  return v13;
}
