/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01A2844
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01A029C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01A8290 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 Container; // rax
  __int64 v18; // rdi
  struct D3DKMDT_HVIDPN__ *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned int v23; // [rsp+58h] [rbp+10h] BYREF
  int v24; // [rsp+5Ch] [rbp+14h]

  v3 = 0LL;
  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = v4;
    v15[4] = a2;
    v15[5] = v14;
    return (unsigned int)v14;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v23 = -1;
  v24 = -1;
  v18 = Container + 88;
  v19 = (struct D3DKMDT_HVIDPN__ *)Container;
  if ( Container == -88 )
    v19 = 0LL;
  v20 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v19, 11, 1, &v23);
  v14 = v20;
  if ( v20 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v22[3] = v4;
    if ( v18 )
      v3 = v18 - 88;
    v22[4] = v3;
    v22[5] = v14;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v14;
  }
  return 0LL;
}
