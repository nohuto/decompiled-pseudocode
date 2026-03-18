/*
 * XREFs of ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01476F8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000EC48 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C001EE64 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2680LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2681LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v10 & 1) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 2682LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 2683LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 2684LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( v16 >= *((_DWORD *)this + 20) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v17 + 24) = 2688LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((_QWORD *)a2 + 357) != v18 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 2690LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, v16) == a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v21 + 24) = 2691LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v22 & 0x10) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v23 + 24) = 2692LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v16) == a2
    && VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
         *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 2) + 400LL),
         *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 2) + 408LL),
         *((struct _VIDMM_MULTI_ALLOC **)a3 + 3),
         0LL) )
  {
    COREDEVICEACCESS::Release(a4);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 400LL) + 8LL) + 696LL))(
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 408LL),
      *((_QWORD *)a3 + 3),
      v16);
    COREDEVICEACCESS::AcquireSharedUncheck(a4);
  }
  DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, a3, v16);
}
