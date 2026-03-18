/*
 * XREFs of itrp_SDPVTL @ 0x1C00BB0A0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C00BA808 (itrp_ComputeAndCheck_PF_Proj.c)
 *     itrp_Normalize @ 0x1C00BB41C (itrp_Normalize.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00BE900 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_SDPVTL(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r13
  _WORD *v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  unsigned __int16 v8; // di
  int v9; // ecx
  __int64 v10; // rbp
  int v11; // r15d
  __int16 v12; // cx
  int v13; // eax
  __int64 v14; // r15
  int v15; // edi
  __int16 v16; // cx
  __int16 v17; // cx
  __int16 v18; // cx
  __int16 v19; // ax
  __int64 result; // rax
  bool v21; // zf
  __int64 v22; // [rsp+20h] [rbp-58h]
  _WORD *v23; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v2 = qword_1C0323160;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v3 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) < 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v4 = *(int *)(v3 - 4);
  qword_1C0323148 = v3 - 8;
  v5 = *(_WORD **)(qword_1C0323160 + 344);
  v23 = v5;
  v6 = *(int *)(v3 - 8);
  LOWORD(v7) = v5[4];
  v8 = v5[6];
  v9 = (unsigned __int16)v7;
  if ( (unsigned __int16)v7 <= v8 )
    v9 = v8;
  v10 = 1LL;
  if ( v9 <= 1 )
  {
    v11 = 1;
  }
  else if ( (unsigned __int16)v7 <= v8 )
  {
    v11 = v8;
  }
  else
  {
    v11 = (unsigned __int16)v7;
  }
  v22 = qword_1C0323158;
  v27 = qword_1C0323130;
  if ( qword_1C0323158 == qword_1C0323130 )
  {
    if ( (int)v4 >= (unsigned __int16)v5[8] || (int)v4 < 0 )
      goto LABEL_48;
    v26 = 0;
  }
  else
  {
    if ( (int)v4 >= *(_DWORD *)(qword_1C0323160 + 440) || (int)v4 < 0 )
      goto LABEL_48;
    v26 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323130) )
  {
    v12 = *(_WORD *)(v27 + 80);
    if ( v12 < 1 || v12 > v11 || (int)v4 < *(__int16 *)(*(_QWORD *)(v27 + 64) + 2LL * v12 - 2) + v26 + 1 )
    {
      v13 = (unsigned __int16)v7;
      if ( (unsigned __int16)v7 <= v8 )
        v13 = v8;
      if ( v13 <= 1 )
      {
        v7 = 1;
      }
      else if ( (unsigned __int16)v7 <= v8 )
      {
        v7 = v8;
      }
      else
      {
        v7 = (unsigned __int16)v7;
      }
      v14 = qword_1C0323128;
      if ( v22 == qword_1C0323128 )
      {
        if ( (int)v6 < (unsigned __int16)v23[8] && (int)v6 >= 0 )
        {
          v15 = 0;
          goto LABEL_25;
        }
      }
      else if ( (int)v6 < *(_DWORD *)(v2 + 440) && (int)v6 >= 0 )
      {
        v15 = 4;
LABEL_25:
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323128) )
        {
          v16 = *(_WORD *)(v14 + 80);
          if ( v16 < 1 || v16 > v7 || (int)v6 < v15 + *(__int16 *)(*(_QWORD *)(v14 + 64) + 2LL * v16 - 2) + 1 )
          {
            word_1C03231D6 = v4;
            word_1C03231D8 = v6;
            itrp_Normalize(
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v14 + 4 * v6) - *(_DWORD *)(*(_QWORD *)v27 + 4 * v4)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 8) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v27 + 8) + 4 * v4)),
              &dword_1C0323138);
            itrp_Normalize(
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(qword_1C0323128 + 16) + 4 * v6)
                           - *(_DWORD *)(*(_QWORD *)(qword_1C0323130 + 16) + 4 * v4)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(qword_1C0323128 + 24) + 4 * v6)
                           - *(_DWORD *)(*(_QWORD *)(qword_1C0323130 + 24) + 4 * v4)),
              &dword_1C0323140);
            if ( (a2 & 1) != 0 )
            {
              v17 = -HIWORD(dword_1C0323138);
              HIWORD(dword_1C0323138) = dword_1C0323138;
              LOWORD(dword_1C0323138) = v17;
              v18 = -HIWORD(dword_1C0323140);
              HIWORD(dword_1C0323140) = dword_1C0323140;
              LOWORD(dword_1C0323140) = v18;
            }
            itrp_ComputeAndCheck_PF_Proj();
            dword_1C032318C = 1;
            dword_1C0323190 = 1;
            v19 = *(_WORD *)(qword_1C0323160 + 452);
            if ( (v19 & 1) == 0 )
              goto LABEL_32;
            if ( (v19 & 4) != 0 )
            {
              if ( (_WORD)dword_1C0323138 != 0x4000 )
                goto LABEL_37;
              v21 = HIWORD(dword_1C0323138) == 0;
            }
            else
            {
              if ( HIWORD(dword_1C0323138) != 0x4000 )
                goto LABEL_37;
              v21 = (_WORD)dword_1C0323138 == 0;
            }
            if ( v21 )
            {
LABEL_32:
              word_1C03231D4 = 0;
LABEL_33:
              v10 = 0LL;
LABEL_34:
              *(_DWORD *)(qword_1C0323160 + 128) = itrp_RoundFunctionId[8 * v10
                                                                      + *(unsigned __int16 *)(qword_1C0323160 + 132)];
              result = a1;
              dword_1C0323194 = 2;
              word_1C03231AC = 0;
              return result;
            }
LABEL_37:
            word_1C03231D4 = 1;
            if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323160 + 333) )
              goto LABEL_34;
            goto LABEL_33;
          }
        }
      }
    }
  }
LABEL_48:
  dword_1C03231B0 = 4370;
  return qword_1C03231B8;
}
