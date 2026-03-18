/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C008A310
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008400 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089CE8 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  struct DXGGLOBAL *v4; // rax
  unsigned int v5; // ebx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // [rsp+20h] [rbp-40h]
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+80h] [rbp+20h] BYREF

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0;
  v8 = (__int64)this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v26 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v26);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 19);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7037);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9[3] = a2;
  v9[4] = v8;
  v9[5] = a3;
  if ( !a3 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v27[3] = 0LL;
    v27[4] = a2;
    v27[5] = v8;
    WdLogEvent5_WdError(v27);
    LODWORD(v8) = -1073741811;
LABEL_19:
    v5 = v8;
    goto LABEL_20;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !v8 || (v14 = v8, *(_DWORD *)(v8 + 184) != 1833173002) )
    v14 = 0LL;
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v28 + 24) = v8;
    WdLogEvent5_WdError(v28);
    LODWORD(v8) = -1071774976;
    goto LABEL_19;
  }
  if ( a2 )
    v15 = a2 - 4;
  else
    v15 = 0LL;
  if ( !v15 || *(_DWORD *)v15 != 305419896 )
  {
    v35 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v35 + 24) = v15;
    WdLogEvent5_WdError(v35);
    LODWORD(v8) = -1071774951;
    goto LABEL_19;
  }
  v16 = *((_QWORD *)v15 + 1);
  if ( !v16 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(v14 + 8, v16) )
  {
    v30 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v30 + 24) = v15;
    *(_QWORD *)(v30 + 32) = v14;
    WdLogEvent5_WdError(v30);
    LODWORD(v8) = -1071774928;
    goto LABEL_19;
  }
  DWORD2(v36) = 0;
  *(_QWORD *)&v36 = DMMVIDPNTOPOLOGY::GetNextPath;
  v39 = 0LL;
  v37 = v36;
  v38 = v16;
  v18 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v14,
          (__int64)&v37,
          &v39,
          1LL);
  v8 = v18;
  if ( v18 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = v14;
    if ( v39 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v20, v23, v21, v24);
      WdLogEvent5_WdAssertion(v31);
    }
    LODWORD(v8) = 1075708748;
    goto LABEL_19;
  }
  if ( v18 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v32[3] = v15;
    v32[4] = v14;
    v32[5] = v8;
    WdLogEvent5_WdError(v32);
    goto LABEL_19;
  }
  v33 = v39;
  if ( !v39 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    WdLogEvent5_WdAssertion(v34);
  }
  *(_QWORD *)&a3->VidPnSourceId = v33;
LABEL_20:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 7037);
  return v5;
}
