/*
 * XREFs of DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C017ADA0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct VIDPN_MGR *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 248);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 112);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v23, *(_QWORD *)(v10 + 112));
    v24 = 0LL;
    v13 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, &v24);
    v15 = v13;
    if ( v13 >= 0 )
    {
      v17 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v24 + 304), v3);
      v15 = v17;
      if ( v17 )
      {
        v20 = *(_QWORD *)(v17 + 104);
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
          v20 = *(_QWORD *)(v15 + 104);
        }
        v21 = *(_QWORD *)(v20 + 144);
        v25 = v20;
        if ( v21 )
        {
          LODWORD(v15) = 0;
          *a3 = *(_DWORD *)(v21 + 72);
        }
        else
        {
          v22 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v22 + 24) = v15;
          WdLogEvent5_WdError(v22);
          LODWORD(v15) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v25, 0LL);
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v19 + 24) = v3;
        WdLogEvent5_WdError(v19);
        LODWORD(v15) = -1071774972;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v16);
    }
    auto_rc<DMMVIDPN>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v23[0] + 40LL));
    return (unsigned int)v15;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
