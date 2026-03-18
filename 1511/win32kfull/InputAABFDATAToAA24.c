/*
 * XREFs of InputAABFDATAToAA24 @ 0x1C00E4580
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

char *__fastcall InputAABFDATAToAA24(char *a1, char *a2)
{
  __int64 v2; // xmm0_8
  char *v3; // rbx
  unsigned __int8 *v4; // r10
  char *v5; // r9
  char *v6; // rdi
  size_t v7; // r8
  char v8; // al
  unsigned int v9; // ecx
  char *v10; // r11
  char v11; // cl
  int v12; // eax
  int v13; // eax
  __int64 v15; // rdi
  unsigned __int8 *v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // r11
  char *v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // [rsp+28h] [rbp-8h]

  v2 = *((_QWORD *)a1 + 8);
  v3 = a1;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v5 = a2;
  v6 = a2;
  v28 = *((_DWORD *)a1 + 18);
  v7 = *((int *)a1 + 14);
  v8 = *a1;
  v9 = HIBYTE(v28);
  v10 = &a2[v7];
  if ( (v8 & 4) != 0 )
  {
    v18 = *((_QWORD *)v3 + 1);
    v19 = &a2[*((int *)v3 + 12)];
    if ( (v2 & 1) != 0 )
    {
      do
      {
        v20 = *(_DWORD *)(v18 + 4LL * v4[1] + 1024) + *(_DWORD *)(v18 + 4LL * v4[2] + 2048);
        v21 = *v4;
        v4 += v9;
        *v5++ = (unsigned __int16)(*(_WORD *)(v18 + 4 * v21) + v20) >> 8;
      }
      while ( v5 < v19 );
    }
    else
    {
      if ( v9 == 4 )
      {
        do
        {
          v22 = *(_DWORD *)v4;
          v23 = *(_DWORD *)v4;
          v4 += 4;
          *v5++ = (unsigned __int16)(*(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE4(v2) & ((unsigned __int8)(v22 >> SBYTE2(v28)) << SHIBYTE(v2))))
                                   + *(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE3(v2) & ((unsigned __int8)(v22 >> SBYTE1(v28)) << SBYTE6(v2)))
                                              + 1024)
                                   + *(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE2(v2) & ((unsigned __int8)(v23 >> v28) << SBYTE5(v2)))
                                              + 2048)) >> 8;
        }
        while ( v5 < v19 );
      }
      else
      {
        do
        {
          v24 = *(unsigned __int16 *)v4;
          v4 += 2;
          *v5++ = (unsigned __int16)(*(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE4(v2) & ((unsigned __int8)(v24 >> SBYTE2(v28)) << SHIBYTE(v2))))
                                   + *(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE3(v2) & ((unsigned __int8)(v24 >> SBYTE1(v28)) << SBYTE6(v2)))
                                              + 1024)
                                   + *(_WORD *)(v18
                                              + 4LL
                                              * (unsigned __int8)(BYTE2(v2) & ((unsigned __int8)(v24 >> v28) << SBYTE5(v2)))
                                              + 2048)) >> 8;
        }
        while ( v5 < v19 );
      }
      v3 = a1;
    }
  }
  else if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 2) != 0 )
    {
      memmove(a2, v4, v7);
      goto LABEL_5;
    }
    v15 = v9;
    v16 = &v4[BYTE3(v2)];
    do
    {
      v5[2] = v16[BYTE2(v2) - (unsigned __int64)BYTE3(v2)];
      v5[1] = *v16;
      v17 = v16[BYTE4(v2) - (unsigned __int64)BYTE3(v2)];
      v16 += v15;
      *v5 = v17;
      v5 += 3;
    }
    while ( v5 < v10 );
  }
  else if ( v9 == 4 )
  {
    do
    {
      v25 = *(_DWORD *)v4;
      v26 = *(_DWORD *)v4;
      v4 += 4;
      v5[2] = BYTE2(v2) & ((unsigned __int8)(v26 >> v28) << SBYTE5(v2));
      *v5 = BYTE4(v2) & ((unsigned __int8)(v25 >> SBYTE2(v28)) << SHIBYTE(v2));
      v5[1] = BYTE3(v2) & ((unsigned __int8)(v25 >> SBYTE1(v28)) << SBYTE6(v2));
      v5 += 3;
    }
    while ( v5 < v10 );
  }
  else
  {
    do
    {
      v27 = *(unsigned __int16 *)v4;
      v4 += 2;
      v5[2] = BYTE2(v2) & ((unsigned __int8)(v27 >> v28) << SBYTE5(v2));
      *v5 = BYTE4(v2) & ((unsigned __int8)(v27 >> SBYTE2(v28)) << SHIBYTE(v2));
      v5[1] = BYTE3(v2) & ((unsigned __int8)(v27 >> SBYTE1(v28)) << SBYTE6(v2));
      v5 += 3;
    }
    while ( v5 < v10 );
  }
  v6 = a2;
LABEL_5:
  v11 = *v3;
  if ( (*v3 & 2) != 0 )
  {
    v12 = *((_DWORD *)v3 + 13);
    if ( v12 && (v13 = v12 - 1, (*((_DWORD *)v3 + 13) = v13) != 0) )
    {
      *((_QWORD *)v3 + 5) += *((int *)v3 + 15);
    }
    else if ( (v11 & 1) != 0 )
    {
      *((_QWORD *)v3 + 5) = *((_QWORD *)v3 + 3);
      *((_DWORD *)v3 + 13) = *((_DWORD *)v3 + 8);
    }
    else
    {
      *v3 = v11 & 0xFD;
    }
  }
  return v6;
}
