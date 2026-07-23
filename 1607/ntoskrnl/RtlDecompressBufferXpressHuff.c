/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x140005B80
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1400060A0 (XpressBuildHuffmanDecodingTable.c)
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
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // edx
  int v24; // ecx
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r10
  _BYTE *v28; // rsi
  int v29; // edx
  _DWORD *v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r10
  int v35; // edx
  int v36; // ecx
  unsigned __int64 v37; // r11
  __int16 v38; // ax
  __int64 v39; // rcx
  int v40; // edx
  int v41; // ecx
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r11
  _BYTE *v45; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( a7 )
  {
    v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = a1;
    v11 = (unsigned __int64)&a3[a4];
    v12 = (unsigned __int64)&a1[a2];
    v45 = (_BYTE *)v12;
LABEL_3:
    if ( (__int64)(v11 - (_QWORD)v7) < 260 )
    {
      if ( v10 == (_BYTE *)v12 )
      {
LABEL_41:
        *a6 = (_DWORD)v10 - (_DWORD)a1;
        return 0LL;
      }
      return 3221226050LL;
    }
    if ( !(unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    {
      v13 = 16LL;
      v14 = (unsigned __int16 *)(v7 + 256);
      v15 = v10 + 0x10000;
      v16 = *v14;
      v17 = v14[1];
      v7 = (unsigned __int8 *)(v14 + 2);
      v18 = v17 + (v16 << 16);
      if ( (unsigned __int64)(v10 + 0x10000) > v12 )
        v15 = (_BYTE *)v12;
      v19 = (unsigned __int64)(v15 - 188);
      if ( v10 >= v15 - 188 )
      {
        while ( 1 )
        {
LABEL_52:
          if ( v10 >= v15 )
          {
            v12 = (unsigned __int64)v45;
            goto LABEL_3;
          }
          v38 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v38 <= 0 )
          {
            v18 <<= 10;
            v13 -= 10LL;
            do
            {
              --v13;
              v41 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v38 = *(_WORD *)(v9 + 2LL * (__int16)(v41 - v38) + 3104);
            }
            while ( v38 <= 0 );
          }
          else
          {
            v39 = v38 & 0xF;
            v18 <<= v39;
            v13 -= v39;
          }
          v22 = (v38 >> 4) - 256;
          if ( v13 < 0 )
          {
LABEL_44:
            if ( (unsigned __int64)(v7 + 1) < v11 )
            {
              v35 = *(unsigned __int16 *)v7;
              v7 += 2;
              v18 += v35 << -(char)v13;
              v13 += 16LL;
              goto LABEL_56;
            }
            return 3221226050LL;
          }
LABEL_56:
          if ( v22 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v45 )
          goto LABEL_41;
        v36 = v22 / 16;
        v37 = v22 % 16;
        if ( v37 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v42 = *v7++;
          if ( v42 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v44 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v44 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v44 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v44 < 0xF || &v10[v44 + 3] < v10 )
              return 3221226050LL;
            v42 = v44 - 15;
          }
          v37 = v42 + 15;
        }
        v26 = v37 + 3;
        v27 = (1LL << v36) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v36) >> 1);
        v18 <<= v36;
        v13 -= v36;
        if ( v13 < 0 )
        {
LABEL_58:
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v40 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v40 << -(char)v13;
          v13 += 16LL;
        }
        v30 = &v10[-v27];
        if ( &v10[-v27] < a1 )
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
                v13 -= 10LL;
                do
                {
                  --v13;
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
                v13 -= v21;
              }
              v22 = (v20 >> 4) - 256;
              if ( v13 < 0 )
              {
                if ( (unsigned __int64)v10 >= v19 )
                  goto LABEL_44;
                if ( (unsigned __int64)(v7 + 1) >= v11 )
                  return 3221226050LL;
                v23 = *(unsigned __int16 *)v7;
                v7 += 2;
                v18 += v23 << -(char)v13;
                v13 += 16LL;
              }
              if ( v22 >= 0 )
                break;
              *v10++ = v22;
            }
            if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v45 )
              goto LABEL_41;
            v24 = v22 / 16;
            v25 = v22 % 16;
            if ( v25 == 15 )
            {
              if ( (unsigned __int64)v7 >= v11 )
                return 3221226050LL;
              v32 = *v7++;
              if ( v32 == 255 )
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
                v32 = v43 - 15;
              }
              v25 = v32 + 15;
            }
            v26 = v25 + 3;
            v27 = (1LL << v24) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v24) >> 1);
            v18 <<= v24;
            v13 -= v24;
            if ( v13 < 0 )
            {
              if ( (unsigned __int64)v10 >= v19 )
                goto LABEL_58;
              if ( (unsigned __int64)(v7 + 1) >= v11 )
                return 3221226050LL;
              v29 = *(unsigned __int16 *)v7;
              v7 += 2;
              v18 += v29 << -(char)v13;
              v13 += 16LL;
            }
            v28 = &v10[-v27];
            if ( &v10[-v27] < a1 )
              return 3221226050LL;
            if ( v27 >= 4 )
              break;
            *v10 = *v28;
            v33 = v27 - 1;
            if ( v33 )
            {
              v10[1] = v28[1];
              if ( v33 == 1 )
              {
                v26 -= 2LL;
                v10 += 2;
              }
              else
              {
                v10[2] = v28[2];
                v10 += 3;
                v26 -= 3LL;
              }
            }
            else
            {
              v26 -= 3LL;
              v10[1] = *v28;
              v10[2] = *v28;
              v10 += 3;
            }
          }
          while ( !v26 );
          *(_DWORD *)v10 = *(_DWORD *)v28;
          *((_DWORD *)v10 + 1) = *((_DWORD *)v28 + 1);
          if ( v26 >= 9 )
            break;
LABEL_22:
          v10 += v26;
        }
        v10 += 8;
        v30 = v28 + 8;
        v26 -= 8LL;
        while ( (unsigned __int64)v10 < v19 )
        {
          *(_DWORD *)v10 = *v30;
          *((_DWORD *)v10 + 1) = v30[1];
          *((_DWORD *)v10 + 2) = v30[2];
          *((_DWORD *)v10 + 3) = v30[3];
          if ( v26 < 0x11 )
            goto LABEL_22;
          v10 += 16;
          v30 += 4;
          v26 -= 16LL;
        }
      }
      if ( &v10[v26] <= v45 )
      {
        qmemcpy(v10, v30, v26);
        v10 += v26;
        goto LABEL_52;
      }
    }
    return 3221226050LL;
  }
  return 3221225704LL;
}
