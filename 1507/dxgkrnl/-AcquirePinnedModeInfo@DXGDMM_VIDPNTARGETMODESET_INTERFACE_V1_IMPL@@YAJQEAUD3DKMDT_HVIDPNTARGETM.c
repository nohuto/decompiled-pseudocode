/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00B05A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00884D8 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v25)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v26 = 0;
      v27 = 0LL;
      v25 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v8 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
             v6,
             (__int64)&v25,
             &v27,
             v7);
      v13 = v8;
      if ( v8 == -1071774902 )
      {
        v18 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        v21 = v27 == 0;
        *(_QWORD *)(v18 + 24) = v6;
        if ( !v21 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v10, v19, v11, v20);
          WdLogEvent5_WdAssertion(v22);
        }
        v13 = 1075708679;
      }
      else if ( v8 < 0 )
      {
        v23 = WdLogNewEntry5_WdDmmEvent(v10);
        *(_QWORD *)(v23 + 24) = v6;
        WdLogEvent5_WdDmmEvent(v23);
      }
      else
      {
        v14 = v27;
        if ( !v27 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
          WdLogEvent5_WdAssertion(v24);
        }
        *(_QWORD *)a2 = v14;
        v13 = 0;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v17 + 24) = this;
      WdLogEvent5_WdError(v17);
      v13 = -1071774967;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    v13 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 6005);
  return v13;
}
