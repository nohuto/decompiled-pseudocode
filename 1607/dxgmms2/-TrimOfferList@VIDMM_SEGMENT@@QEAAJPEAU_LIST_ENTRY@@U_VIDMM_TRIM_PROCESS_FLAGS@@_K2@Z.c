/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C009A8B0
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C009A998 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF64 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C009A780 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        __int64 a1,
        _QWORD **a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  VIDMM_GLOBAL *v8; // rcx
  _QWORD *v9; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v10; // r10
  __int64 v11; // r10
  __int64 v12; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(a1 + 8) + 39912LL));
  v9 = *a2;
  while ( v9 != a2 )
  {
    v10 = (struct _VIDMM_GLOBAL_ALLOC *)(v9 - 52);
    v9 = (_QWORD *)*v9;
    if ( *(_WORD *)(*((_QWORD *)v10 + 63) + 4LL) != 1 )
    {
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(v8, v10);
      if ( *(_DWORD *)(v11 + 128) == 2
        && *(_QWORD *)(v11 + 136) == a1
        && *(_WORD *)(*(_QWORD *)(v11 + 504) + 4LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation((VIDMM_GLOBAL **)a1, v11, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 8) + 39912LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v12, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
