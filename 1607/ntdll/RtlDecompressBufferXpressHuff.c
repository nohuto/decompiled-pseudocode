/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x18008A560
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x18008AA88 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  _BYTE *v13; // r13
  unsigned __int16 *v14; // rbx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  _BYTE *v27; // rsi
  int v28; // edx
  int v29; // edx
  _DWORD *v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r10
  int v35; // ecx
  unsigned __int64 v36; // r10
  __int16 v37; // ax
  __int64 v38; // rcx
  int v39; // edx
  int v40; // edx
  int v41; // ecx
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r10
  _BYTE *v44; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( a7 )
  {
    v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = a1;
    v11 = (unsigned __int64)&a3[a4];
    v12 = (unsigned __int64)&a1[a2];
    v44 = (_BYTE *)v12;
LABEL_3:
    if ( (__int64)(v11 - (_QWORD)v7) < 260 )
    {
      if ( v10 == (_BYTE *)v12 )
      {
LABEL_49:
        *a6 = (_DWORD)v10 - (_DWORD)a1;
        return 0LL;
      }
      return 3221226050LL;
    }
    if ( !(unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    {
      v13 = v10 + 0x10000;
      v14 = (unsigned __int16 *)(v7 + 256);
      v15 = 16LL;
      v16 = *v14;
      v17 = v14[1];
      v7 = (unsigned __int8 *)(v14 + 2);
      v18 = v17 + (v16 << 16);
      if ( (unsigned __int64)(v10 + 0x10000) > v12 )
        v13 = (_BYTE *)v12;
      v19 = (unsigned __int64)(v13 - 188);
      if ( v10 >= v13 - 188 )
      {
        while ( 1 )
        {
LABEL_56:
          if ( v10 >= v13 )
          {
            v12 = (unsigned __int64)v44;
            goto LABEL_3;
          }
          v37 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v37 <= 0 )
          {
            v18 <<= 10;
            v15 -= 10LL;
            do
            {
              --v15;
              v41 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v37 = *(_WORD *)(v9 + 2LL * (__int16)(v41 - v37) + 3104);
            }
            while ( v37 <= 0 );
          }
          else
          {
            v38 = v37 & 0xF;
            v18 <<= v38;
            v15 -= v38;
          }
          v22 = (v37 >> 4) - 256;
          if ( v15 < 0 )
          {
LABEL_62:
            if ( (unsigned __int64)(v7 + 1) < v11 )
            {
              v39 = *(unsigned __int16 *)v7;
              v7 += 2;
              v18 += v39 << -(char)v15;
              v15 += 16LL;
              goto LABEL_60;
            }
            return 3221226050LL;
          }
LABEL_60:
          if ( v22 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v44 )
          goto LABEL_49;
        v35 = v22 / 16;
        v36 = v22 % 16;
        if ( v36 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v42 = *v7++;
          if ( v42 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v43 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v43 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v43 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v43 < 0xF || &v10[v43 + 3] < v10 )
              return 3221226050LL;
            v42 = v43 - 15;
          }
          v36 = v42 + 15;
        }
        v25 = v36 + 3;
        v26 = (1LL << v35) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v35) >> 1);
        v18 <<= v35;
        v15 -= v35;
        if ( v15 < 0 )
        {
LABEL_64:
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v40 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v40 << -(char)v15;
          v15 += 16LL;
        }
        v30 = &v10[-v26];
        if ( &v10[-v26] < a1 )
          return 3221226050LL;
      }
      else
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
              if ( v20 <= 0 )
              {
                v18 <<= 10;
                v15 -= 10LL;
                do
                {
                  --v15;
                  v31 = (unsigned __int64)v18 >> 31;
                  v18 *= 2;
                  v20 = *(_WORD *)(v9 + 2LL * (__int16)(v31 - v20) + 3104);
                }
                while ( v20 <= 0 );
              }
              else
              {
                v21 = v20 & 0xF;
                v18 <<= v21;
                v15 -= v21;
              }
              v22 = (v20 >> 4) - 256;
              if ( v15 < 0 )
              {
                if ( (unsigned __int64)v10 >= v19 )
                  goto LABEL_62;
                if ( (unsigned __int64)(v7 + 1) >= v11 )
                  return 3221226050LL;
                v28 = *(unsigned __int16 *)v7;
                v7 += 2;
                v18 += v28 << -(char)v15;
                v15 += 16LL;
              }
              if ( v22 >= 0 )
                break;
              *v10++ = v22;
            }
            if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v44 )
              goto LABEL_49;
            v23 = v22 / 16;
            v24 = v22 % 16;
            if ( v24 == 15 )
            {
              if ( (unsigned __int64)v7 >= v11 )
                return 3221226050LL;
              v32 = *v7++;
              if ( v32 == 255 )
              {
                if ( (unsigned __int64)(v7 + 1) >= v11 )
                  return 3221226050LL;
                v33 = *(unsigned __int16 *)v7;
                v7 += 2;
                if ( !v33 )
                {
                  if ( (unsigned __int64)(v7 + 3) >= v11 )
                    return 3221226050LL;
                  v33 = *(unsigned int *)v7;
                  v7 += 4;
                }
                if ( v33 < 0xF || &v10[v33 + 3] < v10 )
                  return 3221226050LL;
                v32 = v33 - 15;
              }
              v24 = v32 + 15;
            }
            v25 = v24 + 3;
            v26 = (1LL << v23) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v23) >> 1);
            v18 <<= v23;
            v15 -= v23;
            if ( v15 < 0 )
            {
              if ( (unsigned __int64)v10 >= v19 )
                goto LABEL_64;
              if ( (unsigned __int64)(v7 + 1) >= v11 )
                return 3221226050LL;
              v29 = *(unsigned __int16 *)v7;
              v7 += 2;
              v18 += v29 << -(char)v15;
              v15 += 16LL;
            }
            v27 = &v10[-v26];
            if ( &v10[-v26] < a1 )
              return 3221226050LL;
            if ( v26 >= 4 )
              break;
            *v10 = *v27;
            if ( v26 == 1 )
            {
              v25 -= 3LL;
              v10[1] = *v27;
              v10[2] = *v27;
              v10 += 3;
            }
            else
            {
              v10[1] = v27[1];
              if ( v26 == 2 )
              {
                v25 -= 2LL;
                v10 += 2;
              }
              else
              {
                v10[2] = v27[2];
                v10 += 3;
                v25 -= 3LL;
              }
            }
          }
          while ( !v25 );
          *(_DWORD *)v10 = *(_DWORD *)v27;
          *((_DWORD *)v10 + 1) = *((_DWORD *)v27 + 1);
          if ( v25 >= 9 )
            break;
LABEL_19:
          v10 += v25;
        }
        v10 += 8;
        v30 = v27 + 8;
        v25 -= 8LL;
        while ( (unsigned __int64)v10 < v19 )
        {
          *(_DWORD *)v10 = *v30;
          *((_DWORD *)v10 + 1) = v30[1];
          *((_DWORD *)v10 + 2) = v30[2];
          *((_DWORD *)v10 + 3) = v30[3];
          if ( v25 < 0x11 )
            goto LABEL_19;
          v10 += 16;
          v30 += 4;
          v25 -= 16LL;
        }
      }
      if ( &v10[v25] <= v44 )
      {
        qmemcpy(v10, v30, v25);
        v10 += v25;
        goto LABEL_56;
      }
    }
    return 3221226050LL;
  }
  return 3221225704LL;
}
