/*
 * XREFs of ?AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DEC40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0096080 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
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
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v24)(DMMVIDPNSOURCEMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6003);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v6 )
    {
      v25 = 0;
      v26 = 0LL;
      v24 = DMMVIDPNSOURCEMODESET::GetFirstMode;
      v8 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
             v6,
             (__int64)&v24,
             &v26,
             v7);
      v13 = v8;
      if ( v8 == -1071774902 )
      {
        v18 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
        *(_QWORD *)(v18 + 24) = v6;
        WdLogEvent5_WdWarning(v18);
        if ( v26 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v10, v19, v11, v20);
          WdLogEvent5_WdAssertion(v21);
        }
        v13 = 1075708747;
      }
      else if ( v8 < 0 )
      {
        v22 = WdLogNewEntry5_WdDmmEvent(v10);
        *(_QWORD *)(v22 + 24) = v6;
        WdLogEvent5_WdDmmEvent(v22);
      }
      else
      {
        v14 = v26;
        if ( !v26 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
          WdLogEvent5_WdAssertion(v23);
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
      v13 = -1071774968;
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
    Template_q(v10, &EventProfilerExit, v11, 6003);
  return v13;
}
