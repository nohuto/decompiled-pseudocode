/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C0090850
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C001F120 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C008A7DC (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C009BAF8 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v11; // r11
  __int64 v13; // rbx
  _QWORD *v14; // r10
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v23; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-20h] BYREF

  v11 = a5;
  v13 = a4;
  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v14 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v14 )
    {
      v17 = a5;
      v18 = v14[6] + 264LL * a4;
      *a6 = *(_QWORD *)(v18 + 8LL * (int)a5 + 24);
      *a8 = *(_QWORD *)(*(_QWORD *)(*v14 + 41200LL) + 8 * (v11 + 33LL * a4) + 64);
      *a9 = *(_QWORD *)(v18 + 8 * v11 + 56);
      v19 = a10;
      if ( a10 )
      {
        v20 = 5LL;
        v21 = v18 - (_QWORD)a10;
        do
        {
          if ( (_DWORD)v11 )
            *v19 = 0LL;
          else
            *v19 = *(unsigned __int64 *)((char *)v19 + v21 + 224);
          ++v19;
          --v20;
        }
        while ( v20 );
        *a11 = *(_QWORD *)(v18 + 8 * v11 + 200);
      }
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v24, (struct DXGPUSHLOCK *const)(v14 + 41));
      *a7 = *(_QWORD *)(v18 + 8 * v17 + 136);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
      return 0LL;
    }
    if ( !a10 )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        *((struct DXGPROCESS **)this + 4),
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v23);
      *a6 = *(_QWORD *)(*((_QWORD *)a2 + 5150) + 8 * (v23 + 3 * ((int)a5 + 11 * v13 + 3 * v15)) + 80);
      *a8 = *(_QWORD *)(*((_QWORD *)a2 + 5150) + 8 * (v15 + 33 * v13) + 64);
      *a9 &= v16;
      *a7 &= v16;
      return 0LL;
    }
  }
  return 3221225485LL;
}
