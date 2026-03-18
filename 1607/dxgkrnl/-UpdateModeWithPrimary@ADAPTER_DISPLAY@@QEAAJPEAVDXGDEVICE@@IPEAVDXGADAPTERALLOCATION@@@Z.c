/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00877A4
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000CC08 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0093B04 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  PERESOURCE v9; // rdi
  PERESOURCE *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  _QWORD *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  void *v31; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v23 + 24) = 1801LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v24 + 24) = 1802LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( this[2] != a2[357] )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 1803LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v9 = a2[2][2];
  if ( !v9
    || (v8 = *(_QWORD *)&v9[20].OwnerEntry.0) == 0
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v8 + 16)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v22 + 24) = 1808LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v10 = this[2];
  if ( v10[267] )
  {
    if ( v10 != (PERESOURCE *)v9 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v26 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v26);
    }
    ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)&v9[20].OwnerEntry.0);
  }
  ADAPTER_RENDER::FlushScheduler(*(_QWORD *)&v9[20].OwnerEntry.0, 8LL, (unsigned int)v5);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( !this[2][267] )
    goto LABEL_21;
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v31,
    v11);
  v13 = v31;
  if ( !v31 )
  {
    v27 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdLowResource(v27);
    LODWORD(v17) = -1073741801;
LABEL_28:
    operator delete(v13);
    return (unsigned int)v17;
  }
  if ( !a4 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v28 + 24) = 1843LL;
    WdLogEvent5_WdAssertion(v28);
  }
  *v13 = v5;
  *((_QWORD *)v13 + 2) = *((_QWORD *)a4 + 2);
  v14 = *(_QWORD **)&v9[20].OwnerEntry.0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(v14[50] + 8LL) + 216LL))(
    v14[51],
    *((_QWORD *)a4 + 1),
    v13 + 1,
    v13 + 2);
  v13[138] |= 1u;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v14[47] + 8LL) + 712LL))(v14[48], v13);
  v17 = v15;
  if ( v15 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v29[3] = v17;
    v29[4] = this[2];
    v29[5] = v5;
    v29[6] = (unsigned int)v13[2];
    WdLogEvent5_WdError(v29);
    goto LABEL_28;
  }
  operator delete(v13);
LABEL_21:
  v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0LL, 1u, 0);
  v20 = v18;
  if ( v18 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v30[3] = v20;
    v30[4] = this[2];
    v30[5] = v5;
    WdLogEvent5_WdError(v30);
  }
  ADAPTER_DISPLAY::SetGammaRamp(this, v5, 0LL);
  return (unsigned int)v20;
}
