/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0072858
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D0C (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C00325E4 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C007277C (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
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
  int *v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  char *v20; // rdx
  char *v21; // rax
  char **v22; // r8
  _QWORD *v23; // rbx
  __int64 v24; // r8
  _DWORD *v25; // rdx
  _QWORD *v26; // rcx
  unsigned __int64 *v27; // r8
  _DWORD *v28; // r10
  _QWORD *v29; // r9
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rax
  _BYTE v34[32]; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+80h] [rbp+18h] BYREF

  v3 = a3;
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
  v8 = (char *)this + 40688;
  v9 = (char *)*((_QWORD *)this + 5086);
  v10 = 2LL;
  if ( v9 != (char *)this + 40688 )
  {
    v11 = 240LL * a3;
    do
    {
      v12 = (_QWORD *)(v11 + *((_QWORD *)v9 + 3));
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v34, (struct DXGPUSHLOCK *const)(v9 + 280));
      v12[20] = v12[17];
      v12[21] = v12[18];
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
      v12[21] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v12);
      v14 = (VIDMM_PROCESS *)*((_QWORD *)v9 + 2);
      v15 = (struct DXGPROCESS *)*((_QWORD *)v14 + 4);
      if ( v15 && v14 != g_pVidMmSystemProcess )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v13,
          v15,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)&v35,
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)(v9 + 304));
        v17 = *v12;
        if ( *v12 )
        {
          v18 = (_QWORD *)v12[1];
          if ( *(_QWORD **)(v17 + 8) != v12 || (_QWORD *)*v18 != v12 )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v12 = 0LL;
          v12[1] = 0LL;
        }
        v19 = v35;
        v20 = v9 + 312;
        v21 = (char *)a2 + 16 * v35;
        v22 = (char **)*((_QWORD *)v21 + 1);
        *((_QWORD *)v9 + 39) = v21;
        *((_QWORD *)v9 + 40) = v22;
        if ( *v22 != v21 )
          __fastfail(3u);
        *v22 = v20;
        v23 = v12 + 7;
        *((_QWORD *)v21 + 1) = v20;
        v24 = 2LL;
        *((_DWORD *)a2 + v19 + 66) += dword_1C00213B0[*v16];
        v25 = (_DWORD *)((char *)a2 + 4 * v19 + 240);
        v26 = (_QWORD *)((char *)a2 + 8 * v19 + 192);
        do
        {
          *(v26 - 12) += v23[13];
          if ( *v23 )
          {
            *v26 += *v23;
            ++*v25;
          }
          ++v23;
          v26 += 3;
          v25 += 3;
          --v24;
        }
        while ( v24 );
      }
      v9 = *(char **)v9;
    }
    while ( v9 != v8 );
  }
  v27 = (unsigned __int64 *)((char *)a2 + 152);
  v28 = (_DWORD *)((char *)a2 + 244);
  v29 = (_QWORD *)(*((_QWORD *)this + 5104) + 264 * v3 + 16);
  do
  {
    v30 = 30LL * *v29 / 0x64uLL;
    *(v27 - 1) = v30;
    v31 = 50LL * *v29 / 0x64uLL;
    *v27 = v31;
    v32 = *((_DWORD *)a2 + 67);
    if ( v32 && *v28 == v32 )
    {
      if ( v27[6] < v31 )
        v31 = v27[6];
      *v27 = v31;
    }
    v28 += 3;
    v33 = *v29++ - v30;
    v27[1] = v33 - *v27;
    v27 += 3;
    --v10;
  }
  while ( v10 );
}
