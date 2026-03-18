/*
 * XREFs of itrp_MIAP @ 0x1C00B5040
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 *     InvokeRoundValue @ 0x1C00B5C98 (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_MovePoint @ 0x1C00B830C (itrp_MovePoint.c)
 *     itrp_ChangeCvtSlow @ 0x1C01449D0 (itrp_ChangeCvtSlow.c)
 */

__int64 __fastcall itrp_MIAP(__int64 a1, char a2)
{
  __int64 v2; // r10
  __int64 v3; // rsi
  _DWORD *v5; // r13
  int v6; // r14d
  int *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned int fixed; // edi
  __int64 v11; // rbp
  _WORD *v12; // rdx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // cx
  int v15; // r8d
  int v16; // ebx
  __int64 v17; // r15
  __int16 v18; // cx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  int v22; // edx
  unsigned int v23; // edi
  int CVTScale; // eax

  v2 = qword_1C0323E30;
  v3 = LocalGS;
  v5 = (_DWORD *)(qword_1C0323E30 + 104);
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2 )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v6 = 4;
  v7 = (int *)(qword_1C0323E18 - 4);
  qword_1C0323E18 = (__int64)v7;
  v8 = *v7;
  if ( (int)v8 >= *(unsigned __int16 *)(qword_1C0323E30 + 360)
    || (int)v8 < 0
    || (v9 = *(_QWORD *)(qword_1C0323E30 + 16),
        (qword_1C0323E30 ^ v9 ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0323E30 + 360)) != *(_QWORD *)(qword_1C0323E30 + 368)) )
  {
    dword_1C0323E80 = 4379;
    return qword_1C0323E88;
  }
  if ( dword_1C0323E6C == 2 )
  {
    fixed = *(_DWORD *)(v9 + 4 * v8);
  }
  else
  {
    if ( dword_1C0323E6C == 3 )
    {
      CVTScale = itrp_GetCVTScale();
      fixed = FixMul(*(_DWORD *)(*(_QWORD *)(qword_1C0323E30 + 16) + 4 * v8), CVTScale);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v2 = qword_1C0323E30;
      fixed = 0;
    }
    v7 = (int *)qword_1C0323E18;
  }
  qword_1C0323E18 = (__int64)(v7 - 1);
  v11 = *(v7 - 1);
  v12 = *(_WORD **)(v2 + 344);
  v13 = v12[4];
  v14 = v12[6];
  v15 = v13;
  if ( v13 <= v14 )
    v15 = v14;
  if ( v15 <= 1 )
  {
    v16 = 1;
  }
  else if ( v13 <= v14 )
  {
    v16 = v14;
  }
  else
  {
    v16 = v13;
  }
  v17 = qword_1C0323E28;
  if ( qword_1C0323E28 == v3 )
  {
    if ( (int)v11 >= (unsigned __int16)v12[8] || (int)v11 < 0 )
      goto LABEL_44;
    v6 = 0;
  }
  else if ( (int)v11 >= *(_DWORD *)(v2 + 440) || (int)v11 < 0 )
  {
    goto LABEL_44;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v3)
    || (v18 = *(_WORD *)(v3 + 80), v18 >= 1)
    && v18 <= v16
    && (int)v11 >= v6 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * v18 - 2) + 1 )
  {
LABEL_44:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  LODWORD(qword_1C0323E40) = v11;
  HIDWORD(qword_1C0323E40) = v11;
  if ( v3 == v17 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v11) = ((unsigned __int64)((int)fixed * (__int64)(__int16)dword_1C0323E08) >> 32 << 18)
                                         + ((((fixed * (__int16)dword_1C0323E08) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v11) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v11);
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v11) = ((unsigned __int64)((int)fixed * (__int64)SHIWORD(dword_1C0323E08)) >> 32 << 18)
                                               + ((((fixed * SHIWORD(dword_1C0323E08)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v11) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v11);
  }
  v19 = InvokeProject(
          (unsigned int)dword_1C0323E60,
          *(unsigned int *)(*(_QWORD *)v3 + 4 * v11),
          *(unsigned int *)(*(_QWORD *)(v3 + 8) + 4 * v11));
  v21 = v19;
  if ( (a2 & 1) != 0 )
  {
    v22 = fixed - v19;
    if ( (int)(fixed - v19) < 0 )
      v22 = v19 - fixed;
    if ( v22 > *v5 )
      fixed = v19;
    fixed = InvokeRoundValue((unsigned int)v5[6], fixed, *(unsigned int *)(qword_1C0323E30 + 32));
  }
  v23 = fixed - v21;
  switch ( dword_1C0323E5C )
  {
    case 1:
      itrp_MovePoint(v3, (unsigned int)v11, v23);
      break;
    case 2:
      *(_DWORD *)(*(_QWORD *)v3 + 4 * v11) += v23;
      *(_BYTE *)(*(_QWORD *)(v3 + 72) + v11) |= 1u;
      break;
    case 3:
      *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v11) += v23;
      *(_BYTE *)(*(_QWORD *)(v3 + 72) + v11) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(qword_1C0323E30 + 16) + 4 * v11) += v23;
      break;
    case 5:
      itrp_ChangeCvtSlow(v20, (unsigned int)v11, v23);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  return a1;
}
