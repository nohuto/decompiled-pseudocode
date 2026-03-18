/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0062C54
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _OWORD *v6; // rdi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_QWORD *)this + 5075) )
  {
    v6 = operator new(0x58uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40616, 0LL);
      *((_QWORD *)this + 5078) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v7 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v7 )
        operator delete(v7);
      *v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v6[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      v6[2] = *(_OWORD *)&a2->Reserved.Reserved[8];
      v8 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *((_QWORD *)v6 + 9) = a3;
      v6[3] = v8;
      if ( a3 )
      {
        v10 = *((_QWORD *)a3 + 5);
        if ( v10 )
          v9 = *(_QWORD *)(v10 + 16);
        else
          v9 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v9 = 0LL;
      }
      *((_QWORD *)v6 + 10) = v9;
      *((_DWORD *)v6 + 16) = *((_DWORD *)a3 + 19) & 0x3F;
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 7;
      *((_QWORD *)this + 5078) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40616, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
