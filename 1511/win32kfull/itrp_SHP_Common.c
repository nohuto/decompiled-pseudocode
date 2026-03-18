/*
 * XREFs of itrp_SHP_Common @ 0x1C00B5688
 * Callers:
 *     itrp_SHPIX @ 0x1C00B4560 (itrp_SHPIX.c)
 *     itrp_SHP @ 0x1C00B5380 (itrp_SHP.c)
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddDistance @ 0x1C00B7C5C (AddDistance.c)
 */

__int64 __fastcall itrp_SHP_Common(__int64 a1, int a2, char a3, int a4, int a5)
{
  __int64 v5; // r14
  _QWORD *v7; // r15
  int v8; // r12d
  __int64 v9; // rbx
  _WORD *v10; // r8
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  int v14; // edx
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  __int64 result; // rax
  __int16 v19; // r8
  unsigned __int8 v20; // dl
  bool v21; // zf

  v5 = qword_1C0323E00;
  v7 = (_QWORD *)qword_1C0323E00;
  v8 = dword_1C0323E50 + 1;
  if ( dword_1C0323E50 == -1 )
  {
LABEL_23:
    dword_1C0323E50 = 0;
    return a1;
  }
  v9 = qword_1C0323E30;
  while ( 1 )
  {
    qword_1C0323E18 -= 4LL;
    v10 = *(_WORD **)(v9 + 344);
    v11 = *(int *)qword_1C0323E18;
    v12 = v10[4];
    v13 = v10[6];
    v14 = v12;
    if ( v12 <= v13 )
      v14 = v13;
    if ( v14 <= 1 )
      v15 = 1;
    else
      v15 = v12 <= v13 ? v13 : v12;
    if ( qword_1C0323E28 == v5 )
      break;
    if ( (int)v11 >= *(_DWORD *)(v9 + 440) || (int)v11 < 0 )
      goto LABEL_43;
    v16 = 4;
LABEL_12:
    if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v5) )
      goto LABEL_43;
    v17 = *(unsigned __int16 *)(v5 + 80);
    if ( (__int16)v17 >= 1 && (__int16)v17 <= v15 )
    {
      v17 = *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (__int16)v17 - 2);
      if ( (int)v11 >= v17 + v16 + 1 )
        goto LABEL_43;
    }
    if ( word_1C0323EA4
      && v7 != (_QWORD *)qword_1C0323E28
      && *(_BYTE *)(v9 + 333) == 2
      && (*(_BYTE *)(v9 + 452) & 2) != 0 )
    {
      AddDistance(v17, (_DWORD)v7, a2, v11, 3);
      v9 = qword_1C0323E30;
      v5 = qword_1C0323E00;
    }
    if ( !a3 || (v19 = *(_WORD *)(v9 + 454), (v19 & 0x10) == 0) )
    {
LABEL_18:
      if ( (_WORD)dword_1C0323E0C )
      {
        *(_DWORD *)(*v7 + 4 * v11) += a4;
        *(_BYTE *)(v7[9] + v11) |= 1u;
        v9 = qword_1C0323E30;
        v5 = qword_1C0323E00;
      }
      if ( HIWORD(dword_1C0323E0C) )
      {
        *(_DWORD *)(v7[1] + 4 * v11) += a5;
        *(_BYTE *)(v7[9] + v11) |= 2u;
        v9 = qword_1C0323E30;
        v5 = qword_1C0323E00;
      }
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(v9 + 452) & 4) != 0 )
    {
      if ( dword_1C0323E08 != 0x4000 )
        goto LABEL_22;
      if ( *(_BYTE *)(v9 + 341) )
        goto LABEL_18;
      v21 = (v19 & 1) == 0;
      v20 = *(_BYTE *)(v11 + *(_QWORD *)(v5 + 72));
    }
    else
    {
      if ( dword_1C0323E08 != 0x40000000 )
        goto LABEL_22;
      if ( *(_BYTE *)(v9 + 341) )
        goto LABEL_18;
      v20 = *(_BYTE *)(v11 + *(_QWORD *)(v5 + 72)) >> 1;
      v21 = (v19 & 2) == 0;
    }
    if ( (v21 & v20) != 0 )
      goto LABEL_18;
LABEL_22:
    if ( !--v8 )
      goto LABEL_23;
  }
  if ( (int)v11 < (unsigned __int16)v10[8] && (int)v11 >= 0 )
  {
    v16 = 0;
    goto LABEL_12;
  }
LABEL_43:
  result = qword_1C0323E88;
  dword_1C0323E80 = 4370;
  return result;
}
