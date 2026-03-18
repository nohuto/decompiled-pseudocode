/*
 * XREFs of itrp_SPVTL @ 0x1C00B9000
 * Callers:
 *     <none>
 * Callees:
 *     itrp_Normalize @ 0x1C00B3B68 (itrp_Normalize.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00B8EC0 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 __fastcall itrp_SPVTL(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // r15
  _WORD *v6; // rcx
  unsigned __int16 v7; // si
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdi
  int v11; // r12d
  __int16 v12; // cx
  bool v13; // cc
  _QWORD *v14; // r12
  int v15; // eax
  __int64 v16; // rsi
  int v17; // r14d
  __int16 v18; // cx
  __int16 v19; // ax
  __int16 v20; // ax
  __int64 result; // rax
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-58h]
  _WORD *v24; // [rsp+28h] [rbp-50h]
  int v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v2 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v3 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v4 = *(int *)(v3 - 4);
  qword_1C0323E18 = v3 - 8;
  v5 = *(int *)(v3 - 8);
  v6 = *(_WORD **)(qword_1C0323E30 + 344);
  v24 = v6;
  v7 = v6[4];
  LOWORD(v8) = v6[6];
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
  v23 = qword_1C0323E28;
  v28 = qword_1C0323E00;
  if ( qword_1C0323E28 == qword_1C0323E00 )
  {
    if ( (int)v4 >= (unsigned __int16)v6[8] || (int)v4 < 0 )
      goto LABEL_51;
    v27 = 0;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v4 < 0 )
      goto LABEL_51;
    v27 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0323E00) )
  {
    v12 = *(_WORD *)(v28 + 80);
    if ( v12 < 1 )
    {
      v14 = (_QWORD *)v28;
    }
    else
    {
      v13 = v12 <= v11;
      v14 = (_QWORD *)v28;
      if ( v13 && (int)v4 >= *(__int16 *)(*(_QWORD *)(v28 + 64) + 2LL * v12 - 2) + v27 + 1 )
        goto LABEL_51;
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
    v16 = qword_1C0323DF8;
    if ( v23 == qword_1C0323DF8 )
    {
      if ( (int)v5 < (unsigned __int16)v24[8] && (int)v5 >= 0 )
      {
        v17 = 0;
        goto LABEL_25;
      }
    }
    else if ( (int)v5 < *(_DWORD *)(v2 + 440) && (int)v5 >= 0 )
    {
      v17 = 4;
LABEL_25:
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0323DF8) )
      {
        v18 = *(_WORD *)(v16 + 80);
        if ( v18 < 1 || v18 > v8 || (int)v5 < v17 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * v18 - 2) + 1 )
        {
          word_1C0323EA6 = v4;
          word_1C0323EA8 = v5;
          itrp_Normalize(
            *(_DWORD *)(*(_QWORD *)v16 + 4 * v5) - *(_DWORD *)(*v14 + 4 * v4),
            *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4 * v5) - *(_DWORD *)(v14[1] + 4 * v4),
            &dword_1C0323E08);
          if ( (a2 & 1) != 0 )
          {
            v19 = dword_1C0323E08;
            LOWORD(dword_1C0323E08) = -HIWORD(dword_1C0323E08);
            HIWORD(dword_1C0323E08) = v19;
          }
          itrp_ComputeAndCheck_PF_Proj();
          dword_1C0323E5C = 1;
          dword_1C0323E60 = 1;
          v20 = *(_WORD *)(qword_1C0323E30 + 452);
          if ( (v20 & 1) == 0 )
            goto LABEL_32;
          if ( (v20 & 4) != 0 )
          {
            if ( (_WORD)dword_1C0323E08 != 0x4000 )
              goto LABEL_37;
            v22 = HIWORD(dword_1C0323E08) == 0;
          }
          else
          {
            if ( HIWORD(dword_1C0323E08) != 0x4000 )
              goto LABEL_37;
            v22 = (_WORD)dword_1C0323E08 == 0;
          }
          if ( v22 )
          {
LABEL_32:
            word_1C0323EA4 = 0;
LABEL_33:
            v10 = 0LL;
LABEL_34:
            *(_DWORD *)(qword_1C0323E30 + 128) = itrp_RoundFunctionId[8 * v10
                                                                    + *(unsigned __int16 *)(qword_1C0323E30 + 132)];
            dword_1C0323E64 = dword_1C0323E60;
            result = a1;
            word_1C0323E7C = 0;
            return result;
          }
LABEL_37:
          word_1C0323EA4 = 1;
          if ( (*(_BYTE *)(qword_1C0323E30 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323E30 + 333) )
            goto LABEL_34;
          goto LABEL_33;
        }
      }
    }
  }
LABEL_51:
  dword_1C0323E80 = 4370;
  return qword_1C0323E88;
}
