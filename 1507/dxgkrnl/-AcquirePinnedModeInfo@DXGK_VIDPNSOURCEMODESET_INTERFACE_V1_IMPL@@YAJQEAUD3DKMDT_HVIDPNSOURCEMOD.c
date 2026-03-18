/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0095F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0096080 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
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
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v29)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v30; // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, a4) + 10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerEnter, v8, 7003);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v5);
    if ( v13 )
    {
      v30 = 0;
      v31 = 0LL;
      v29 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v14 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v13,
              &v29,
              &v31);
      v5 = v14;
      if ( v14 == -1071774902 )
      {
        v20 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        v23 = v31 == 0;
        *(_QWORD *)(v20 + 24) = v13;
        if ( !v23 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v16, v21, v17, v22);
          WdLogEvent5_WdAssertion(v26);
        }
        LODWORD(v5) = 1075708679;
      }
      else if ( v14 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v27 + 24) = v13;
        *(_QWORD *)(v27 + 32) = v5;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v5 = v31;
        if ( !v31 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
          WdLogEvent5_WdAssertion(v28);
        }
        *(_QWORD *)a2 = v5;
        LODWORD(v5) = 0;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v25 + 24) = v5;
      WdLogEvent5_WdError(v25);
      LODWORD(v5) = -1071774968;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = v5;
    WdLogEvent5_WdError(v24);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7003);
  return (unsigned int)v5;
}
