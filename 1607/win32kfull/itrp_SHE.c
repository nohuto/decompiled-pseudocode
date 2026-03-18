/*
 * XREFs of itrp_SHE @ 0x1C02E1290
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C00D18F0 (itrp_SH_Common.c)
 */

__int64 __fastcall itrp_SHE(__int64 a1, char a2)
{
  int v2; // r15d
  _WORD *v4; // r9
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // r8
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // eax
  int v12; // ebp
  bool v13; // cc
  __int16 v14; // ax
  _WORD *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  int v19; // r8d
  _QWORD *v20; // r13
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rsi
  _WORD *v24; // r9
  __int64 v25; // r8
  int v26; // ebp
  __int64 v27; // r12
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  int v30; // edx
  int v31; // ebx
  int v32; // edi
  __int64 v33; // rbx
  __int64 v34; // rdi
  _WORD *v35; // r8
  __int64 v36; // rbp
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // cx
  int v39; // edx
  int v40; // r14d
  __int16 v41; // ax
  int v42; // r9d
  int v43; // r10d
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  _DWORD *v47; // r8
  unsigned __int64 v48; // rcx
  int v49; // edx
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  _DWORD *v53; // r8
  unsigned __int64 v54; // rcx
  int v55; // edx
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v58[21]; // [rsp+24h] [rbp-54h] BYREF
  int v60; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v4 = *(_WORD **)(qword_1C03294E0 + 344);
    v5 = v4[4];
    v6 = v4[6];
    v7 = v5;
    if ( v5 <= v6 )
      v7 = v6;
    if ( v7 <= 1 )
    {
      v8 = 1;
    }
    else if ( v5 <= v6 )
    {
      v8 = v6;
    }
    else
    {
      v8 = v5;
    }
    v9 = LocalGS;
    v10 = HIDWORD(qword_1C03294F0);
    if ( qword_1C03294D8 == LocalGS )
    {
      v11 = (unsigned __int16)v4[8];
      goto LABEL_11;
    }
    v13 = SHIDWORD(qword_1C03294F0) < *(_DWORD *)(qword_1C03294E0 + 440);
  }
  else
  {
    v16 = *(_WORD **)(qword_1C03294E0 + 344);
    v17 = v16[4];
    v18 = v16[6];
    v19 = v17;
    if ( v17 <= v18 )
      v19 = v18;
    if ( v19 <= 1 )
    {
      v8 = 1;
    }
    else if ( v17 <= v18 )
    {
      v8 = v18;
    }
    else
    {
      v8 = v17;
    }
    v9 = qword_1C03294A8;
    v10 = dword_1C03294F8;
    if ( qword_1C03294D8 == qword_1C03294A8 )
    {
      v11 = (unsigned __int16)v16[8];
LABEL_11:
      if ( v10 >= v11 || v10 < 0 )
        goto LABEL_22;
      v12 = 0;
      goto LABEL_18;
    }
    v13 = dword_1C03294F8 < *(_DWORD *)(qword_1C03294E0 + 440);
  }
  if ( !v13 || v10 < 0 )
    goto LABEL_22;
  v12 = 4;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v9) )
    goto LABEL_22;
  v14 = *(_WORD *)(v9 + 80);
  if ( v14 >= 1 && v14 <= v8 && v10 >= v12 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v14 - 1)) + 1 )
    goto LABEL_22;
  v20 = itrp_SH_Common(&v57, v58, &v60, a2);
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v21 = *(int *)qword_1C03294C8;
  if ( (unsigned int)v21 > 1 )
  {
    dword_1C0329530 = 4374;
    return qword_1C0329538;
  }
  v22 = *(_BYTE *)(qword_1C03294E0 + 333);
  if ( v22 != 2 && (v22 || qword_1C03294D8 != qword_1C03294D8 + 112 * v21) )
  {
    dword_1C0329530 = 4380;
    return qword_1C0329538;
  }
  _mm_lfence();
  v23 = 112 * v21;
  v24 = *(_WORD **)(qword_1C03294E0 + 344);
  v25 = 112 * v21 + qword_1C03294D8;
  v26 = *(__int16 *)(v25 + 80);
  v27 = *(__int16 *)(*(_QWORD *)(v25 + 64) + 2LL * (v26 - 1));
  v28 = v24[4];
  v29 = v24[6];
  v30 = v28;
  if ( v28 <= v29 )
    v30 = v29;
  v31 = 1;
  if ( v30 > 1 )
  {
    v31 = v28;
    if ( v28 <= v29 )
      v31 = v29;
  }
  if ( qword_1C03294D8 == v25 )
  {
    if ( (int)v27 >= (unsigned __int16)v24[8] || (int)v27 < 0 )
      goto LABEL_22;
    v32 = 0;
  }
  else
  {
    if ( (int)v27 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v27 < 0 )
      goto LABEL_22;
    v32 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v25) )
    goto LABEL_22;
  if ( (__int16)v26 >= 1 && v26 <= v31 )
  {
    _mm_lfence();
    if ( (int)v27 >= v32
                   + *(__int16 *)(*(_QWORD *)(v23 + qword_1C03294D8 + 64)
                                + 2LL * (*(__int16 *)(v23 + qword_1C03294D8 + 80) - 1))
                   + 1 )
      goto LABEL_22;
  }
  _mm_lfence();
  v33 = qword_1C03294D8;
  v34 = v23 + qword_1C03294D8;
  v35 = *(_WORD **)(qword_1C03294E0 + 344);
  v36 = **(__int16 **)(v23 + qword_1C03294D8 + 56);
  v37 = v35[4];
  v38 = v35[6];
  v39 = v37;
  if ( v37 <= v38 )
    v39 = v38;
  if ( v39 <= 1 )
    v40 = 1;
  else
    v40 = v37 <= v38 ? v38 : v37;
  if ( qword_1C03294D8 == v34 )
  {
    if ( (int)v36 >= (unsigned __int16)v35[8] || (int)v36 < 0 )
      goto LABEL_22;
  }
  else
  {
    if ( (int)v36 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v36 < 0 )
      goto LABEL_22;
    v2 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v23 + qword_1C03294D8)
    || (v41 = *(_WORD *)(v34 + 80), v41 >= 1)
    && v41 <= v40
    && (_mm_lfence(),
        v33 = qword_1C03294D8,
        v34 = v23 + qword_1C03294D8,
        (int)v36 >= v2
                  + *(__int16 *)(*(_QWORD *)(v23 + qword_1C03294D8 + 64)
                               + 2LL * (*(__int16 *)(v23 + qword_1C03294D8 + 80) - 1))
                  + 1) )
  {
LABEL_22:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  if ( v20 == (_QWORD *)v34 )
  {
    _mm_lfence();
    v33 = qword_1C03294D8;
    v42 = *(_DWORD *)(*(_QWORD *)(v23 + qword_1C03294D8) + 4LL * v60);
    v43 = *(_DWORD *)(*(_QWORD *)(v23 + qword_1C03294D8 + 8) + 4LL * v60);
  }
  else
  {
    v42 = 0;
    v43 = 0;
  }
  if ( (_WORD)dword_1C03294BC )
  {
    _mm_lfence();
    v33 = qword_1C03294D8;
    v44 = 1LL;
    v45 = *(_QWORD *)(v23 + qword_1C03294D8);
    v46 = v45 + 4 * v27;
    v47 = (_DWORD *)(v45 + 4 * v36);
    v48 = (unsigned __int64)(4 * v27 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v47 > v46 )
      v48 = 0LL;
    if ( v48 )
    {
      v49 = v57;
      do
      {
        *v47 += v49;
        ++v44;
        ++v47;
      }
      while ( v44 <= v48 );
      v33 = qword_1C03294D8;
    }
  }
  if ( HIWORD(dword_1C03294BC) )
  {
    _mm_lfence();
    v33 = qword_1C03294D8;
    v50 = 1LL;
    v51 = *(_QWORD *)(v23 + qword_1C03294D8 + 8);
    v52 = v51 + 4 * v27;
    v53 = (_DWORD *)(v51 + 4 * v36);
    v54 = (unsigned __int64)(4 * v27 - 4 * v36 + 4) >> 2;
    if ( (unsigned __int64)v53 > v52 )
      v54 = 0LL;
    if ( v54 )
    {
      v55 = v58[0];
      do
      {
        *v53 += v55;
        ++v50;
        ++v53;
      }
      while ( v50 <= v54 );
      v33 = qword_1C03294D8;
    }
  }
  if ( v20 == (_QWORD *)(v23 + v33) )
  {
    v56 = v60;
    *(_DWORD *)(*(_QWORD *)(v23 + v33) + 4LL * v60) = v42;
    *(_DWORD *)(*(_QWORD *)(v23 + qword_1C03294D8 + 8) + 4 * v56) = v43;
  }
  return a1;
}
