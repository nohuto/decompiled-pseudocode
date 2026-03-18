/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C0080B40
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C007FE94 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  DXGGLOBAL *v4; // rax
  unsigned int v5; // ebx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int128 v33; // [rsp+20h] [rbp-40h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+80h] [rbp+20h] BYREF

  v4 = DXGGLOBAL::m_pGlobal;
  v5 = 0;
  v8 = (__int64)this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v22);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 19);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7037);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9[3] = a2;
  v9[4] = v8;
  v9[5] = a3;
  if ( !a3 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v23[3] = 0LL;
    v23[4] = a2;
    v23[5] = v8;
    WdLogEvent5_WdError(v23);
    LODWORD(v8) = -1073741811;
LABEL_21:
    v5 = v8;
    goto LABEL_22;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !v8 || (v11 = v8, *(_DWORD *)(v8 + 184) != 1833173002) )
    v11 = 0LL;
  if ( !v11 )
  {
    v24 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v24 + 24) = v8;
    WdLogEvent5_WdError(v24);
    LODWORD(v8) = -1071774976;
    goto LABEL_21;
  }
  if ( a2 )
    v12 = a2 - 4;
  else
    v12 = 0LL;
  if ( !v12 || *(_DWORD *)v12 != 305419896 )
  {
    v32 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v32 + 24) = v12;
    WdLogEvent5_WdError(v32);
    LODWORD(v8) = -1071774951;
    goto LABEL_21;
  }
  v13 = *((_QWORD *)v12 + 1);
  if ( !v13 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v25);
LABEL_31:
    v26 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v26 + 24) = v12;
    *(_QWORD *)(v26 + 32) = v11;
    WdLogEvent5_WdError(v26);
    LODWORD(v8) = -1071774928;
    goto LABEL_21;
  }
  v14 = (_QWORD *)(v11 + 24);
  if ( (_QWORD *)*v14 == v14 )
    goto LABEL_31;
  v15 = *v14 - 8LL;
  if ( *v14 == 8LL )
    goto LABEL_31;
  do
  {
    if ( v15 == v13 )
      break;
    v27 = *(_QWORD **)(v15 + 8);
    v15 = v27 == v14 ? 0LL : (__int64)(v27 - 1);
  }
  while ( v15 );
  if ( !v15 )
    goto LABEL_31;
  DWORD2(v33) = 0;
  *(_QWORD *)&v33 = DMMVIDPNTOPOLOGY::GetNextPath;
  v36 = 0LL;
  v34 = v33;
  v35 = v13;
  v16 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v11,
          (__int64)&v34,
          &v36,
          1);
  v8 = v16;
  if ( v16 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v11;
    if ( v36 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v28);
    }
    LODWORD(v8) = 1075708748;
    goto LABEL_21;
  }
  if ( v16 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v29[3] = v12;
    v29[4] = v11;
    v29[5] = v8;
    WdLogEvent5_WdError(v29);
    goto LABEL_21;
  }
  v30 = v36;
  if ( !v36 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v31);
  }
  *(_QWORD *)&a3->VidPnSourceId = v30;
LABEL_22:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 7037);
  return v5;
}
