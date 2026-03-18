/*
 * XREFs of ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C0061A48
 * Callers:
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D744 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB *a3,
        int a4)
{
  _OWORD *v8; // rdi
  void *v9; // rcx

  if ( *((_QWORD *)this + 5075) )
  {
    v8 = operator new(0x38uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40616, 0LL);
      *((_QWORD *)this + 5078) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v9 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v9 )
        operator delete(v9);
      *v8 = a3->RootPageTableAddress;
      v8[1] = *(_OWORD *)&a3->hProcess;
      *((_QWORD *)v8 + 4) = a3->EndVirtualAddress;
      *((_DWORD *)v8 + 12) = a4;
      *((_QWORD *)v8 + 5) = a2;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 5;
      *((_QWORD *)this + 5078) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40616, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
