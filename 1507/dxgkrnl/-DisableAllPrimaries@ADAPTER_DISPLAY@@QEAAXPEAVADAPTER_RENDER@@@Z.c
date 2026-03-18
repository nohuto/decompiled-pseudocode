/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00BDA68 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00026A0 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000F470 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00AD6D0 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00B3440 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C00B6870 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00B7C98 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0136238 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(
        PERESOURCE **this,
        struct ADAPTER_RENDER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // bp
  unsigned int i; // edi
  unsigned int j; // ebp
  unsigned int k; // edi
  __int64 v20; // r14
  struct ADAPTER_RENDER **v21; // rbp
  int v22; // eax
  __int64 v23; // r15
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  DXGDODPRESENT *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax

  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v32 + 24) = 12742LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v33 + 24) = 12743LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v34 + 24) = 12744LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( this[2][248] )
  {
    v14 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 160LL);
    if ( (_DWORD)v14 != 1 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
      *(_QWORD *)(v30 + 24) = 12754LL;
      WdLogEvent5_WdAssertion(v30);
    }
    ADAPTER_RENDER::DisableOverlays(a2);
  }
  else
  {
    v35 = (DXGDODPRESENT *)this[31];
    if ( v35 )
      DXGDODPRESENT::Flush(v35);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 160LL) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v15 = *((unsigned int *)this[2] + 40);
  if ( (_DWORD)v15 == 1 )
  {
    v16 = this[2][248] == 0LL;
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPrimaryVisible((ADAPTER_DISPLAY *)this, i) )
      {
        if ( !v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2000LL));
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 47) + 8LL) + 456LL))(
                 *((_QWORD *)a2 + 48),
                 i) )
          {
            ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, i);
          }
          DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
          v16 = 1;
        }
        v22 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                (ADAPTER_DISPLAY *)this,
                i,
                0,
                4u,
                (struct DXGDEVICE *)this[14][126 * i + 84],
                1u);
        v23 = v22;
        if ( v22 < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v36[3] = v23;
          v36[4] = this[2];
          v36[5] = i;
          WdLogEvent5_WdError(v36);
        }
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    v10 = 1008LL * j;
    if ( this[14][(unsigned __int64)v10 / 8 + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v25 = v10 + 88;
        v26 = NumDifferentPhysicalAdapters;
        do
        {
          v27 = *(__int64 *)((char *)this[14] + v25);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 48);
            if ( !v28 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
              *(_QWORD *)(v37 + 24) = 12831LL;
              WdLogEvent5_WdAssertion(v37);
            }
            if ( (*(_DWORD *)(v28 + 4) & 2) == 0 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
              *(_QWORD *)(v38 + 24) = 12832LL;
              WdLogEvent5_WdAssertion(v38);
            }
            if ( ((*(_DWORD *)(v28 + 4) >> 6) & 0xF) != j )
            {
              v39 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
              *(_QWORD *)(v39 + 24) = 12833LL;
              WdLogEvent5_WdAssertion(v39);
            }
            if ( !*(_QWORD *)(v28 + 8) )
            {
              v40 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
              *(_QWORD *)(v40 + 24) = 12834LL;
              WdLogEvent5_WdAssertion(v40);
            }
            if ( (*(_DWORD *)(v28 + 4) & 0x10) == 0 )
            {
              v29 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 160LL);
              if ( (_DWORD)v29 != 1 )
              {
                v31 = WdLogNewEntry5_WdAssertion(v29, v10, v12, v13);
                *(_QWORD *)(v31 + 24) = 12845LL;
                WdLogEvent5_WdAssertion(v31);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 50),
                *((struct VIDMM_GLOBAL **)a2 + 51),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v28 + 8));
              *(_DWORD *)(v28 + 4) |= 0x10u;
            }
          }
          v25 += 8LL;
          --v26;
        }
        while ( v26 );
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v20 = 126LL * k;
    v21 = (struct ADAPTER_RENDER **)this[14][v20 + 84];
    if ( v21 )
    {
      if ( a2 != v21[2] )
      {
        v41 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
        *(_QWORD *)(v41 + 24) = 12865LL;
        WdLogEvent5_WdAssertion(v41);
      }
      if ( this[14][v20 + 84][2].NumberOfSharedWaiters )
      {
        DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v21, k);
        DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v21, k, 1, 0LL);
      }
      else
      {
        DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v21, k);
      }
    }
  }
}
