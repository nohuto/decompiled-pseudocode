/*
 * XREFs of ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C009B880
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C009B3E8 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C009B9CC (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignMaximumBudgets(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, int a3)
{
  char *v3; // rdi
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v4; // r10d
  _DWORD *v5; // r15
  __int64 v6; // r12
  int v8; // esi
  VIDMM_GLOBAL *v9; // r11
  __int64 v10; // r9
  __int64 i; // rax
  _QWORD *v12; // r8
  __int64 v13; // rcx
  char *v14; // r14
  char *v15; // r13
  struct VIDMM_PROCESS_ADAPTER_INFO *v16; // rbx
  char *v17; // rbx
  __int64 v18; // rcx
  char **v19; // rax
  char **v20; // rax
  __int64 v22; // [rsp+78h] [rbp+10h]

  v3 = (char *)a2 + 48;
  v4 = a3;
  v5 = (_DWORD *)((char *)a2 + 264);
  v6 = *((_QWORD *)this + 5150) + 264LL * *((unsigned int *)a2 + 69);
  v8 = 0;
  v22 = a3;
  v9 = this;
  v10 = a3;
  for ( i = 3LL * a3; ; i = 3 * v10 )
  {
    v12 = (_QWORD *)(v6 + 8 * (v8 + i + 2 * (v8 + i + 5)));
    v13 = 3LL;
    do
    {
      *v12++ = *(_QWORD *)(v6 + 8 * v10 + 48);
      --v13;
    }
    while ( v13 );
    if ( *v5 )
    {
      v14 = (char *)*((_QWORD *)v3 - 6);
      v15 = (char *)a2 + 16 * v8;
      if ( v14 != v15 )
      {
        do
        {
          v16 = (struct VIDMM_PROCESS_ADAPTER_INFO *)(v14 - 368);
          v14 = *(char **)v14;
          VIDMM_GLOBAL::AssignProcessBudget(v9, a2, v4, v16, 0xFFFFFFFFFFFFFFFFuLL);
          v17 = (char *)v16 + 368;
          v18 = *(_QWORD *)v17;
          v19 = (char **)*((_QWORD *)v17 + 1);
          if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
            __fastfail(3u);
          *v19 = (char *)v18;
          *(_QWORD *)(v18 + 8) = v19;
          v20 = (char **)*((_QWORD *)v3 + 1);
          if ( *v20 != v3 )
            __fastfail(3u);
          v4 = a3;
          v9 = this;
          *(_QWORD *)v17 = v3;
          *((_QWORD *)v17 + 1) = v20;
          *v20 = v17;
          *((_QWORD *)v3 + 1) = v17;
        }
        while ( v14 != v15 );
        v10 = v22;
      }
    }
    ++v8;
    ++v5;
    v3 += 16;
    if ( v8 >= 3 )
      break;
  }
}
