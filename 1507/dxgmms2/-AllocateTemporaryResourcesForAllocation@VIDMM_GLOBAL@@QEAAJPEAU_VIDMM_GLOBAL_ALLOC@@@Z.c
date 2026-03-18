/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B844
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C003A6D8 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C003A93C (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C003A994 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8

  if ( *((_QWORD *)a2 + 32) )
  {
    v4 = (_QWORD *)((char *)a2 + 224);
    v5 = *((_QWORD *)a2 + 28);
    v6 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(v5 + 8) != v4 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    v7 = 0;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    v8 = *((_QWORD *)a2 + 32);
    *((_QWORD *)a2 + 29) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v8 + 56LL))(v8, a2);
  }
  else
  {
    v7 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet((__int64)this, (__int64)a2, 0, 1);
    if ( v7 >= 0
      || (VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1),
          v7 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet((__int64)this, (__int64)a2, 0, 1),
          v7 >= 0) )
    {
      VIDMM_GLOBAL::EvictAllAllocationInList(v9, (struct _LIST_ENTRY *)((char *)this + 3736), v10);
    }
  }
  return (unsigned int)v7;
}
