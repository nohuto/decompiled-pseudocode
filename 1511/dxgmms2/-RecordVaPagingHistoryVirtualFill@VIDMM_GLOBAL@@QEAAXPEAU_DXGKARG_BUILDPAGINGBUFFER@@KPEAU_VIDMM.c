/*
 * XREFs of ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00423FC
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0048744 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        int a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  _OWORD *v8; // rdi
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_QWORD *)this + 5082) )
  {
    v8 = operator new(0x40uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40672, 0LL);
      *((_QWORD *)this + 5085) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10166) == dword_1C002F304 )
        *((_DWORD *)this + 10166) = 0;
      v9 = *(void **)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16);
      if ( v9 )
        operator delete(v9);
      *v8 = *(_OWORD *)&a2->Transfer.hAllocation;
      v8[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      *((_QWORD *)v8 + 4) = a2->Transfer.Source.SegmentAddress.QuadPart;
      *((_DWORD *)v8 + 10) = a3;
      *((_QWORD *)v8 + 6) = a4;
      if ( a4 )
      {
        v10 = *((_QWORD *)a4 + 5);
        if ( v10 )
          v11 = *(_QWORD *)(v10 + 16);
        else
          v11 = *((_QWORD *)a4 + 6);
      }
      else
      {
        v11 = 0LL;
      }
      *((_QWORD *)v8 + 7) = v11;
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5082) + 24LL * *((unsigned int *)this + 10166) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5082) + 24LL * (unsigned int)(*((_DWORD *)this + 10166))++ + 8) = 6;
      *((_QWORD *)this + 5085) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40672, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
