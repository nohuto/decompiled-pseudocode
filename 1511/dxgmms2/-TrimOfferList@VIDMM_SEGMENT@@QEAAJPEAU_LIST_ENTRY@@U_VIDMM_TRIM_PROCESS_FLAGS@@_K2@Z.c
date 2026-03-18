/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0085750
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C0085854 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00856A4 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        __int64 a1,
        _QWORD **a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-48h] BYREF

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(a1 + 8) + 39840LL));
  v8 = *a2;
  while ( v8 != a2 )
  {
    v9 = (__int64)(v8 - 50);
    v8 = (_QWORD *)*v8;
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 472) + 4LL) != 1 )
    {
      v10 = (_QWORD *)(v9 + 400);
      v11 = *(_QWORD *)(v9 + 400);
      v12 = *(_QWORD **)(v9 + 408);
      if ( *(_QWORD *)(v11 + 8) != v9 + 400 || (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      _InterlockedOr(v15, 0);
      *v10 = 0LL;
      if ( *(_DWORD *)(v9 + 120) == 2
        && *(_QWORD *)(v9 + 128) == a1
        && *(_DWORD *)(*(_QWORD *)(v9 + 472) + 4LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation((VIDMM_GLOBAL **)a1, v9, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 8) + 39840LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
