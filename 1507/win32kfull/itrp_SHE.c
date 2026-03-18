/*
 * XREFs of itrp_SHE @ 0x1C02DD4E0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SH_Common @ 0x1C00BAA78 (itrp_SH_Common.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00BE900 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_SHE(__int64 a1, char a2)
{
  _WORD *v3; // r9
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r8
  int v6; // ecx
  int v7; // esi
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  int v11; // ebp
  bool v12; // cc
  __int16 v13; // cx
  _WORD *v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  int v18; // r8d
  _QWORD *v19; // r13
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rsi
  _WORD *v23; // r9
  __int64 v24; // r8
  __int64 v25; // rbp
  unsigned __int16 v26; // cx
  __int64 v27; // r12
  unsigned __int16 v28; // ax
  int v29; // edx
  int v30; // ebx
  int v31; // edi
  __int64 v32; // rbx
  __int64 v33; // rdi
  _WORD *v34; // r8
  __int64 v35; // rbp
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // cx
  int v38; // edx
  int v39; // r15d
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

  if ( (a2 & 1) != 0 )
  {
    v3 = *(_WORD **)(qword_1C0323160 + 344);
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
    v9 = HIDWORD(qword_1C0323170);
    if ( qword_1C0323158 == LocalGS )
    {
      v10 = (unsigned __int16)v3[8];
      goto LABEL_11;
    }
    v12 = SHIDWORD(qword_1C0323170) < *(_DWORD *)(qword_1C0323160 + 440);
  }
  else
  {
    v15 = *(_WORD **)(qword_1C0323160 + 344);
    v16 = v15[4];
    v17 = v15[6];
    v18 = v16;
    if ( v16 <= v17 )
      v18 = v17;
    if ( v18 <= 1 )
    {
      v7 = 1;
    }
    else if ( v16 <= v17 )
    {
      v7 = v17;
    }
    else
    {
      v7 = v16;
    }
    v8 = qword_1C0323128;
    v9 = dword_1C0323178;
    if ( qword_1C0323158 == qword_1C0323128 )
    {
      v10 = (unsigned __int16)v15[8];
LABEL_11:
      if ( v9 >= v10 || v9 < 0 )
        goto LABEL_22;
      v11 = 0;
      goto LABEL_18;
    }
    v12 = dword_1C0323178 < *(_DWORD *)(qword_1C0323160 + 440);
  }
  if ( !v12 || v9 < 0 )
    goto LABEL_22;
  v11 = 4;
LABEL_18:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_22;
  v13 = *(_WORD *)(v8 + 80);
  if ( v13 >= 1 && v13 <= v7 && v9 >= v11 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * v13 - 2) + 1 )
    goto LABEL_22;
  v19 = itrp_SH_Common(&v57, v58, &v60, a2);
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v20 = *(int *)qword_1C0323148;
  if ( (unsigned int)v20 > 1 )
  {
    dword_1C03231B0 = 4374;
    return qword_1C03231B8;
  }
  v21 = *(_BYTE *)(qword_1C0323160 + 333);
  if ( v21 != 2 && (v21 || qword_1C0323158 != qword_1C0323158 + 112 * v20) )
  {
    dword_1C03231B0 = 4380;
    return qword_1C03231B8;
  }
  _mm_lfence();
  v22 = 112 * v20;
  v23 = *(_WORD **)(qword_1C0323160 + 344);
  v24 = 112 * v20 + qword_1C0323158;
  v25 = *(__int16 *)(v24 + 80);
  v26 = v23[6];
  v27 = *(__int16 *)(*(_QWORD *)(v24 + 64) + 2 * v25 - 2);
  v28 = v23[4];
  v29 = v28;
  if ( v28 <= v26 )
    v29 = v26;
  if ( v29 <= 1 )
  {
    v30 = 1;
  }
  else if ( v28 <= v26 )
  {
    v30 = v26;
  }
  else
  {
    v30 = v28;
  }
  if ( qword_1C0323158 == v24 )
  {
    if ( (int)v27 >= (unsigned __int16)v23[8] || (int)v27 < 0 )
      goto LABEL_22;
    v31 = 0;
  }
  else
  {
    if ( (int)v27 >= *(_DWORD *)(qword_1C0323160 + 440) || (int)v27 < 0 )
      goto LABEL_22;
    v31 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v24) )
    goto LABEL_22;
  if ( (__int16)v25 >= 1 && (__int16)v25 <= v30 )
  {
    _mm_lfence();
    if ( (int)v27 >= v31
                   + *(__int16 *)(*(_QWORD *)(v22 + qword_1C0323158 + 64)
                                + 2LL * *(__int16 *)(v22 + qword_1C0323158 + 80)
                                - 2)
                   + 1 )
      goto LABEL_22;
  }
  _mm_lfence();
  v32 = qword_1C0323158;
  v33 = v22 + qword_1C0323158;
  v34 = *(_WORD **)(qword_1C0323160 + 344);
  v35 = **(__int16 **)(v22 + qword_1C0323158 + 56);
  v36 = v34[4];
  v37 = v34[6];
  v38 = v36;
  if ( v36 <= v37 )
    v38 = v37;
  if ( v38 <= 1 )
    v39 = 1;
  else
    v39 = v36 <= v37 ? v37 : v36;
  if ( qword_1C0323158 == v33 )
  {
    if ( (int)v35 >= (unsigned __int16)v34[8] || (int)v35 < 0 )
      goto LABEL_22;
    v40 = 0;
  }
  else
  {
    if ( (int)v35 >= *(_DWORD *)(qword_1C0323160 + 440) || (int)v35 < 0 )
      goto LABEL_22;
    v40 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v22 + qword_1C0323158)
    || (v41 = *(_WORD *)(v33 + 80), v41 >= 1)
    && v41 <= v39
    && (_mm_lfence(),
        v32 = qword_1C0323158,
        v33 = v22 + qword_1C0323158,
        (int)v35 >= v40
                  + *(__int16 *)(*(_QWORD *)(v22 + qword_1C0323158 + 64)
                               + 2LL * *(__int16 *)(v22 + qword_1C0323158 + 80)
                               - 2)
                  + 1) )
  {
LABEL_22:
    dword_1C03231B0 = 4370;
    return qword_1C03231B8;
  }
  if ( v19 == (_QWORD *)v33 )
  {
    _mm_lfence();
    v32 = qword_1C0323158;
    v42 = *(_DWORD *)(*(_QWORD *)(v22 + qword_1C0323158) + 4LL * v60);
    v43 = *(_DWORD *)(*(_QWORD *)(v22 + qword_1C0323158 + 8) + 4LL * v60);
  }
  else
  {
    v42 = 0;
    v43 = 0;
  }
  if ( (_WORD)dword_1C032313C )
  {
    _mm_lfence();
    v32 = qword_1C0323158;
    v44 = 1LL;
    v45 = *(_QWORD *)(v22 + qword_1C0323158);
    v46 = v45 + 4 * v27;
    v47 = (_DWORD *)(v45 + 4 * v35);
    v48 = (unsigned __int64)(4 * v27 - 4 * v35 + 4) >> 2;
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
      v32 = qword_1C0323158;
    }
  }
  if ( HIWORD(dword_1C032313C) )
  {
    _mm_lfence();
    v32 = qword_1C0323158;
    v50 = 1LL;
    v51 = *(_QWORD *)(v22 + qword_1C0323158 + 8);
    v52 = v51 + 4 * v27;
    v53 = (_DWORD *)(v51 + 4 * v35);
    v54 = (unsigned __int64)(4 * v27 - 4 * v35 + 4) >> 2;
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
      v32 = qword_1C0323158;
    }
  }
  if ( v19 == (_QWORD *)(v22 + v32) )
  {
    v56 = v60;
    *(_DWORD *)(*(_QWORD *)(v22 + v32) + 4LL * v60) = v42;
    *(_DWORD *)(*(_QWORD *)(v22 + qword_1C0323158 + 8) + 4 * v56) = v43;
  }
  return a1;
}
