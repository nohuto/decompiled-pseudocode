/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x18008AE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(_BYTE *a1, int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // r15
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rbp
  _BYTE *v9; // r14
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  int v12; // r9d
  bool v13; // sf
  int v14; // r9d
  unsigned __int64 v15; // rdi
  char v16; // dl
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rdx
  _BYTE *v20; // rsi
  _DWORD *v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  char v26; // dl
  unsigned __int64 v27; // rdx
  __int16 v28; // ax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx

  v6 = a1;
  if ( a4 >= 5 )
  {
    v7 = (unsigned __int64)&a3[a4];
    v8 = (unsigned __int64)&a1[a2];
    v9 = 0LL;
    v10 = v7 - 86;
    v11 = v8 - 352;
    while ( 1 )
    {
      v12 = *(_DWORD *)a3;
      a3 += 4;
      if ( (unsigned __int64)a1 >= v11 || (unsigned __int64)a3 >= v10 )
        break;
      v13 = v12 < 0;
      v14 = 2 * v12 + 1;
      if ( !v13 )
      {
        while ( 1 )
        {
          if ( v14 < 0 )
          {
            *a1++ = *a3++;
            goto LABEL_12;
          }
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
          {
            *(_WORD *)a1 = *(_WORD *)a3;
            a1 += 2;
            a3 += 2;
            goto LABEL_12;
          }
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          *(_DWORD *)a1 = *(_DWORD *)a3;
          if ( v13 )
          {
            a1 += 3;
            a3 += 3;
            goto LABEL_12;
          }
          a1 += 4;
          a3 += 4;
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
            goto LABEL_12;
LABEL_10:
          v14 *= 2;
        }
      }
      do
      {
        v15 = *(unsigned __int16 *)a3;
        a3 += 2;
        v16 = v15;
        v17 = (v15 >> 3) + 1;
        v18 = v16 & 7;
        if ( v18 == 7 )
        {
          if ( v9 )
          {
            v22 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            v9 = a3++;
            v22 = *v9 & 0xF;
          }
          if ( v22 == 15 )
          {
            if ( (unsigned __int64)(a3 + 7) >= v10 )
              goto LABEL_65;
            v23 = (unsigned __int8)*a3++;
            if ( v23 == 255 )
            {
              v24 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v24 )
              {
                v24 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v24 < 22 || &a1[v24 + 3] < a1 )
                return 3221226050LL;
              v23 = v24 - 22;
            }
            v22 = v23 + 15;
          }
          v18 = v22 + 7;
        }
        v19 = v18 + 3;
        v20 = &a1[-v17];
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
        if ( v17 >= 4 )
          goto LABEL_16;
        *a1 = *v20;
        v32 = v17 - 1;
        if ( v32 )
        {
          a1[1] = v20[1];
          if ( v32 == 1 )
          {
            v19 -= 2LL;
            a1 += 2;
          }
          else
          {
            a1[2] = v20[2];
            a1 += 3;
            v19 -= 3LL;
          }
        }
        else
        {
          v19 -= 3LL;
          a1[1] = *v20;
          a1[2] = *v20;
          a1 += 3;
        }
        if ( v19 )
        {
LABEL_16:
          *(_DWORD *)a1 = *(_DWORD *)v20;
          *((_DWORD *)a1 + 1) = *((_DWORD *)v20 + 1);
          if ( v19 >= 9 )
          {
            a1 += 8;
            v21 = v20 + 8;
            for ( v19 -= 8LL; ; v19 -= 16LL )
            {
              if ( (unsigned __int64)a1 >= v11 )
                goto LABEL_48;
              *(_DWORD *)a1 = *v21;
              *((_DWORD *)a1 + 1) = v21[1];
              *((_DWORD *)a1 + 2) = v21[2];
              *((_DWORD *)a1 + 3) = v21[3];
              if ( v19 < 17 )
                break;
              a1 += 16;
              v21 += 4;
            }
          }
          a1 += v19;
        }
        if ( v14 >= 0 )
          goto LABEL_10;
LABEL_12:
        v14 *= 2;
      }
      while ( v14 );
    }
LABEL_41:
    v13 = v12 < 0;
    v14 = 2 * v12 + 1;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( a3 == (_BYTE *)v7 )
          goto LABEL_68;
        if ( (unsigned __int64)(a3 + 1) >= v7 )
          break;
        v25 = *(unsigned __int16 *)a3;
        a3 += 2;
        v26 = v25;
        v17 = (v25 >> 3) + 1;
        v27 = v26 & 7;
        if ( v27 == 7 )
        {
          if ( v9 )
          {
            v29 = (unsigned __int64)(unsigned __int8)*v9 >> 4;
            v9 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v9 = a3++;
            v29 = *v9 & 0xF;
          }
          if ( v29 == 15 )
          {
LABEL_65:
            if ( (unsigned __int64)a3 >= v7 )
              return 3221226050LL;
            v30 = (unsigned __int8)*a3++;
            if ( v30 == 255 )
            {
              if ( (unsigned __int64)(a3 + 1) >= v7 )
                return 3221226050LL;
              v33 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v33 )
              {
                if ( (unsigned __int64)(a3 + 3) >= v7 )
                  return 3221226050LL;
                v33 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v33 < 22 || &a1[v33 + 3] < a1 )
                return 3221226050LL;
              v30 = v33 - 22;
            }
            v29 = v30 + 15;
          }
          v27 = v29 + 7;
        }
        v19 = v27 + 3;
        v21 = &a1[-v17];
        if ( &a1[-v17] < v6 )
          return 3221226050LL;
LABEL_48:
        if ( (unsigned __int64)&a1[v19] > v8 )
          return 3221226050LL;
        qmemcpy(a1, v21, v19);
        a1 += v19;
        if ( v14 >= 0 )
        {
          v14 *= 2;
          goto LABEL_51;
        }
LABEL_43:
        v14 *= 2;
        if ( !v14 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v7 )
            return 3221226050LL;
          v12 = *(_DWORD *)a3;
          a3 += 4;
          goto LABEL_41;
        }
      }
      if ( (unsigned __int64)a1 >= v8 )
      {
LABEL_68:
        *a6 = (_DWORD)a1 - (_DWORD)v6;
        return 0LL;
      }
    }
    else
    {
LABEL_51:
      if ( v14 < 0 )
      {
LABEL_56:
        if ( (unsigned __int64)a3 < v7 && (unsigned __int64)a1 < v8 )
        {
          *a1++ = *a3++;
          goto LABEL_43;
        }
      }
      else
      {
        while ( 1 )
        {
          v14 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v7 || (unsigned __int64)(a1 + 2) > v8 )
            break;
          v28 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)a1 = v28;
          a1 += 2;
          if ( v14 < 0 )
            goto LABEL_43;
          v13 = (v14 & 0x40000000) != 0;
          v14 *= 2;
          if ( v13 )
            goto LABEL_56;
        }
      }
    }
  }
  return 3221226050LL;
}
