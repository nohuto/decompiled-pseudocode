/*
 * XREFs of DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C00E2D10
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  const struct DMMVIDPN **v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *((_QWORD *)a1 + 266);
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = a1;
LABEL_15:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  v8 = *(const struct DMMVIDPN ***)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v23, *(_QWORD *)(v7 + 88));
    v24 = 0LL;
    v9 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v8, &v24);
    v11 = v9;
    if ( v9 < 0 )
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v20 + 24) = v11;
      WdLogEvent5_WdDmmEvent(v20);
    }
    else
    {
      v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v24 + 304), v3);
      v11 = v12;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12 + 104);
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
          v14 = *(_QWORD *)(v11 + 104);
        }
        v15 = *(_QWORD *)(v14 + 144);
        v25 = v14;
        if ( v15 )
        {
          LODWORD(v11) = 0;
          *a3 = *(_DWORD *)(v15 + 72);
        }
        else
        {
          v22 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v22 + 24) = v11;
          WdLogEvent5_WdError(v22);
          LODWORD(v11) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v25, 0LL);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v21 + 24) = v3;
        WdLogEvent5_WdError(v21);
        LODWORD(v11) = -1071774972;
      }
    }
    auto_rc<DMMVIDPN>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23[0] + 40LL));
    return (unsigned int)v11;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
