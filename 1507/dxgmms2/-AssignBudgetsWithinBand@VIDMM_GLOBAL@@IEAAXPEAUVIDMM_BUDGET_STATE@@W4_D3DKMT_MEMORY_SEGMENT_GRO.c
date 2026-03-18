/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C007221C
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C007212C (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C0072700 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r11
  _QWORD **v14; // r9
  _QWORD *v15; // r10
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  _QWORD **v21; // r14
  unsigned int *v22; // r11
  __int64 v23; // r8
  __int64 v24; // r15
  _QWORD *v25; // rdx
  unsigned __int64 v26; // r13
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rax
  _QWORD *v32; // rcx
  unsigned __int64 v33; // r10
  _QWORD *v34; // rax
  __int64 v35; // r10
  __int64 v36; // r10
  _QWORD *v37; // rax
  unsigned int *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 *v44; // rdx
  __int64 v45; // r10
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  _QWORD *v50; // rcx
  unsigned __int64 *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 *v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rax
  _QWORD **v57; // rdi
  _QWORD *i; // rbx
  unsigned int v59; // [rsp+30h] [rbp-61h]
  __int64 v60; // [rsp+38h] [rbp-59h]
  __int64 v61; // [rsp+38h] [rbp-59h]
  __int64 v62; // [rsp+40h] [rbp-51h]
  __int64 v65; // [rsp+58h] [rbp-39h]
  unsigned __int64 v66; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v67[2]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v68[3]; // [rsp+78h] [rbp-19h] BYREF

  v5 = *(unsigned int *)(a2 + 276);
  v7 = a4;
  v8 = *((_QWORD *)a1 + 5104) + 264 * v5;
  v9 = *(unsigned int *)(a2 + 4LL * a4 + 264);
  v65 = v8;
  v60 = a4;
  v59 = v9;
  if ( (_DWORD)v9 )
  {
    v13 = 2LL * a4;
    memset(v68, 0, sizeof(v68));
    v14 = (_QWORD **)(a2 + 16LL * a4);
    v62 = a3;
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = a3;
      do
      {
        v17 = *((int *)v15 - 2);
        v18 = *(v15 - 36);
        v15 = (_QWORD *)*v15;
        v19 = *(_QWORD *)(240 * v5 + v18 + 8 * v16 + 160);
        if ( v68[v17] > v19 )
          v19 = v68[v17];
        v68[v17] = v19;
      }
      while ( v15 != v14 );
      v7 = v60;
      v9 = v59;
    }
    v20 = a5;
    v21 = (_QWORD **)(a2 + 8 * v13);
    v61 = a5;
    v66 = -1LL;
    v22 = dword_1C00213B0;
    v67[0] = -1LL;
    v67[1] = -1LL;
    v23 = 3LL;
    while ( 1 )
    {
      v24 = 0LL;
      v25 = *v21;
      v26 = v20 / v9;
      if ( *v21 == v14 )
        break;
      do
      {
        v27 = v25 - 42;
        v28 = *((int *)v25 - 2);
        v25 = (_QWORD *)*v25;
        v29 = dword_1C00213B0[v28];
        v30 = v26 * v29;
        v31 = *(_QWORD *)(v27[6] + 8 * (v62 + 30LL * *(unsigned int *)(a2 + 276)) + 160);
        if ( v31 <= v30 )
        {
          v61 -= v31;
          v32 = v27 + 42;
          v59 -= v29;
          v33 = v30 - v31;
          v34 = (_QWORD *)v27[43];
          v24 += v33;
          v35 = v27[42];
          if ( *(_QWORD **)(v35 + 8) != v27 + 42 || (_QWORD *)*v34 != v32 )
            __fastfail(3u);
          *v34 = v35;
          *(_QWORD *)(v35 + 8) = v34;
          v36 = a2 + 16 * (v7 + 3);
          v37 = *(_QWORD **)(v36 + 8);
          *v32 = v36;
          v27[43] = v37;
          if ( *v37 != v36 )
            __fastfail(3u);
          *v37 = v32;
          *(_QWORD *)(v36 + 8) = v32;
        }
      }
      while ( v25 != v14 );
      if ( !v24 )
        break;
      v38 = dword_1C00213B0;
      v39 = 0LL;
      v40 = 3LL;
      do
      {
        v41 = v68[v39++];
        v42 = *v38++;
        v43 = v26 * v42;
        if ( v41 < v43 )
          v43 = v41;
        *(__int64 *)((char *)&v65 + v39 * 8) = v43 + v24;
        --v40;
      }
      while ( v40 );
      if ( *v21 == v21 )
        goto LABEL_40;
      v9 = v59;
      v20 = v61;
    }
    v44 = &v66;
    v45 = 3LL;
    do
    {
      v46 = *v22++;
      v47 = v26 * v46;
      if ( *v44 < v47 )
        v47 = *v44;
      *v44++ = v47;
      --v45;
    }
    while ( v45 );
    if ( *v14 != v14 )
    {
      v48 = (_QWORD *)(a2 + 16 * (v7 + 3));
      v49 = (_QWORD *)v48[1];
      if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v49 != v48 )
        __fastfail(3u);
      if ( (_QWORD **)(*v14)[1] != v14 || (_QWORD **)*v14[1] != v14 )
        __fastfail(3u);
      *v49 = v14;
      v48[1] = v14[1];
      *v14[1] = v48;
      v14[1] = v49;
      v50 = *v14;
      if ( (_QWORD **)(*v14)[1] != v14 || (_QWORD **)*v49 != v14 )
        __fastfail(3u);
      *v49 = v50;
      v50[1] = v49;
      v14[1] = v14;
      *v14 = v14;
    }
LABEL_40:
    v51 = v67;
    v52 = 2LL;
    do
    {
      v53 = *(v51 - 1);
      if ( v53 > *v51 )
        *v51 = v53;
      ++v51;
      --v52;
    }
    while ( v52 );
    v54 = &v66;
    v55 = (_QWORD *)(v65 + 24 * (v7 + 2 * v62 + v62) + 80);
    do
    {
      v56 = *v54++;
      *v55++ = v56;
      --v23;
    }
    while ( v23 );
    v57 = (_QWORD **)(a2 + 16 * (v7 + 3));
    for ( i = *v57; i != v57; i = (_QWORD *)*i )
      VIDMM_GLOBAL::AssignProcessBudget(
        a1,
        (struct VIDMM_BUDGET_STATE *)a2,
        a3,
        (struct VIDMM_PROCESS_ADAPTER_INFO *)(i - 42),
        v67[*((int *)i - 2) - 1]);
  }
  else
  {
    v10 = a3;
    v11 = 3LL;
    v12 = (_QWORD *)(v8 + 8 * (a4 + 2 * v10 + v10 + 2 * (a4 + 2 * v10 + v10 + 5)));
    do
    {
      *v12++ = a5;
      --v11;
    }
    while ( v11 );
  }
}
