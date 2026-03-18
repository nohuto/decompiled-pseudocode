/*
 * XREFs of ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00628E4
 * Callers:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE *a3,
        struct VIDMM_ALLOC *a4,
        struct _VIDMM_GLOBAL_ALLOC **a5,
        unsigned int a6)
{
  char *v10; // r14
  UINT NumPageTableEntries; // ebp
  _OWORD *v12; // rdi
  void *v13; // rcx
  D3DGPU_VIRTUAL_ADDRESS FirstPteVirtualAddress; // xmm0_8
  struct _VIDMM_GLOBAL_ALLOC *v15; // rax
  __int64 v16; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm0

  if ( *((_QWORD *)this + 5075) )
  {
    v10 = (char *)this + 40616;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    NumPageTableEntries = 1;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    if ( (*(_DWORD *)&a3->Flags & 1) == 0 )
      NumPageTableEntries = a3->NumPageTableEntries;
    v12 = operator new(16 * (NumPageTableEntries - 1 + 10LL), 0x32356956u, PagedPool);
    if ( v12 )
    {
      if ( *((_DWORD *)this + 10152) == dword_1C00272E4 )
        *((_DWORD *)this + 10152) = 0;
      v13 = *(void **)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16);
      if ( v13 )
        operator delete(v13);
      *v12 = *(_OWORD *)&a3->PageTableLevel;
      v12[1] = a3->PageTableAddress;
      v12[2] = *(_OWORD *)&a3->pPageTableEntries;
      v12[3] = *(_OWORD *)&a3->Reserved0;
      v12[4] = *(_OWORD *)&a3->AllocationOffsetInBytes;
      v12[5] = *(_OWORD *)&a3->UpdateMode;
      FirstPteVirtualAddress = a3->FirstPteVirtualAddress;
      *((_DWORD *)v12 + 34) = a6;
      v15 = (struct _VIDMM_GLOBAL_ALLOC *)a5;
      *((_QWORD *)v12 + 15) = a5;
      *((_QWORD *)v12 + 12) = FirstPteVirtualAddress;
      *((_QWORD *)v12 + 14) = a4;
      *((_QWORD *)v12 + 13) = a2;
      if ( a4 && (v16 = *((_QWORD *)a4 + 2)) != 0 )
      {
        v15 = *(struct _VIDMM_GLOBAL_ALLOC **)(v16 + 32);
      }
      else if ( a5 )
      {
        v17 = a5[5];
        if ( v17 )
          v15 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v17 + 2);
        else
          v15 = a5[6];
      }
      *((_QWORD *)v12 + 16) = v15;
      if ( NumPageTableEntries )
      {
        v18 = 0LL;
        v19 = NumPageTableEntries;
        do
        {
          v20 = *(_OWORD *)&a3->pPageTableEntries[v18++].0;
          v12[v18 + 8] = v20;
          --v19;
        }
        while ( v19 );
      }
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5075) + 24LL * *((unsigned int *)this + 10152) + 16) = v12;
      *(_DWORD *)(*((_QWORD *)this + 5075) + 24LL * (unsigned int)(*((_DWORD *)this + 10152))++ + 8) = 4;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
