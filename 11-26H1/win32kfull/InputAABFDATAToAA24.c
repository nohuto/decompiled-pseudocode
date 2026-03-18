/*
 * XREFs of InputAABFDATAToAA24 @ 0x140139FE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

_BYTE *__fastcall InputAABFDATAToAA24(char *a1, _BYTE *a2)
{
  size_t v2; // r8
  _BYTE *v3; // r10
  char *v4; // r12
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rax
  unsigned int v7; // edx
  unsigned __int8 *v8; // r11
  __int64 v9; // r10
  unsigned __int8 *v10; // rdx
  unsigned __int8 v11; // cl
  char v12; // dl
  int v13; // ecx
  int v14; // ecx
  unsigned int v16; // r8d
  __int64 v17; // r11
  unsigned __int8 *v18; // rdi
  int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // r10d
  unsigned int v22; // r10d
  unsigned int v23; // r8d
  __int64 v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+28h] [rbp-30h]

  v2 = *((int *)a1 + 14);
  v3 = a2;
  v4 = a1;
  v5 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v6 = a2;
  v25 = *((_DWORD *)a1 + 18);
  v7 = HIBYTE(v25);
  v8 = &v6[v2];
  v24 = *((_QWORD *)a1 + 8);
  if ( (*a1 & 4) == 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      if ( (v24 & 2) != 0 )
      {
        memmove(v6, v5, v2);
      }
      else
      {
        v9 = v7;
        v10 = &v5[BYTE3(v24)];
        do
        {
          v6[2] = v10[BYTE2(v24) - (unsigned __int64)BYTE3(v24)];
          v6[1] = *v10;
          v11 = v10[BYTE4(v24) - (unsigned __int64)BYTE3(v24)];
          v10 += v9;
          *v6 = v11;
          v6 += 3;
        }
        while ( v6 < v8 );
      }
      goto LABEL_6;
    }
    if ( v7 == 4 )
    {
      do
      {
        v23 = *(_DWORD *)v5;
        v5 += 4;
        v6[2] = BYTE2(v24) & ((unsigned __int8)(v23 >> v25) << SBYTE5(v24));
        *v6 = BYTE4(v24) & ((unsigned __int8)(v23 >> SBYTE2(v25)) << SHIBYTE(v24));
        v6[1] = BYTE3(v24) & ((unsigned __int8)(v23 >> SBYTE1(v25)) << SBYTE6(v24));
        v6 += 3;
      }
      while ( v6 < v8 );
      goto LABEL_6;
    }
    do
    {
      v16 = *(unsigned __int16 *)v5;
      v5 += 2;
      v6[2] = BYTE2(v24) & ((unsigned __int8)(v16 >> v25) << SBYTE5(v24));
      v6[1] = BYTE3(v24) & ((unsigned __int8)(v16 >> SBYTE1(v25)) << SBYTE6(v24));
      *v6 = BYTE4(v24) & ((unsigned __int8)(v16 >> SBYTE2(v25)) << SHIBYTE(v24));
      v6 += 3;
    }
    while ( v6 < v8 );
LABEL_15:
    v4 = a1;
LABEL_6:
    v3 = a2;
    goto LABEL_7;
  }
  v17 = *((_QWORD *)a1 + 1);
  v18 = &v6[*((int *)a1 + 12)];
  if ( (v24 & 1) == 0 )
  {
    if ( v7 == 4 )
    {
      do
      {
        v21 = *(_DWORD *)v5;
        v5 += 4;
        *v6++ = (unsigned __int16)(*(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE4(v24) & ((unsigned __int8)(v21 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE2(v24) & ((unsigned __int8)(v21 >> v25) << SBYTE5(v24)))
                                            + 2048)
                                 + *(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE3(v24) & ((unsigned __int8)(v21 >> SBYTE1(v25)) << SBYTE6(v24)))
                                            + 1024)) >> 8;
      }
      while ( v6 < v18 );
    }
    else
    {
      do
      {
        v22 = *(unsigned __int16 *)v5;
        v5 += 2;
        *v6++ = (unsigned __int16)(*(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE4(v24) & ((unsigned __int8)(v22 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE2(v24) & ((unsigned __int8)(v22 >> v25) << SBYTE5(v24)))
                                            + 2048)
                                 + *(_WORD *)(v17
                                            + 4LL
                                            * (unsigned __int8)(BYTE3(v24) & ((unsigned __int8)(v22 >> SBYTE1(v25)) << SBYTE6(v24)))
                                            + 1024)) >> 8;
      }
      while ( v6 < v18 );
    }
    goto LABEL_15;
  }
  do
  {
    v19 = *(_DWORD *)(v17 + 4LL * v5[1] + 1024) + *(_DWORD *)(v17 + 4LL * v5[2] + 2048);
    v20 = *v5;
    v5 += v7;
    *v6++ = (unsigned __int16)(*(_WORD *)(v17 + 4 * v20) + v19) >> 8;
  }
  while ( v6 < v18 );
LABEL_7:
  v12 = *v4;
  if ( (*v4 & 2) != 0 )
  {
    v13 = *((_DWORD *)v4 + 13);
    if ( v13 && (v14 = v13 - 1, (*((_DWORD *)v4 + 13) = v14) != 0) )
    {
      *((_QWORD *)v4 + 5) += *((int *)v4 + 15);
    }
    else if ( (v12 & 1) != 0 )
    {
      *((_QWORD *)v4 + 5) = *((_QWORD *)v4 + 3);
      *((_DWORD *)v4 + 13) = *((_DWORD *)v4 + 8);
    }
    else
    {
      *v4 = v12 & 0xFD;
    }
  }
  return v3;
}
