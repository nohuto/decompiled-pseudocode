/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C017481C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C017AA64 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 Container; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // rax
  DXGK_ENUM_PIVOT v39; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v5);
  v15 = v10;
  if ( v10 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v39.VidPnSourceId = -1;
    v39.VidPnTargetId = -1;
    v23 = Container + 88;
    v24 = Container;
    if ( Container == -88 )
      v24 = 0LL;
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)this, v24, 11, &v39);
    v31 = v26;
    if ( v26 >= 0 )
    {
      LODWORD(v31) = 0;
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
      v36[3] = v24;
      v36[4] = 11LL;
      v36[5] = &v39;
      if ( !*((_QWORD *)this + 1) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
        WdLogEvent5_WdAssertion(v37);
      }
      v28 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v36[6] = v28;
      v36[7] = v31;
    }
    if ( (int)v31 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v38[3] = v5;
      if ( v23 )
        v4 = v23 - 88;
      v38[5] = (int)v31;
      v38[4] = v4;
      WdLogEvent5_WdError(v38);
      return (unsigned int)v31;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v16[3] = v5;
    v16[4] = a2;
    v16[5] = v15;
    return (unsigned int)v15;
  }
}
