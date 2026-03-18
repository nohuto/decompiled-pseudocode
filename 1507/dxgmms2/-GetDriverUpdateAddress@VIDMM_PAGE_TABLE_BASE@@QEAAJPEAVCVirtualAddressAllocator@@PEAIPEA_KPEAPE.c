/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063E68 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C000F228 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0010688 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C00106BC (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C004DD74 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C005FEDC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  __int64 v5; // rbp
  CVirtualAddressAllocator *v6; // rdi
  __int64 v8; // r8
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  CVirtualAddressAllocator *v15; // r10
  __int64 GpuVirtualAddress; // rax
  __int64 *v17; // r9
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  __int64 SegmentOffsetInPages; // rax
  unsigned int v26; // r8d
  VIDMM_MAPPED_VA_RANGE *v27; // rsi
  struct _MDL *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  PVOID CpuVisibleAddress; // rax
  __int64 v34; // rcx
  int v36; // [rsp+68h] [rbp-50h]
  struct VIDMM_ALLOC *v37; // [rsp+70h] [rbp-48h] BYREF
  CVirtualAddressAllocator *v38; // [rsp+C0h] [rbp+8h] BYREF
  VIDMM_MAPPED_VA_RANGE *v39; // [rsp+C8h] [rbp+10h]

  v5 = *((_QWORD *)a2 + 8);
  v6 = 0LL;
  v38 = 0LL;
  v8 = *((_QWORD *)this + 1);
  v12 = *(_QWORD *)(v8 + 128);
  if ( (*(_BYTE *)(v5 + 40552) & 8) != 0 || (v13 = *(_DWORD *)this, (v14 = (__int16)v13 >> 13) == 0) )
  {
    CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, (PMDL *)&v38);
    *a4 = (unsigned __int64)CpuVisibleAddress;
    *a3 = 0;
    if ( CpuVisibleAddress )
    {
      v6 = v38;
      goto LABEL_26;
    }
    v30 = WdLogNewEntry5_WdError(v34);
    *(_QWORD *)(v30 + 24) = 2817LL;
LABEL_24:
    WdLogEvent5_WdError(v30);
    return 3221225495LL;
  }
  if ( v14 != 1 )
  {
    if ( (*(_DWORD *)(v12 + 56) & 0x1000) == 0 )
    {
      *a3 = *(_DWORD *)(v12 + 16) + 1;
      *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 136LL);
      goto LABEL_26;
    }
    v32 = *(_QWORD *)(v8 + 96);
    *a3 = 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v32 + 8) + 24LL) + 88LL))(
            *(_QWORD *)(*(_QWORD *)(v32 + 8) + 24LL),
            *(_QWORD *)(v32 + 24));
    goto LABEL_20;
  }
  *a3 = 0;
  *a4 = 0LL;
  v15 = *(CVirtualAddressAllocator **)(v5 + 8LL * ((v13 >> 7) & 0x1F) + 40032);
  v38 = v15;
  if ( v15 != a2 )
  {
    v18 = 0;
    while ( 1 )
    {
      LOBYTE(v36) = 0;
      v39 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                       v15,
                                       this,
                                       0LL,
                                       5LL,
                                       *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
                                       0LL,
                                       *(_QWORD *)(v5 + 40560),
                                       *(_QWORD *)(v5 + 40568),
                                       4096,
                                       1LL,
                                       0LL,
                                       (*(_DWORD *)this >> 7) & 0x1F,
                                       0LL,
                                       v36);
      if ( v39 )
        break;
      if ( !v18 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
      }
      v15 = v38;
      if ( (unsigned int)++v18 >= 2 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
        v21[3] = 270LL;
        v21[4] = 48LL;
        v21[5] = this;
        v21[6] = 1LL;
        v21[7] = 0LL;
        WdLogEvent5_WdCriticalError(v21);
        break;
      }
    }
    v22 = *(unsigned int *)this;
    v23 = *((_QWORD *)a2 + 12);
    if ( (v22 & 7) != 0 )
      v24 = *(_DWORD *)(32 * ((v22 >> 7) & 0x1F) + v23 + 24);
    else
      v24 = *(_DWORD *)(32 * ((v22 >> 7) & 0x1F) + v23 + 28);
    VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
    SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
    v26 = *(_DWORD *)this;
    v27 = v39;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                v38,
                v39,
                (v26 >> 7) & 0x1F,
                v24,
                SegmentOffsetInPages << 12,
                v28,
                1,
                &v37,
                0,
                0) < 0 )
    {
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v27);
      v30 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v30 + 24) = 2918LL;
      goto LABEL_24;
    }
    v31 = *((_QWORD *)v27 + 12);
    *a3 = v24;
LABEL_20:
    *a4 = v31;
    goto LABEL_26;
  }
  *a3 = 0;
  GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 2), (v13 >> 7) & 0x1F);
  *v17 = GpuVirtualAddress;
LABEL_26:
  *a5 = v6;
  return 0LL;
}
