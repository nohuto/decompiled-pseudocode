/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x1800F1184
 * Callers:
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r9
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned __int16 v23; // r10
  int v24; // eax
  unsigned __int16 v25; // ax
  __int64 v26; // rcx
  int v27; // eax
  __int16 v28; // ax
  int v29; // eax
  int v31; // [rsp+8h] [rbp-10h]
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]

  v4 = (_QWORD *)(a1 + 288);
  for ( i = *(_QWORD **)(a1 + 288); ; i = (_QWORD *)*i )
  {
    if ( i == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      v8 = *v7;
      if ( (unsigned __int64 *)*v7 != v7 )
      {
        v9 = dword_1801422B8;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            LOWORD(i) = 5;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_1801422B8 = v9;
          }
          v8 = *(_QWORD *)v8;
        }
        while ( (unsigned __int64 *)v8 != v7 );
      }
      return (__int16)i;
    }
    v6 = i - 3;
    if ( i[3] <= a2 && v6[9] > a2 )
      break;
  }
  v10 = (_QWORD *)v6[12];
  v11 = 0LL;
  v12 = 0LL;
  while ( v10 != v6 + 12 )
  {
    v13 = v10[2];
    v14 = v13 + v10[3];
    if ( v14 < a2 && v14 > (unsigned __int64)v11 )
      v11 = (_QWORD *)(v13 + v10[3]);
    if ( v13 > a2 && (!v12 || v13 < v12[4]) )
      v12 = v10 - 2;
    v10 = (_QWORD *)*v10;
  }
  v15 = 0LL;
  if ( v11 )
    v6 = v11;
  v16 = 0LL;
  if ( (unsigned __int64)v6 < a2 )
  {
    v17 = *(_DWORD *)(a1 + 124);
    do
    {
      v16 = (__int64)v6;
      if ( v17 )
      {
        v18 = *((_DWORD *)v6 + 2);
        v17 = *(_DWORD *)(a1 + 124);
        LOWORD(v31) = v18;
        if ( (v17 & v18) != 0 )
          v31 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v31;
      }
      else
      {
        v19 = *((_WORD *)v6 + 4);
      }
      if ( !v19 )
        break;
      v6 += 2 * v19;
    }
    while ( (unsigned __int64)v6 < a2 );
  }
  for ( j = (unsigned __int64)(v12 - 2); j > a2; j += -16LL * v21 )
  {
    v15 = j;
    v21 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v21 )
      break;
  }
  qword_1801422E8 = v16;
  qword_1801422F0 = v15;
  if ( !v16 || !v15 )
    goto LABEL_74;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(v16 + 8);
    LOWORD(v32) = v22;
    if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
      v32 = *(_DWORD *)(a1 + 136) ^ v22;
    v23 = v32;
  }
  else
  {
    v23 = *(_WORD *)(v16 + 8);
  }
  i = (_QWORD *)(v16 + 16LL * v23);
  if ( i != (_QWORD *)(v15 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12))) )
  {
    dword_1801422B8 = 4;
  }
  else
  {
LABEL_74:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v24 = *(_DWORD *)(v16 + 8);
      LOWORD(v33) = v24;
      if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
        v33 = *(_DWORD *)(a1 + 136) ^ v24;
      v25 = v33;
    }
    else
    {
      v25 = *(_WORD *)(v16 + 8);
    }
    v26 = 2LL * v25;
    if ( v15 )
      word_180142310 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v15 + 12);
    if ( v16 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = *(_DWORD *)(v16 + 8);
        LOWORD(v34) = v27;
        if ( (v27 & *(_DWORD *)(a1 + 124)) != 0 )
          v34 = *(_DWORD *)(a1 + 136) ^ v27;
        v28 = v34;
      }
      else
      {
        v28 = *(_WORD *)(v16 + 8);
      }
      word_180142314 = v28;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = *(_DWORD *)(v16 + 8 * v26 + 8);
      LOWORD(v35) = v29;
      if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
        v35 = *(_DWORD *)(a1 + 136) ^ v29;
      LOWORD(i) = v35;
    }
    else
    {
      LOWORD(i) = *(_WORD *)(v16 + 8 * v26 + 8);
    }
    if ( word_180142310 == (_WORD)i )
    {
      LOWORD(i) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v16 + 8 * v26 + 12);
      if ( word_180142314 != (_WORD)i )
        dword_1801422B8 = 7;
    }
    else
    {
      dword_1801422B8 = 6;
    }
  }
  return (__int16)i;
}
