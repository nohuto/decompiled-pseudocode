/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005EE00
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0010638 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        PRKPROCESS **a2,
        unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // r13
  __int64 v7; // r14
  unsigned __int8 v8; // r9
  unsigned int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned int v11; // r15d
  VIDMM_PAGE_TABLE *v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v13; // r8
  void *v14; // rcx
  unsigned int NumPde; // [rsp+30h] [rbp-88h]
  __int64 i; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, (struct CVirtualAddressAllocator *)a2, a3, 1u, 1);
  v6 = (VIDMM_GLOBAL *)a2[8];
  v7 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde((CVirtualAddressAllocator *)a2, this);
    v9 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      v9 = 2 * NumPde;
    v10 = a3;
    v11 = 0;
    for ( i = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                        + 456 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                        + *((_QWORD *)v6 + 4999)
                        + 112); v11 < v9; v7 += 8LL )
    {
      v12 = *(VIDMM_PAGE_TABLE **)(v7 + *((_QWORD *)this + 4));
      if ( v12 )
      {
        if ( (*(_DWORD *)this & 0x20) != 0 )
          VIDMM_PAGE_TABLE::DestroyPageTable(v12, (struct CVirtualAddressAllocator *)a2, v10);
        else
          VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v12, (struct CVirtualAddressAllocator *)a2, v10, v8);
        *(_QWORD *)(v7 + *((_QWORD *)this + 4)) = 0LL;
      }
      v10 += i;
      if ( v11 == NumPde )
        v10 = a3;
      ++v11;
    }
    operator delete(*((void **)this + 4));
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
  v13 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v13 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v6, 0LL, v13, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 3);
  if ( v14 )
  {
    operator delete(v14);
    *((_QWORD *)this + 3) = 0LL;
  }
}
