/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C007F538
 * Callers:
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C007BCA8 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0086754 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        __int64 a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  __int64 v9; // r11
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v19; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[32]; // [rsp+28h] [rbp-20h] BYREF

  v9 = a5;
  v11 = (unsigned int)a4;
  if ( (unsigned int)a5 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
  if ( v12 )
  {
    v15 = (int)a5 + 33LL * (unsigned int)a4;
    v16 = a5;
    v17 = *(_QWORD *)(v12 + 48) + 240LL * (unsigned int)a4;
    *a6 = *(_QWORD *)(v17 + 8LL * (int)a5 + 24);
    *a8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 40888LL) + 8 * v15 + 64);
    *a9 = *(_QWORD *)(v17 + 8 * v9 + 56);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v20, (struct _KTHREAD **)(v12 + 304), a3, a4);
    *a7 = *(_QWORD *)(v17 + 8 * v16 + 136);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  else
  {
    VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
      this,
      *((struct DXGPROCESS **)this + 4),
      (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
      (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v19);
    *a6 = *(_QWORD *)(*((_QWORD *)a2 + 5111) + 8 * (v19 + 3 * ((int)a5 + 11 * v11 + 3 * v13)) + 80);
    *a8 = *(_QWORD *)(*((_QWORD *)a2 + 5111) + 8 * (v13 + 33 * v11) + 64);
    *a9 &= v14;
    *a7 &= v14;
  }
  return 0LL;
}
