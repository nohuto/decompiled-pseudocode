/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007D3F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007E894 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        __int64 a4)
{
  DXGGLOBAL *v4; // rax
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v24)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = DXGGLOBAL::m_pGlobal;
  v6 = this;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v18);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement((volatile signed __int32 *)v4 + 14);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7011);
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v6 && *((_DWORD *)v6 + 32) == 1833173005 )
      v9 = v6;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v25 = 0;
      v26 = 0LL;
      v24 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v10 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
              v9,
              &v24,
              &v26);
      v6 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v10;
      if ( v10 == -1071774902 )
      {
        v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v17 = v26 == 0LL;
        *(_QWORD *)(v16 + 24) = v9;
        if ( !v17 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v21);
        }
        LODWORD(v6) = 1075708679;
      }
      else if ( v10 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v22 + 24) = v9;
        *(_QWORD *)(v22 + 32) = v6;
        WdLogEvent5_WdError(v22);
      }
      else
      {
        v6 = v26;
        if ( !v26 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v23);
        }
        *(_QWORD *)a2 = v6;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v20 + 24) = v6;
      WdLogEvent5_WdError(v20);
      LODWORD(v6) = -1071774967;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7011);
  return (unsigned int)v6;
}
