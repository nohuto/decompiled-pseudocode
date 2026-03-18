/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00E4940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0009EC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000FB9C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rcx
  DMMVIDPNTARGETMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 Container; // rax
  unsigned int v16; // ecx
  struct D3DKMDT_HVIDPN__ *v17; // rsi
  VIDPN_MGR *v18; // rax
  struct D3DKMDT_HVIDPN__ *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+50h] [rbp+18h] BYREF
  int v30; // [rsp+54h] [rbp+1Ch]

  v3 = (char)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6008);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( v5 )
  {
    v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
    v13 = v8;
    if ( v8 < 0 )
    {
      v25 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      *(_QWORD *)(v25 + 24) = this;
      *(_QWORD *)(v25 + 32) = v13;
    }
    else
    {
      v14 = *((_QWORD *)v7 + 14);
      if ( !v14 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( !*(_QWORD *)(v14 + 40) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v27);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
      v16 = *(_DWORD *)(v14 + 24);
      v17 = (struct D3DKMDT_HVIDPN__ *)Container;
      v18 = *(VIDPN_MGR **)(Container + 48);
      v30 = -1;
      v19 = v17 + 22;
      v29 = v16;
      if ( v17 != (struct D3DKMDT_HVIDPN__ *)-88LL )
        v19 = v17;
      v20 = VIDPN_MGR::FormalizeVidPnChange(v18, v19, 4, v3, &v29);
      v13 = v20;
      if ( v20 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v28[3] = *(unsigned int *)(v14 + 24);
        v28[4] = v17;
        v28[5] = v13;
        WdLogEvent5_WdError(v28);
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    LODWORD(v13) = -1071774968;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 6008);
  return (unsigned int)v13;
}
