/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C0090320
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008774 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0090A40 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  struct DXGGLOBAL *v4; // rax
  unsigned int v5; // ebx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // r14
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 v31; // [rsp+20h] [rbp-40h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  __int64 v34; // [rsp+80h] [rbp+20h] BYREF

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0;
  v8 = this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v21 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v21);
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
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v22[3] = 0LL;
    v22[4] = a2;
    v22[5] = v8;
    WdLogEvent5_WdError(v22);
    LODWORD(v8) = -1073741811;
LABEL_19:
    v5 = (unsigned int)v8;
    goto LABEL_20;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !v8 || (v11 = v8, *((_DWORD *)v8 + 46) != 1833173002) )
    v11 = 0LL;
  if ( !v11 )
  {
    v23 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v23 + 24) = v8;
    WdLogEvent5_WdError(v23);
    LODWORD(v8) = -1071774976;
    goto LABEL_19;
  }
  if ( a2 )
    v12 = a2 - 4;
  else
    v12 = 0LL;
  if ( !v12 || *(_DWORD *)v12 != 305419896 )
  {
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = v12;
    WdLogEvent5_WdError(v30);
    LODWORD(v8) = -1071774951;
    goto LABEL_19;
  }
  v13 = *((_QWORD *)v12 + 1);
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference((__int64)v11 + 8, v13) )
  {
    v25 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v25 + 24) = v12;
    *(_QWORD *)(v25 + 32) = v11;
    WdLogEvent5_WdError(v25);
    LODWORD(v8) = -1071774928;
    goto LABEL_19;
  }
  DWORD2(v31) = 0;
  *(_QWORD *)&v31 = DMMVIDPNTOPOLOGY::GetNextPath;
  v34 = 0LL;
  v32 = v31;
  v33 = v13;
  v15 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v11,
          &v32,
          &v34,
          1LL,
          DMMVIDPNTOPOLOGY::GetNextPath,
          0,
          v13);
  v8 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v15;
  if ( v15 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = v11;
    if ( v34 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v26);
    }
    LODWORD(v8) = 1075708748;
    goto LABEL_19;
  }
  if ( v15 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v27[3] = v12;
    v27[4] = v11;
    v27[5] = v8;
    WdLogEvent5_WdError(v27);
    goto LABEL_19;
  }
  v28 = v34;
  if ( !v34 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v29);
  }
  *(_QWORD *)&a3->VidPnSourceId = v28;
LABEL_20:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7037);
  return v5;
}
