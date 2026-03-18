/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003E220
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0011550 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        PRKPROCESS **a2,
        unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // rdi
  unsigned __int8 v7; // r9
  unsigned int NumPde; // r14d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdi
  struct VIDMM_ALLOC **v14; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v15; // r8
  void *v16; // rcx
  VIDMM_GLOBAL *v17; // [rsp+30h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
    (struct VIDMM_ALLOC **)this,
    (struct CVirtualAddressAllocator *)a2,
    a3,
    1u,
    1u);
  v6 = (VIDMM_GLOBAL *)a2[8];
  v17 = v6;
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde((CVirtualAddressAllocator *)a2, this);
    v9 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v10 = a3;
    v11 = 0;
    v12 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 456 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *((_QWORD *)v6 + 5006)
                    + 112);
    if ( NumPde )
    {
      v13 = 0LL;
      do
      {
        v14 = *(struct VIDMM_ALLOC ***)(v13 + *((_QWORD *)this + 4));
        if ( v14 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
            VIDMM_PAGE_TABLE::DestroyPageTable(v14, (struct CVirtualAddressAllocator *)a2, v10);
          else
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
              (VIDMM_PAGE_DIRECTORY *)v14,
              (struct CVirtualAddressAllocator *)a2,
              v10,
              v7);
          *(_QWORD *)(v13 + *((_QWORD *)this + 4)) = 0LL;
        }
        v10 += v12;
        if ( v11 == v9 )
          v10 = a3;
        ++v11;
        v13 += 8LL;
      }
      while ( v11 < NumPde );
      v6 = v17;
    }
    operator delete[](*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    KeStackAttachProcess(*a2[9], &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      v6,
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
    VIDMM_GLOBAL::DestroyOneAllocation(v6, 0LL, v15, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 3);
  if ( v16 )
  {
    operator delete[](v16);
    *((_QWORD *)this + 3) = 0LL;
  }
}
