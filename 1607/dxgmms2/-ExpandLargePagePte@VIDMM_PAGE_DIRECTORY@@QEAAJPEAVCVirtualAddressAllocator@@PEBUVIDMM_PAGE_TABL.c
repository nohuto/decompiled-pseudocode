/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093500
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0044424 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C004AE68 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093730 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r11
  int v15; // r10d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // r13
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int8 v22; // r8
  char v23; // r9
  unsigned int v24; // r10d
  __int64 v25; // r11
  VIDMM_PAGE_TABLE *PageTable; // rbp
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rax
  _QWORD v30[10]; // [rsp+50h] [rbp-78h] BYREF

  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
    return VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(this, a2, a3, a4, a5, a6, a7);
  v12 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6);
  memset(v30, 0, 0x48uLL);
  v13 = *(_QWORD *)v12;
  v14 = *((_QWORD *)this + 3);
  v15 = *(_DWORD *)this;
  LODWORD(v30[6]) = *(_DWORD *)(v12 + 8);
  v30[5] = v13;
  v16 = *(_QWORD *)(v14 + 16LL * a6);
  BYTE1(v30[7]) = a4;
  v17 = v16 >> 5;
  v30[0] = v16 & 0xFFFFFFFFFFFFFBFFuLL;
  v18 = *(_QWORD *)(v12 + 16);
  v19 = 0LL;
  HIDWORD(v30[6]) = v17 & 0x1F;
  v30[2] = v18;
  v20 = (v15 & 0x40) != 0;
  LOBYTE(v30[7]) = v20;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v30[6], v13);
  if ( VidMmGlobalAllocFromOwner )
    v19 = (*(_QWORD *)(v25 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
  if ( (v22 & (unsigned __int8)v23) == 0 || a4 )
    v23 = 0;
  PageTable = CreatePageTable(a2, (v24 >> 7) & 0x1F, v20, v23);
  if ( !PageTable )
    return 3221225495LL;
  v28 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          PageTable,
          a2,
          (const struct COMMIT_VA_STATE *)v30,
          v19,
          a5,
          *((char **)a3 + 5),
          *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6 + 8) << 12,
          0,
          a7);
  if ( v28 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 8) + 40192LL),
      *(PVOID *)(*((_QWORD *)this + 4) + 8LL * a6));
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6) = PageTable;
    *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * a6) &= ~0x400uLL;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
    return 0LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v27);
    WdLogEvent5_WdWarning(v29);
    VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)PageTable, a2, a5);
    return (unsigned int)v28;
  }
}
