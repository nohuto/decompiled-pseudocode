/*
 * XREFs of ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00BDD10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0003AB0 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000ACAC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0084DB8 (-QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGK_VIDPNTARGETMODESET_INT.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  DMMVIDPNTARGET *v13; // rax
  __int64 v14; // rcx
  DMMVIDPNTARGET *v15; // rbp
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
  struct DMMVIDPNTARGETMODESET *v27; // [rsp+60h] [rbp+18h] BYREF
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v28; // [rsp+68h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7050);
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
      VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        *(VIDPN_MGR **)(v10 + 48),
        (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&v28);
      v13 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), v6);
      v15 = v13;
      if ( v13 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v16 = DMMVIDPNTARGET::CreateNewCofuncModeSet(v13, &v27);
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
        LODWORD(v7) = -1071774971;
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
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 7050);
  return (unsigned int)v7;
}
