/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D3930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0001D70 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C007EAFC (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 Container; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v6;
  if ( v6 )
  {
    v11 = DMMVIDPNTARGETMODESET::PinMode(v6, v4);
    if ( v11 < 0 )
    {
      v20 = WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
      *(_QWORD *)(v20 + 24) = v4;
      *(_QWORD *)(v20 + 32) = this;
    }
    else
    {
      v14 = *((_QWORD *)v8 + 14);
      if ( !v14 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !*(_QWORD *)(v14 + 40) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v22);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
      v11 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v8, v4, v3);
      if ( v11 < 0 )
      {
        v23 = WdLogNewEntry5_WdDmmEvent(v16);
        *(_QWORD *)(v23 + 24) = v4;
        *(_QWORD *)(v23 + 32) = this;
        WdLogEvent5_WdDmmEvent(v23);
      }
      else
      {
        v11 = 0;
      }
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v11 = -1071774967;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 6014);
  return (unsigned int)v11;
}
