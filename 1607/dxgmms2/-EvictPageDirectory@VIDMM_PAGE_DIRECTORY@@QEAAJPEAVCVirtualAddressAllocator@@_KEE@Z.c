/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0012C00 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0049150 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C000F898 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0046CE4 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C004B654 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C004B6A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C004D610 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004F948 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  struct CVirtualAddressAllocator *v6; // rsi
  int *v8; // rcx
  char *v9; // r8
  unsigned __int8 v10; // r9
  int v11; // r10d
  struct _PAGED_LOOKASIDE_LIST *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rbp
  unsigned int v18; // esi
  struct VIDMM_ALLOC *v19; // rax
  struct VIDMM_ALLOC **v20; // rcx
  struct VIDMM_ALLOC *v21; // rax
  struct VIDMM_ALLOC **v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v28; // eax
  unsigned __int64 v29; // rdi
  unsigned int v30; // r8d
  void *v32; // rdx
  void *v33; // rdx
  VIDMM_PAGE_DIRECTORY *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+78h] [rbp-70h]
  unsigned int v37; // [rsp+90h] [rbp-58h]
  unsigned int v38[2]; // [rsp+98h] [rbp-50h] BYREF
  struct _PAGED_LOOKASIDE_LIST *v39; // [rsp+A0h] [rbp-48h]
  __int64 v40; // [rsp+A8h] [rbp-40h]
  __int64 v41; // [rsp+B0h] [rbp-38h]
  void *v42; // [rsp+B8h] [rbp-30h] BYREF
  unsigned __int64 v43[5]; // [rsp+C0h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v8;
  v12 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v6 + 8);
  v13 = ((unsigned int)*v8 >> 7) & 0x1F;
  v39 = v12;
  v14 = (__int64)v12[313].L.ListEntry.Blink + 456 * v13;
  v43[0] = v14;
  if ( (v11 & 0x10) != 0 )
    v15 = *(_DWORD *)(32 * v13 + *((_QWORD *)v6 + 12) + 16);
  else
    v15 = *(_DWORD *)(v14 + 48LL * (v11 & 7) + 72);
  v37 = v15;
  *(_QWORD *)v38 = v9;
  v42 = *(void **)(v14 + 48LL * (v11 & 7) + 112);
  if ( v15 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v40 = v15;
    v18 = v15;
    do
    {
      if ( v10 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
        {
          v19 = this[4];
          if ( (*(_DWORD *)((_BYTE *)this[3] + v16) & 0x400LL) != 0 )
          {
            v32 = *(void **)((char *)v19 + v17);
            if ( v32 )
            {
              ExFreeToPagedLookasideList(v39 + 314, v32);
              *(_QWORD *)((char *)this[4] + v17) = 0LL;
            }
          }
          else
          {
            v20 = *(struct VIDMM_ALLOC ***)((char *)v19 + v17);
            if ( v20 )
              VIDMM_PAGE_TABLE::EvictPageTable(v20, a2);
          }
          if ( (*(_DWORD *)this & 0x1000) != 0 )
          {
            v21 = this[4];
            if ( (*((_DWORD *)this[3] + 4 * v18) & 0x400LL) != 0 )
            {
              v33 = (void *)*((_QWORD *)v21 + v18);
              v41 = 8LL * v18;
              if ( v33 )
              {
                ExFreeToPagedLookasideList(v39 + 314, v33);
                *(_QWORD *)((char *)this[4] + v41) = 0LL;
              }
            }
            else
            {
              v22 = (struct VIDMM_ALLOC **)*((_QWORD *)v21 + v18);
              if ( v22 )
                VIDMM_PAGE_TABLE::EvictPageTable(v22, a2);
            }
          }
        }
        else
        {
          v34 = *(VIDMM_PAGE_DIRECTORY **)((char *)this[4] + v17);
          if ( v34 )
            VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v34, a2, (unsigned __int64)v9, v10, a5);
        }
      }
      *(_QWORD *)((char *)this[3] + v16) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[3] + 2 * v18) = 0LL;
      ++v18;
      v9 = (char *)v42 + *(_QWORD *)v38;
      v17 += 8LL;
      v10 = a4;
      v16 += 16LL;
      v23 = v40-- == 1;
      *(_QWORD *)v38 += v42;
    }
    while ( !v23 );
    v14 = v43[0];
    v6 = a2;
    v12 = v39;
    v5 = a3;
  }
  if ( (**(_DWORD **)(v14 + 424) & 8) == 0 || !a5 )
  {
LABEL_25:
    *((_DWORD *)this[1] + 19) |= 0x100000u;
    *((_BYTE *)this[1] + 97) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v12, this[2], 0);
    *((_DWORD *)this[1] + 19) &= ~0x100000u;
    return 0LL;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v38, v43, &v42) >= 0 )
  {
    if ( (v12[319].L.Tag & 8) != 0 )
      v28 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v28 = (int)(*(_DWORD *)this << 16) >> 29;
    v36 = v5;
    v29 = v43[0];
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)v6 + 9),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v37,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v38[0],
      v43[0],
      v28,
      v36,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, v6, v30, v29, v42);
    goto LABEL_25;
  }
  v35 = WdLogNewEntry5_WdError(v25, v24, v26, v27);
  *(_QWORD *)(v35 + 24) = 7084LL;
  WdLogEvent5_WdError(v35);
  return 3221225473LL;
}
