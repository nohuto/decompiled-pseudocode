/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004713C
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0049610 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0049AB0 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C0049B54 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  unsigned __int8 v12; // r8
  __int64 v13; // r9

  if ( *((_QWORD *)a2 + 32) )
  {
    v6 = (_QWORD *)((char *)a2 + 224);
    v7 = *((_QWORD *)a2 + 28);
    v8 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    v9 = 0;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v10 = *((_QWORD *)a2 + 32);
    *((_QWORD *)a2 + 29) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v10 + 56LL))(v10, a2);
  }
  else
  {
    LOBYTE(a4) = 1;
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, a4);
    if ( v9 >= 0
      || (VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u),
          LOBYTE(v13) = 1,
          v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, v13),
          v9 >= 0) )
    {
      VIDMM_GLOBAL::EvictAllAllocationInList(v11, (struct _LIST_ENTRY *)((char *)this + 3736), v12);
    }
  }
  return (unsigned int)v9;
}
