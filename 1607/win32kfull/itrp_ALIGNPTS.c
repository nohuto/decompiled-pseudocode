/*
 * XREFs of itrp_ALIGNPTS @ 0x1C02E0150
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 */

__int64 __fastcall itrp_ALIGNPTS(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // r12
  _WORD *v4; // r15
  __int64 v5; // rbp
  int v6; // ebx
  unsigned __int16 v7; // di
  int v8; // eax
  int v9; // r14d
  int v10; // r13d
  __int16 v11; // ax
  bool v12; // cc
  _QWORD *v13; // r14
  int v14; // eax
  __int64 v15; // rdi
  int v16; // esi
  __int16 v17; // ax
  signed int v18; // esi
  signed int v19; // eax
  __int64 v22; // [rsp+70h] [rbp+18h]
  __int64 v23; // [rsp+78h] [rbp+20h]

  v1 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v2 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v3 = *(int *)(v2 - 4);
  qword_1C03294C8 = v2 - 8;
  v4 = *(_WORD **)(qword_1C03294E0 + 344);
  v5 = *(int *)(v2 - 8);
  LOWORD(v6) = v4[4];
  v7 = v4[6];
  v8 = (unsigned __int16)v6;
  if ( (unsigned __int16)v6 <= v7 )
    v8 = v7;
  if ( v8 <= 1 )
  {
    v9 = 1;
  }
  else if ( (unsigned __int16)v6 <= v7 )
  {
    v9 = v7;
  }
  else
  {
    v9 = (unsigned __int16)v6;
  }
  v23 = qword_1C03294D8;
  v22 = qword_1C03294A8;
  if ( qword_1C03294D8 == qword_1C03294A8 )
  {
    if ( (int)v3 >= (unsigned __int16)v4[8] || (int)v3 < 0 )
      goto LABEL_14;
    v10 = 0;
  }
  else
  {
    if ( (int)v3 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v3 < 0 )
      goto LABEL_14;
    v10 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294A8) )
    goto LABEL_14;
  v11 = *(_WORD *)(v22 + 80);
  if ( v11 < 1 )
  {
    v13 = (_QWORD *)v22;
  }
  else
  {
    v12 = v11 <= v9;
    v13 = (_QWORD *)v22;
    if ( v12 && (int)v3 >= v10 + *(__int16 *)(*(_QWORD *)(v22 + 64) + 2LL * (v11 - 1)) + 1 )
      goto LABEL_14;
  }
  v14 = (unsigned __int16)v6;
  if ( (unsigned __int16)v6 <= v7 )
    v14 = v7;
  if ( v14 <= 1 )
    v6 = 1;
  else
    v6 = (unsigned __int16)v6 <= v7 ? v7 : (unsigned __int16)v6;
  v15 = LocalGS;
  if ( v23 == LocalGS )
  {
    if ( (int)v5 >= (unsigned __int16)v4[8] || (int)v5 < 0 )
      goto LABEL_14;
    v16 = 0;
  }
  else
  {
    if ( (int)v5 >= *(_DWORD *)(v1 + 440) || (int)v5 < 0 )
      goto LABEL_14;
    v16 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v17 = *(_WORD *)(v15 + 80), v17 >= 1)
    && v17 <= v6
    && (int)v5 >= v16 + *(__int16 *)(*(_QWORD *)(v15 + 64) + 2LL * (v17 - 1)) + 1 )
  {
LABEL_14:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  v18 = *(_DWORD *)(*v13 + 4 * v3) - *(_DWORD *)(*(_QWORD *)v15 + 4 * v5);
  if ( dword_1C0329510 != 3 )
  {
    if ( dword_1C0329510 == 4 )
    {
      v18 = *(_DWORD *)(v13[1] + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v5);
    }
    else
    {
      v19 = InvokeProject(
              dword_1C0329510,
              v18,
              *(_DWORD *)(v13[1] + 4 * v3) - *(_DWORD *)(*(_QWORD *)(v15 + 8) + 4 * v5));
      v15 = LocalGS;
      v18 = v19;
    }
  }
  InvokeMovePoint(dword_1C032950C, (_QWORD *)v15, v5, v18 >> 1);
  InvokeMovePoint(dword_1C032950C, (_QWORD *)qword_1C03294A8, v3, (v18 >> 1) - v18);
  return a1;
}
