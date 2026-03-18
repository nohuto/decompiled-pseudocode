/*
 * XREFs of ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0042580
 * Callers:
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0048454 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rdi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_QWORD *)this + 5082) )
  {
    v6 = operator new(0x38uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
      *((_QWORD *)this + 5085) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10166) == dword_1C002F304 )
        *((_DWORD *)this + 10166) = 0;
      v7 = *(void **)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16);
      if ( v7 )
        operator delete(v7);
      *(_OWORD *)v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v8 = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      v6[5] = a3;
      *((_OWORD *)v6 + 1) = v8;
      *((_DWORD *)v6 + 8) = *((_DWORD *)a3 + 19) & 0x3F;
      v9 = *((_QWORD *)a3 + 5);
      if ( v9 )
        v10 = *(_QWORD *)(v9 + 16);
      else
        v10 = *((_QWORD *)a3 + 6);
      v6[6] = v10;
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5082) + 24LL * (unsigned int)(*((_DWORD *)this + 10166))++ + 8) = 10;
      *((_QWORD *)this + 5085) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
