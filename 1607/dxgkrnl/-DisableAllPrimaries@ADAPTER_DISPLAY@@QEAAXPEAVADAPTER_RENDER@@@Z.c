/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1E90 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006BBC (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00074F8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C000903C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0086C70 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z @ 0x1C00881A8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@EE@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0093B04 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E9B8 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009EB18 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00CECE4 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C015E114 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  bool v7; // bp
  unsigned int i; // esi
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v11; // r14
  struct ADAPTER_RENDER **v12; // rbp
  int v13; // r8d
  struct COREDEVICEACCESS *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  DXGDODPRESENT *v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  _QWORD *v23; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax

  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 2866LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v16 + 24) = 2867LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v17 + 24) = 2868LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( this[2][267] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
    {
      v18 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
      if ( (_DWORD)v18 != 5 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v19 + 24) = 2878LL;
        WdLogEvent5_WdAssertion(v19);
      }
    }
    ADAPTER_RENDER::DisableOverlays(a2);
  }
  else
  {
    v20 = (DXGDODPRESENT *)this[32];
    if ( v20 )
      DXGDODPRESENT::Flush(v20);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v6 = *((unsigned int *)this[2] + 44);
  if ( (_DWORD)v6 == 1 )
  {
    v7 = this[2][267] == 0LL;
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPrimaryVisible((ADAPTER_DISPLAY *)this, i) )
      {
        if ( !v7 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2160LL));
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 47) + 8LL) + 456LL))(
                 *((_QWORD *)a2 + 48),
                 i) )
          {
            ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, i);
          }
          DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
          v7 = 1;
        }
        v21 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                (ADAPTER_DISPLAY *)this,
                i,
                0LL,
                4,
                (struct _KTHREAD **)this[14][127 * i + 84],
                1u,
                0);
        v22 = v21;
        if ( v21 < 0 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v6);
          v23[3] = v22;
          v23[4] = this[2];
          v23[5] = i;
          WdLogEvent5_WdError(v23);
        }
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    if ( this[14][127 * j + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v26 = v25 + 88;
        v27 = NumDifferentPhysicalAdapters;
        do
        {
          v28 = *(__int64 *)((char *)this[14] + v26);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 48);
            if ( !v29 )
            {
              v30 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v30 + 24) = 2955LL;
              WdLogEvent5_WdAssertion(v30);
            }
            if ( (*(_DWORD *)(v29 + 4) & 2) == 0 )
            {
              v31 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v31 + 24) = 2956LL;
              WdLogEvent5_WdAssertion(v31);
            }
            if ( ((*(_DWORD *)(v29 + 4) >> 6) & 0xF) != j )
            {
              v32 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v32 + 24) = 2957LL;
              WdLogEvent5_WdAssertion(v32);
            }
            if ( !*(_QWORD *)(v29 + 8) )
            {
              v33 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v33 + 24) = 2958LL;
              WdLogEvent5_WdAssertion(v33);
            }
            if ( (*(_DWORD *)(v29 + 4) & 0x10) == 0 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
              {
                v34 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
                if ( (_DWORD)v34 != 5 )
                {
                  v35 = WdLogNewEntry5_WdAssertion(v34);
                  *(_QWORD *)(v35 + 24) = 2969LL;
                  WdLogEvent5_WdAssertion(v35);
                }
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 50),
                *((struct VIDMM_GLOBAL **)a2 + 51),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v29 + 8));
              *(_DWORD *)(v29 + 4) |= 0x10u;
            }
          }
          v26 += 8LL;
          --v27;
        }
        while ( v27 );
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v11 = 127LL * k;
    v12 = (struct ADAPTER_RENDER **)this[14][v11 + 84];
    if ( v12 )
    {
      if ( a2 != v12[2] )
      {
        v36 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v36 + 24) = 2989LL;
        WdLogEvent5_WdAssertion(v36);
      }
      if ( LODWORD(this[14][v11 + 84][2].SpinLock) )
      {
        DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v12, k);
        DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v12, k, v13, v14);
      }
      else
      {
        DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v12, k);
      }
    }
  }
}
