/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00897A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089988 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3,
        __int64 a4)
{
  struct DXGGLOBAL *v4; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DMMVIDPNPRESENTPATH *(__fastcall *v26)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-18h] BYREF
  int v27; // [rsp+28h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v28; // [rsp+40h] [rbp+8h] BYREF

  v4 = DXGGLOBAL::m_pGlobal;
  v6 = this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v20);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 18);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7036);
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v6 && *((_DWORD *)v6 + 46) == 1833173002 )
      v9 = v6;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v27 = 0;
      v28 = 0LL;
      v26 = DMMVIDPNTOPOLOGY::GetFirstPath;
      v10 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              v9,
              &v26,
              &v28);
      v6 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v10;
      if ( v10 == -1071774937 )
      {
        v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v19 = v28 == 0LL;
        *(_QWORD *)(v16 + 24) = v9;
        if ( !v19 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v12, v17, v13, v18);
          WdLogEvent5_WdAssertion(v23);
        }
        LODWORD(v6) = 1075708747;
      }
      else if ( v10 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v24 + 24) = v9;
        *(_QWORD *)(v24 + 32) = v6;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v6 = v28;
        if ( !v28 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
          WdLogEvent5_WdAssertion(v25);
        }
        *(_QWORD *)a2 = v6;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdError(v22);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = v6;
    WdLogEvent5_WdError(v21);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7036);
  return (unsigned int)v6;
}
