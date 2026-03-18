/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00429D4
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0045DC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_QWORD *)this + 5082) )
  {
    v9 = operator new(0x48uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
      *((_QWORD *)this + 5085) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10166) == dword_1C002F304 )
        *((_DWORD *)this + 10166) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16);
      if ( v10 )
        operator delete(v10);
      v9[2] = a5;
      *v9 = a2;
      v9[1] = a4;
      v9[3] = *((_QWORD *)a3 + 12);
      v9[4] = *((_QWORD *)a3 + 13);
      v9[5] = *((_QWORD *)a3 + 7);
      *((_DWORD *)v9 + 12) = (int)(*((_DWORD *)a3 + 16) << 28) >> 28;
      v11 = *((_QWORD *)a3 + 9);
      v9[8] = 0LL;
      v9[7] = v11;
      if ( (*((_DWORD *)a3 + 16) & 0xF) == 1 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL);
        if ( v12 )
          v9[8] = *(_QWORD *)(v12 + 32);
      }
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5082) + 24LL * (unsigned int)(*((_DWORD *)this + 10166))++ + 8) = 14;
      *((_QWORD *)this + 5085) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
