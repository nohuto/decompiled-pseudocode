/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C003CD00 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0079F8C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1.c)
 * Callees:
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0014FB8 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0014FE4 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C003CB54 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C005FB7C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0067188 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  _BYTE *v5; // rbp
  void *v6; // rsi
  __int64 v8; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  void *CpuVisibleAddress; // rax
  __int64 v17; // rcx
  VIDMM_ALLOC *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r13d
  int v22; // r12d
  __int64 *v23; // rbx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  char *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  void *v37; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_BYTE *)*((_QWORD *)a2 + 8);
  v6 = 0LL;
  v37 = 0LL;
  v8 = *((_QWORD *)this + 1);
  v12 = *(_QWORD *)(v8 + 128);
  if ( (v5[40608] & 8) == 0 )
  {
    v13 = *(unsigned int *)this;
    v14 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        *a3 = 0;
        v17 = (v13 >> 7) & 0x1F;
        *a4 = 0LL;
        if ( *(struct CVirtualAddressAllocator **)&v5[8 * v17 + 40088] == a2 )
        {
          v18 = (VIDMM_ALLOC *)*((_QWORD *)this + 2);
          *a3 = 0;
          *a4 = VIDMM_ALLOC::GetGpuVirtualAddress(v18, ((unsigned int)v13 >> 7) & 0x1F);
        }
        else
        {
          v19 = *((_QWORD *)a2 + 12);
          v20 = 32 * v17;
          if ( (v13 & 7) != 0 )
            v21 = *(_DWORD *)(v20 + v19 + 24);
          else
            v21 = *(_DWORD *)(v20 + v19 + 28);
          v22 = 0;
          while ( 1 )
          {
            v23 = (__int64 *)*((_QWORD *)this + 1);
            VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
            SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(this);
            v28 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                    (VIDMM_PAGING_PROCESS *)(v5 + 40056),
                    (*(_DWORD *)this >> 7) & 0x1F,
                    v23[2],
                    (struct _VIDMM_GLOBAL_ALLOC *)v23,
                    0LL,
                    v21,
                    SegmentOffsetInPages << 12,
                    v25,
                    (struct VIDMM_ALLOC *)&v37,
                    0LL);
            if ( v28 )
              break;
            if ( !v22 )
            {
              VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
              VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            }
            if ( (unsigned int)++v22 >= 2 )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v29, v30);
              v31[3] = 270LL;
              v31[4] = 48LL;
              v31[5] = this;
              v31[6] = 1LL;
              v31[7] = 0LL;
              WdLogEvent5_WdCriticalError(v31);
              break;
            }
          }
          v32 = (char *)v28 + 24;
          v33 = *((_QWORD *)this + 2) + 128LL;
          v34 = *(_QWORD **)(*((_QWORD *)this + 2) + 136LL);
          *((_QWORD *)v28 + 3) = v33;
          *((_QWORD *)v28 + 4) = v34;
          if ( *v34 != v33 )
            __fastfail(3u);
          *v34 = v32;
          *(_QWORD *)(v33 + 8) = v32;
          *a4 = *((_QWORD *)v28 + 12);
          *a3 = v21;
        }
      }
      else if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0 )
      {
        v35 = *(_QWORD *)(v8 + 96);
        *a3 = 0;
        *a4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CVirtualAddressAllocator *))(**(_QWORD **)(*(_QWORD *)(v35 + 8) + 24LL)
                                                                                           + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v35 + 8) + 24LL),
                *(_QWORD *)(v35 + 24),
                a2);
      }
      else
      {
        *a3 = *(_DWORD *)(v12 + 16) + 1;
        *a4 = *(_QWORD *)(***((_QWORD ***)this + 2) + 136LL);
      }
      goto LABEL_6;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, &v37);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
  {
    v6 = v37;
LABEL_6:
    *a5 = v6;
    return 0LL;
  }
  v36 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v36 + 24) = 2808LL;
  WdLogEvent5_WdError(v36);
  return 3221225495LL;
}
