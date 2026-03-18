/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0062284
 * Callers:
 *     VidSchSetPagingNodePageDirectory @ 0x1C001D040 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct _DXGKARG_SETROOTPAGETABLE *a3,
        struct _VIDSCH_CONTEXT *a4)
{
  _QWORD *v8; // rdi
  void *v9; // rcx
  __int128 v10; // xmm1

  if ( *((_QWORD *)this + 5075) )
  {
    v8 = operator new(0x30uLL, 0x32356956u, PagedPool);
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
      *(_OWORD *)v8 = *(_OWORD *)&a3->hContext;
      v10 = *(_OWORD *)&a3->Address.SegmentOffset;
      v8[5] = a4;
      v8[4] = a2;
      *((_OWORD *)v8 + 1) = v10;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 9;
      *((_QWORD *)this + 5078) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40616, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
