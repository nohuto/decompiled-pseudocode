/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00A19D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0009EC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0092718 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v26)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v27; // [rsp+28h] [rbp-10h]
  __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 10);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v6, &EventProfilerEnter, v7, 7003);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v12 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v12 )
    {
      v27 = 0;
      v28 = 0LL;
      v26 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v13 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v12,
              (__int64)&v26,
              &v28);
      v4 = v13;
      if ( v13 == -1071774902 )
      {
        v19 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
        v20 = v28 == 0;
        *(_QWORD *)(v19 + 24) = v12;
        if ( !v20 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v23);
        }
        LODWORD(v4) = 1075708679;
      }
      else if ( v13 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v24 + 24) = v12;
        *(_QWORD *)(v24 + 32) = v4;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v4 = v28;
        if ( !v28 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v25);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = v4;
    WdLogEvent5_WdError(v21);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7003);
  return (unsigned int)v4;
}
