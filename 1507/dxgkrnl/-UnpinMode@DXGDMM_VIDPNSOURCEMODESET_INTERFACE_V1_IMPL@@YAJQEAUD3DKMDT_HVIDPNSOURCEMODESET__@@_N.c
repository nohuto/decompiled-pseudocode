/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00C7C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v16; // r9
  unsigned int v17; // ecx
  struct D3DKMDT_HVIDPN__ *v18; // rsi
  unsigned __int64 v19; // rax
  struct D3DKMDT_HVIDPN__ *v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+50h] [rbp+18h] BYREF
  int v31; // [rsp+54h] [rbp+1Ch]

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
      v26 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      *(_QWORD *)(v26 + 24) = this;
      *(_QWORD *)(v26 + 32) = v13;
    }
    else
    {
      v14 = *((_QWORD *)v7 + 14);
      if ( !v14 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( !*(_QWORD *)(v14 + 40) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v28);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
      v17 = *(_DWORD *)(v14 + 24);
      v18 = (struct D3DKMDT_HVIDPN__ *)Container;
      v19 = *(_QWORD *)(Container + 48);
      v31 = -1;
      v20 = v18 + 22;
      v30 = v17;
      if ( v18 != (struct D3DKMDT_HVIDPN__ *)-88LL )
        v20 = v18;
      LOBYTE(v16) = v3;
      v21 = VIDPN_MGR::FormalizeVidPnChange(v19, v20, 4LL, v16, &v30);
      v13 = v21;
      if ( v21 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v29[3] = *(unsigned int *)(v14 + 24);
        v29[4] = v18;
        v29[5] = v13;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        LODWORD(v13) = 0;
      }
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v13) = -1071774968;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 6008);
  return (unsigned int)v13;
}
