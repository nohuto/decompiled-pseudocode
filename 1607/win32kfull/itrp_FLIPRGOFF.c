/*
 * XREFs of itrp_FLIPRGOFF @ 0x1C02E07C0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGOFF(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  __int64 v3; // rbp
  int v4; // r13d
  int *v5; // rdi
  _WORD *v6; // rdx
  int v7; // ebx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // r8d
  int v11; // r15d
  int v12; // r12d
  __int16 v13; // ax
  _WORD *v14; // r8
  __int64 v15; // rdi
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  int v18; // edx
  int v19; // r15d
  __int16 v20; // ax
  _BYTE *v21; // rbp
  int i; // ebx
  __int64 v25; // [rsp+70h] [rbp+18h]

  v1 = qword_1C03294E0;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2 )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v4 = 4;
  v5 = (int *)(qword_1C03294C8 - 4);
  qword_1C03294C8 = (__int64)v5;
  v6 = *(_WORD **)(qword_1C03294E0 + 344);
  v7 = *v5;
  v8 = v6[4];
  v9 = v6[6];
  v10 = v8;
  if ( v8 <= v9 )
    v10 = v9;
  if ( v10 <= 1 )
  {
    v11 = 1;
  }
  else if ( v8 <= v9 )
  {
    v11 = v9;
  }
  else
  {
    v11 = v8;
  }
  v25 = qword_1C03294D8;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( v7 >= (unsigned __int16)v6[8] || v7 < 0 )
      goto LABEL_14;
    v12 = 0;
  }
  else
  {
    if ( v7 >= *(_DWORD *)(qword_1C03294E0 + 440) || v7 < 0 )
      goto LABEL_14;
    v12 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_14;
  v13 = *(_WORD *)(v2 + 80);
  if ( v13 >= 1 && v13 <= v11 && v7 >= v12 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v13 - 1)) + 1 )
    goto LABEL_14;
  qword_1C03294C8 = (__int64)(v5 - 1);
  v14 = *(_WORD **)(v1 + 344);
  v15 = *(v5 - 1);
  v16 = v14[4];
  v17 = v14[6];
  v18 = v16;
  if ( v16 <= v17 )
    v18 = v17;
  if ( v18 <= 1 )
    v19 = 1;
  else
    v19 = v16 <= v17 ? v17 : v16;
  if ( v25 == v2 )
  {
    if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
      goto LABEL_14;
    v4 = 0;
  }
  else if ( (int)v15 >= *(_DWORD *)(v1 + 440) || (int)v15 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || (v20 = *(_WORD *)(v2 + 80), v20 >= 1)
    && v20 <= v19
    && (int)v15 >= v4 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v20 - 1)) + 1 )
  {
LABEL_14:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  v21 = (_BYTE *)(v15 + v3);
  for ( i = v7 - v15; i >= 0; --i )
    *v21++ &= ~1u;
  return a1;
}
