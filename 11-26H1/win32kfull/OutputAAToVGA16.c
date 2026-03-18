/*
 * XREFs of OutputAAToVGA16 @ 0x140308220
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
  int v13; // eax
  unsigned __int8 *v14; // r10
  int v15; // ecx
  int v16; // r8d
  unsigned __int64 v17; // r8
  char v18; // al
  unsigned __int64 v19; // r8
  int v20; // ecx
  __int128 v22; // [rsp+0h] [rbp-20h]
  unsigned __int64 v23; // [rsp+10h] [rbp-10h]

  v10 = a6;
  v12 = a2;
  v22 = *(_OWORD *)(a5 - 24);
  v23 = *(_QWORD *)(a5 - 8);
  if ( (_BYTE)a9 )
  {
    v12 = a2 + 4;
    if ( a2[7] )
      *a4 = VGA16Xlate[(HIWORD(*((_QWORD *)&v22 + 1)) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * *v12)
                                                                          - (unsigned int)*a6) >> 16) | HIWORD(v23) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v12[2] + 2048) - (unsigned int)a6[2]) >> 16) | ((unsigned __int64)(unsigned int)v23 >> 16) & ((unsigned __int64)(*(_DWORD *)(a5 + 4LL * v12[1] + 1024) - (unsigned int)a6[1]) >> 16)) ^ 7] | *a4 & 0xF0;
    ++a4;
    v10 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v10 = (unsigned __int16 *)((char *)v10 + a8);
  }
  v13 = *a1;
  v14 = v12 + 4;
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= a3 )
        goto LABEL_25;
      v13 = v14[3] & 2;
      if ( v13 | v14[7] & 1 )
        break;
LABEL_16:
      ++a4;
      v10 += 6;
      if ( (unsigned __int64)v10 >= a7 )
      {
        LOBYTE(v13) = a8;
        v10 = (unsigned __int16 *)((char *)v10 + a8);
      }
      v14 += 8;
    }
    if ( (v13 | v14[7] & 1) == 1 )
    {
      v17 = (HIDWORD(v22) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)*v10) | (unsigned int)v23 & (*(_DWORD *)(a5 + 4LL * v14[5] + 1024) - v10[1]) | (unsigned __int64)(HIDWORD(v23) & (*(_DWORD *)(a5 + 4LL * v14[6] + 2048) - (unsigned int)v10[2]))) ^ 0x70000;
      v18 = *a4 & 0xF0;
    }
    else
    {
      v15 = v10[2];
      v16 = *(_DWORD *)(a5 + 4LL * v14[2] + 2048);
      if ( (v13 | v14[7] & 1) != 2 )
      {
        LOBYTE(v13) = VGA16Xlate[(((unsigned int)v22 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | HIDWORD(v22) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)v10[3]) | (unsigned int)v23 & (*(_DWORD *)(a5 + 4LL * v14[5] + 1024) - v10[4]) | DWORD1(v22) & (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - (unsigned int)v10[1]) | HIDWORD(v23) & (*(_DWORD *)(a5 + 4LL * v14[6] + 2048) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v22) & (unsigned int)(v16 - v15))) ^ 0x770000) >> 16];
LABEL_15:
        *a4 = v13;
        goto LABEL_16;
      }
      v17 = ((unsigned int)v22 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | DWORD1(v22) & (*(_DWORD *)(a5
                                                                                                  + 4LL * v14[1]
                                                                                                  + 1024)
                                                                                      - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v22) & (unsigned int)(v16 - v15))) ^ 0x700000;
      v18 = *a4 & 0xF;
    }
    LOBYTE(v13) = VGA16Xlate[v17 >> 16] | v18;
    goto LABEL_15;
  }
  while ( (unsigned __int64)v14 < a3 )
  {
    v19 = HIDWORD(v22) & (*(_DWORD *)(a5 + 4LL * v14[4]) - (unsigned int)v10[3]) | (unsigned int)v23 & (*(_DWORD *)(a5 + 4LL * v14[5] + 1024) - v10[4]) | DWORD1(v22) & (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - (unsigned int)v10[1]) | HIDWORD(v23) & (*(_DWORD *)(a5 + 4LL * v14[6] + 2048) - (unsigned int)v10[5]) | (unsigned __int64)(DWORD2(v22) & (*(_DWORD *)(a5 + 4LL * v14[2] + 2048) - (unsigned int)v10[2]));
    v20 = *v10;
    v10 += 6;
    LOBYTE(v13) = VGA16Xlate[(((unsigned int)v22 & (*(_DWORD *)(a5 + 4LL * *v14) - v20) | v19) ^ 0x770000) >> 16];
    *a4++ = v13;
    if ( (unsigned __int64)v10 >= a7 )
    {
      LOBYTE(v13) = a8;
      v10 = (unsigned __int16 *)((char *)v10 + a8);
    }
    v14 += 8;
  }
LABEL_25:
  if ( HIBYTE(a9) && v14[3] )
  {
    LOBYTE(v13) = VGA16Xlate[(((unsigned int)v22 & (*(_DWORD *)(a5 + 4LL * *v14) - *v10) | DWORD1(v22) & (*(_DWORD *)(a5 + 4LL * v14[1] + 1024) - (unsigned int)v10[1]) | (unsigned __int64)(DWORD2(v22) & (*(_DWORD *)(a5 + 4LL * v14[2] + 2048) - (unsigned int)v10[2]))) ^ 0x700000) >> 16] | *a4 & 0xF;
    *a4 = v13;
  }
  return v13;
}
