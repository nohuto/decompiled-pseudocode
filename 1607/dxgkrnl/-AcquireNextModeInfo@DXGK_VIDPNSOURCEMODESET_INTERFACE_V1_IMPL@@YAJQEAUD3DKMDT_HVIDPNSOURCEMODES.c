/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01A8520
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0004200 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000ADB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0081518 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVID.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a4)
{
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
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v34; // [rsp+20h] [rbp-40h]
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+80h] [rbp+20h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 13);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, v9, 7002);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v13 = 0;
  v11[3] = a2;
  v11[4] = this;
  v11[5] = a3;
  if ( !a3 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = 0LL;
    v14[4] = a2;
    v14[5] = this;
    WdLogEvent5_WdError(v14);
    LODWORD(a2) = -1073741811;
LABEL_26:
    v13 = (unsigned int)a2;
    goto LABEL_27;
  }
  *(_QWORD *)&a3->Id = 0LL;
  v18 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    LODWORD(a2) = -1071774968;
    goto LABEL_26;
  }
  v20 = a2 - 4;
  if ( !a2 )
    v20 = 0LL;
  if ( !v20 || *(_DWORD *)v20 != 305419896 )
  {
    v32 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v32 + 24) = a2;
    WdLogEvent5_WdError(v32);
    LODWORD(a2) = -1071774960;
    goto LABEL_26;
  }
  v21 = *((_QWORD *)v20 + 1);
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference(v18 + 32, v21) )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v24 + 24) = v20;
    *(_QWORD *)(v24 + 32) = v18;
    WdLogEvent5_WdError(v24);
    LODWORD(a2) = -1071774928;
    goto LABEL_26;
  }
  DWORD2(v34) = 0;
  *(_QWORD *)&v34 = DMMVIDPNSOURCEMODESET::GetNextMode;
  v37 = 0LL;
  v35 = v34;
  v36 = v21;
  v25 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
          v18,
          (__int64)&v35,
          &v37);
  a2 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *const)v25;
  if ( v25 == -1071774902 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v26, v16, v27) + 24) = v18;
    if ( v37 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v28);
    }
    LODWORD(a2) = 1075708748;
    goto LABEL_26;
  }
  if ( v25 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v29[3] = v20;
    v29[4] = v18;
    v29[5] = a2;
    WdLogEvent5_WdError(v29);
    goto LABEL_26;
  }
  v30 = v37;
  if ( !v37 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v31);
  }
  *(_QWORD *)&a3->Id = v30;
LABEL_27:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7002);
  return v13;
}
