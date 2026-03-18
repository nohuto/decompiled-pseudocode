/*
 * XREFs of ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C017C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C000E284 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000E43C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01811B8 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTTARGET@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a4)
{
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v29)(DMMVIDEOPRESENTTARGETSET *, const struct DMMVIDEOPRESENTTARGET *const); // [rsp+20h] [rbp-40h] BYREF
  int v30; // [rsp+28h] [rbp-38h]
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+90h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6046);
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
    v22 = v11;
    goto LABEL_28;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v13 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    v11 = -1071774954;
    goto LABEL_27;
  }
  if ( a2 )
    v15 = a2 - 4;
  else
    v15 = 0LL;
  if ( !v15 || *(_DWORD *)v15 != 305419896 )
  {
    v27 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v27 + 24) = v15;
    WdLogEvent5_WdError(v27);
    v11 = -1071774971;
    goto LABEL_27;
  }
  v16 = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(v13 + 8, v16) )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = v15;
    *(_QWORD *)(v19 + 32) = v13;
    WdLogEvent5_WdError(v19);
    v11 = -1071774928;
    goto LABEL_27;
  }
  v30 = 0;
  v29 = DMMVIDEOPRESENTTARGETSET::GetNextTarget;
  v32 = v16;
  v33 = 0LL;
  v31 = v16;
  v22 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET,DMMVIDEOPRESENTTARGET const *>>>(
          v13,
          &v29,
          &v33);
  if ( v22 == -1071774971 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v20, v10, v21) + 24) = v13;
    if ( v33 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v23);
    }
    v11 = 1075708748;
    goto LABEL_27;
  }
  if ( v22 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = v15;
    *(_QWORD *)(v24 + 32) = v13;
    WdLogEvent5_WdError(v24);
LABEL_28:
    v7 = v22;
    goto LABEL_29;
  }
  v25 = v33;
  if ( !v33 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v26);
  }
  *(_QWORD *)&a3->Id = v25;
LABEL_29:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6046);
  return v7;
}
