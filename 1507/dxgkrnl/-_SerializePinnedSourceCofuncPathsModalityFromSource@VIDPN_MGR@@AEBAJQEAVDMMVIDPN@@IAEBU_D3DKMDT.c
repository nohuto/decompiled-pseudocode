/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0174F90
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01736C4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  struct DMMVIDPNSOURCEMODESET *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  struct DMMVIDPNSOURCEMODESET *v38; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  v16 = v12;
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = v5;
    WdLogEvent5_WdError(v17);
    return 3223192324LL;
  }
  v38 = 0LL;
  v19 = *(_QWORD *)(v12 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v16 + 104);
    if ( v20 )
      goto LABEL_13;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = WdLogNewEntry5_WdAssertion(v13, v16, v14, v15);
  WdLogEvent5_WdAssertion(v21);
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v38, v20);
  v22 = v38;
  v23 = VIDPN_MGR::PinVidPnSourceMode(this, v38, a4);
  v28 = v23;
  if ( v23 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
    v29[3] = a4;
    v29[4] = v22;
    v29[5] = v28;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v38, 0LL);
    return (unsigned int)v28;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v38, 0LL);
  v30 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v28 = v30;
  if ( v30 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v34[3] = v5;
    if ( !*((_QWORD *)this + 1) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v33, v32, v35, v36);
      WdLogEvent5_WdAssertion(v37);
    }
    v34[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v34[5] = v28;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v28;
  }
  return 0LL;
}
