/*
 * XREFs of itrp_SPVTL @ 0x1C00D2250
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_Normalize @ 0x1C00D1358 (itrp_Normalize.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00D1B24 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 __fastcall itrp_SPVTL(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  int v4; // edx
  _WORD *v5; // r13
  __int64 v6; // r15
  unsigned __int16 v7; // si
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdi
  int v11; // r12d
  __int16 v12; // ax
  bool v13; // cc
  int v14; // r12d
  int v15; // eax
  __int64 v16; // rsi
  int v17; // r14d
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  __int64 result; // rax
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  int v27; // [rsp+90h] [rbp+18h]
  int v28; // [rsp+98h] [rbp+20h]

  v2 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v3 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v4 = *(_DWORD *)(v3 - 4);
  qword_1C03294C8 = v3 - 8;
  v5 = *(_WORD **)(qword_1C03294E0 + 344);
  v27 = v4;
  v6 = *(int *)(v3 - 8);
  v7 = v5[4];
  LOWORD(v8) = v5[6];
  v9 = v7;
  if ( v7 <= (unsigned __int16)v8 )
    v9 = (unsigned __int16)v8;
  v10 = 1LL;
  if ( v9 <= 1 )
  {
    v11 = 1;
  }
  else if ( v7 <= (unsigned __int16)v8 )
  {
    v11 = (unsigned __int16)v8;
  }
  else
  {
    v11 = v7;
  }
  v24 = qword_1C03294D8;
  v23 = qword_1C03294B0;
  if ( qword_1C03294D8 == qword_1C03294B0 )
  {
    if ( v4 >= (unsigned __int16)v5[8] || v4 < 0 )
      goto LABEL_46;
    v28 = 0;
  }
  else
  {
    if ( v4 >= *(_DWORD *)(qword_1C03294E0 + 440) || v4 < 0 )
      goto LABEL_46;
    v28 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294B0) )
  {
    v12 = *(_WORD *)(v23 + 80);
    if ( v12 < 1 )
    {
      v14 = v27;
    }
    else
    {
      v13 = v12 <= v11;
      v14 = v27;
      if ( v13 && v27 >= *(__int16 *)(*(_QWORD *)(v23 + 64) + 2LL * (v12 - 1)) + v28 + 1 )
        goto LABEL_46;
    }
    v15 = v7;
    if ( v7 <= (unsigned __int16)v8 )
      v15 = (unsigned __int16)v8;
    if ( v15 <= 1 )
    {
      v8 = 1;
    }
    else if ( v7 <= (unsigned __int16)v8 )
    {
      v8 = (unsigned __int16)v8;
    }
    else
    {
      v8 = v7;
    }
    v16 = qword_1C03294A8;
    if ( v24 == qword_1C03294A8 )
    {
      if ( (int)v6 < (unsigned __int16)v5[8] && (int)v6 >= 0 )
      {
        v17 = 0;
        goto LABEL_25;
      }
    }
    else if ( (int)v6 < *(_DWORD *)(v2 + 440) && (int)v6 >= 0 )
    {
      v17 = 4;
LABEL_25:
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294A8) )
      {
        v18 = *(_WORD *)(v16 + 80);
        if ( v18 < 1 || v18 > v8 || (int)v6 < v17 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v18 - 1)) + 1 )
        {
          word_1C0329556 = v14;
          word_1C0329558 = v6;
          itrp_Normalize(
            *(_DWORD *)(*(_QWORD *)v16 + 4 * v6) - *(_DWORD *)(*(_QWORD *)v23 + 4LL * v14),
            *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v23 + 8) + 4LL * v14),
            &dword_1C03294B8);
          if ( (a2 & 1) != 0 )
          {
            v19 = dword_1C03294B8;
            LOWORD(dword_1C03294B8) = -HIWORD(dword_1C03294B8);
            HIWORD(dword_1C03294B8) = v19;
          }
          itrp_ComputeAndCheck_PF_Proj();
          dword_1C032950C = 1;
          dword_1C0329510 = 1;
          v20 = *(_WORD *)(qword_1C03294E0 + 452);
          if ( (v20 & 1) == 0 )
            goto LABEL_32;
          if ( (v20 & 4) != 0 )
          {
            if ( (_WORD)dword_1C03294B8 != 0x4000 )
              goto LABEL_37;
            v22 = HIWORD(dword_1C03294B8) == 0;
          }
          else
          {
            if ( HIWORD(dword_1C03294B8) != 0x4000 )
              goto LABEL_37;
            v22 = (_WORD)dword_1C03294B8 == 0;
          }
          if ( v22 )
          {
LABEL_32:
            word_1C0329554 = 0;
LABEL_33:
            v10 = 0LL;
LABEL_34:
            *(_DWORD *)(qword_1C03294E0 + 128) = itrp_RoundFunctionId[8 * v10
                                                                    + *(unsigned __int16 *)(qword_1C03294E0 + 132)];
            dword_1C0329514 = dword_1C0329510;
            result = a1;
            word_1C032952C = 0;
            return result;
          }
LABEL_37:
          word_1C0329554 = 1;
          if ( (*(_BYTE *)(qword_1C03294E0 + 120) & 4) != 0 || *(_BYTE *)(qword_1C03294E0 + 333) )
            goto LABEL_34;
          goto LABEL_33;
        }
      }
    }
  }
LABEL_46:
  dword_1C0329530 = 4370;
  return qword_1C0329538;
}
