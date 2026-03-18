/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00875FC (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00DE0B8 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00DE19C (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C000903C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0086C70 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0093B04 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E9B8 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009EB18 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C015E114 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  __int64 v9; // rcx
  struct ADAPTER_RENDER *v10; // r8
  char v11; // r15
  unsigned int i; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // r8d
  struct COREDEVICEACCESS *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax

  if ( !a2 || *((_DWORD *)a2 + 76) == 2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 2742LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 20) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 2743LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v20 + 24) = 2744LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v21 + 24) = 2745LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v8 = *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((DXGADAPTER **)a2 + 357) == v8 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v8) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v10);
    }
    else
    {
      v11 = 0;
      if ( *(_DWORD *)(v9 + 176) == 1 )
        ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8, a3, 0);
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        if ( a3 == -3 || i == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, i) == a2 )
          {
            if ( !v11 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 176LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2160LL));
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 376LL)
                                                                                 + 8LL)
                                                                     + 456LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 384LL),
                     i) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, i);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
              v11 = 1;
            }
            v13 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                    (ADAPTER_DISPLAY *)this,
                    i,
                    0LL,
                    8,
                    (struct _KTHREAD **)a2,
                    1u,
                    0);
            v15 = v13;
            if ( v13 < 0 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdError(v14);
              v22[3] = i;
              v22[4] = this[2];
              v22[5] = v15;
              WdLogEvent5_WdError(v22);
            }
          }
          if ( *((_DWORD *)a2 + 76) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, i);
            DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)a2, i, v16, v17);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, i);
          }
        }
      }
    }
  }
}
