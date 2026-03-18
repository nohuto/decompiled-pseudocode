/*
 * XREFs of itrp_MDRP @ 0x1C00BD810
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     InvokeGlobalGSScale @ 0x1C00B9E24 (InvokeGlobalGSScale.c)
 *     InvokeRoundValue @ 0x1C00BD5B4 (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00BDDF8 (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00BE900 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00BF354 (AddProportion.c)
 *     AddDistance @ 0x1C00BF504 (AddDistance.c)
 *     itrp_MovePoint @ 0x1C00BFA38 (itrp_MovePoint.c)
 *     itrp_RoundOff @ 0x1C00BFB5C (itrp_RoundOff.c)
 *     InterAlign @ 0x1C00BFE70 (InterAlign.c)
 *     itrp_ChangeCvtSlow @ 0x1C011AD9C (itrp_ChangeCvtSlow.c)
 *     itrp_CheckSingleWidth @ 0x1C02DC67C (itrp_CheckSingleWidth.c)
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
  __int16 v13; // cx
  int v14; // eax
  int v15; // ebp
  __int16 v16; // cx
  int v17; // ebp
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebp
  _QWORD *v24; // r12
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // r9d
  int v34; // r11d
  unsigned int v35; // ebx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // r9d
  int v39; // ecx
  int fixed; // eax
  int v41; // [rsp+30h] [rbp-68h]
  __int64 v42; // [rsp+38h] [rbp-60h]
  _WORD *v43; // [rsp+40h] [rbp-58h]
  int v46; // [rsp+B0h] [rbp+18h]
  int v47; // [rsp+B8h] [rbp+20h]
  __int64 v48; // [rsp+B8h] [rbp+20h]

  v2 = qword_1C0323160;
  v3 = qword_1C0323160;
  v4 = qword_1C0323128;
  v46 = qword_1C0323170;
  v42 = LocalGS;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v5 = qword_1C0323148, !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2)) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v6 = *(int *)(v5 - 4);
  v7 = *(_WORD **)(qword_1C0323160 + 344);
  v43 = v7;
  LOWORD(v8) = v7[4];
  v9 = v7[6];
  v10 = (unsigned __int16)v8;
  if ( (unsigned __int16)v8 <= v9 )
    v10 = v9;
  if ( v10 <= 1 )
  {
    v47 = 1;
  }
  else
  {
    v11 = (unsigned __int16)v8;
    if ( (unsigned __int16)v8 <= v9 )
      v11 = v9;
    v47 = v11;
  }
  v12 = qword_1C0323158;
  if ( qword_1C0323158 == LocalGS )
  {
    if ( (int)qword_1C0323170 >= (unsigned __int16)v7[8] || (int)qword_1C0323170 < 0 )
      goto LABEL_83;
    v41 = 0;
  }
  else
  {
    if ( (int)qword_1C0323170 >= *(_DWORD *)(qword_1C0323160 + 440) || (int)qword_1C0323170 < 0 )
      goto LABEL_83;
    v41 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    goto LABEL_83;
  v13 = *(_WORD *)(v42 + 80);
  if ( v13 >= 1 && v13 <= v47 && v46 >= *(__int16 *)(*(_QWORD *)(v42 + 64) + 2LL * v13 - 2) + v41 + 1 )
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
    if ( (int)v6 >= (unsigned __int16)v43[8] || (int)v6 < 0 )
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
    && (int)v6 >= v15 + *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * v16 - 2) + 1 )
  {
LABEL_83:
    dword_1C03231B0 = 4370;
    return qword_1C03231B8;
  }
  if ( word_1C03231D4 && v4 != v12 && *(_BYTE *)(v2 + 333) == 2 && (*(_BYTE *)(v2 + 452) & 2) != 0 )
  {
    v31 = (unsigned __int16)word_1C03231D6;
    if ( word_1C03231D6 == -1
      || word_1C03231D8 == -1
      || !(unsigned int)InterAlign(v4, (unsigned int)word_1C03231D6, (unsigned int)v6, (unsigned int)word_1C03231D8) )
    {
      v17 = v46;
      AddDistance(v31, v4, v46, v6, 3);
      v2 = qword_1C0323160;
      v12 = qword_1C0323158;
      goto LABEL_32;
    }
    AddProportion(v31, v4, v34, v6, v33);
    v2 = qword_1C0323160;
    v12 = qword_1C0323158;
  }
  v17 = v46;
LABEL_32:
  if ( v42 == v12 || v4 == v12 || *(_BYTE *)(v2 + 397) )
  {
    v18 = v6;
    v48 = 4LL * v17;
    fixed = InvokeProject(
              (unsigned int)dword_1C0323194,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v42 + 16) + v48)),
              (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 24) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v42 + 24) + v48)));
    goto LABEL_78;
  }
  v18 = v6;
  v19 = *(_QWORD *)(v42 + 40);
  v20 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4 * v6);
  if ( !*(_BYTE *)(v3 + 340) )
  {
    v48 = 4LL * v17;
    v35 = InvokeGlobalGSScale(*(_DWORD *)(v3 + 188), (int *)(v3 + 280), v20 - *(_DWORD *)(v19 + v48));
    v24 = (_QWORD *)v42;
    v36 = InvokeGlobalGSScale(
            *(_DWORD *)(v3 + 184),
            (int *)(v3 + 264),
            *(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v42 + 32) + v48));
    v37 = InvokeProject((unsigned int)dword_1C0323194, v36, v35);
LABEL_72:
    v23 = v37;
    goto LABEL_39;
  }
  v48 = 4LL * v17;
  v21 = InvokeProject(
          (unsigned int)dword_1C0323194,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 32) + 4 * v6) - *(_DWORD *)(*(_QWORD *)(v42 + 32) + v48)),
          (unsigned int)(v20 - *(_DWORD *)(v19 + v48)));
  v22 = (unsigned int)(*(_DWORD *)(v3 + 192) - 1);
  if ( *(_DWORD *)(v3 + 192) != 1 )
  {
    if ( *(_DWORD *)(v3 + 192) == 2 )
    {
      v38 = *(_DWORD *)(v3 + 300);
      v24 = (_QWORD *)v42;
      if ( v21 < 0 )
      {
        v39 = v21 * *(_DWORD *)(v3 + 304);
        v22 = (unsigned int)(((v38 >> 1) - v39) >> 31);
        LODWORD(v22) = ((v38 >> 1) - v39) % v38;
        v23 = -(((v38 >> 1) - v39) / v38);
        goto LABEL_39;
      }
      v22 = (unsigned int)(((v38 >> 1) + v21 * *(_DWORD *)(v3 + 304)) >> 31);
      LODWORD(v22) = ((v38 >> 1) + v21 * *(_DWORD *)(v3 + 304)) % v38;
      v37 = ((v38 >> 1) + v21 * *(_DWORD *)(v3 + 304)) / v38;
      goto LABEL_72;
    }
    if ( *(_DWORD *)(v3 + 192) != 3 )
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v23 = 0;
      goto LABEL_38;
    }
    fixed = FixMul(v21, *(_DWORD *)(v3 + 296));
LABEL_78:
    v23 = fixed;
    goto LABEL_38;
  }
  v23 = ((*(int *)(v3 + 300) >> 1) + v21 * *(_DWORD *)(v3 + 304)) >> *(_DWORD *)(v3 + 308);
LABEL_38:
  v24 = (_QWORD *)v42;
LABEL_39:
  if ( *(_DWORD *)(v3 + 108) )
    v23 = itrp_CheckSingleWidth((unsigned int)v23, v22);
  if ( (a2 & 4) != 0 )
    v25 = InvokeRoundValue(*(_DWORD *)(v3 + 128), v23, *(_DWORD *)(v3 + 4LL * (a2 & 3) + 32));
  else
    v25 = itrp_RoundOff((unsigned int)v23, *(unsigned int *)(v3 + 4LL * (a2 & 3) + 32));
  v26 = v25;
  if ( (a2 & 8) != 0 )
  {
    v30 = *(_DWORD *)(v3 + 124);
    if ( word_1C03231D4 )
      v30 /= 2;
    if ( v23 < 0 )
    {
      v32 = -v30;
      if ( v26 > v32 )
        v26 = v32;
    }
    else if ( v26 < v30 )
    {
      v26 = v30;
    }
  }
  v28 = v26
      - InvokeProject(
          (unsigned int)dword_1C0323190,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 4 * v18) - *(_DWORD *)(v48 + *v24)),
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v18) - *(_DWORD *)(v24[1] + v48)));
  switch ( dword_1C032318C )
  {
    case 1:
      itrp_MovePoint(v4, (unsigned int)v6, v28);
      break;
    case 2:
      *(_DWORD *)(*(_QWORD *)v4 + 4 * v18) += v28;
      *(_BYTE *)(*(_QWORD *)(v4 + 72) + v18) |= 1u;
      break;
    case 3:
      *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v18) += v28;
      *(_BYTE *)(*(_QWORD *)(v4 + 72) + v18) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(qword_1C0323160 + 16) + 4 * v18) += v28;
      break;
    case 5:
      itrp_ChangeCvtSlow(v27, (unsigned int)v6, v28);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  HIDWORD(qword_1C0323170) = v46;
  dword_1C0323178 = v6;
  if ( (a2 & 0x10) != 0 )
    LODWORD(qword_1C0323170) = v6;
  return a1;
}
