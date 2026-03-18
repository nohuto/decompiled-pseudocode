/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C012CA28 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0137338 (-UnpinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C000B5D0 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C001D3E4 (-VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00A92A8 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00B78BC (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0137224 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        __int64 a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGALLOCATION *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  struct DXGALLOCATION *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGALLOCATION *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v37; // [rsp+60h] [rbp+18h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a3 )
  {
    if ( (unsigned int)a2 >= *((_DWORD *)this + 4678) )
    {
      v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v17 + 24) = 5628LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v18 + 24) = 5629LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2338]) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v19 + 24) = 5630LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_DWORD *)this + 70) != 1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v20 + 24) = 5631LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (*((_DWORD *)this + v4 + 1188) & 0x20) != 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = 5632LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( (*((_DWORD *)this + v4 + 1188) & 0x40) != 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v22 + 24) = 5633LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v36[0] = 0;
    v37 = 0;
    do
    {
      v15 = DXGDEVICE::PopDirectFlipAllocationFromList((struct _KTHREAD **)this, v4, v36, &v37);
      if ( v15 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          (VIDMM_EXPORT *)this[2][50],
          (struct VIDMM_GLOBAL *)this[2][51],
          *((struct _VIDMM_MULTI_ALLOC **)v15 + 3));
    }
    while ( !v37 );
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays((DXGDEVICE *)this, v4);
    return 0LL;
  }
  else
  {
    LODWORD(v23) = 0;
    v36[0] = 0;
    v37 = 0;
    do
    {
      v24 = DXGDEVICE::PopDirectFlipAllocationFromList((struct _KTHREAD **)this, v4, v36, &v37);
      v29 = v24;
      if ( v24 )
      {
        if ( !*((_QWORD *)v24 + 5) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
          *(_QWORD *)(v30 + 24) = 5673LL;
          WdLogEvent5_WdAssertion(v30);
        }
        DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v29);
        DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v29 + 5));
        LODWORD(v23) = VIDMM_EXPORT::VidMmAsyncUnpinAllocation(
                         (VIDMM_EXPORT *)this[2][50],
                         (struct VIDMM_GLOBAL *)this[2][51],
                         v29);
        if ( (int)v23 < 0 )
        {
          v23 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous((DXGDEVICE *)this, v4, v29, a4);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v29 + 5) + 72LL));
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v29 + 11);
          v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          *(_QWORD *)(v35 + 24) = v23;
          WdLogEvent5_WdWarning(v35);
          if ( (int)v23 < 0 )
            break;
        }
      }
    }
    while ( !v37 );
    return (unsigned int)v23;
  }
}
