/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0049150
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0049128 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C000F7B8 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0049128 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C004B120 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v4; // rdi
  struct _PAGED_LOOKASIDE_LIST *v6; // r14
  unsigned int NumPde; // r15d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r14
  void *v14; // r9
  struct _VIDMM_GLOBAL_ALLOC *v15; // r8
  void *v16; // rcx
  struct _PAGED_LOOKASIDE_LIST *v18; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a3, 1u, 1);
  v6 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v4 + 8);
  v18 = v6;
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v4, this);
    v8 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v9 = a3;
    v10 = 0;
    v11 = *((_QWORD *)&v6[313].L.ListEntry.Blink[7].Flink
          + 57 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
          + 6 * (*(_DWORD *)this & 7));
    if ( NumPde )
    {
      v12 = 0LL;
      v13 = 0LL;
      do
      {
        v14 = *(void **)(v12 + *((_QWORD *)this + 4));
        if ( v14 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v13 + *((_QWORD *)this + 3)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList(v18 + 314, v14);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v14, a2, v9);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v14, a2, v9, (unsigned __int8)v14);
          }
          *(_QWORD *)(v12 + *((_QWORD *)this + 4)) = 0LL;
        }
        v9 += v11;
        if ( v10 == v8 )
          v9 = a3;
        ++v10;
        v13 += 16LL;
        v12 += 8LL;
      }
      while ( v10 < NumPde );
      v4 = a2;
      v6 = v18;
    }
    operator delete[](*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v4 + 9), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v6,
      *((struct VIDMM_ALLOC **)this + 2),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 2) = 0LL;
  }
  v15 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v15 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v6, 0LL, v15, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 3);
  if ( v16 )
  {
    operator delete[](v16);
    *((_QWORD *)this + 3) = 0LL;
  }
}
