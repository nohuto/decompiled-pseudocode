/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0137110
 * Callers:
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00BD980 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0137338 (-UnpinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C001D3E4 (-VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00A92A8 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136A8C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0137224 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v5; // rbx
  unsigned int i; // esi
  struct DXGALLOCATION *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax

  LODWORD(v5) = 0;
  for ( i = 0; i < a3; ++a4 )
  {
    v11 = *a4;
    if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, *a4) )
    {
      if ( !*((_QWORD *)v11 + 5) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = 5562LL;
        WdLogEvent5_WdAssertion(v16);
      }
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v11);
      DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v11 + 5));
      LODWORD(v5) = VIDMM_EXPORT::VidMmAsyncUnpinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                      v11);
      if ( (int)v5 < 0 )
      {
        v5 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v11, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v11 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v11 + 11);
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdWarning(v21);
        if ( (int)v5 < 0 )
          break;
      }
    }
    ++i;
  }
  return (unsigned int)v5;
}
