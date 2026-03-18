/*
 * XREFs of itrp_ALIGNRP @ 0x1C00D0110
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00CFA40 (AddProportion.c)
 *     AddDistance @ 0x1C00CFBF4 (AddDistance.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 *     InterAlign @ 0x1C00D1E80 (InterAlign.c)
 */

__int64 __fastcall itrp_ALIGNRP(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  _WORD *v3; // r8
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // dx
  int v6; // r9d
  int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // edi
  int v11; // r15d
  __int16 v12; // ax
  __int64 v13; // rdx
  _WORD *v14; // r8
  __int64 v15; // rbp
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  int v18; // edx
  int v19; // r14d
  int v20; // r15d
  __int16 v21; // ax
  __int64 v22; // rcx
  int v23; // eax
  __int64 result; // rax
  int v25; // r9d
  int v26; // r11d
  __int64 v27; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h]

  v1 = qword_1C03294E0;
  v2 = qword_1C03294A8;
  v27 = qword_1C03294A8;
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
  v8 = qword_1C03294D8;
  v9 = LocalGS;
  v10 = qword_1C03294F0;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( (int)qword_1C03294F0 >= (unsigned __int16)v3[8] || (int)qword_1C03294F0 < 0 )
      goto LABEL_48;
    v11 = 0;
  }
  else
  {
    if ( (int)qword_1C03294F0 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)qword_1C03294F0 < 0 )
      goto LABEL_48;
    v11 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v9 + 80), v12 >= 1)
    && v12 <= v7
    && v10 >= v11 + *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v12 - 1)) + 1 )
  {
LABEL_48:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  v30 = *(_DWORD *)(*(_QWORD *)v9 + 4LL * v10);
  v29 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * v10);
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || (v13 = qword_1C03294C8, dword_1C0329500 + 1LL > (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)v1) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  if ( dword_1C0329500 >= 0 )
  {
    while ( 1 )
    {
      qword_1C03294C8 = v13 - 4;
      v14 = *(_WORD **)(v1 + 344);
      v15 = *(int *)(v13 - 4);
      v16 = v14[4];
      v17 = v14[6];
      v18 = v16;
      if ( v16 <= v17 )
        v18 = v17;
      if ( v18 <= 1 )
        v19 = 1;
      else
        v19 = v16 <= v17 ? v17 : v16;
      if ( v8 == v2 )
      {
        if ( (int)v15 >= (unsigned __int16)v14[8] || (int)v15 < 0 )
          goto LABEL_48;
        v20 = 0;
      }
      else
      {
        if ( (int)v15 >= *(_DWORD *)(v1 + 440) || (int)v15 < 0 )
          goto LABEL_48;
        v20 = 4;
      }
      if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2) )
        goto LABEL_48;
      v21 = *(_WORD *)(v2 + 80);
      v22 = 1LL;
      if ( v21 >= 1 && v21 <= v19 )
      {
        v22 = v21 - 1;
        if ( (int)v15 >= v20 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2 * v22) + 1 )
          goto LABEL_48;
      }
      if ( word_1C0329554 && v2 != v8 && *(_BYTE *)(v1 + 333) == 2 && (*(_BYTE *)(v1 + 452) & 2) != 0 )
      {
        if ( word_1C0329556 == -1
          || word_1C0329558 == -1
          || !(unsigned int)InterAlign(
                              v27,
                              (unsigned int)word_1C0329556,
                              (unsigned int)v15,
                              (unsigned int)word_1C0329558) )
        {
          AddDistance(v22, v2, v10, v15, 3);
        }
        else
        {
          AddProportion(v22, v2, v26, v15, v25);
        }
      }
      v23 = InvokeProject(
              dword_1C0329510,
              *(_DWORD *)(*(_QWORD *)v2 + 4 * v15) - v30,
              *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4 * v15) - v29);
      InvokeMovePoint(dword_1C032950C, (_QWORD *)v2, v15, -v23);
      if ( --dword_1C0329500 < 0 )
        break;
      v10 = qword_1C03294F0;
      v1 = qword_1C03294E0;
      v8 = qword_1C03294D8;
      v13 = qword_1C03294C8;
      v27 = qword_1C03294A8;
    }
  }
  result = a1;
  dword_1C0329500 = 0;
  return result;
}
