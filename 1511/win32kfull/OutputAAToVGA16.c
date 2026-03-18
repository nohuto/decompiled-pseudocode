/*
 * XREFs of OutputAAToVGA16 @ 0x1C0252230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAAToVGA16(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        int a9)
{
  unsigned __int16 *v10; // r9
  unsigned __int8 *v12; // r10
  __int64 v13; // xmm1_8
  int v14; // eax
  unsigned __int8 *v15; // r10
  int v16; // r13d
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  unsigned __int64 v23; // r8
  char v24; // cl
  __int128 v26; // [rsp+0h] [rbp-48h]

  v10 = a6;
  v12 = a2;
  v13 = *(_QWORD *)(a5 - 8);
  v26 = *(_OWORD *)(a5 - 24);
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = *a4 & 0xF0 | VGA16Xlate[((HIDWORD(v26) & (*(_DWORD *)(a5 + 4LL * *v12) - (unsigned int)*a6) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v12[1] + 256)) - a6[1]) | (unsigned __int64)(HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v12[2] + 512)) - (unsigned int)a6[2]))) ^ 0x70000) >> 16];
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  v14 = *a1;
  v15 = v12 + 4;
  v16 = DWORD1(v26);
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= a3 )
        goto LABEL_12;
      v14 = v15[3] & 2;
      v19 = v14 | v15[7] & 1;
      if ( v19 )
        break;
LABEL_24:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v14) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v15 += 8;
    }
    v14 = v10[2];
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 == 1;
      v22 = v15[2];
      if ( !v21 )
      {
        LOBYTE(v14) = VGA16Xlate[(((unsigned int)v26 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | HIDWORD(v26) & (*(_DWORD *)(a5 + 4LL * v15[4]) - (unsigned int)v10[3]) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[5] + 256)) - v10[4]) | DWORD1(v26) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[1] + 256)) - (unsigned int)v10[1]) | HIDWORD(v13) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[6] + 512)) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v26) & (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v22 + 512)) - v14))) ^ 0x770000) >> 16];
LABEL_23:
        *a4 = v14;
        goto LABEL_24;
      }
      v23 = ((unsigned int)v26 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | DWORD1(v26) & (*(_DWORD *)(a5
                                                                                                  + 4LL * ((unsigned int)v15[1] + 256))
                                                                                      - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v26) & (unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v22 + 512)) - v14))) ^ 0x700000;
      v24 = *a4 & 0xF;
    }
    else
    {
      v23 = (HIDWORD(v26) & (*(_DWORD *)(a5 + 4LL * v15[4]) - (unsigned int)*v10) | (unsigned int)v13 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[5] + 256)) - v10[1]) | (unsigned __int64)(HIDWORD(v13) & (unsigned int)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[6] + 512)) - v14))) ^ 0x70000;
      v24 = *a4 & 0xF0;
    }
    LOBYTE(v14) = v24 | VGA16Xlate[v23 >> 16];
    goto LABEL_23;
  }
  if ( (unsigned __int64)v15 < a3 )
  {
    do
    {
      v17 = ((unsigned __int64)HIDWORD(v26) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v15[4])
                                                                       - (unsigned int)v10[3]) >> 16) | ((unsigned __int64)HIDWORD(v13) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[6] + 512)) - (unsigned int)v10[5]) >> 16) | ((unsigned __int64)(unsigned int)v13 >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[5] + 256)) - (unsigned int)v10[4]) >> 16) | ((unsigned __int64)DWORD1(v26) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[1] + 256)) - (unsigned int)v10[1]) >> 16) | ((unsigned __int64)DWORD2(v26) >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[2] + 512)) - (unsigned int)v10[2]) >> 16);
      v18 = *v10;
      v10 += 6;
      LOBYTE(v14) = VGA16Xlate[(((unsigned __int64)(unsigned int)v26 >> 16) & ((unsigned __int64)(unsigned int)(*(_DWORD *)(a5 + 4LL * *v15) - v18) >> 16) | v17) ^ 0x77];
      *a4++ = v14;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v14) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v15 += 8;
    }
    while ( (unsigned __int64)v15 < a3 );
    v16 = DWORD1(v26);
  }
LABEL_12:
  if ( HIBYTE(a9) && v15[3] )
  {
    LOBYTE(v14) = *a4 & 0xF | VGA16Xlate[(((unsigned int)v26 & (*(_DWORD *)(a5 + 4LL * *v15) - *v10) | v16 & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[1] + 256)) - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v26) & (*(_DWORD *)(a5 + 4LL * ((unsigned int)v15[2] + 512)) - (unsigned int)v10[2]))) ^ 0x700000) >> 16];
    *a4 = v14;
  }
  return v14;
}
