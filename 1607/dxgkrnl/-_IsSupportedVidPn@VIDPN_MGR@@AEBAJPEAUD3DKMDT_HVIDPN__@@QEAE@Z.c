/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0084BC4
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C007D070 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00865B4 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(VIDPN_MGR *this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  VIDPN_MGR *v5; // rbp
  D3DKMDT_HVIDPN v6; // rsi
  DXGADAPTER *v7; // r14
  __int64 v8; // rcx
  int IsSupportedVidPn; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v20; // [rsp+20h] [rbp-18h] BYREF

  v5 = this;
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  *a3 = 0;
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v6 = a2;
  else
    v6 = 0LL;
  if ( !*((_BYTE *)v6 + 296) && !DmmIsAllSourcesPixelFormatValid((__int64)(v6 + 24)) )
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdError(v14);
    *a3 = 0;
    return 0LL;
  }
  LOBYTE(this) = *((_BYTE *)v6 + 172);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)v6 + 87)) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_QWORD *)v5 + 1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  v7 = *(DXGADAPTER **)(*((_QWORD *)v5 + 1) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  v20.hDesiredVidPn = a2;
  *(_QWORD *)&v20.IsVidPnSupported = 0LL;
  if ( !*((_QWORD *)v5 + 1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v18);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(*((ADAPTER_DISPLAY **)v5 + 1), &v20);
  v11 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v20.IsVidPnSupported;
    return 0LL;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v19[3] = a2;
  v19[4] = v7;
  v19[5] = v11;
  WdLogEvent5_WdError(v19);
  return (unsigned int)v11;
}
