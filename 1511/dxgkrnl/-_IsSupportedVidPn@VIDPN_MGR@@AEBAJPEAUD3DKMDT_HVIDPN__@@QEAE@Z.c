/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C008FB18
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C0099470 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00A0E9C (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(ADAPTER_DISPLAY **this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  DXGADAPTER *v9; // r14
  __int64 v10; // rcx
  int IsSupportedVidPn; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v22; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0;
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2);
  v8 = v6;
  if ( !*(_BYTE *)(v6 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v6 + 96)) )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = a2;
    WdLogEvent5_WdError(v16);
    *a3 = 0;
    return 0LL;
  }
  LOBYTE(v7) = *(_BYTE *)(v8 + 172);
  if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v8 + 174)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !this[1] )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = (DXGADAPTER *)*((_QWORD *)this[1] + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
  }
  v22.hDesiredVidPn = a2;
  *(_QWORD *)&v22.IsVidPnSupported = 0LL;
  if ( !this[1] )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v20);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(this[1], &v22);
  v13 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v22.IsVidPnSupported;
    return 0LL;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v21[3] = a2;
  v21[4] = v9;
  v21[5] = v13;
  WdLogEvent5_WdError(v21);
  return (unsigned int)v13;
}
