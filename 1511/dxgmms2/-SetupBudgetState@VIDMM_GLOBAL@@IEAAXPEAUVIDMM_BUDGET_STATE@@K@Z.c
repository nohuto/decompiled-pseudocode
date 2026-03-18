/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0086830
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0056550 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0086754 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r9
  __int64 v6; // rdx
  char *v8; // r14
  char *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r12
  _QWORD *v12; // rbx
  VIDMM_GLOBAL *v13; // rcx
  VIDMM_PROCESS *v14; // rax
  struct DXGPROCESS *v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char *v19; // rdx
  char *v20; // rax
  char **v21; // r8
  _QWORD *v22; // rbx
  _DWORD *v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 *v25; // r8
  _DWORD *v26; // r10
  _QWORD *v27; // r9
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rax
  _BYTE v32[32]; // [rsp+20h] [rbp-48h] BYREF
  int v33; // [rsp+80h] [rbp+18h] BYREF

  v3 = (unsigned int)a3;
  v4 = (_QWORD *)((char *)a2 + 48);
  *((_DWORD *)a2 + 69) = a3;
  v6 = 3LL;
  do
  {
    *(v4 - 5) = v4 - 6;
    *(v4 - 6) = v4 - 6;
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v8 = (char *)this + 40744;
  v9 = (char *)*((_QWORD *)this + 5093);
  v10 = 2LL;
  if ( v9 != (char *)this + 40744 )
  {
    v11 = 240LL * (unsigned int)a3;
    do
    {
      v12 = (_QWORD *)(v11 + *((_QWORD *)v9 + 3));
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
        (DXGAUTOPUSHLOCKSHARED *)v32,
        (struct _KTHREAD **)v9 + 35,
        a3,
        (__int64)v4);
      v12[20] = v12[17];
      v12[21] = v12[18];
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      v12[21] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v12);
      v14 = (VIDMM_PROCESS *)*((_QWORD *)v9 + 2);
      v15 = (struct DXGPROCESS *)*((_QWORD *)v14 + 4);
      if ( v15 && v14 != g_pVidMmSystemProcess )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v13,
          v15,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)&v33,
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)(v9 + 304));
        v16 = *v12;
        if ( *v12 )
        {
          v17 = (_QWORD *)v12[1];
          if ( *(_QWORD **)(v16 + 8) != v12 || (_QWORD *)*v17 != v12 )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          *v12 = 0LL;
          v12[1] = 0LL;
        }
        v18 = v33;
        v19 = v9 + 312;
        v20 = (char *)a2 + 16 * v33;
        v21 = (char **)*((_QWORD *)v20 + 1);
        *((_QWORD *)v9 + 39) = v20;
        *((_QWORD *)v9 + 40) = v21;
        if ( *v21 != v20 )
          __fastfail(3u);
        *v21 = v19;
        v22 = v12 + 7;
        *((_QWORD *)v20 + 1) = v19;
        a3 = 2LL;
        *((_DWORD *)a2 + v18 + 66) += dword_1C0026520[*(int *)v4];
        v23 = (_DWORD *)((char *)a2 + 4 * v18 + 240);
        v24 = (_QWORD *)((char *)a2 + 8 * v18 + 192);
        do
        {
          *(v24 - 12) += v22[13];
          if ( *v22 )
          {
            *v24 += *v22;
            ++*v23;
          }
          ++v22;
          v24 += 3;
          v23 += 3;
          --a3;
        }
        while ( a3 );
      }
      v9 = *(char **)v9;
    }
    while ( v9 != v8 );
  }
  v25 = (unsigned __int64 *)((char *)a2 + 152);
  v26 = (_DWORD *)((char *)a2 + 244);
  v27 = (_QWORD *)(*((_QWORD *)this + 5111) + 264 * v3 + 16);
  do
  {
    v28 = 30LL * *v27 / 0x64uLL;
    *(v25 - 1) = v28;
    v29 = 50LL * *v27 / 0x64uLL;
    *v25 = v29;
    v30 = *((_DWORD *)a2 + 67);
    if ( v30 && *v26 == v30 )
    {
      if ( v25[6] < v29 )
        v29 = v25[6];
      *v25 = v29;
    }
    v26 += 3;
    v31 = *v27++ - v28;
    v25[1] = v31 - *v25;
    v25 += 3;
    --v10;
  }
  while ( v10 );
}
