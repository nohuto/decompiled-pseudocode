/*
 * XREFs of sub_180001AB4 @ 0x180001AB4
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_180012910 @ 0x180012910 (sub_180012910.c)
 *     sub_1800130C0 @ 0x1800130C0 (sub_1800130C0.c)
 * Callees:
 *     sub_180004DFC @ 0x180004DFC (sub_180004DFC.c)
 *     sub_180004EB4 @ 0x180004EB4 (sub_180004EB4.c)
 */

__int64 __fastcall sub_180001AB4(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rbp
  __int64 v34; // rbp
  volatile signed __int32 *v35; // rax
  unsigned __int64 v36; // rbp
  volatile signed __int32 *v37; // rcx
  volatile signed __int32 *v38; // rax
  volatile signed __int32 *v39; // r15
  volatile signed __int32 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v53; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = 2LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    v53 = 2 * v7 + 2;
  }
  else
  {
    v53 = 2LL;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *(_QWORD *)(a2 + 64);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *(_QWORD *)(a2 + 120);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *(_QWORD *)(a2 + 104);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *(_QWORD *)(a2 + 112);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *(_QWORD *)(a2 + 80);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v31 + v29) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *(_QWORD *)(a2 + 88);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v5 = 2 * v33 + 2;
  }
  v34 = v5 + v30;
  v35 = *(volatile signed __int32 **)(a1 + 144);
  v36 = v53 + v9 + v12 + v15 + v18 + v21 + v24 + v27 + v34;
  if ( !v35 || *v35 != 1 || *(_QWORD *)(a1 + 152) < v36 )
  {
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35, 0xFFFFFFFF) == 1 )
        free(*(void **)(a1 + 144));
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( v36 )
    {
      v38 = (volatile signed __int32 *)malloc(v36 + 4);
      v39 = v38;
      if ( v38 )
      {
        *v38 = 0;
        v40 = *(volatile signed __int32 **)(a1 + 144);
        if ( v40 )
        {
          if ( _InterlockedExchangeAdd(v40, 0xFFFFFFFF) == 1 )
            free(*(void **)(a1 + 144));
          *(_QWORD *)(a1 + 144) = 0LL;
          *(_QWORD *)(a1 + 152) = 0LL;
        }
        *(_QWORD *)(a1 + 144) = v39;
        *(_QWORD *)(a1 + 152) = v36;
        _InterlockedAdd(v39, 1u);
      }
    }
    else
    {
      v37 = *(volatile signed __int32 **)(a1 + 144);
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37, 0xFFFFFFFF) == 1 )
          free(*(void **)(a1 + 144));
        *(_QWORD *)(a1 + 144) = 0LL;
        *(_QWORD *)(a1 + 152) = 0LL;
      }
    }
  }
  v41 = *(_QWORD *)(a1 + 144);
  if ( v41 )
    v3 = v41 + 4;
  v42 = (*(_QWORD *)(a1 + 152) + v3) & -(__int64)(v3 != 0);
  v43 = sub_180004DFC(v3, v42, *(_QWORD *)(a2 + 16), a1 + 16);
  v44 = sub_180004EB4(v43, v42, *(_QWORD *)(a2 + 32), a1 + 32);
  v45 = sub_180004EB4(v44, v42, *(_QWORD *)(a2 + 40), a1 + 40);
  v46 = sub_180004EB4(v45, v42, *(_QWORD *)(a2 + 48), a1 + 48);
  v47 = sub_180004EB4(v46, v42, *(_QWORD *)(a2 + 64), a1 + 64);
  v48 = sub_180004EB4(v47, v42, *(_QWORD *)(a2 + 120), a1 + 120);
  v49 = sub_180004EB4(v48, v42, *(_QWORD *)(a2 + 104), a1 + 104);
  v50 = sub_180004DFC(v49, v42, *(_QWORD *)(a2 + 112), a1 + 112);
  v51 = sub_180004EB4(v50, v42, *(_QWORD *)(a2 + 80), a1 + 80);
  return sub_180004DFC(v51, v42, *(_QWORD *)(a2 + 88), a1 + 88);
}
