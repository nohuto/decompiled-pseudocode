/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C00CA7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00032D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00CA928 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edi
  __int64 v22; // rdi
  __int64 v24; // rdx
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v34)(DMMVIDPNSOURCEMODESET *, const struct DMMVIDPNSOURCEMODE *const); // [rsp+20h] [rbp-40h] BYREF
  int v35; // [rsp+28h] [rbp-38h]
  __int64 v36; // [rsp+30h] [rbp-30h]
  __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6004);
  v7 = 0;
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v26[3] = 0LL;
    v26[4] = a2;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    v21 = -1073741811;
LABEL_21:
    v7 = v21;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v12 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v27 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    v21 = -1071774968;
    goto LABEL_21;
  }
  if ( a2 )
    v13 = a2 - 4;
  else
    v13 = 0LL;
  if ( !v13 || *(_DWORD *)v13 != 305419896 )
  {
    v33 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v33 + 24) = v13;
    WdLogEvent5_WdError(v33);
    v21 = -1071774960;
    goto LABEL_21;
  }
  v14 = *((_QWORD *)v13 + 1);
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference(v12 + 32, v14) )
  {
    v29 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v29 + 24) = v13;
    *(_QWORD *)(v29 + 32) = v12;
    WdLogEvent5_WdError(v29);
    v21 = -1071774928;
    goto LABEL_21;
  }
  v35 = 0;
  v34 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v37 = v14;
  v38 = 0LL;
  v36 = v14;
  v16 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v12,
          &v34,
          &v38);
  v21 = v16;
  if ( v16 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v12;
    if ( v38 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v18, v24, v19, v25);
      WdLogEvent5_WdAssertion(v30);
    }
    v21 = 1075708748;
    goto LABEL_21;
  }
  if ( v16 < 0 )
  {
    v31 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v31 + 24) = v13;
    *(_QWORD *)(v31 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v31);
    goto LABEL_21;
  }
  v22 = v38;
  if ( !v38 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v32);
  }
  *(_QWORD *)&a3->Id = v22;
LABEL_16:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 6004);
  return v7;
}
