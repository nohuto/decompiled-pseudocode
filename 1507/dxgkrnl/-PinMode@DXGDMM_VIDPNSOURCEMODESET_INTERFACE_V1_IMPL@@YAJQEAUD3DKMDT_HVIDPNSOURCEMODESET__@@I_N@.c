/*
 * XREFs of ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00D79D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007400 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DMMVIDPNSOURCEMODESET *v11; // rsi
  __int64 v12; // rbx
  __int64 Container; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6007);
  v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v11 = (struct DMMVIDPNSOURCEMODESET *)v6;
  if ( v6 )
  {
    v12 = *(_QWORD *)(v6 + 112);
    if ( !v12 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( !*(_QWORD *)(v12 + 40) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v21);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
    LOBYTE(v14) = v3;
    v16 = VIDPN_MGR::PinVidPnSourceMode(*(VIDPN_MGR **)(Container + 48), v11, (unsigned int)v4, v14);
    if ( v16 < 0 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v15);
      *(_QWORD *)(v22 + 24) = v4;
      *(_QWORD *)(v22 + 32) = this;
      WdLogEvent5_WdDmmEvent(v22);
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v16 = -1071774968;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v17, 6007);
  return (unsigned int)v16;
}
