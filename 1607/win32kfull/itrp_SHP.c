/*
 * XREFs of itrp_SHP @ 0x1C00CF3F0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C00CDC94 (itrp_SHP_Common.c)
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall itrp_SHP(__int64 a1, char a2)
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
  __int16 v14; // ax
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
  __int16 v26; // ax
  int v27; // eax

  v2 = HIDWORD(qword_1C03294F0);
  v3 = LocalGS;
  v4 = dword_1C03294F8;
  v5 = qword_1C03294A8;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v20 = *(_WORD **)(qword_1C03294E0 + 344);
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
    if ( qword_1C03294D8 == qword_1C03294A8 )
    {
      if ( dword_1C03294F8 >= (unsigned __int16)v20[8] )
        goto LABEL_54;
      v12 = 0;
      if ( dword_1C03294F8 < 0 )
        goto LABEL_54;
      v25 = 0;
    }
    else
    {
      if ( dword_1C03294F8 >= *(_DWORD *)(qword_1C03294E0 + 440) )
        goto LABEL_54;
      v12 = 0;
      if ( dword_1C03294F8 < 0 )
        goto LABEL_54;
      v25 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294A8) )
    {
      v26 = *(_WORD *)(v5 + 80);
      if ( v26 < 1 || v26 > v24 || v4 < v25 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v26 - 1)) + 1 )
        goto LABEL_15;
    }
    goto LABEL_54;
  }
  v7 = *(_WORD **)(qword_1C03294E0 + 344);
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
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( SHIDWORD(qword_1C03294F0) >= (unsigned __int16)v7[8] )
      goto LABEL_54;
    v12 = 0;
    if ( qword_1C03294F0 < 0 )
      goto LABEL_54;
    v13 = 0;
  }
  else
  {
    if ( SHIDWORD(qword_1C03294F0) >= *(_DWORD *)(qword_1C03294E0 + 440) )
      goto LABEL_54;
    v12 = 0;
    if ( qword_1C03294F0 < 0 )
      goto LABEL_54;
    v13 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS)
    || (v14 = *(_WORD *)(v3 + 80), v14 >= 1)
    && v14 <= v11
    && v2 >= v13 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v14 - 1)) + 1 )
  {
LABEL_54:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
LABEL_15:
  if ( !v6 )
  {
    v2 = v4;
    v3 = v5;
  }
  v15 = InvokeProject(
          dword_1C0329510,
          *(_DWORD *)(*(_QWORD *)v3 + 4LL * v2) - *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL * v2),
          *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4LL * v2) - *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4LL * v2));
  v16 = word_1C0329508;
  v17 = 0;
  v18 = v15;
  if ( word_1C0329508 == 0x4000 )
  {
    if ( (_WORD)dword_1C03294BC )
      v17 = ((unsigned __int64)(v15 * (__int64)(__int16)dword_1C03294BC) >> 32 << 18)
          + ((((unsigned int)(v15 * (__int16)dword_1C03294BC) >> 13) + 1) >> 1);
    if ( HIWORD(dword_1C03294BC) )
      v12 = ((unsigned __int64)(v15 * (__int64)SHIWORD(dword_1C03294BC)) >> 32 << 18)
          + ((((unsigned int)(v15 * SHIWORD(dword_1C03294BC)) >> 13) + 1) >> 1);
  }
  else
  {
    if ( (_WORD)dword_1C03294BC )
    {
      v27 = CompDiv((unsigned int)word_1C0329508, v15 * (__int64)(__int16)dword_1C03294BC);
      v16 = word_1C0329508;
      v17 = v27;
    }
    if ( HIWORD(dword_1C03294BC) )
      v12 = CompDiv((unsigned int)v16, v18 * SHIWORD(dword_1C03294BC));
  }
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && dword_1C0329500 + 1LL <= (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    return itrp_SHP_Common(a1, v2, 0, v17, v12);
  }
  dword_1C0329530 = 4368;
  return qword_1C0329538;
}
