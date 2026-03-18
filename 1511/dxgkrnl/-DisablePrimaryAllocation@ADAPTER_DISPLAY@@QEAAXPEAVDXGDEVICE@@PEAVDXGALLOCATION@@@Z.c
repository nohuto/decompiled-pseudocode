/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0003400 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004798 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C006A6A8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0075E38 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C0075F98 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A3EC (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C009B8E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C013AA48 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
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
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  int v19; // r8d
  struct COREDEVICEACCESS *v20; // r9
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
    *(_QWORD *)(v22 + 24) = 12733LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v23 + 24) = 12734LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v7 & 2) == 0 && (v7 & 1) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v24 + 24) = 12735LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 12736LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v26 + 24) = 12737LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v10 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 26) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v27 + 24) = 12740LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v11 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 354) == *(_QWORD *)(v11 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v11 + 16)) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v13);
      return;
    }
    if ( *(_DWORD *)(v12 + 160) == 1 )
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, v10, 0);
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10)
      && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10)
      && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) + v10 + 244) & 0x200) != 0 )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10) == 3
        && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
      {
        v3 = 1;
        goto LABEL_24;
      }
      v14 = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) == VidPnSourceOwner;
    }
    else
    {
      v14 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v10) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                      + 6);
    }
    if ( !v14 )
    {
LABEL_30:
      if ( *((_DWORD *)VidPnSourceOwner + 70) == 2 )
      {
        v21 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
        if ( (v21 & 2) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v29 + 24) = 12857LL;
          WdLogEvent5_WdAssertion(v29);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v30 + 24) = 12858LL;
          WdLogEvent5_WdAssertion(v30);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 432LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10);
      }
      v18 = *((_DWORD *)VidPnSourceOwner + 70);
      if ( v18 != 2 )
      {
        if ( v18 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v10);
          DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)VidPnSourceOwner, v10, v19, v20);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v10);
        }
      }
      return;
    }
LABEL_24:
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 160LL) == 1 )
      ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2016LL));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                   + 400LL)
                                                                       + 8LL)
                                                           + 456LL))(
           *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 408LL),
           (unsigned int)v10) )
    {
      ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v10);
    }
    DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
    v15 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v10, 0, 2u, VidPnSourceOwner, 1u);
    v17 = v15;
    if ( v15 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v28[3] = (unsigned int)v10;
      v28[4] = this[2];
      v28[5] = v17;
      WdLogEvent5_WdError(v28);
    }
    goto LABEL_30;
  }
}
