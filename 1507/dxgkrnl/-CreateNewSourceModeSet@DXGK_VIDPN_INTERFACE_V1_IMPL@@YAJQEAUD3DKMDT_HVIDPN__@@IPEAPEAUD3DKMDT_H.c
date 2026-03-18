/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00AD130
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0006DFC (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00970F0 (-QueryDxgMiniportVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNSOURCEMODESET_INT.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  DMMVIDPNSOURCE *v15; // rax
  __int64 v16; // rcx
  DMMVIDPNSOURCE *v17; // rbp
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v29; // [rsp+60h] [rbp+18h] BYREF
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v30; // [rsp+68h] [rbp+20h] BYREF

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
    v14 = v10;
    if ( v10 )
    {
      VIDPN_MGR::QueryDxgMiniportVidPnSourceModeSetInterface(
        *(VIDPN_MGR **)(v10 + 48),
        (const struct _DXGK_VIDPNSOURCEMODESET_INTERFACE **)&v30,
        v12,
        v13);
      v15 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v14 + 304), v6);
      v17 = v15;
      if ( v15 )
      {
        v28 = 0LL;
        v29 = 0LL;
        v18 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v15, &v29);
        v7 = v18;
        if ( v18 < 0 )
        {
          v27 = WdLogNewEntry5_WdDmmEvent(v19);
          *(_QWORD *)(v27 + 24) = *((unsigned int *)v17 + 6);
          *(_QWORD *)(v27 + 32) = v7;
          WdLogEvent5_WdDmmEvent(v27);
        }
        else
        {
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v28, (__int64)v29);
          if ( v28 == -137 )
            v20 = 0LL;
          else
            v20 = v28;
          v28 = 0LL;
          *a3 = v20;
          LODWORD(v7) = 0;
          *a4 = v30;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v28, 0LL);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v26 + 24) = v6;
        WdLogEvent5_WdError(v26);
        LODWORD(v7) = -1071774972;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v25 + 24) = v7;
      WdLogEvent5_WdError(v25);
      LODWORD(v7) = -1071774973;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = v7;
    WdLogEvent5_WdError(v24);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 7045);
  return (unsigned int)v7;
}
