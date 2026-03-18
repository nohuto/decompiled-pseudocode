/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C017B290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0096080 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNSOURCEMODE *(__fastcall *v29)(DMMVIDPNSOURCEMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v30; // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, (__int64)a3, a4) + 12);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v7, &EventProfilerEnter, v8, 7001);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v16 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v5);
    if ( v16 )
    {
      v30 = 0;
      v31 = 0LL;
      v29 = DMMVIDPNSOURCEMODESET::GetFirstMode;
      v19 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v16,
              (__int64)&v29,
              &v31,
              v17);
      v5 = v19;
      if ( v19 == -1071774902 )
      {
        v22 = WdLogNewEntry5_WdWarning(v13, v20, v14, v21);
        *(_QWORD *)(v22 + 24) = v16;
        WdLogEvent5_WdWarning(v22);
        if ( v31 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v13, v23, v14, v24);
          WdLogEvent5_WdAssertion(v25);
        }
        LODWORD(v5) = 1075708747;
      }
      else if ( v19 >= 0 )
      {
        v5 = v31;
        if ( !v31 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v13, v20, v14, v21);
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)a2 = v5;
        LODWORD(v5) = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v26 + 24) = v16;
        *(_QWORD *)(v26 + 32) = v5;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v18 + 24) = v5;
      WdLogEvent5_WdError(v18);
      LODWORD(v5) = -1071774968;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = v5;
    WdLogEvent5_WdError(v12);
    LODWORD(v5) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7001);
  return (unsigned int)v5;
}
