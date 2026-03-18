/*
 * XREFs of itrp_SHC @ 0x1C00D05A0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C00D18F0 (itrp_SH_Common.c)
 *     ExecutePhaseControl @ 0x1C00D1EB8 (ExecutePhaseControl.c)
 */

__int64 __fastcall itrp_SHC(__int64 a1, unsigned int a2)
{
  _WORD *v3; // r9
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r8
  int v6; // edx
  int v7; // ebp
  __int64 v8; // rsi
  int v9; // r15d
  int v10; // edi
  bool v11; // cc
  int v12; // r14d
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // esi
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // rsi
  _WORD *v24; // r8
  __int64 v25; // r12
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  int v28; // r14d
  int v29; // edx
  int v30; // ebp
  int v31; // edi
  __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  __int16 v36; // r9
  __int16 v37; // r10
  _WORD *v39; // rdx
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // cx
  int v42; // r8d
  int v43; // eax
  int v44; // [rsp+20h] [rbp-58h]
  int v45; // [rsp+24h] [rbp-54h] BYREF
  __int64 v46; // [rsp+28h] [rbp-50h]
  int v48; // [rsp+88h] [rbp+10h] BYREF
  __int16 v49; // [rsp+90h] [rbp+18h]
  int v50; // [rsp+98h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = *(_WORD **)(qword_1C03294E0 + 344);
    v4 = v3[4];
    v5 = v3[6];
    v6 = v4;
    if ( v4 <= v5 )
      v6 = v5;
    if ( v6 <= 1 )
    {
      v7 = 1;
    }
    else if ( v4 <= v5 )
    {
      v7 = v5;
    }
    else
    {
      v7 = v4;
    }
    v8 = LocalGS;
    v9 = 4;
    v10 = HIDWORD(qword_1C03294F0);
    if ( qword_1C03294D8 != LocalGS )
    {
      v11 = SHIDWORD(qword_1C03294F0) < *(_DWORD *)(qword_1C03294E0 + 440);
      goto LABEL_9;
    }
    v43 = (unsigned __int16)v3[8];
LABEL_63:
    if ( v10 >= v43 || v10 < 0 )
      goto LABEL_75;
    v12 = 0;
    goto LABEL_12;
  }
  v39 = *(_WORD **)(qword_1C03294E0 + 344);
  v40 = v39[4];
  v41 = v39[6];
  v42 = v40;
  if ( v40 <= v41 )
    v42 = v41;
  if ( v42 <= 1 )
  {
    v7 = 1;
  }
  else if ( v40 <= v41 )
  {
    v7 = v41;
  }
  else
  {
    v7 = v40;
  }
  v8 = qword_1C03294A8;
  v9 = 4;
  v10 = dword_1C03294F8;
  if ( qword_1C03294D8 == qword_1C03294A8 )
  {
    v43 = (unsigned __int16)v39[8];
    goto LABEL_63;
  }
  v11 = dword_1C03294F8 < *(_DWORD *)(qword_1C03294E0 + 440);
LABEL_9:
  if ( !v11 || v10 < 0 )
    goto LABEL_75;
  v12 = 4;
LABEL_12:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_75;
  v13 = *(_WORD *)(v8 + 80);
  if ( v13 >= 1 && v13 <= v7 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (v13 - 1)) + 1 )
    goto LABEL_75;
  v14 = itrp_SH_Common(&v48, &v45, &v50, a2);
  v15 = qword_1C03294E0;
  v16 = v14;
  v17 = v48;
  v44 = v48;
  v18 = *(_QWORD *)qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v19 = qword_1C03294C8, !((qword_1C03294C8 - v18) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v20 = *(int *)(v19 - 4);
  v21 = qword_1C03294D8;
  if ( v14 != qword_1C03294D8
    && *(_BYTE *)(qword_1C03294E0 + 333) == 2
    && (*(_BYTE *)(qword_1C03294E0 + 452) & 7) == 3
    && !*(_DWORD *)(v14 + 96) )
  {
    ExecutePhaseControl(&LocalGS, v14, qword_1C03294E0, v18);
    v15 = qword_1C03294E0;
    v21 = qword_1C03294D8;
    v44 = *(_DWORD *)(*(_QWORD *)(v16 + 104) + 12LL * v50 + 8) + v17;
  }
  v22 = *(_BYTE *)(v15 + 333);
  if ( v22 != 2 && (v22 || v21 != qword_1C03294B0) )
  {
    dword_1C0329530 = 4380;
    return qword_1C0329538;
  }
  if ( (int)v20 < 0 || (int)v20 >= *(__int16 *)(qword_1C03294B0 + 80) )
  {
    dword_1C0329530 = 4378;
    return qword_1C0329538;
  }
  _mm_lfence();
  v23 = qword_1C03294B0;
  v49 = HIWORD(dword_1C03294BC);
  LOWORD(v48) = dword_1C03294BC;
  v24 = *(_WORD **)(qword_1C03294E0 + 344);
  v25 = *(__int16 *)(*(_QWORD *)(qword_1C03294B0 + 56) + 2 * v20);
  v26 = v24[6];
  v46 = *(_QWORD *)(qword_1C03294B0 + 64);
  v27 = v24[4];
  v28 = *(__int16 *)(v46 + 2 * v20) - (_DWORD)v25;
  v29 = v27;
  if ( v27 <= v26 )
    v29 = v26;
  if ( v29 <= 1 )
  {
    v30 = 1;
  }
  else if ( v27 <= v26 )
  {
    v30 = v26;
  }
  else
  {
    v30 = v27;
  }
  v31 = *(__int16 *)(v46 + 2 * v20);
  if ( qword_1C03294D8 == qword_1C03294B0 )
  {
    if ( v31 >= (unsigned __int16)v24[8] || v31 < 0 )
      goto LABEL_75;
    v9 = 0;
  }
  else if ( v31 >= *(_DWORD *)(qword_1C03294E0 + 440) || v31 < 0 )
  {
    goto LABEL_75;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294B0)
    || (v32 = *(_WORD *)(v23 + 80), v32 >= 1) && v32 <= v30 && v31 >= v9 + *(__int16 *)(v46 + 2LL * (v32 - 1)) + 1 )
  {
LABEL_75:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  if ( v28 >= 0 )
  {
    v33 = v50;
    v34 = v25;
    v35 = v45;
    v36 = v48;
    v37 = v49;
    do
    {
      if ( v34 != v33 || v16 != v23 )
      {
        if ( v36 )
        {
          *(_DWORD *)(*(_QWORD *)v23 + 4 * v34) += v44;
          *(_BYTE *)(*(_QWORD *)(v23 + 72) + v34) |= 1u;
        }
        if ( v37 )
        {
          *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4 * v34) += v35;
          *(_BYTE *)(*(_QWORD *)(v23 + 72) + v34) |= 2u;
        }
      }
      ++v34;
      --v28;
    }
    while ( v28 >= 0 );
  }
  return a1;
}
