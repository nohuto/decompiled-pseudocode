/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x140154420
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
  _BYTE *v6; // r10
  __int64 v8; // r15
  _BYTE *v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  _BYTE *v12; // r11
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbp
  int v15; // eax
  bool v16; // sf
  int v17; // eax
  unsigned __int64 v18; // rdi
  char v19; // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  signed __int64 v22; // r8
  _BYTE *v23; // rsi
  _DWORD *v24; // rsi
  unsigned __int64 v25; // r8
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  char v29; // r8
  unsigned __int64 v30; // r8
  _BYTE *v31; // r9
  __int16 v32; // cx
  unsigned __int64 v33; // r8
  __int64 v34; // r8
  __int64 v36; // r8
  __int64 v37; // r8

  v6 = a3;
  if ( a4 < 5 )
    return 3221226050LL;
  v8 = a2;
  v9 = a1;
  v10 = (unsigned __int64)&a1[v8];
  v11 = (unsigned __int64)&a3[a4];
  v12 = 0LL;
  v13 = v10 - 352;
  v14 = v11 - 86;
LABEL_3:
  v15 = *(_DWORD *)v6;
  v6 += 4;
  if ( (unsigned __int64)v6 < v14 && (unsigned __int64)v9 < v13 )
  {
    v16 = v15 < 0;
    v17 = 2 * v15 + 1;
    if ( !v16 )
    {
      while ( 1 )
      {
        if ( v17 < 0 )
        {
          *v9++ = *v6++;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
        {
          *(_WORD *)v9 = *(_WORD *)v6;
          v9 += 2;
          v6 += 2;
          goto LABEL_12;
        }
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        *(_DWORD *)v9 = *(_DWORD *)v6;
        if ( v16 )
        {
          v9 += 3;
          v6 += 3;
          goto LABEL_12;
        }
        v9 += 4;
        v6 += 4;
        v16 = (v17 & 0x40000000) != 0;
        v17 *= 2;
        if ( v16 )
          goto LABEL_12;
LABEL_10:
        v17 *= 2;
      }
    }
    while ( 1 )
    {
      v18 = *(unsigned __int16 *)v6;
      v6 += 2;
      v19 = v18;
      v20 = (v18 >> 3) + 1;
      v21 = v19 & 7;
      if ( v21 == 7 )
      {
        if ( v12 )
        {
          v25 = (unsigned __int64)(unsigned __int8)*v12 >> 4;
          v12 = 0LL;
        }
        else
        {
          v12 = v6++;
          v25 = *v12 & 0xF;
        }
        if ( v25 == 15 )
        {
          if ( (unsigned __int64)(v6 + 7) >= v14 )
            goto LABEL_66;
          v26 = (unsigned __int8)*v6++;
          if ( v26 == 255 )
          {
            v37 = *(unsigned __int16 *)v6;
            v6 += 2;
            if ( !v37 )
            {
              v37 = *(unsigned int *)v6;
              v6 += 4;
            }
            if ( v37 < 22 || &v9[v37 + 3] < v9 )
              return 3221226050LL;
            v26 = v37 - 22;
          }
          v25 = v26 + 15;
        }
        v21 = v25 + 7;
      }
      v22 = v21 + 3;
      v23 = &v9[-v20];
      if ( &v9[-v20] < a1 )
        return 3221226050LL;
      if ( v20 >= 4 )
        goto LABEL_16;
      *v9 = *v23;
      v27 = v20 - 1;
      if ( v27 )
      {
        v9[1] = v23[1];
        if ( v27 == 1 )
        {
          v22 -= 2LL;
          v9 += 2;
        }
        else
        {
          v9[2] = v23[2];
          v9 += 3;
          v22 -= 3LL;
        }
      }
      else
      {
        v22 -= 3LL;
        v9[1] = *v23;
        v9[2] = *v23;
        v9 += 3;
      }
      if ( v22 )
      {
LABEL_16:
        *(_DWORD *)v9 = *(_DWORD *)v23;
        *((_DWORD *)v9 + 1) = *((_DWORD *)v23 + 1);
        if ( v22 >= 9 )
        {
          v9 += 8;
          v24 = v23 + 8;
          v22 -= 8LL;
          while ( (unsigned __int64)v9 < v13 )
          {
            *(_DWORD *)v9 = *v24;
            *((_DWORD *)v9 + 1) = v24[1];
            *((_DWORD *)v9 + 2) = v24[2];
            *((_DWORD *)v9 + 3) = v24[3];
            if ( v22 < 17 )
              goto LABEL_17;
            v9 += 16;
            v24 += 4;
            v22 -= 16LL;
          }
          v31 = &v9[v22];
          if ( (unsigned __int64)&v9[v22] <= v10 )
            goto LABEL_53;
          return 3221226050LL;
        }
LABEL_17:
        v9 += v22;
      }
      if ( v17 >= 0 )
        goto LABEL_10;
LABEL_12:
      v17 *= 2;
      if ( !v17 )
        goto LABEL_3;
    }
  }
LABEL_42:
  v16 = v15 < 0;
  v17 = 2 * v15 + 1;
  if ( !v16 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( v6 == (_BYTE *)v11 )
      goto LABEL_69;
    if ( (unsigned __int64)(v6 + 1) >= v11 )
      break;
    v28 = *(unsigned __int16 *)v6;
    v6 += 2;
    v29 = v28;
    v20 = (v28 >> 3) + 1;
    v30 = v29 & 7;
    if ( v30 == 7 )
    {
      if ( v12 )
      {
        v33 = (unsigned __int64)(unsigned __int8)*v12 >> 4;
        v12 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)v6 >= v11 )
          return 3221226050LL;
        v12 = v6++;
        v33 = *v12 & 0xF;
      }
      if ( v33 == 15 )
      {
LABEL_66:
        if ( (unsigned __int64)v6 >= v11 )
          return 3221226050LL;
        v34 = (unsigned __int8)*v6++;
        if ( v34 == 255 )
        {
          if ( (unsigned __int64)(v6 + 1) >= v11 )
            return 3221226050LL;
          v36 = *(unsigned __int16 *)v6;
          v6 += 2;
          if ( !v36 )
          {
            if ( (unsigned __int64)(v6 + 3) >= v11 )
              return 3221226050LL;
            v36 = *(unsigned int *)v6;
            v6 += 4;
          }
          if ( v36 < 22 || &v9[v36 + 3] < v9 )
            return 3221226050LL;
          v34 = v36 - 22;
        }
        v33 = v34 + 15;
      }
      v30 = v33 + 7;
    }
    v22 = v30 + 3;
    v24 = &v9[-v20];
    if ( &v9[-v20] < a1 )
      return 3221226050LL;
    v31 = &v9[v22];
    if ( (unsigned __int64)&v9[v22] > v10 )
      return 3221226050LL;
LABEL_53:
    qmemcpy(v9, v24, v22);
    v9 = v31;
    while ( 2 )
    {
      if ( v17 >= 0 )
      {
        v17 *= 2;
LABEL_56:
        if ( v17 >= 0 )
        {
          v17 *= 2;
          if ( (unsigned __int64)(v6 + 2) > v11 || (unsigned __int64)(v9 + 2) > v10 )
            return 3221226050LL;
          v32 = *(_WORD *)v6;
          v6 += 2;
          *(_WORD *)v9 = v32;
          v9 += 2;
          continue;
        }
        if ( (unsigned __int64)v6 >= v11 || (unsigned __int64)v9 >= v10 )
          return 3221226050LL;
        *v9++ = *v6++;
      }
      break;
    }
    v17 *= 2;
    if ( !v17 )
    {
      if ( (unsigned __int64)(v6 + 3) >= v11 )
        return 3221226050LL;
      v15 = *(_DWORD *)v6;
      v6 += 4;
      goto LABEL_42;
    }
  }
  if ( (unsigned __int64)v9 < v10 )
    return 3221226050LL;
LABEL_69:
  *a6 = (_DWORD)v9 - (_DWORD)a1;
  return 0LL;
}
