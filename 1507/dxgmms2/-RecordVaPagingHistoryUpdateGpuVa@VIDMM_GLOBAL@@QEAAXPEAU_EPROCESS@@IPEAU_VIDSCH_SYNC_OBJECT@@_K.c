/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0062644
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        int a3,
        struct _VIDSCH_SYNC_OBJECT *a4,
        unsigned __int64 a5)
{
  _DWORD *v9; // rdi
  void *v10; // rcx

  if ( *((_QWORD *)this + 5075) )
  {
    v9 = operator new(0x20uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40616, 0LL);
      *((_QWORD *)this + 5078) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v10 )
        operator delete(v10);
      *(_QWORD *)v9 = a2;
      v9[2] = a3;
      *((_QWORD *)v9 + 2) = a4;
      *((_QWORD *)v9 + 3) = a5;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 17;
      *((_QWORD *)this + 5078) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40616, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
