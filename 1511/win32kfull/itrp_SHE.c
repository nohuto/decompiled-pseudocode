/*
 * XREFs of itrp_SHE @ 0x1C0144330
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_SH_Common @ 0x1C00B81FC (itrp_SH_Common.c)
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
  bool v10; // cc
  int v11; // ebp
  __int16 v12; // cx
  _QWORD *v13; // r13
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rsi
  _WORD *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rbp
  unsigned __int16 v20; // cx
  __int64 v21; // r12
  unsigned __int16 v22; // ax
  int v23; // edx
  int v24; // ebx
  int v25; // edi
  __int64 v26; // rbx
  __int64 v27; // rdi
  _WORD *v28; // r8
  __int64 v29; // rbp
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  int v32; // edx
  int v33; // r15d
  int v34; // r14d
  __int16 v35; // ax
  int v36; // r9d
  int v37; // r10d
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  _DWORD *v41; // r8
  unsigned __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rdx
  int v46; // eax
  _WORD *v47; // rdx
  unsigned __int16 v48; // ax
  unsigned __int16 v49; // cx
  int v50; // r8d
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  _DWORD *v54; // r8
  unsigned __int64 v55; // rcx
  int v56; // edx
  int v57; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v58[21]; // [rsp+24h] [rbp-54h] BYREF
  int v60; // [rsp+88h] [rbp+10h] BYREF

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
    v9 = HIDWORD(qword_1C0323E40);
    if ( qword_1C0323E28 != LocalGS )
    {
      v10 = SHIDWORD(qword_1C0323E40) < *(_DWORD *)(qword_1C0323E30 + 440);
      goto LABEL_9;
    }
    v46 = (unsigned __int16)v3[8];
  }
  else
  {
    v47 = *(_WORD **)(qword_1C0323E30 + 344);
    v48 = v47[4];
    v49 = v47[6];
    v50 = v48;
    if ( v48 <= v49 )
      v50 = v49;
    if ( v50 <= 1 )
    {
      v7 = 1;
    }
    else if ( v48 <= v49 )
    {
      v7 = v49;
    }
    else
    {
      v7 = v48;
    }
    v8 = qword_1C0323DF8;
    v9 = dword_1C0323E48;
    if ( qword_1C0323E28 != qword_1C0323DF8 )
    {
      v10 = dword_1C0323E48 < *(_DWORD *)(qword_1C0323E30 + 440);
LABEL_9:
      if ( !v10 || v9 < 0 )
        goto LABEL_97;
      v11 = 4;
      goto LABEL_12;
    }
    v46 = (unsigned __int16)v47[8];
  }
  if ( v9 >= v46 || v9 < 0 )
    goto LABEL_97;
  v11 = 0;
LABEL_12:
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v8) )
    goto LABEL_97;
  v12 = *(_WORD *)(v8 + 80);
  if ( v12 >= 1 && v12 <= v7 && v9 >= v11 + *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * v12 - 2) + 1 )
    goto LABEL_97;
  v13 = itrp_SH_Common(&v57, v58, &v60, a2);
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v14 = *(int *)qword_1C0323E18;
  if ( (unsigned int)v14 > 1 )
  {
    dword_1C0323E80 = 4374;
    return qword_1C0323E88;
  }
  v15 = *(_BYTE *)(qword_1C0323E30 + 333);
  if ( v15 != 2 && (v15 || qword_1C0323E28 != qword_1C0323E28 + 112 * v14) )
  {
    dword_1C0323E80 = 4380;
    return qword_1C0323E88;
  }
  _mm_lfence();
  v16 = 112 * v14;
  v17 = *(_WORD **)(qword_1C0323E30 + 344);
  v18 = 112 * v14 + qword_1C0323E28;
  v19 = *(__int16 *)(v18 + 80);
  v20 = v17[6];
  v21 = *(__int16 *)(*(_QWORD *)(v18 + 64) + 2 * v19 - 2);
  v22 = v17[4];
  v23 = v22;
  if ( v22 <= v20 )
    v23 = v20;
  if ( v23 <= 1 )
  {
    v24 = 1;
  }
  else if ( v22 <= v20 )
  {
    v24 = v20;
  }
  else
  {
    v24 = v22;
  }
  if ( qword_1C0323E28 == v18 )
  {
    if ( (int)v21 >= (unsigned __int16)v17[8] || (int)v21 < 0 )
      goto LABEL_97;
    v25 = 0;
  }
  else
  {
    if ( (int)v21 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v21 < 0 )
      goto LABEL_97;
    v25 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v18) )
    goto LABEL_97;
  if ( (__int16)v19 >= 1 && (__int16)v19 <= v24 )
  {
    _mm_lfence();
    if ( (int)v21 >= v25
                   + *(__int16 *)(*(_QWORD *)(v16 + qword_1C0323E28 + 64)
                                + 2LL * *(__int16 *)(v16 + qword_1C0323E28 + 80)
                                - 2)
                   + 1 )
      goto LABEL_97;
  }
  _mm_lfence();
  v26 = qword_1C0323E28;
  v27 = v16 + qword_1C0323E28;
  v28 = *(_WORD **)(qword_1C0323E30 + 344);
  v29 = **(__int16 **)(v16 + qword_1C0323E28 + 56);
  v30 = v28[4];
  v31 = v28[6];
  v32 = v30;
  if ( v30 <= v31 )
    v32 = v31;
  if ( v32 <= 1 )
    v33 = 1;
  else
    v33 = v30 <= v31 ? v31 : v30;
  if ( qword_1C0323E28 == v27 )
  {
    if ( (int)v29 >= (unsigned __int16)v28[8] || (int)v29 < 0 )
      goto LABEL_97;
    v34 = 0;
  }
  else
  {
    if ( (int)v29 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v29 < 0 )
      goto LABEL_97;
    v34 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v16 + qword_1C0323E28)
    || (v35 = *(_WORD *)(v27 + 80), v35 >= 1)
    && v35 <= v33
    && (_mm_lfence(),
        v26 = qword_1C0323E28,
        v27 = v16 + qword_1C0323E28,
        (int)v29 >= v34
                  + *(__int16 *)(*(_QWORD *)(v16 + qword_1C0323E28 + 64)
                               + 2LL * *(__int16 *)(v16 + qword_1C0323E28 + 80)
                               - 2)
                  + 1) )
  {
LABEL_97:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  if ( v13 == (_QWORD *)v27 )
  {
    _mm_lfence();
    v26 = qword_1C0323E28;
    v36 = *(_DWORD *)(*(_QWORD *)(v16 + qword_1C0323E28) + 4LL * v60);
    v37 = *(_DWORD *)(*(_QWORD *)(v16 + qword_1C0323E28 + 8) + 4LL * v60);
  }
  else
  {
    v36 = 0;
    v37 = 0;
  }
  if ( (_WORD)dword_1C0323E0C )
  {
    _mm_lfence();
    v26 = qword_1C0323E28;
    v38 = 1LL;
    v39 = *(_QWORD *)(v16 + qword_1C0323E28);
    v40 = v39 + 4 * v21;
    v41 = (_DWORD *)(v39 + 4 * v29);
    v42 = (unsigned __int64)(4 * v21 - 4 * v29 + 4) >> 2;
    if ( (unsigned __int64)v41 > v40 )
      v42 = 0LL;
    if ( v42 )
    {
      v43 = v57;
      do
      {
        *v41 += v43;
        ++v38;
        ++v41;
      }
      while ( v38 <= v42 );
      v26 = qword_1C0323E28;
    }
  }
  if ( HIWORD(dword_1C0323E0C) )
  {
    _mm_lfence();
    v26 = qword_1C0323E28;
    v51 = 1LL;
    v52 = *(_QWORD *)(v16 + qword_1C0323E28 + 8);
    v53 = v52 + 4 * v21;
    v54 = (_DWORD *)(v52 + 4 * v29);
    v55 = (unsigned __int64)(4 * v21 - 4 * v29 + 4) >> 2;
    if ( (unsigned __int64)v54 > v53 )
      v55 = 0LL;
    if ( v55 )
    {
      v56 = v58[0];
      do
      {
        *v54 += v56;
        ++v51;
        ++v54;
      }
      while ( v51 <= v55 );
      v26 = qword_1C0323E28;
    }
  }
  if ( v13 == (_QWORD *)(v16 + v26) )
  {
    v44 = v60;
    *(_DWORD *)(*(_QWORD *)(v16 + v26) + 4LL * v60) = v36;
    *(_DWORD *)(*(_QWORD *)(v16 + qword_1C0323E28 + 8) + 4 * v44) = v37;
  }
  return a1;
}
