/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0097A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00884D8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v30)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v31; // [rsp+28h] [rbp-10h]
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, a4) + 14);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerEnter, v8, 7011);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v5);
    if ( v13 )
    {
      v31 = 0;
      v32 = 0LL;
      v30 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v15 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
              v13,
              (__int64)&v30,
              &v32,
              v14);
      v5 = v15;
      if ( v15 == -1071774902 )
      {
        v21 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
        v24 = v32 == 0;
        *(_QWORD *)(v21 + 24) = v13;
        if ( !v24 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v17, v22, v18, v23);
          WdLogEvent5_WdAssertion(v27);
        }
        LODWORD(v5) = 1075708679;
      }
      else if ( v15 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v28 + 24) = v13;
        *(_QWORD *)(v28 + 32) = v5;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        v5 = v32;
        if ( !v32 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          WdLogEvent5_WdAssertion(v29);
        }
        *(_QWORD *)a2 = v5;
        LODWORD(v5) = 0;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v26 + 24) = v5;
      WdLogEvent5_WdError(v26);
      LODWORD(v5) = -1071774967;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = v5;
    WdLogEvent5_WdError(v25);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7011);
  return (unsigned int)v5;
}
