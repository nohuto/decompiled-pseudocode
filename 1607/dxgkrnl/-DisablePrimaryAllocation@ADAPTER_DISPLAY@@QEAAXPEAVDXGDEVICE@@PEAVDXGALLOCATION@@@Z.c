/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00074F8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C000903C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0086C70 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0093B04 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E9B8 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009EB18 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C015E114 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  char v3; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  struct ADAPTER_RENDER *v13; // r9
  bool v14; // zf
  int v15; // eax
  int v16; // r8d
  struct COREDEVICEACCESS *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v3 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v22 + 24) = 2493LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v23 + 24) = 2494LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v7 & 2) == 0 && (v7 & 1) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v24 + 24) = 2495LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 2496LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v26 + 24) = 2497LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v10 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 20) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v27 + 24) = 2500LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v11 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 357) == *(_QWORD *)(v11 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v11 + 16)) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v13);
      return;
    }
    if ( *(_DWORD *)(v12 + 176) == 1 )
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8LL, (unsigned int)v10);
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10)
      && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10)
      && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) + v10 + 250) & 0x200) != 0 )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10) == 3
        && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
      {
        v3 = 1;
        goto LABEL_31;
      }
      v14 = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) == VidPnSourceOwner;
    }
    else
    {
      v14 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v10, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                         + 6);
    }
    if ( !v14 )
    {
LABEL_22:
      if ( *((_DWORD *)VidPnSourceOwner + 76) == 2 )
      {
        v21 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
        if ( (v21 & 2) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v29 + 24) = 2617LL;
          WdLogEvent5_WdAssertion(v29);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v30 + 24) = 2618LL;
          WdLogEvent5_WdAssertion(v30);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 408LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10);
      }
      v15 = *((_DWORD *)VidPnSourceOwner + 76);
      if ( v15 != 2 )
      {
        if ( v15 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v10);
          DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v10, v16, v17);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v10);
        }
      }
      return;
    }
LABEL_31:
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
      ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2160LL));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                   + 376LL)
                                                                       + 8LL)
                                                           + 456LL))(
           *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 384LL),
           (unsigned int)v10) )
    {
      ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v10);
    }
    DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
    v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v10, 0, 2u, VidPnSourceOwner, 1u, 0);
    v20 = v18;
    if ( v18 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v28[3] = (unsigned int)v10;
      v28[4] = this[2];
      v28[5] = v20;
      WdLogEvent5_WdError(v28);
    }
    goto LABEL_22;
  }
}
