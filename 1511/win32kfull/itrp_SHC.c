/*
 * XREFs of itrp_SHC @ 0x1C00B4150
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C00B81FC (itrp_SH_Common.c)
 *     ExecutePhaseControl @ 0x1C00C4244 (ExecutePhaseControl.c)
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
  __int16 v13; // cx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  char v21; // dl
  __int64 v22; // rsi
  _WORD *v23; // r8
  __int64 v24; // r12
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // ax
  int v27; // r14d
  int v28; // edx
  int v29; // ebp
  int v30; // edi
  __int16 v31; // cx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r8d
  __int16 v35; // r9
  __int16 v36; // r10
  _WORD *v38; // rdx
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // cx
  int v41; // r8d
  int v42; // eax
  int v43; // [rsp+20h] [rbp-58h]
  int v44; // [rsp+24h] [rbp-54h] BYREF
  __int64 v45; // [rsp+28h] [rbp-50h]
  int v47; // [rsp+88h] [rbp+10h] BYREF
  __int16 v48; // [rsp+90h] [rbp+18h]
  int v49; // [rsp+98h] [rbp+20h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = *(_WORD **)(qword_1C0323E30 + 344);
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
    v10 = HIDWORD(qword_1C0323E40);
    if ( qword_1C0323E28 != LocalGS )
    {
      v11 = SHIDWORD(qword_1C0323E40) < *(_DWORD *)(qword_1C0323E30 + 440);
      goto LABEL_9;
    }
    v42 = (unsigned __int16)v3[8];
LABEL_63:
    if ( v10 >= v42 || v10 < 0 )
      goto LABEL_75;
    v12 = 0;
    goto LABEL_12;
  }
  v38 = *(_WORD **)(qword_1C0323E30 + 344);
  v39 = v38[4];
  v40 = v38[6];
  v41 = v39;
  if ( v39 <= v40 )
    v41 = v40;
  if ( v41 <= 1 )
  {
    v7 = 1;
  }
  else if ( v39 <= v40 )
  {
    v7 = v40;
  }
  else
  {
    v7 = v39;
  }
  v8 = qword_1C0323DF8;
  v9 = 4;
  v10 = dword_1C0323E48;
  if ( qword_1C0323E28 == qword_1C0323DF8 )
  {
    v42 = (unsigned __int16)v38[8];
    goto LABEL_63;
  }
  v11 = dword_1C0323E48 < *(_DWORD *)(qword_1C0323E30 + 440);
LABEL_9:
  if ( !v11 || v10 < 0 )
    goto LABEL_75;
  v12 = 4;
LABEL_12:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v8) )
    goto LABEL_75;
  v13 = *(_WORD *)(v8 + 80);
  if ( v13 >= 1 && v13 <= v7 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * v13 - 2) + 1 )
    goto LABEL_75;
  v14 = itrp_SH_Common(&v47, &v44, &v49, a2);
  v15 = qword_1C0323E30;
  v16 = v14;
  v17 = v47;
  v43 = v47;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v18 = qword_1C0323E18, !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2)) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v19 = *(int *)(v18 - 4);
  v20 = qword_1C0323E28;
  if ( v14 != qword_1C0323E28
    && *(_BYTE *)(qword_1C0323E30 + 333) == 2
    && (*(_BYTE *)(qword_1C0323E30 + 452) & 7) == 3
    && !*(_DWORD *)(v14 + 96) )
  {
    ExecutePhaseControl(&LocalGS, v14);
    v15 = qword_1C0323E30;
    v20 = qword_1C0323E28;
    v43 = *(_DWORD *)(*(_QWORD *)(v16 + 104) + 12LL * v49 + 8) + v17;
  }
  v21 = *(_BYTE *)(v15 + 333);
  if ( v21 != 2 && (v21 || v20 != qword_1C0323E00) )
  {
    dword_1C0323E80 = 4380;
    return qword_1C0323E88;
  }
  if ( (int)v19 < 0 || (int)v19 >= *(__int16 *)(qword_1C0323E00 + 80) )
  {
    dword_1C0323E80 = 4378;
    return qword_1C0323E88;
  }
  _mm_lfence();
  v22 = qword_1C0323E00;
  v48 = HIWORD(dword_1C0323E0C);
  LOWORD(v47) = dword_1C0323E0C;
  v23 = *(_WORD **)(qword_1C0323E30 + 344);
  v24 = *(__int16 *)(*(_QWORD *)(qword_1C0323E00 + 56) + 2 * v19);
  v25 = v23[6];
  v45 = *(_QWORD *)(qword_1C0323E00 + 64);
  v26 = v23[4];
  v27 = *(__int16 *)(v45 + 2 * v19) - (_DWORD)v24;
  v28 = v26;
  if ( v26 <= v25 )
    v28 = v25;
  if ( v28 <= 1 )
  {
    v29 = 1;
  }
  else if ( v26 <= v25 )
  {
    v29 = v25;
  }
  else
  {
    v29 = v26;
  }
  v30 = *(__int16 *)(v45 + 2 * v19);
  if ( qword_1C0323E28 == qword_1C0323E00 )
  {
    if ( v30 >= (unsigned __int16)v23[8] || v30 < 0 )
      goto LABEL_75;
    v9 = 0;
  }
  else if ( v30 >= *(_DWORD *)(qword_1C0323E30 + 440) || v30 < 0 )
  {
    goto LABEL_75;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323E00)
    || (v31 = *(_WORD *)(v22 + 80), v31 >= 1) && v31 <= v29 && v30 >= v9 + *(__int16 *)(v45 + 2LL * v31 - 2) + 1 )
  {
LABEL_75:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  if ( v27 >= 0 )
  {
    v32 = v49;
    v33 = v24;
    v34 = v44;
    v35 = v47;
    v36 = v48;
    do
    {
      if ( v33 != v32 || v16 != v22 )
      {
        if ( v35 )
        {
          *(_DWORD *)(*(_QWORD *)v22 + 4 * v33) += v43;
          *(_BYTE *)(*(_QWORD *)(v22 + 72) + v33) |= 1u;
        }
        if ( v36 )
        {
          *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4 * v33) += v34;
          *(_BYTE *)(*(_QWORD *)(v22 + 72) + v33) |= 2u;
        }
      }
      ++v33;
      --v27;
    }
    while ( v27 >= 0 );
  }
  return a1;
}
