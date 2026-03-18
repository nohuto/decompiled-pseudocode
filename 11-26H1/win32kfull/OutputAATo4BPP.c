/*
 * XREFs of OutputAATo4BPP @ 0x140307600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  _BYTE *v9; // rsi
  unsigned __int16 *v10; // r11
  int v13; // ecx
  char v15; // edx^2
  __int64 v16; // rax
  unsigned __int8 *v17; // rbx
  char v18; // r14d^2
  char v19; // r15d^2
  char v20; // r12d^2
  char v21; // r10
  char v22; // r9
  int v23; // r8d
  int v24; // edx
  int v25; // r9d
  int v26; // edx
  char v27; // r9
  char v28; // r9
  __int128 v30; // [rsp+10h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-10h]

  v9 = a4;
  v10 = a6;
  v13 = 0;
  v31 = *(_QWORD *)(a5 - 8);
  v30 = *(_OWORD *)(a5 - 24);
  if ( BYTE1(a9) )
    v13 = 2003830647;
  v15 = BYTE2(*(_QWORD *)(a5 - 8));
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v15 = BYTE2(*(_QWORD *)(a5 - 8));
      *a4 = *a4 & 0xF0 | (BYTE1(a9) != 0 ? 7 : 0) ^ (BYTE14(v30) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v31) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v31) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
    }
    v9 = a4 + 1;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v16) = *a1;
  v17 = a2 + 4;
  v18 = BYTE10(v30);
  v19 = BYTE6(v30);
  v20 = BYTE2(v30);
  if ( (v16 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v17 >= a3 )
        goto LABEL_15;
      LODWORD(v16) = v17[3] & 2;
      if ( (unsigned int)v16 | v17[7] & 1 )
        break;
LABEL_27:
      ++v9;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v16) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v17 += 8;
    }
    if ( ((unsigned int)v16 | v17[7] & 1) == 1 )
    {
      v28 = BYTE1(v13) ^ (BYTE14(v30) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)*v10) >> 16) | BYTE2(v31) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE6(v31) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[2]) >> 16));
      LOBYTE(v16) = *v9 & 0xF0;
    }
    else
    {
      v25 = *(_DWORD *)(a5 + 4LL * v17[2] + 2048);
      v26 = v10[2];
      if ( ((unsigned int)v16 | v17[7] & 1) != 2 )
      {
        LODWORD(v16) = WORD1(v30);
        v27 = v13 ^ (BYTE2(v30) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | BYTE14(v30) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)v10[3]) >> 16) | BYTE2(v31) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[4]) >> 16) | BYTE6(v30) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE6(v31) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[5]) >> 16) | BYTE10(v30) & ((unsigned int)(v25 - v26) >> 16));
LABEL_26:
        *v9 = v27;
        goto LABEL_27;
      }
      v28 = BYTE2(v13) ^ (BYTE2(v30) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | BYTE6(v30) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE10(v30) & ((unsigned int)(v25 - v26) >> 16));
      LOBYTE(v16) = *v9 & 0xF;
    }
    v27 = v16 | v28;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v21 = v15;
    do
    {
      v22 = v21 & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v10[4]) >> 16) | BYTE6(v31) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v10[5]) >> 16) | BYTE6(v30) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | BYTE10(v30) & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v10[2]) >> 16);
      v16 = *v17;
      v23 = *(_DWORD *)(a5 + 4LL * v17[4]) - v10[3];
      v24 = *v10;
      v10 += 6;
      *v9++ = v13 ^ (BYTE2(v30) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v16) - v24) >> 16) | BYTE14(v30) & BYTE2(v23) | v22);
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v16) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v17 += 8;
    }
    while ( (unsigned __int64)v17 < a3 );
    v18 = BYTE10(v30);
    v19 = BYTE6(v30);
    v20 = BYTE2(v30);
  }
LABEL_15:
  if ( BYTE3(a9) && v17[3] )
  {
    LOBYTE(v16) = *v9 & 0xF;
    *v9 = v16 | BYTE2(v13) ^ (v20 & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v10) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v10[1]) >> 16) | v18 & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v10[2]) >> 16));
  }
  return v16;
}
