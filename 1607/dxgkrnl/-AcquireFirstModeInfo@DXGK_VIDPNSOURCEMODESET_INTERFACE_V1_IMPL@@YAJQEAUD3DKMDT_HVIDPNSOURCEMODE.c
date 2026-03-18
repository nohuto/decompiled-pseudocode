/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01A8390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000ADB8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00813FC (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
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
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v25)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v26; // [rsp+28h] [rbp-10h]
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 12);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerEnter, v7, 7001);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v15 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v26 = 0;
      v27 = 0LL;
      v25 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v17 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v15,
              (__int64)&v25,
              &v27);
      v4 = v17;
      if ( v17 == -1071774902 )
      {
        v20 = WdLogNewEntry5_WdWarning(v12, v18, v13, v19);
        *(_QWORD *)(v20 + 24) = v15;
        WdLogEvent5_WdWarning(v20);
        if ( v27 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v21);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v17 >= 0 )
      {
        v4 = v27;
        if ( !v27 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v23);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v22 + 24) = v15;
        *(_QWORD *)(v22 + 32) = v4;
        WdLogEvent5_WdError(v22);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = v4;
    WdLogEvent5_WdError(v11);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7001);
  return (unsigned int)v4;
}
