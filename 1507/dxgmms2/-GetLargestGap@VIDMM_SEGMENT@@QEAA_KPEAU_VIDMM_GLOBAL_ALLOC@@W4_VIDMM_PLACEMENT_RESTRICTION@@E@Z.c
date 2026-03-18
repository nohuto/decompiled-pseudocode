/*
 * XREFs of ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C006FE4C
 * Callers:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00570E8 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C0075F98 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 */

unsigned __int64 __fastcall VIDMM_SEGMENT::GetLargestGap(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r11d

  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v5 = *(_QWORD *)(a2 + 24);
  else
    v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 32);
  if ( (**(_DWORD **)(a2 + 472) & 0x20000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 400);
    v5 = ~*(_QWORD *)(a1 + 392) & (*(_QWORD *)(a1 + 392) + v5);
  }
  return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 144), v5, v6, a4, 0LL, *(_QWORD *)(a1 + 40));
}
