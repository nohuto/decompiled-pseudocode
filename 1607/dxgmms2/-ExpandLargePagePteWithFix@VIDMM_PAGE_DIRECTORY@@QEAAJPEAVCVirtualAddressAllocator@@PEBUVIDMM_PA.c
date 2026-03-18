/*
 * XREFs of ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093730
 * Callers:
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093500 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0044424 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C004AE68 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00934B0 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  unsigned int v8; // edx
  char v10; // r9
  VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  VIDMM_PAGE_TABLE *v14; // r15
  __int64 v15; // rax
  int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // r10
  unsigned int v31; // r8d
  _QWORD v33[16]; // [rsp+58h] [rbp-41h] BYREF
  struct VIDMM_ALLOC *v34; // [rsp+E8h] [rbp+4Fh] BYREF
  const struct VIDMM_PAGE_TABLE_LEVEL_DESC *v35; // [rsp+F8h] [rbp+5Fh]
  char v36; // [rsp+100h] [rbp+67h]

  v36 = a4;
  v35 = a3;
  ++*((_DWORD *)this + 1);
  v8 = *(_DWORD *)this;
  v34 = 0LL;
  v10 = (v8 & 0x40) != 0 && !a4;
  PageTable = CreatePageTable(a2, (v8 >> 7) & 0x1F, (v8 & 0x40) != 0, v10);
  v14 = PageTable;
  if ( !PageTable )
  {
    _InterlockedIncrement(&dword_1C0035688);
    v15 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v15 + 24) = 5333LL;
    WdLogEvent5_WdLowResource(v15);
    v16 = -1073741801;
    goto LABEL_17;
  }
  v17 = VIDMM_PAGE_TABLE::EnsureResident(PageTable, a2, v13, &v34);
  v19 = a5;
  v16 = v17;
  if ( v17 < 0 )
    goto LABEL_8;
  v21 = a6;
  v22 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a6);
  if ( !v22 )
  {
LABEL_14:
    v31 = a6;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v21) = v14;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v31);
    v16 = 0;
    goto LABEL_15;
  }
  memset(v33, 0, 0x48uLL);
  v23 = *(_QWORD *)v22;
  v24 = 2LL * a6;
  v25 = *((_QWORD *)this + 3);
  LODWORD(v33[6]) = *(_DWORD *)(v22 + 8);
  v33[5] = v23;
  v26 = *(_QWORD *)(v25 + 16LL * a6);
  v27 = (v26 >> 5) & 0x1F;
  v33[0] = v26 & 0xFFFFFFFFFFFFFBFFuLL;
  v33[2] = *(_QWORD *)(v22 + 16);
  BYTE1(v33[7]) = v36;
  LOBYTE(v26) = (*(_DWORD *)this & 0x40) != 0;
  HIDWORD(v33[6]) = v27;
  LOBYTE(v33[7]) = v26;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v33[6], v23);
  if ( VidMmGlobalAllocFromOwner )
    v29 = (*(_QWORD *)(v30 + 8 * v24 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
  v16 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          v14,
          a2,
          (const struct COMMIT_VA_STATE *)v33,
          v29,
          v19,
          *((char **)v35 + 5),
          *(_QWORD *)(v30 + 8 * v24 + 8) << 12,
          0,
          &v34);
  if ( v16 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 8) + 40192LL),
      *(PVOID *)(*((_QWORD *)this + 4) + 8 * v21));
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v21) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v24) &= ~0x400uLL;
    goto LABEL_14;
  }
LABEL_8:
  v20 = WdLogNewEntry5_WdWarning(v18);
  WdLogEvent5_WdWarning(v20);
LABEL_15:
  if ( v16 >= 0 )
    goto LABEL_19;
  VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v14, a2, v19);
LABEL_17:
  if ( v34 )
    *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 2);
LABEL_19:
  --*((_DWORD *)this + 1);
  return (unsigned int)v16;
}
