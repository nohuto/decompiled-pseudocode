/*
 * XREFs of ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C009B4D8
 * Callers:
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C009B3E8 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C009B9CC (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 */

void __fastcall VIDMM_GLOBAL::AssignBudgetsWithinBand(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 *v13; // rcx
  __int64 v14; // r13
  _QWORD **v15; // r9
  _QWORD *v16; // r10
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD **v22; // r15
  unsigned int *v23; // r11
  __int64 v24; // r8
  _QWORD *v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rtt
  __int64 v28; // r12
  _QWORD *v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax
  unsigned int *v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rdx
  __int64 v44; // r10
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  _QWORD *v49; // rcx
  __int64 i; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 *v52; // rdx
  unsigned __int64 *v53; // r9
  unsigned __int64 v54; // rcx
  _QWORD **v55; // rdi
  _QWORD *v56; // rbx
  VIDMM_GLOBAL *v57; // r15
  unsigned int v58; // [rsp+30h] [rbp-61h]
  unsigned __int64 v59; // [rsp+38h] [rbp-59h]
  unsigned __int64 v61; // [rsp+48h] [rbp-49h]
  __int64 v62; // [rsp+58h] [rbp-39h]
  VIDMM_GLOBAL *v63; // [rsp+60h] [rbp-31h]
  unsigned __int64 v64[3]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v65[3]; // [rsp+80h] [rbp-11h] BYREF

  v5 = *(unsigned int *)(a2 + 276);
  v7 = a4;
  v8 = *((_QWORD *)a1 + 5150) + 264 * v5;
  v63 = a1;
  v9 = *(unsigned int *)(a2 + 4LL * a4 + 264);
  v62 = v8;
  v58 = v9;
  if ( (_DWORD)v9 )
  {
    v14 = a3;
    memset(v65, 0, sizeof(v65));
    v15 = (_QWORD **)(a2 + 16LL * a4);
    v16 = *v15;
    if ( *v15 != v15 )
    {
      v17 = (int)a3 + 33 * v5;
      do
      {
        v18 = *((int *)v16 - 4);
        v19 = *(v16 - 40);
        v16 = (_QWORD *)*v16;
        v20 = *(_QWORD *)(v19 + 8 * v17 + 184);
        if ( v65[v18] > v20 )
          v20 = v65[v18];
        v65[v18] = v20;
      }
      while ( v16 != v15 );
      v9 = (unsigned int)v9;
    }
    v21 = a5;
    v22 = (_QWORD **)(a2 + 16 * v7);
    v61 = a5;
    memset(v64, 255, sizeof(v64));
    v23 = dword_1C002B700;
    v24 = 3LL;
    while ( 1 )
    {
      v25 = *v22;
      v27 = v21;
      v26 = v21 / v9;
      v28 = 0LL;
      v59 = v27 / v9;
      if ( *v22 == v15 )
        break;
      do
      {
        v29 = v25 - 46;
        v25 = (_QWORD *)*v25;
        v30 = v59 * dword_1C002B700[*((int *)v29 + 88)];
        v31 = *(_QWORD *)(v29[6] + 8 * (v14 + 33LL * *(unsigned int *)(a2 + 276)) + 184);
        if ( v31 <= v30 )
        {
          v61 -= v31;
          v32 = v29 + 46;
          v28 += v30 - v31;
          v33 = v29[46];
          v58 -= dword_1C002B700[*((int *)v29 + 88)];
          v34 = (_QWORD *)v29[47];
          if ( *(_QWORD **)(v33 + 8) != v29 + 46 || (_QWORD *)*v34 != v32 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          v35 = a2 + 16 * (v7 + 3);
          v36 = *(_QWORD **)(v35 + 8);
          if ( *v36 != v35 )
            __fastfail(3u);
          *v32 = v35;
          v29[47] = v36;
          *v36 = v32;
          *(_QWORD *)(v35 + 8) = v32;
        }
      }
      while ( v25 != v15 );
      if ( !v28 )
      {
        v26 = v59;
        break;
      }
      v37 = dword_1C002B700;
      v38 = 0LL;
      v39 = 3LL;
      do
      {
        v40 = v65[v38++];
        v41 = *v37++;
        v42 = v59 * v41;
        if ( v40 < v42 )
          v42 = v40;
        v64[v38 - 1] = v42 + v28;
        --v39;
      }
      while ( v39 );
      v8 = v62;
      if ( *v22 == v22 )
        goto LABEL_43;
      v9 = v58;
      v21 = v61;
    }
    v43 = v64;
    v44 = 3LL;
    do
    {
      v45 = *v23++;
      v46 = v26 * v45;
      v26 = v59;
      if ( *v43 < v46 )
        v46 = *v43;
      *v43++ = v46;
      --v44;
    }
    while ( v44 );
    if ( *v15 != v15 )
    {
      v47 = (_QWORD *)(a2 + 16 * (v7 + 3));
      v48 = (_QWORD *)v47[1];
      if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v48 != v47 )
        __fastfail(3u);
      if ( (_QWORD **)(*v15)[1] != v15 || (_QWORD **)*v15[1] != v15 )
        __fastfail(3u);
      *v48 = v15;
      v47[1] = v15[1];
      *v15[1] = v47;
      v15[1] = v48;
      v49 = *v15;
      if ( (_QWORD **)(*v15)[1] != v15 || (_QWORD **)*v48 != v15 )
        __fastfail(3u);
      *v48 = v49;
      v49[1] = v48;
      v15[1] = v15;
      *v15 = v15;
    }
LABEL_43:
    for ( i = 1LL; i < 3; ++i )
    {
      v51 = v64[i - 1];
      if ( v51 > v64[i] )
        v64[i] = v51;
    }
    v52 = v64;
    v53 = (unsigned __int64 *)(v8 + 8 * (v14 + v7 + 2 * v14 + 2 * (v14 + v7 + 2 * v14 + 5)));
    do
    {
      v54 = *(_QWORD *)(v8 + 8 * v14 + 48);
      if ( *v52 < v54 )
        v54 = *v52;
      ++v52;
      *v53++ = v54;
      --v24;
    }
    while ( v24 );
    v55 = (_QWORD **)(a2 + 16 * (v7 + 3));
    v56 = *v55;
    if ( *v55 != v55 )
    {
      v57 = v63;
      do
      {
        VIDMM_GLOBAL::AssignProcessBudget(
          v57,
          (struct VIDMM_BUDGET_STATE *)a2,
          a3,
          (struct VIDMM_PROCESS_ADAPTER_INFO *)(v56 - 46),
          v64[*((int *)v56 - 4)]);
        v56 = (_QWORD *)*v56;
      }
      while ( v56 != v55 );
    }
  }
  else
  {
    v10 = a5;
    v11 = a3;
    v12 = 3LL;
    if ( a5 >= *(_QWORD *)(v8 + 8 * v11 + 48) )
      v10 = *(_QWORD *)(v8 + 8 * v11 + 48);
    v13 = (unsigned __int64 *)(v8 + 8 * (3 * (a4 + 2 * v11 + v11) + 10));
    do
    {
      *v13++ = v10;
      --v12;
    }
    while ( v12 );
  }
}
