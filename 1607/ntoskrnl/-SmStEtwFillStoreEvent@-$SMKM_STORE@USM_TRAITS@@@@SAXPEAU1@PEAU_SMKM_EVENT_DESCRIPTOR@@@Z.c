/*
 * XREFs of ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1402215D0
 * Callers:
 *     SmKmEtwLogStoreChange @ 0x140697CA4 (SmKmEtwLogStoreChange.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400A6598 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

_QWORD *__fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // xmm0_8
  _QWORD *v8; // rcx
  __int64 v9; // xmm0_8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // xmm0_8
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  _DWORD *v20; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // rcx
  _QWORD *v23; // rax
  _DWORD *v24; // rcx
  _QWORD *v25; // rax
  _WORD *v26; // rcx
  _QWORD *v27; // rax
  _WORD *v28; // rcx
  _QWORD *v29; // rax
  _DWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // r11
  _DWORD *v33; // r11
  int v34; // r9d
  int v35; // r10d
  int v36; // r8d
  _QWORD *v37; // rax
  _DWORD *v38; // rcx
  _QWORD *v39; // rax
  _DWORD *v40; // rcx
  _QWORD *v41; // rax
  _DWORD *v42; // rcx
  _QWORD *v43; // rax
  _DWORD *v44; // rcx
  _QWORD *v45; // rax
  _DWORD *v46; // rcx
  _QWORD *v47; // rax
  _DWORD *v48; // rcx
  _DWORD *v49; // rdi
  _QWORD *result; // rax
  __int64 v51; // [rsp+70h] [rbp+48h] BYREF
  int v52; // [rsp+78h] [rbp+50h] BYREF
  int v53; // [rsp+80h] [rbp+58h] BYREF
  int v54; // [rsp+88h] [rbp+60h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  v51 = a1;
  *v2 = a1;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v5 = v2;
  v5[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v6 = *(unsigned int *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 5860) == 1 )
    v51 = *(_QWORD *)(*(_QWORD *)(a1 + 6064) + 24LL);
  else
    v51 = 0LL;
  v7 = v51;
  v51 = a1 + 80;
  v8 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v6);
  *v8 = v7;
  v9 = v51;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  v51 = a1 + 1968;
  *v10 = v8;
  v10[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v11 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v11 = v9;
  v12 = v51;
  v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v13 = v11;
  v13[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v14 = v12;
  v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v15 = v14;
  v15[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  v16 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -6048 )
    *v16 = *(_DWORD *)(a1 + 6048);
  v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v17 = v16;
  v17[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v18 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v18 = *(_DWORD *)(a1 + 2824) + *(_DWORD *)(a1 + 936);
  v19 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v19 = v18;
  v19[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v20 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v20 = 4096;
  v21 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v21 = v20;
  v21[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v22 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -16 )
    *v22 = *(_DWORD *)(a1 + 16);
  v23 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v23 = v22;
  v23[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v24 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v24 = 8 * *(_DWORD *)(a1 + 3976);
  v25 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v25 = v24;
  v25[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v26 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v26 = *(unsigned __int8 *)(a1 + 5860);
  v27 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v27 = v26;
  v27[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v28 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -5856 )
    *v28 = *(_WORD *)(a1 + 5856);
  v29 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v29 = v28;
  v29[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v30 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -88 )
    *v30 = *(_DWORD *)(a1 + 88);
  v31 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v31 = v30;
  v31[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v51, &v53);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 1968, &v52, &v54);
  v33 = (_DWORD *)(*(_QWORD *)(a2 + 8) + v32);
  v34 = v52;
  v35 = v54;
  v36 = v54 + v53;
  *v33 = v52 + v51;
  v37 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v37 = v33;
  v37[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v38 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v38 = v36;
  v39 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v39 = v38;
  v39[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v40 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v40 = *(_DWORD *)(a1 + 856);
  v41 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v41 = v40;
  v41[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v42 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -2824 )
    *v42 = *(_DWORD *)(a1 + 2824);
  v43 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v43 = v42;
  v43[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v44 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v44 = v34;
  v45 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v45 = v44;
  v45[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v46 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v46 = v35;
  v47 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v47 = v46;
  v47[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v48 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  v49 = (_DWORD *)(a1 + 1144);
  if ( v49 )
    *v48 = *v49;
  result = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *result = v48;
  result[1] = 4LL;
  ++*(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 24) += 4;
  return result;
}
