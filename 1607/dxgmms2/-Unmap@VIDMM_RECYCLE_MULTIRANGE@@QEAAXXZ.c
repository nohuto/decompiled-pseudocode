/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0069B04
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C0040228 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00961F0 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00101A8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // rbx
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v4; // rcx
  void *v5; // rbx
  void *v6; // rax
  __int64 CurrentProcess; // rax

  if ( *((_BYTE *)this + 152) )
  {
    v2 = *((_QWORD *)this + 10);
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    if ( *(_QWORD *)(v4 + 40) - *(_QWORD *)(v4 + 32) <= SmallAllocationSize )
    {
      CurrentProcess = PsGetCurrentProcess(v4);
      MmUnmapViewOfSection(CurrentProcess, *((_QWORD *)this + 20));
    }
    else
    {
      v5 = *(void **)(v2 + 56);
      v6 = (void *)PsGetCurrentProcess(v4);
      VidMmUnmapViewAsync(v6, v5, *((PVOID *)this + 20));
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), *((PVOID *)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
