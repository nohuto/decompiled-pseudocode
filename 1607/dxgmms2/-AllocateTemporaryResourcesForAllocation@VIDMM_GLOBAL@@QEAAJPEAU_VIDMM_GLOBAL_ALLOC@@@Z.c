/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FAA8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0051A64 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0051F48 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE *v4; // rax
  __int64 v7; // rdx
  VIDMM_GLOBAL *v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r9

  v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
    v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  if ( *((_QWORD *)a2 + 33) )
  {
    if ( *v4 )
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      if ( g_IsInternalReleaseOrDbg )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
        v26[3] = *((_QWORD *)a2 + 33);
        v26[4] = *((unsigned int *)a2 + 64);
        v26[5] = *((int *)a2 + 65);
      }
    }
    v27 = (_QWORD *)((char *)a2 + 232);
    v28 = *((_QWORD *)a2 + 29);
    v29 = (_QWORD *)*((_QWORD *)a2 + 30);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v28 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 232)
      || (_QWORD *)*v29 != v27 )
    {
      __fastfail(3u);
    }
    *v29 = v28;
    v9 = 0;
    *(_QWORD *)(v28 + 8) = v29;
    *v27 = 0LL;
    v30 = *((_QWORD *)a2 + 33);
    *((_QWORD *)a2 + 30) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v30 + 56LL))(v30, a2);
  }
  else
  {
    LOBYTE(a4) = 1;
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, a4);
    if ( v9 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v8, v7, v10, v11);
    VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)a2 + 19) & 0x3F);
    LOBYTE(v31) = 1;
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, a2, 0LL, v31);
    if ( v9 >= 0 )
    {
LABEL_5:
      VIDMM_GLOBAL::EvictAllAllocationInList(v8, (struct _LIST_ENTRY *)((char *)this + 3736), v10);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
        v20[3] = *((_QWORD *)a2 + 33);
        v20[4] = *((unsigned int *)a2 + 64);
        v20[5] = *((int *)a2 + 65);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v8, v32, v10, v33);
    }
  }
  return (unsigned int)v9;
}
