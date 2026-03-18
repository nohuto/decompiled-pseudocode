/*
 * XREFs of itrp_UTP @ 0x1C02DDB20
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_UTP(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // r15d
  _WORD *v6; // r9
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // ebp
  __int16 v12; // cx

  v1 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 72);
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v4 = qword_1C0323E18, !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2)) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v5 = 4;
  qword_1C0323E18 -= 4LL;
  v6 = *(_WORD **)(qword_1C0323E30 + 344);
  v7 = *(int *)(v4 - 4);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v8;
  if ( v8 <= v9 )
    v10 = v9;
  if ( v10 <= 1 )
  {
    v11 = 1;
  }
  else if ( v8 <= v9 )
  {
    v11 = v9;
  }
  else
  {
    v11 = v8;
  }
  if ( qword_1C0323E28 == LocalGS )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v5 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v7 < 0 )
  {
    goto LABEL_14;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v12 = *(_WORD *)(v1 + 80), v12 >= 1)
    && v12 <= v11
    && (int)v7 >= v5 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * v12 - 2) + 1 )
  {
LABEL_14:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  if ( (_WORD)dword_1C0323E0C )
    *(_BYTE *)(v7 + v3) &= ~1u;
  if ( HIWORD(dword_1C0323E0C) )
    *(_BYTE *)(v7 + v3) &= ~2u;
  return a1;
}
