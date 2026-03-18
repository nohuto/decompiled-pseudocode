/*
 * XREFs of itrp_SHP @ 0x1C00B5380
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C00B5688 (itrp_SHP_Common.c)
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall itrp_SHP(int a1, char a2)
{
  int v2; // esi
  __int64 v3; // r14
  int v4; // ebp
  __int64 v5; // r13
  int v6; // r12d
  _WORD *v7; // r8
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // r15d
  int v12; // ebx
  int v13; // edi
  __int16 v14; // cx
  int v15; // eax
  __int16 v16; // cx
  int v17; // r10d
  __int64 v18; // r11
  _WORD *v20; // rdx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  int v23; // r8d
  int v24; // r15d
  int v25; // edi
  __int16 v26; // cx
  int v27; // eax

  v2 = HIDWORD(qword_1C0323E40);
  v3 = LocalGS;
  v4 = dword_1C0323E48;
  v5 = qword_1C0323DF8;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v20 = *(_WORD **)(qword_1C0323E30 + 344);
    v21 = v20[4];
    v22 = v20[6];
    v23 = v21;
    if ( v21 <= v22 )
      v23 = v22;
    if ( v23 <= 1 )
    {
      v24 = 1;
    }
    else if ( v21 <= v22 )
    {
      v24 = v22;
    }
    else
    {
      v24 = v21;
    }
    if ( qword_1C0323E28 == qword_1C0323DF8 )
    {
      if ( dword_1C0323E48 >= (unsigned __int16)v20[8] )
        goto LABEL_54;
      v12 = 0;
      if ( dword_1C0323E48 < 0 )
        goto LABEL_54;
      v25 = 0;
    }
    else
    {
      if ( dword_1C0323E48 >= *(_DWORD *)(qword_1C0323E30 + 440) )
        goto LABEL_54;
      v12 = 0;
      if ( dword_1C0323E48 < 0 )
        goto LABEL_54;
      v25 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323DF8) )
    {
      v26 = *(_WORD *)(v5 + 80);
      if ( v26 < 1 || v26 > v24 || v4 < v25 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * v26 - 2) + 1 )
        goto LABEL_15;
    }
    goto LABEL_54;
  }
  v7 = *(_WORD **)(qword_1C0323E30 + 344);
  v8 = v7[4];
  v9 = v7[6];
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
    if ( SHIDWORD(qword_1C0323E40) >= (unsigned __int16)v7[8] )
      goto LABEL_54;
    v12 = 0;
    if ( qword_1C0323E40 < 0 )
      goto LABEL_54;
    v13 = 0;
  }
  else
  {
    if ( SHIDWORD(qword_1C0323E40) >= *(_DWORD *)(qword_1C0323E30 + 440) )
      goto LABEL_54;
    v12 = 0;
    if ( qword_1C0323E40 < 0 )
      goto LABEL_54;
    v13 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS)
    || (v14 = *(_WORD *)(v3 + 80), v14 >= 1)
    && v14 <= v11
    && v2 >= v13 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * v14 - 2) + 1 )
  {
LABEL_54:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
LABEL_15:
  if ( !v6 )
  {
    v2 = v4;
    v3 = v5;
  }
  v15 = InvokeProject(
          (unsigned int)dword_1C0323E60,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v3 + 4LL * v2) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL * v2)),
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v3 + 8) + 4LL * v2) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4LL * v2)));
  v16 = word_1C0323E58;
  v17 = 0;
  v18 = v15;
  if ( word_1C0323E58 == 0x4000 )
  {
    if ( (_WORD)dword_1C0323E0C )
      v17 = ((unsigned __int64)(v15 * (__int64)(__int16)dword_1C0323E0C) >> 32 << 18)
          + ((((unsigned int)(v15 * (__int16)dword_1C0323E0C) >> 13) + 1) >> 1);
    if ( HIWORD(dword_1C0323E0C) )
      v12 = ((unsigned __int64)(v15 * (__int64)SHIWORD(dword_1C0323E0C)) >> 32 << 18)
          + ((((unsigned int)(v15 * SHIWORD(dword_1C0323E0C)) >> 13) + 1) >> 1);
  }
  else
  {
    if ( (_WORD)dword_1C0323E0C )
    {
      v27 = CompDiv((unsigned int)word_1C0323E58, v15 * (__int64)(__int16)dword_1C0323E0C);
      v16 = word_1C0323E58;
      v17 = v27;
    }
    if ( HIWORD(dword_1C0323E0C) )
      v12 = CompDiv((unsigned int)v16, v18 * SHIWORD(dword_1C0323E0C));
  }
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && dword_1C0323E50 + 1LL <= (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    return itrp_SHP_Common(a1, v2, 0, v17, v12);
  }
  dword_1C0323E80 = 4368;
  return qword_1C0323E88;
}
