/*
 * XREFs of OutputAATo4BPP @ 0x1C0251620
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
  unsigned __int16 *v10; // rbx
  __int128 v13; // xmm0
  int v14; // ecx
  char v16; // r8d^2
  char v17; // edx^2
  char v18; // r9d^2
  __int64 v19; // rax
  unsigned __int8 *v20; // r11
  char v21; // r14d^2
  char v22; // r15d^2
  char v23; // r12d^2
  char v24; // r10
  char v25; // r12
  char v26; // r9
  int v27; // r8d
  int v28; // edx
  int v29; // edx
  int v30; // edx
  bool v31; // zf
  int v32; // edx
  unsigned int v33; // r9d
  char v34; // r9
  char v35; // r9
  __int64 v37; // [rsp+20h] [rbp-10h]

  v10 = a6;
  v13 = *(_OWORD *)(a5 - 24);
  v14 = 0;
  v37 = *(_QWORD *)(a5 - 8);
  v16 = BYTE6(v37);
  if ( BYTE1(a9) )
    v14 = 2003830647;
  v17 = BYTE2(v37);
  v18 = BYTE14(*(_OWORD *)(a5 - 24));
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v17 = BYTE2(v37);
      v16 = BYTE6(v37);
      *a4 = *a4 & 0xF0 | BYTE1(v14) ^ (BYTE14(v13) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)a2[1] + 256)) - (unsigned int)a6[1]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)a2[2] + 512)) - (unsigned int)a6[2]) >> 16));
      v18 = BYTE14(v13);
    }
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  LODWORD(v19) = *a1;
  v20 = a2 + 4;
  v21 = BYTE10(v13);
  v22 = BYTE6(v13);
  v23 = BYTE2(v13);
  if ( (v19 & 0x80u) != 0LL )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v20 >= a3 )
        goto LABEL_15;
      LODWORD(v19) = v20[3] & 2;
      v29 = v19 | v20[7] & 1;
      if ( v29 )
        break;
LABEL_27:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v19) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v16 = BYTE6(v37);
      v20 += 8;
    }
    LODWORD(v19) = v10[2];
    v30 = v29 - 1;
    if ( v30 )
    {
      v31 = v30 == 1;
      v32 = v20[2];
      if ( !v31 )
      {
        v33 = (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v32 + 512)) - v19) >> 16;
        LODWORD(v19) = WORD1(v13);
        v34 = v14 ^ (BYTE2(v13) & ((*(_DWORD *)(a5 + 4LL * *v20) - (unsigned int)*v10) >> 16) | BYTE14(v13) & ((*(_DWORD *)(a5 + 4LL * v20[4]) - (unsigned int)v10[3]) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[5] + 256)) - (unsigned int)v10[4]) >> 16) | BYTE6(v13) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[1] + 256)) - (unsigned int)v10[1]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[6] + 512)) - (unsigned int)v10[5]) >> 16) | BYTE10(v13) & v33);
LABEL_26:
        *a4 = v34;
        goto LABEL_27;
      }
      v35 = BYTE2(v14) ^ (BYTE2(v13) & ((*(_DWORD *)(a5 + 4LL * *v20) - (unsigned int)*v10) >> 16) | BYTE6(v13) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[1] + 256)) - (unsigned int)v10[1]) >> 16) | BYTE10(v13) & ((unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v32 + 512)) - v19) >> 16));
      LOBYTE(v19) = *a4 & 0xF;
    }
    else
    {
      v35 = BYTE1(v14) ^ (BYTE14(v13) & ((*(_DWORD *)(a5 + 4LL * v20[4]) - (unsigned int)*v10) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[5] + 256)) - (unsigned int)v10[1]) >> 16) | v16 & ((unsigned int)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[6] + 512)) - v19) >> 16));
      LOBYTE(v19) = *a4 & 0xF0;
    }
    v34 = v19 | v35;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v20 < a3 )
  {
    v24 = v16;
    v25 = v17;
    do
    {
      v26 = BYTE10(v13) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[2] + 512)) - (unsigned int)v10[2]) >> 16) | BYTE6(v13) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[1] + 256)) - (unsigned int)v10[1]) >> 16) | v24 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[6] + 512)) - (unsigned int)v10[5]) >> 16) | v25 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[5] + 256)) - (unsigned int)v10[4]) >> 16);
      v19 = *v20;
      v27 = *(_DWORD *)(a5 + 4LL * v20[4]) - v10[3];
      v28 = *v10;
      v10 += 6;
      *a4++ = v14 ^ (BYTE2(v13) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v19) - v28) >> 16) | v18 & BYTE2(v27) | v26);
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v19) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v20 += 8;
    }
    while ( (unsigned __int64)v20 < a3 );
    v21 = BYTE10(v13);
    v22 = BYTE6(v13);
    v23 = BYTE2(v13);
  }
LABEL_15:
  if ( BYTE3(a9) && v20[3] )
  {
    LOBYTE(v19) = *a4 & 0xF;
    *a4 = v19 | BYTE2(v14) ^ (v23 & ((*(_DWORD *)(a5 + 4LL * *v20) - (unsigned int)*v10) >> 16) | v22 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[1] + 256)) - (unsigned int)v10[1]) >> 16) | v21 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v20[2] + 512)) - (unsigned int)v10[2]) >> 16));
  }
  return v19;
}
