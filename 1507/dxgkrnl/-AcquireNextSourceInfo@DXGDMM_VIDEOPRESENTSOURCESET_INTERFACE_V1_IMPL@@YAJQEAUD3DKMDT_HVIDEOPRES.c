/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C0177D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C000D0FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000D22C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017D120 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a4)
{
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v34)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-40h] BYREF
  int v35; // [rsp+28h] [rbp-38h]
  __int64 v36; // [rsp+30h] [rbp-30h]
  __int64 v37; // [rsp+50h] [rbp-10h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v38; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6042);
  v7 = 0;
  if ( !a3 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = 0LL;
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    v11 = -1073741811;
LABEL_27:
    v25 = v11;
    goto LABEL_28;
  }
  *a3 = 0LL;
  v14 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v14 )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v11 = -1071774955;
    goto LABEL_27;
  }
  if ( a2 )
    v18 = a2 - 4;
  else
    v18 = 0LL;
  if ( !v18 || *(_DWORD *)v18 != 305419896 )
  {
    v32 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v32 + 24) = v18;
    WdLogEvent5_WdError(v32);
    v11 = -1071774972;
    goto LABEL_27;
  }
  v19 = *((_QWORD *)v18 + 1);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::ContainsByReference(v14 + 8, v19) )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = v18;
    *(_QWORD *)(v22 + 32) = v14;
    WdLogEvent5_WdError(v22);
    v11 = -1071774928;
    goto LABEL_27;
  }
  v35 = 0;
  v34 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v37 = v19;
  v38 = 0LL;
  v36 = v19;
  v25 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
          v14,
          &v34,
          &v38);
  if ( v25 == -1071774972 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v23, v10, v24) + 24) = v14;
    if ( v38 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v9, v26, v10, v27);
      WdLogEvent5_WdAssertion(v28);
    }
    v11 = 1075708748;
    goto LABEL_27;
  }
  if ( v25 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v29 + 24) = v18;
    *(_QWORD *)(v29 + 32) = v14;
    WdLogEvent5_WdError(v29);
LABEL_28:
    v7 = v25;
    goto LABEL_29;
  }
  v30 = v38;
  if ( !*(_QWORD *)&v38 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v9, v23, v10, v24);
    WdLogEvent5_WdAssertion(v31);
  }
  *a3 = v30;
LABEL_29:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6042);
  return v7;
}
