/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B014 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000F470 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00B3440 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00B6BDC (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00B7C98 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0136238 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  char v4; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  struct ADAPTER_RENDER *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax

  v4 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v20 + 24) = 12368LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 12369LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v8 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v8 & 2) == 0 && (v8 & 1) == 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 12370LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v23 + 24) = 12371LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v24 + 24) = 12372LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v17 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v17 >= *((_DWORD *)this + 20) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v25 + 24) = 12375LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v18 = (struct ADAPTER_RENDER *)*((_QWORD *)VidPnSourceOwner + 2);
  v19 = *((_QWORD *)v18 + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 2338) == v19 && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    if ( !*((_BYTE *)this + 133) )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, v18, v19, v16);
      return;
    }
    if ( *(_DWORD *)(v19 + 160) == 1 )
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, v17, 0);
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v17)
      && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17)
      && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17) + v17 + 1188) & 0x40) != 0 )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v17) == 3
        && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
      {
        v4 = 1;
        goto LABEL_31;
      }
      v26 = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17) == VidPnSourceOwner;
    }
    else
    {
      v26 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v17) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                      + 6);
    }
    if ( !v26 )
    {
LABEL_37:
      if ( *((_DWORD *)VidPnSourceOwner + 70) == 2 )
      {
        v34 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
        if ( (v34 & 2) == 0 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34, v27, v28, v29);
          *(_QWORD *)(v35 + 24) = 12492LL;
          WdLogEvent5_WdAssertion(v35);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v34, v27, v28, v29);
          *(_QWORD *)(v36 + 24) = 12493LL;
          WdLogEvent5_WdAssertion(v36);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 408LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v4 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17);
      }
      v37 = *((_DWORD *)VidPnSourceOwner + 70);
      if ( v37 != 2 )
      {
        if ( v37 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v17);
          DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v17, 1, 0LL);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v17);
        }
      }
      return;
    }
LABEL_31:
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 160LL) == 1 )
      ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2000LL));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                   + 376LL)
                                                                       + 8LL)
                                                           + 456LL))(
           *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 384LL),
           (unsigned int)v17) )
    {
      ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v17);
    }
    DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
    v30 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v17, 0, 2u, VidPnSourceOwner, 1u);
    v32 = v30;
    if ( v30 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v33[3] = (unsigned int)v17;
      v33[4] = this[2];
      v33[5] = v32;
      WdLogEvent5_WdError(v33);
    }
    goto LABEL_37;
  }
}
