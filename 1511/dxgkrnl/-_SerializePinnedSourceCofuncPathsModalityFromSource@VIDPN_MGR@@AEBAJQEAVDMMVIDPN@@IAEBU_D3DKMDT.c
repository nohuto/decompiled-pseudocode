/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017956C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0177CE0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017E978 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  struct DMMVIDPNSOURCEMODESET *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rax
  struct DMMVIDPNSOURCEMODESET *v33; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  v14 = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdError(v15);
    return 3223192324LL;
  }
  v33 = 0LL;
  v17 = *(_QWORD *)(v12 + 104);
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
    v18 = *(_QWORD *)(v14 + 104);
    if ( v18 )
      goto LABEL_13;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = WdLogNewEntry5_WdAssertion(v13);
  WdLogEvent5_WdAssertion(v19);
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v33, v18);
  v20 = v33;
  v21 = VIDPN_MGR::PinVidPnSourceMode(this, v33, a4);
  v26 = v21;
  if ( v21 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
    v27[3] = a4;
    v27[4] = v20;
    v27[5] = v26;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v33, 0LL);
    return (unsigned int)v26;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v33, 0LL);
  v28 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v26 = v28;
  if ( v28 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v31[3] = v5;
    if ( !*((_QWORD *)this + 1) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v32);
    }
    v31[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v31[5] = v26;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v26;
  }
  return 0LL;
}
