/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BF7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009BEC (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C008FD24 (-QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INT.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct _DXGK_VIDPNSOURCEMODESET_INTERFACE **a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  DMMVIDPNSOURCE *v13; // rax
  __int64 v14; // rcx
  DMMVIDPNSOURCE *v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v27; // [rsp+60h] [rbp+18h] BYREF
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v28; // [rsp+68h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7045);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = v7;
  v8[4] = a3;
  v8[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v7);
    v12 = v10;
    if ( v10 )
    {
      VIDPN_MGR::QueryDxgMiniportVidPnSourceModeSetInterface(
        *(VIDPN_MGR **)(v10 + 48),
        (const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE **)&v28);
      v13 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v12 + 304), v6);
      v15 = v13;
      if ( v13 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v16 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v13, &v27);
        v7 = v16;
        if ( v16 < 0 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent(v17);
          *(_QWORD *)(v25 + 24) = *((unsigned int *)v15 + 6);
          *(_QWORD *)(v25 + 32) = v7;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, (__int64)v27);
          if ( v26 == -137 )
            v18 = 0LL;
          else
            v18 = v26;
          v26 = 0LL;
          *a3 = v18;
          LODWORD(v7) = 0;
          *a4 = v28;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v26, 0LL);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v24 + 24) = v6;
        WdLogEvent5_WdError(v24);
        LODWORD(v7) = -1071774972;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v23 + 24) = v7;
      WdLogEvent5_WdError(v23);
      LODWORD(v7) = -1071774973;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v7;
    WdLogEvent5_WdError(v22);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7045);
  return (unsigned int)v7;
}
