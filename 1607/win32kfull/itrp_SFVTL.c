/*
 * XREFs of itrp_SFVTL @ 0x1C00D1BC0
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_Normalize @ 0x1C00D1358 (itrp_Normalize.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00D1B24 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 __fastcall itrp_SFVTL(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  int v4; // r12d
  int v5; // edx
  _WORD *v6; // r13
  __int64 v7; // rbp
  unsigned __int16 v8; // di
  int v9; // esi
  int v10; // eax
  int v11; // r15d
  __int16 v12; // ax
  bool v13; // cc
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rdi
  __int16 v17; // ax
  __int64 result; // rax
  __int16 v19; // ax
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h]

  v2 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v3 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v4 = 4;
  qword_1C03294C8 -= 4LL;
  v5 = *(_DWORD *)(v3 - 4);
  qword_1C03294C8 = v3 - 8;
  v6 = *(_WORD **)(qword_1C03294E0 + 344);
  v24 = v5;
  v7 = *(int *)(v3 - 8);
  v8 = v6[4];
  LOWORD(v9) = v6[6];
  v10 = v8;
  if ( v8 <= (unsigned __int16)v9 )
    v10 = (unsigned __int16)v9;
  if ( v10 <= 1 )
  {
    v11 = 1;
  }
  else if ( v8 <= (unsigned __int16)v9 )
  {
    v11 = (unsigned __int16)v9;
  }
  else
  {
    v11 = v8;
  }
  v21 = qword_1C03294D8;
  v20 = qword_1C03294B0;
  if ( qword_1C03294D8 == qword_1C03294B0 )
  {
    if ( v5 >= (unsigned __int16)v6[8] || v5 < 0 )
      goto LABEL_39;
    v25 = 0;
  }
  else
  {
    if ( v5 >= *(_DWORD *)(qword_1C03294E0 + 440) || v5 < 0 )
      goto LABEL_39;
    v25 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294B0) )
    goto LABEL_39;
  v12 = *(_WORD *)(v20 + 80);
  if ( v12 < 1 )
  {
    v14 = v24;
  }
  else
  {
    v13 = v12 <= v11;
    v14 = v24;
    if ( v13 && v24 >= *(__int16 *)(*(_QWORD *)(v20 + 64) + 2LL * (v12 - 1)) + v25 + 1 )
      goto LABEL_39;
  }
  v15 = v8;
  if ( v8 <= (unsigned __int16)v9 )
    v15 = (unsigned __int16)v9;
  if ( v15 <= 1 )
    v9 = 1;
  else
    v9 = v8 <= (unsigned __int16)v9 ? (unsigned __int16)v9 : v8;
  v16 = qword_1C03294A8;
  if ( v21 == qword_1C03294A8 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_39;
    v4 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(v2 + 440) || (int)v7 < 0 )
  {
    goto LABEL_39;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294A8)
    || (v17 = *(_WORD *)(v16 + 80), v17 >= 1)
    && v17 <= v9
    && (int)v7 >= v4 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v17 - 1)) + 1 )
  {
LABEL_39:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  itrp_Normalize(
    *(_DWORD *)(*(_QWORD *)v16 + 4 * v7) - *(_DWORD *)(*(_QWORD *)v20 + 4LL * v14),
    *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4 * v7) - *(_DWORD *)(*(_QWORD *)(v20 + 8) + 4LL * v14),
    &dword_1C03294BC);
  if ( (a2 & 1) != 0 )
  {
    v19 = dword_1C03294BC;
    LOWORD(dword_1C03294BC) = -HIWORD(dword_1C03294BC);
    HIWORD(dword_1C03294BC) = v19;
  }
  itrp_ComputeAndCheck_PF_Proj();
  result = a1;
  dword_1C032950C = 1;
  word_1C032952C = 0;
  return result;
}
