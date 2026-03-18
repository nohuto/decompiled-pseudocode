/*
 * XREFs of itrp_MDRP @ 0x1C00CE020
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00CFA40 (AddProportion.c)
 *     AddDistance @ 0x1C00CFBF4 (AddDistance.c)
 *     itrp_MovePoint @ 0x1C00D1A00 (itrp_MovePoint.c)
 *     itrp_RoundOff @ 0x1C00D1B90 (itrp_RoundOff.c)
 *     InterAlign @ 0x1C00D1E80 (InterAlign.c)
 *     itrp_ChangeCvtSlow @ 0x1C01440B4 (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02E048C (itrp_CheckSingleWidth.c)
 */

__int64 __fastcall itrp_MDRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r15
  _WORD *v7; // rcx
  int v8; // esi
  unsigned __int16 v9; // bp
  int v10; // eax
  int v11; // eax
  __int64 v12; // r12
  __int16 v13; // ax
  int v14; // eax
  int v15; // ebp
  __int16 v16; // ax
  int v17; // ebp
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  int v22; // ebp
  _QWORD *v23; // r12
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // r9d
  int v33; // r11d
  int v34; // r9d
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // eax
  int fixed; // eax
  int v39; // [rsp+30h] [rbp-68h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  _WORD *v41; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]
  __int64 v46; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C03294E0;
  v3 = qword_1C03294E0;
  v4 = qword_1C03294A8;
  v44 = qword_1C03294F0;
  v40 = LocalGS;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v5 = qword_1C03294C8, !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v6 = *(int *)(v5 - 4);
  v7 = *(_WORD **)(qword_1C03294E0 + 344);
  v41 = v7;
  LOWORD(v8) = v7[4];
  v9 = v7[6];
  v10 = (unsigned __int16)v8;
  if ( (unsigned __int16)v8 <= v9 )
    v10 = v9;
  if ( v10 <= 1 )
  {
    v45 = 1;
  }
  else
  {
    v11 = (unsigned __int16)v8;
    if ( (unsigned __int16)v8 <= v9 )
      v11 = v9;
    v45 = v11;
  }
  v12 = qword_1C03294D8;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( (int)qword_1C03294F0 >= (unsigned __int16)v7[8] || (int)qword_1C03294F0 < 0 )
      goto LABEL_83;
    v39 = 0;
  }
  else
  {
    if ( (int)qword_1C03294F0 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)qword_1C03294F0 < 0 )
      goto LABEL_83;
    v39 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    goto LABEL_83;
  v13 = *(_WORD *)(v40 + 80);
  if ( v13 >= 1 && v13 <= v45 && v44 >= *(__int16 *)(*(_QWORD *)(v40 + 64) + 2LL * (v13 - 1)) + v39 + 1 )
    goto LABEL_83;
  v14 = (unsigned __int16)v8;
  if ( (unsigned __int16)v8 <= v9 )
    v14 = v9;
  if ( v14 <= 1 )
    v8 = 1;
  else
    v8 = (unsigned __int16)v8 <= v9 ? v9 : (unsigned __int16)v8;
  if ( v12 == v4 )
  {
    if ( (int)v6 >= (unsigned __int16)v41[8] || (int)v6 < 0 )
      goto LABEL_83;
    v15 = 0;
  }
  else
  {
    if ( (int)v6 >= *(_DWORD *)(v2 + 440) || (int)v6 < 0 )
      goto LABEL_83;
    v15 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4)
    || (v16 = *(_WORD *)(v4 + 80), v16 >= 1)
    && v16 <= v8
    && (int)v6 >= v15 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v16 - 1)) + 1 )
  {
LABEL_83:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  if ( word_1C0329554 && v4 != v12 && *(_BYTE *)(v2 + 333) == 2 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v30 = (unsigned __int16)word_1C0329556;
    if ( word_1C0329556 == -1
      || word_1C0329558 == -1
      || !(unsigned int)InterAlign(v4, (unsigned int)word_1C0329556, (unsigned int)v6, (unsigned int)word_1C0329558) )
    {
      v17 = v44;
      AddDistance(v30, v4, v44, v6, 3);
      v2 = qword_1C03294E0;
      v12 = qword_1C03294D8;
      goto LABEL_32;
    }
    AddProportion(v30, v4, v33, v6, v32);
    v2 = qword_1C03294E0;
    v12 = qword_1C03294D8;
  }
  v17 = v44;
LABEL_32:
  if ( v40 == v12 || v4 == v12 || *(_BYTE *)(v2 + 397) )
  {
    v18 = v6;
    v46 = 4LL * v17;
    fixed = InvokeProject(
              (unsigned int)dword_1C0329514,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v40 + 16) + v46)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v40 + 24) + v46)));
    goto LABEL_78;
  }
  v18 = v6;
  v19 = *(_QWORD *)(v40 + 40);
  v20 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4 * v6);
  if ( !*(_BYTE *)(v3 + 340) )
  {
    v46 = 4LL * v17;
    v36 = InvokeGlobalGSScale(*(_DWORD *)(v3 + 188), (int *)(v3 + 280), (unsigned int)(v20 - *(_DWORD *)(v19 + v46)));
    v23 = (_QWORD *)v40;
    v37 = InvokeGlobalGSScale(
            *(_DWORD *)(v3 + 184),
            (int *)(v3 + 264),
            (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v40 + 32) + v46)));
    v35 = InvokeProject((unsigned int)dword_1C0329514, v37, v36);
LABEL_74:
    v22 = v35;
    goto LABEL_39;
  }
  v46 = 4LL * v17;
  v21 = InvokeProject(
          (unsigned int)dword_1C0329514,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v40 + 32) + v46)),
          (unsigned int)(v20 - *(_DWORD *)(v19 + v46)));
  if ( *(_DWORD *)(v3 + 192) != 1 )
  {
    if ( *(_DWORD *)(v3 + 192) == 2 )
    {
      v34 = *(_DWORD *)(v3 + 300);
      v23 = (_QWORD *)v40;
      if ( v21 < 0 )
      {
        v22 = -(((v34 >> 1) - v21 * *(_DWORD *)(v3 + 304)) / v34);
        goto LABEL_39;
      }
      v35 = ((v34 >> 1) + v21 * *(_DWORD *)(v3 + 304)) / v34;
      goto LABEL_74;
    }
    if ( *(_DWORD *)(v3 + 192) != 3 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v22 = 0;
      goto LABEL_38;
    }
    fixed = FixMul(v21, *(_DWORD *)(v3 + 296));
LABEL_78:
    v22 = fixed;
    goto LABEL_38;
  }
  v22 = ((*(int *)(v3 + 300) >> 1) + v21 * *(_DWORD *)(v3 + 304)) >> *(_DWORD *)(v3 + 308);
LABEL_38:
  v23 = (_QWORD *)v40;
LABEL_39:
  if ( *(_DWORD *)(v3 + 108) )
    v22 = itrp_CheckSingleWidth((unsigned int)v22);
  if ( (a2 & 4) != 0 )
    v24 = InvokeRoundValue(*(_DWORD *)(v3 + 128), v22, *(_DWORD *)(v3 + 4LL * (a2 & 3) + 32));
  else
    v24 = itrp_RoundOff((unsigned int)v22, *(unsigned int *)(v3 + 4LL * (a2 & 3) + 32));
  v25 = v24;
  if ( (a2 & 8) != 0 )
  {
    v29 = *(_DWORD *)(v3 + 124);
    if ( word_1C0329554 )
      v29 /= 2;
    if ( v22 < 0 )
    {
      v31 = -v29;
      if ( v25 > v31 )
        v25 = v31;
    }
    else if ( v25 < v29 )
    {
      v25 = v29;
    }
  }
  v27 = v25
      - InvokeProject(
          (unsigned int)dword_1C0329510,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 4 * v18) - *(_DWORD *)(v46 + *v23)),
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v18) - *(_DWORD *)(v23[1] + v46)));
  switch ( dword_1C032950C )
  {
    case 1:
      itrp_MovePoint(v4, (unsigned int)v6, v27);
      break;
    case 2:
      *(_DWORD *)(*(_QWORD *)v4 + 4 * v18) += v27;
      *(_BYTE *)(*(_QWORD *)(v4 + 72) + v18) |= 1u;
      break;
    case 3:
      *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v18) += v27;
      *(_BYTE *)(*(_QWORD *)(v4 + 72) + v18) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4 * v18) += v27;
      break;
    case 5:
      itrp_ChangeCvtSlow(v26, (unsigned int)v6, v27);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  HIDWORD(qword_1C03294F0) = v44;
  dword_1C03294F8 = v6;
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C03294F0) = v6;
  return a1;
}
