/*
 * XREFs of DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource @ 0x1C0176808
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetPinnedVidPnSourceModeTypeFromClientVidPnSource(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD v28[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h] BYREF

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
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 247);
  if ( !v13 )
  {
    v6 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v14 = *(struct VIDPN_MGR **)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v28, *(_QWORD *)(v13 + 88));
    v29 = 0LL;
    v18 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v14, &v29, v16, v17);
    v20 = v18;
    if ( v18 >= 0 )
    {
      v22 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v29 + 304), v3);
      v20 = v22;
      if ( v22 )
      {
        v25 = *(_QWORD *)(v22 + 104);
        if ( v25 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
          v25 = *(_QWORD *)(v20 + 104);
        }
        v26 = *(_QWORD *)(v25 + 144);
        v30 = v25;
        if ( v26 )
        {
          LODWORD(v20) = 0;
          *a3 = *(_DWORD *)(v26 + 72);
        }
        else
        {
          v27 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v27 + 24) = v20;
          WdLogEvent5_WdError(v27);
          LODWORD(v20) = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v30, 0LL);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v24 + 24) = v3;
        WdLogEvent5_WdError(v24);
        LODWORD(v20) = -1071774972;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdDmmEvent(v21);
    }
    auto_rc<DMMVIDPN>::reset(&v29, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28[0] + 40LL));
    return (unsigned int)v20;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
