/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009EB18
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0087360 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00DDEF0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E1A24 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0151348 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z @ 0x1C0007F28 (-ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00950B8 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGALLOCATION *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v18; // [rsp+48h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a3;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 716) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 5977LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 5978LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[357]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v13 + 24) = 5979LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 76) != 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v14 + 24) = 5980LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (*((_DWORD *)this + v5 + 250) & 0x100) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 5981LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (*((_DWORD *)this + v5 + 250) & 0x200) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v16 + 24) = 5982LL;
    WdLogEvent5_WdAssertion(v16);
  }
  LODWORD(v18) = 0;
  LOBYTE(v17) = 0;
  do
  {
    v8 = DXGDEVICE::PopDirectFlipAllocationFromList(
           (struct _KTHREAD **)this,
           v5,
           (unsigned int *)&v18,
           (unsigned __int8 *)&v17);
    v9 = (struct _EX_RUNDOWN_REF *)v8;
    if ( v8 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        (VIDMM_EXPORT *)this[2][50],
        (struct VIDMM_GLOBAL *)this[2][51],
        *((struct _VIDMM_MULTI_ALLOC **)v8 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9[5].Count + 72));
      ExReleaseRundownProtection(v9 + 11);
    }
  }
  while ( !(_BYTE)v17 );
  DXGDEVICE::ClearDisplayedAllMultiPlaneOverlays((struct _KTHREAD **)this, v5);
  return 0LL;
}
