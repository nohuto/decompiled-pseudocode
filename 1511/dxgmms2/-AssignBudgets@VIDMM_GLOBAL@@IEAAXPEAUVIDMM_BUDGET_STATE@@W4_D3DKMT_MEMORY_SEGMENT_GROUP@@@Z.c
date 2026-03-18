/*
 * XREFs of ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C0086104
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00861F4 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GRO.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C008658C (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3)
{
  int v3; // edi
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 *v10; // rsi
  __int64 *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v3 = 0;
  v4 = a3;
  v6 = *((_QWORD *)this + 5111) + 264LL * *((unsigned int *)a2 + 69);
  if ( *(_BYTE *)((int)a3 + v6 + 256) )
  {
    v8 = 0LL;
    v9 = 3LL;
    v10 = (unsigned __int64 *)((char *)a2 + 24 * a3 + 96);
    v11 = (__int64 *)v10;
    do
    {
      v12 = *v11;
      if ( v11[6] < (unsigned __int64)*v11 )
        v12 = v11[6];
      ++v11;
      v8 += v12;
      --v9;
    }
    while ( v9 );
    v13 = *(_QWORD *)(v6 + 8 * v4 + 16) - v8;
    do
    {
      v14 = v10[6];
      v15 = *v10;
      if ( *v10 > v14 )
      {
        v17 = v15 - v14;
        v16 = v14 + v13;
        v18 = v13;
        if ( v17 < v13 )
          v18 = v17;
        v13 -= v18;
      }
      else
      {
        v16 = v15 + v13;
        if ( v14 > v15 + v13 )
          v16 = v10[6];
      }
      VIDMM_GLOBAL::AssignBudgetsWithinBand(this, a2, (unsigned int)v4, (unsigned int)v3++, v16);
      ++v10;
    }
    while ( v3 < 3 );
  }
  else
  {
    VIDMM_GLOBAL::AssignMaximumBudgets(this, a2, a3);
  }
}
