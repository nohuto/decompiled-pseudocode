/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x1402189A4
 * Callers:
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // r8
  unsigned __int64 i; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // r9
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r9
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v20; // ax
  int v21; // ecx
  unsigned __int16 v22; // r10
  int v23; // ecx
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  int v26; // ecx
  __int16 v27; // ax
  int v28; // ecx
  int v29; // [rsp+8h] [rbp-10h]
  int v30; // [rsp+8h] [rbp-10h]
  int v31; // [rsp+8h] [rbp-10h]
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]

  v4 = (_QWORD *)(a1 + 288);
  for ( result = *(_QWORD *)(a1 + 288); ; result = *(_QWORD *)result )
  {
    if ( (_QWORD *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      for ( i = *v7; (unsigned __int64 *)i != v7; i = *(_QWORD *)i )
      {
        if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
          dword_1402F90D8 = 5;
      }
      return result;
    }
    v6 = (_QWORD *)(result - 24);
    if ( *(_QWORD *)(result - 24 + 48) <= a2 && v6[9] > a2 )
      break;
  }
  v9 = (_QWORD *)v6[12];
  v10 = 0LL;
  v11 = 0LL;
  while ( v9 != v6 + 12 )
  {
    v12 = v9[2];
    v13 = v12 + v9[3];
    if ( v13 < a2 && v13 > (unsigned __int64)v10 )
      v10 = (_QWORD *)(v12 + v9[3]);
    if ( v12 > a2 && (!v11 || v12 < v11[4]) )
      v11 = v9 - 2;
    v9 = (_QWORD *)*v9;
  }
  v14 = 0LL;
  if ( v10 )
    v6 = v10;
  v15 = 0LL;
  if ( (unsigned __int64)v6 < a2 )
  {
    v16 = *(_DWORD *)(a1 + 124);
    do
    {
      v15 = (__int64)v6;
      if ( v16 )
      {
        v17 = *((_DWORD *)v6 + 2);
        v16 = *(_DWORD *)(a1 + 124);
        LOWORD(v29) = v17;
        if ( (v16 & v17) != 0 )
          v29 = *(_DWORD *)(a1 + 136) ^ v17;
        v18 = v29;
      }
      else
      {
        v18 = *((_WORD *)v6 + 4);
      }
      if ( !v18 )
        break;
      v6 += 2 * v18;
    }
    while ( (unsigned __int64)v6 < a2 );
  }
  for ( j = (unsigned __int64)(v11 - 2); j > a2; j += -16LL * v20 )
  {
    v14 = j;
    v20 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v20 )
      break;
  }
  qword_1402F9108 = v15;
  qword_1402F9110 = v14;
  if ( !v15 || !v14 )
    goto LABEL_70;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v21 = *(_DWORD *)(v15 + 8);
    LOWORD(v30) = v21;
    if ( (v21 & *(_DWORD *)(a1 + 124)) != 0 )
      v30 = *(_DWORD *)(a1 + 136) ^ v21;
    v22 = v30;
  }
  else
  {
    v22 = *(_WORD *)(v15 + 8);
  }
  result = v15 + 16LL * v22;
  if ( result != v14 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v14 + 12)) )
  {
    dword_1402F90D8 = 4;
  }
  else
  {
LABEL_70:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v23 = *(_DWORD *)(v15 + 8);
      LOWORD(v31) = v23;
      if ( (*(_DWORD *)(a1 + 124) & v23) != 0 )
        v31 = *(_DWORD *)(a1 + 136) ^ v23;
      v24 = v31;
    }
    else
    {
      v24 = *(_WORD *)(v15 + 8);
    }
    v25 = 2LL * v24;
    if ( v14 )
      word_1402F9130 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v14 + 12);
    if ( v15 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v26 = *(_DWORD *)(v15 + 8);
        LOWORD(v32) = v26;
        if ( (*(_DWORD *)(a1 + 124) & v26) != 0 )
          v32 = *(_DWORD *)(a1 + 136) ^ v26;
        v27 = v32;
      }
      else
      {
        v27 = *(_WORD *)(v15 + 8);
      }
      word_1402F9134 = v27;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v28 = *(_DWORD *)(v15 + 8 * v25 + 8);
      LOWORD(v33) = v28;
      if ( (*(_DWORD *)(a1 + 124) & v28) != 0 )
        v33 = *(_DWORD *)(a1 + 136) ^ v28;
      result = (unsigned __int16)v33;
    }
    else
    {
      result = *(unsigned __int16 *)(v15 + 8 * v25 + 8);
    }
    if ( word_1402F9130 == (_WORD)result )
    {
      if ( word_1402F9134 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(v15 + 8 * v25 + 12)) )
        dword_1402F90D8 = 7;
    }
    else
    {
      dword_1402F90D8 = 6;
    }
  }
  return result;
}
