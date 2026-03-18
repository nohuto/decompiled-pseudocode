/*
 * XREFs of itrp_MSIRP @ 0x1C00B3CB0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddDistance @ 0x1C00B7C5C (AddDistance.c)
 *     DoubleCheckLinkColor @ 0x1C00B7ED8 (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 */

__int64 __fastcall itrp_MSIRP(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbp
  _WORD *v9; // rcx
  unsigned __int16 v10; // r14
  int v11; // r15d
  int v12; // eax
  int v13; // edx
  __int16 v14; // cx
  int v15; // eax
  __int64 v16; // r14
  __int16 v17; // cx
  int v18; // r14d
  int v19; // eax
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // eax
  int v25; // ecx
  int v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  _WORD *v28; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C0323E30;
  v3 = LocalGS;
  v4 = qword_1C0323DF8;
  v5 = (int)qword_1C0323E40;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v6 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v7 = *(_DWORD *)(v6 - 4);
  qword_1C0323E18 = v6 - 8;
  v26 = v7;
  v8 = *(int *)(v6 - 8);
  v9 = *(_WORD **)(qword_1C0323E30 + 344);
  v28 = v9;
  v10 = v9[4];
  LOWORD(v11) = v9[6];
  v12 = v10;
  if ( v10 <= (unsigned __int16)v11 )
    v12 = (unsigned __int16)v11;
  v13 = 1;
  if ( v12 > 1 )
  {
    v13 = v10;
    if ( v10 <= (unsigned __int16)v11 )
      v13 = (unsigned __int16)v11;
  }
  v31 = v13;
  v27 = qword_1C0323E28;
  if ( qword_1C0323E28 == LocalGS )
  {
    if ( (int)qword_1C0323E40 >= (unsigned __int16)v9[8] || (int)qword_1C0323E40 < 0 )
      goto LABEL_53;
    v33 = 0;
  }
  else
  {
    if ( (int)qword_1C0323E40 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)qword_1C0323E40 < 0 )
      goto LABEL_53;
    v33 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    goto LABEL_53;
  v14 = *(_WORD *)(v3 + 80);
  if ( v14 >= 1 && v14 <= v31 && (int)v5 >= *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * v14 - 2) + v33 + 1 )
    goto LABEL_53;
  v15 = v10;
  if ( v10 <= (unsigned __int16)v11 )
    v15 = (unsigned __int16)v11;
  if ( v15 <= 1 )
    v11 = 1;
  else
    v11 = v10 <= (unsigned __int16)v11 ? (unsigned __int16)v11 : v10;
  v16 = v27;
  if ( v27 == v4 )
  {
    if ( (int)v8 >= (unsigned __int16)v28[8] || (int)v8 < 0 )
      goto LABEL_53;
    v32 = 0;
  }
  else
  {
    if ( (int)v8 >= *(_DWORD *)(v2 + 440) || (int)v8 < 0 )
      goto LABEL_53;
    v32 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4)
    || (v17 = *(_WORD *)(v4 + 80), v17 >= 1)
    && v17 <= v11
    && (int)v8 >= *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * v17 - 2) + v32 + 1 )
  {
LABEL_53:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  if ( v4 == v27 )
    goto LABEL_52;
  if ( word_1C0323EA4 && *(_BYTE *)(v2 + 333) == 2 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v24 = DoubleCheckLinkColor(v4, (unsigned int)v5, (unsigned int)v8, 1LL);
    AddDistance(v25, v4, v5, v8, v24);
    v2 = qword_1C0323E30;
    v16 = qword_1C0323E28;
  }
  if ( v4 == v16 )
  {
LABEL_52:
    v18 = v26;
    *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8) = ((unsigned __int64)(v26 * (__int64)(__int16)dword_1C0323E08) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5)
                                               + ((((unsigned int)(v26 * (__int16)dword_1C0323E08) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8) = ((unsigned __int64)(v26 * (__int64)SHIWORD(dword_1C0323E08)) >> 32 << 18)
                                               + *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5)
                                               + ((((unsigned int)(v26 * SHIWORD(dword_1C0323E08)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)v4 + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8);
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v8) = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8);
    v2 = qword_1C0323E30;
  }
  else
  {
    v18 = v26;
  }
  if ( (*(_BYTE *)(v2 + 120) & 4) == 0 )
  {
    if ( word_1C0323EA4 )
    {
      v21 = InvokeProject(
              (unsigned int)dword_1C0323E64,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v5)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v5)));
      if ( v21 )
      {
        v22 = 16 * (v18 - v21);
        v23 = *(_DWORD *)(qword_1C0323E30 + 104);
        if ( v22 > v23 || v22 < -v23 )
          v18 = v21;
      }
    }
  }
  v19 = InvokeProject(
          (unsigned int)dword_1C0323E60,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 4 * v8) - *(_DWORD *)(*(_QWORD *)v3 + 4 * v5)),
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v8) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v5)));
  InvokeMovePoint((unsigned int)dword_1C0323E5C, v4, (unsigned int)v8, (unsigned int)(v18 - v19));
  HIDWORD(qword_1C0323E40) = v5;
  dword_1C0323E48 = v8;
  if ( (a2 & 1) != 0 )
    LODWORD(qword_1C0323E40) = v8;
  return a1;
}
