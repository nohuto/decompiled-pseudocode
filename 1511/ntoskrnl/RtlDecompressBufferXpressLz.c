/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x14011F0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  __int64 v7; // r15
  _BYTE *v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  _BYTE *v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  int v14; // eax
  bool v15; // sf
  int v16; // eax
  unsigned __int64 v17; // rdi
  char v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  signed __int64 v21; // r9
  _BYTE *v22; // rsi
  _DWORD *v23; // rsi
  unsigned __int64 v24; // r9
  __int64 v25; // r9
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  char v28; // r9
  unsigned __int64 v29; // r9
  _BYTE *v30; // r10
  __int16 v31; // cx
  unsigned __int64 v32; // r9
  __int64 v33; // r9
  __int64 v35; // r9
  __int64 v36; // r9

  if ( a4 < 5 )
    return 3221226050LL;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64)&a1[v7];
  v10 = (unsigned __int64)&a3[a4];
  v11 = 0LL;
  v12 = v9 - 352;
  v13 = v10 - 86;
LABEL_3:
  v14 = *(_DWORD *)a3;
  a3 += 4;
  if ( (unsigned __int64)a3 < v13 && (unsigned __int64)v8 < v12 )
  {
    v15 = v14 < 0;
    v16 = 2 * v14 + 1;
    if ( !v15 )
    {
      while ( 1 )
      {
        if ( v16 < 0 )
        {
          *v8++ = *a3++;
          goto LABEL_12;
        }
        v15 = (v16 & 0x40000000) != 0;
        v16 *= 2;
        if ( v15 )
        {
          *(_WORD *)v8 = *(_WORD *)a3;
          v8 += 2;
          a3 += 2;
          goto LABEL_12;
        }
        v15 = (v16 & 0x40000000) != 0;
        v16 *= 2;
        *(_DWORD *)v8 = *(_DWORD *)a3;
        if ( v15 )
        {
          v8 += 3;
          a3 += 3;
          goto LABEL_12;
        }
        v8 += 4;
        a3 += 4;
        v15 = (v16 & 0x40000000) != 0;
        v16 *= 2;
        if ( v15 )
          goto LABEL_12;
LABEL_10:
        v16 *= 2;
      }
    }
    while ( 1 )
    {
      v17 = *(unsigned __int16 *)a3;
      a3 += 2;
      v18 = v17;
      v19 = (v17 >> 3) + 1;
      v20 = v18 & 7;
      if ( v20 == 7 )
      {
        if ( v11 )
        {
          v24 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
          v11 = 0LL;
        }
        else
        {
          v11 = a3++;
          v24 = *v11 & 0xF;
        }
        if ( v24 == 15 )
        {
          if ( (unsigned __int64)(a3 + 7) >= v13 )
            goto LABEL_65;
          v25 = (unsigned __int8)*a3++;
          if ( v25 == 255 )
          {
            v36 = *(unsigned __int16 *)a3;
            a3 += 2;
            if ( !v36 )
            {
              v36 = *(unsigned int *)a3;
              a3 += 4;
            }
            if ( v36 < 22 || &v8[v36 + 3] < v8 )
              return 3221226050LL;
            v25 = v36 - 22;
          }
          v24 = v25 + 15;
        }
        v20 = v24 + 7;
      }
      v21 = v20 + 3;
      v22 = &v8[-v19];
      if ( &v8[-v19] < a1 )
        return 3221226050LL;
      if ( v19 >= 4 )
        goto LABEL_16;
      *v8 = *v22;
      v26 = v19 - 1;
      if ( v26 )
      {
        v8[1] = v22[1];
        if ( v26 == 1 )
        {
          v21 -= 2LL;
          v8 += 2;
        }
        else
        {
          v8[2] = v22[2];
          v8 += 3;
          v21 -= 3LL;
        }
      }
      else
      {
        v21 -= 3LL;
        v8[1] = *v22;
        v8[2] = *v22;
        v8 += 3;
      }
      if ( v21 )
      {
LABEL_16:
        *(_DWORD *)v8 = *(_DWORD *)v22;
        *((_DWORD *)v8 + 1) = *((_DWORD *)v22 + 1);
        if ( v21 >= 9 )
        {
          v8 += 8;
          v23 = v22 + 8;
          v21 -= 8LL;
          while ( (unsigned __int64)v8 < v12 )
          {
            *(_DWORD *)v8 = *v23;
            *((_DWORD *)v8 + 1) = v23[1];
            *((_DWORD *)v8 + 2) = v23[2];
            *((_DWORD *)v8 + 3) = v23[3];
            if ( v21 < 17 )
              goto LABEL_17;
            v8 += 16;
            v23 += 4;
            v21 -= 16LL;
          }
          v30 = &v8[v21];
          if ( (unsigned __int64)&v8[v21] <= v9 )
            goto LABEL_53;
          return 3221226050LL;
        }
LABEL_17:
        v8 += v21;
      }
      if ( v16 >= 0 )
        goto LABEL_10;
LABEL_12:
      v16 *= 2;
      if ( !v16 )
        goto LABEL_3;
    }
  }
LABEL_42:
  v15 = v14 < 0;
  v16 = 2 * v14 + 1;
  if ( !v15 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( a3 == (_BYTE *)v10 )
      goto LABEL_69;
    if ( (unsigned __int64)(a3 + 1) >= v10 )
      break;
    v27 = *(unsigned __int16 *)a3;
    a3 += 2;
    v28 = v27;
    v19 = (v27 >> 3) + 1;
    v29 = v28 & 7;
    if ( v29 == 7 )
    {
      if ( v11 )
      {
        v32 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
        v11 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)a3 >= v10 )
          return 3221226050LL;
        v11 = a3++;
        v32 = *v11 & 0xF;
      }
      if ( v32 == 15 )
      {
LABEL_65:
        if ( (unsigned __int64)a3 >= v10 )
          return 3221226050LL;
        v33 = (unsigned __int8)*a3++;
        if ( v33 == 255 )
        {
          if ( (unsigned __int64)(a3 + 1) >= v10 )
            return 3221226050LL;
          v35 = *(unsigned __int16 *)a3;
          a3 += 2;
          if ( !v35 )
          {
            if ( (unsigned __int64)(a3 + 3) >= v10 )
              return 3221226050LL;
            v35 = *(unsigned int *)a3;
            a3 += 4;
          }
          if ( v35 < 22 || &v8[v35 + 3] < v8 )
            return 3221226050LL;
          v33 = v35 - 22;
        }
        v32 = v33 + 15;
      }
      v29 = v32 + 7;
    }
    v21 = v29 + 3;
    v23 = &v8[-v19];
    if ( &v8[-v19] < a1 )
      return 3221226050LL;
    v30 = &v8[v21];
    if ( (unsigned __int64)&v8[v21] > v9 )
      return 3221226050LL;
LABEL_53:
    qmemcpy(v8, v23, v21);
    v8 = v30;
    while ( 2 )
    {
      if ( v16 >= 0 )
      {
        v16 *= 2;
LABEL_56:
        if ( v16 >= 0 )
        {
          v16 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v10 || (unsigned __int64)(v8 + 2) > v9 )
            return 3221226050LL;
          v31 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)v8 = v31;
          v8 += 2;
          continue;
        }
        if ( (unsigned __int64)a3 >= v10 || (unsigned __int64)v8 >= v9 )
          return 3221226050LL;
        *v8++ = *a3++;
      }
      break;
    }
    v16 *= 2;
    if ( !v16 )
    {
      if ( (unsigned __int64)(a3 + 3) >= v10 )
        return 3221226050LL;
      v14 = *(_DWORD *)a3;
      a3 += 4;
      goto LABEL_42;
    }
  }
  if ( (unsigned __int64)v8 < v9 )
    return 3221226050LL;
LABEL_69:
  *a6 = (_DWORD)v8 - (_DWORD)a1;
  return 0LL;
}
