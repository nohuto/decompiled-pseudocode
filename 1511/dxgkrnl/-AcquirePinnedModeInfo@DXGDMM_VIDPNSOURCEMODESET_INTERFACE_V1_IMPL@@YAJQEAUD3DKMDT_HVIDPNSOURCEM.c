/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00C4480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0009EC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0092718 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v22)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+28h] [rbp-10h]
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v23 = 0;
      v24 = 0LL;
      v22 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v7 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
             v6,
             (__int64)&v22,
             &v24);
      v12 = v7;
      if ( v7 == -1071774902 )
      {
        v17 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        v18 = v24 == 0;
        *(_QWORD *)(v17 + 24) = v6;
        if ( !v18 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v19);
        }
        v12 = 1075708679;
      }
      else if ( v7 < 0 )
      {
        v20 = WdLogNewEntry5_WdDmmEvent(v9);
        *(_QWORD *)(v20 + 24) = v6;
        WdLogEvent5_WdDmmEvent(v20);
      }
      else
      {
        v13 = v24;
        if ( !v24 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v21);
        }
        *(_QWORD *)a2 = v13;
        v12 = 0;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
      v12 = -1071774968;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    v12 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 6005);
  return v12;
}
