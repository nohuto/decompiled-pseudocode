/*
 * XREFs of ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C0062508
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  char *v8; // rdi
  _QWORD *v9; // rsi
  void *v10; // rcx

  if ( *((_QWORD *)this + 5075) )
  {
    v8 = (char *)this + 40616;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v9 = operator new(0x18uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v10 )
        operator delete(v10);
      *v9 = a2;
      v9[1] = a3;
      v9[2] = a4;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 2;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
}
