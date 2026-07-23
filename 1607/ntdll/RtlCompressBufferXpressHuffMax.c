/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x180094374
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800605B0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x180060E50 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180061130 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800FCAEC (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v9; // r15
  unsigned __int8 *v10; // rbx
  __int64 v11; // r13
  unsigned __int8 *v12; // r10
  int *v13; // rcx
  unsigned __int64 v14; // r9
  int v15; // esi
  unsigned __int64 v16; // rbp
  unsigned __int8 *v17; // rdi
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned __int8 v24; // al
  int v25; // eax
  int v26; // r11d
  unsigned __int8 *v27; // r8
  int v28; // eax
  unsigned __int8 *v29; // r9
  unsigned __int8 *v30; // r10
  unsigned __int8 *v31; // rbx
  _DWORD *v32; // r8
  unsigned __int64 i; // rcx
  int v34; // esi
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  char v42; // cl
  unsigned __int8 v43; // cl
  _WORD *v44; // rdi
  int v45; // eax
  unsigned __int64 v46; // rdx
  _BYTE *v47; // rdi
  unsigned __int64 v48; // rdx
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  _BYTE *v52; // rax
  bool v53; // zf
  __int64 v55; // [rsp+30h] [rbp-88h]
  unsigned __int8 *v56; // [rsp+38h] [rbp-80h]
  unsigned __int64 v57; // [rsp+40h] [rbp-78h]
  __int64 v58; // [rsp+48h] [rbp-70h]
  _BYTE *v59; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v60; // [rsp+58h] [rbp-60h]
  unsigned __int64 v61; // [rsp+60h] [rbp-58h]
  _QWORD v62[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+78h] [rbp-40h]
  int *v64; // [rsp+C0h] [rbp+8h]
  int v65; // [rsp+D0h] [rbp+18h]
  __int64 v67; // [rsp+F0h] [rbp+38h]
  __int64 XpressCallback; // [rsp+F8h] [rbp+40h]

  v65 = a3;
  v6 = a2;
  v61 = a3 + a4;
  v9 = a1 + a2;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset(a6, 0, 0x40000uLL);
    v59 = (_BYTE *)a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v10 = (unsigned __int8 *)a1;
    v62[0] = 0LL;
    v11 = a3;
    v62[1] = 0LL;
    v67 = 0LL;
    v56 = 0LL;
    v63 = v6;
    v57 = 3LL;
    while ( 1 )
    {
      v58 = 0LL;
      v55 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v12 = v10 + 0x10000;
      v13 = (int *)(a6 + 1342240);
      if ( (unsigned __int64)(v10 + 0x10000) > v9 )
        v12 = (unsigned __int8 *)v9;
      v64 = (int *)(a6 + 1342240);
      v14 = (unsigned __int64)&v10[v6];
      v60 = v12;
      v15 = 1;
      v16 = (unsigned __int64)(v12 - 5);
      if ( (unsigned __int64)(v12 - 5) < v14 )
        v14 = (unsigned __int64)(v12 - 5);
      v17 = a6 + 1342244;
      XpressCallback = v14;
      if ( v10 == (unsigned __int8 *)a1 )
      {
        v15 = 2;
        ++*(_DWORD *)&a6[4 * *v10 + 1339936];
        v18 = *v10++;
        *v17 = v18;
        v17 = a6 + 1342245;
      }
      if ( (unsigned __int64)v10 >= v16 )
        goto LABEL_17;
      v19 = v10;
      v20 = (__int64)&v10[-a1] % 0x20000;
      do
      {
        v21 = (unsigned __int16)XpressHashFunction[*v19] ^ (unsigned __int16)word_18011C0F0[v19[2]] ^ (unsigned __int64)(unsigned __int16)word_18011BEF0[v19[1]];
        v22 = *(_QWORD *)&a6[8 * v21];
        *(_QWORD *)&a6[8 * v21] = v19++;
        *(_QWORD *)&a6[8 * v20 + 0x40000] = v22;
        v20 = ((_DWORD)v20 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v19 < v16 );
      v13 = (int *)(a6 + 1342240);
      v23 = 0LL;
LABEL_14:
      if ( (unsigned __int64)v10 < v14 )
        goto LABEL_21;
      if ( (unsigned __int64)v10 < v16 )
        break;
      v12 = v60;
      v55 = v23;
      v11 = (__int64)v59;
LABEL_17:
      while ( v10 < v12 )
      {
        ++*(_DWORD *)&a6[4 * *v10 + 1339936];
        v24 = *v10++;
        *v17++ = v24;
        if ( v15 > 0 )
        {
          v15 *= 2;
        }
        else
        {
          v25 = 2 * v15;
          v15 = 1;
          *v13 = v25;
          v13 = (int *)v17;
          v17 += 4;
        }
      }
      while ( v15 > 0 )
        v15 = 2 * v15 + 1;
      *v13 = 2 * v15 + 1;
      if ( (unsigned __int64)v10 >= v9 )
      {
        ++*((_DWORD *)a6 + 335240);
        v34 = 1;
      }
      else
      {
        v34 = 0;
      }
      if ( v11
         + v55
         + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v58 + 31) >> 5)
         + 258 >= v61 )
        return 3221225507LL;
      v52 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v17, v11, v34);
      v59 = v52;
      v53 = v34 == 0;
      v11 = (__int64)v52;
      v6 = a2;
      if ( !v53 )
      {
        *a5 = (_DWORD)v52 - v65;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback(v62, v16, v10);
LABEL_21:
    v26 = *(_DWORD *)v10;
    v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v10[-a1] % 0x20000) + 0x40000];
    if ( v27 + 0x10000 <= v10 )
      goto LABEL_69;
    v28 = v26 ^ *(_DWORD *)v27;
    if ( !v28 )
      goto LABEL_23;
    if ( (v28 & 0xFFFFFF) != 0 )
    {
      v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
      if ( v27 + 0x10000 <= v10 )
        goto LABEL_69;
      v49 = v26 ^ *(_DWORD *)v27;
      if ( !v49 )
        goto LABEL_23;
      if ( (v49 & 0xFFFFFF) != 0 )
      {
        v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
        if ( v27 + 0x10000 <= v10 )
          goto LABEL_69;
        v50 = v26 ^ *(_DWORD *)v27;
        if ( !v50 )
        {
LABEL_23:
          v29 = v10;
          v30 = v10 - 0x10000;
          goto LABEL_24;
        }
        if ( (v50 & 0xFFFFFF) != 0 )
          goto LABEL_69;
      }
    }
    v29 = v10;
    v56 = v27;
    v30 = v10 - 0x10000;
    while ( 1 )
    {
      v27 = *(unsigned __int8 **)&a6[8 * ((__int64)&v27[-a1] % 0x20000) + 0x40000];
      if ( v27 <= v30 )
      {
LABEL_76:
        v36 = v56;
LABEL_47:
        v37 = v57;
        v67 = 0LL;
        v38 = v29 - v36;
        v57 = 3LL;
        v10 = &v29[v37];
        if ( v37 == 3 && v38 > 0x1000 )
        {
          v10 = v29;
LABEL_69:
          ++*(_DWORD *)&a6[4 * (unsigned __int8)v26 + 1339936];
          *v17++ = v26;
          ++v10;
          if ( v15 > 0 )
          {
            v15 *= 2;
            goto LABEL_72;
          }
          v45 = 2 * v15;
LABEL_54:
          v15 = 1;
          *v64 = v45;
          v13 = (int *)v17;
          v64 = (int *)v17;
          v17 += 4;
        }
        else
        {
          if ( v38 < 0x100 )
            v39 = XpressHighBitIndexTable[v38];
          else
            v39 = XpressHighBitIndexTable[v38 >> 8] + 8;
          v58 += v39;
          v40 = v37 - 3;
          v41 = v38 - (1LL << v39);
          v42 = 16 * v39;
          if ( v40 >= 0xF )
          {
            v43 = v42 + 15;
            v46 = v40 - 15;
            *v17 = v43;
            v47 = v17 + 1;
            if ( v46 < 0xFF )
            {
              *v47 = v46;
              v44 = v47 + 1;
              ++v23;
            }
            else
            {
              v48 = v46 + 15;
              *v47 = -1;
              if ( v48 >= 0x10000 )
              {
                *(_WORD *)(v47 + 1) = 0;
                *(_DWORD *)(v47 + 3) = v48;
                v44 = v47 + 7;
                v23 += 7LL;
              }
              else
              {
                *(_WORD *)(v47 + 1) = v48;
                v44 = v47 + 3;
                v23 += 3LL;
              }
            }
          }
          else
          {
            v43 = v40 + v42;
            *v17 = v43;
            v44 = v17 + 1;
          }
          ++*(_DWORD *)&a6[4 * v43 + 1340960];
          *v44 = v41;
          v17 = (unsigned __int8 *)(v44 + 1);
          if ( v15 <= 0 )
          {
            v45 = 2 * v15 + 1;
            goto LABEL_54;
          }
          v15 = 2 * v15 + 1;
LABEL_72:
          v13 = v64;
        }
        v14 = XpressCallback;
        goto LABEL_14;
      }
      if ( v26 != *(_DWORD *)v27 )
        goto LABEL_93;
      v10 = v29;
LABEL_24:
      v31 = v10 + 4;
      v32 = v27 + 4;
      for ( i = (unsigned __int64)(v31 + 32); ; i += 32LL )
      {
        if ( i >= v9 )
        {
          while ( (unsigned __int64)v31 < v9 && *v31 == *(_BYTE *)v32 )
          {
            ++v31;
            v32 = (_DWORD *)((char *)v32 + 1);
          }
          goto LABEL_45;
        }
        if ( *(_DWORD *)v31 != *v32 )
          goto LABEL_44;
        if ( *((_DWORD *)v31 + 1) != v32[1] )
        {
          v31 += 4;
          ++v32;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 2) != v32[2] )
        {
          v31 += 8;
          v32 += 2;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 3) != v32[3] )
        {
          v31 += 12;
          v32 += 3;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 4) != v32[4] )
        {
          v31 += 16;
          v32 += 4;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 5) != v32[5] )
        {
          v31 += 20;
          v32 += 5;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 6) != v32[6] )
        {
          v31 += 24;
          v32 += 6;
          goto LABEL_44;
        }
        if ( *((_DWORD *)v31 + 7) != v32[7] )
          break;
        v32 += 8;
        v31 = (unsigned __int8 *)i;
      }
      v31 += 28;
      v32 += 7;
LABEL_44:
      if ( *v31 == *(_BYTE *)v32 )
      {
        if ( v31[1] == *((_BYTE *)v32 + 1) )
        {
          if ( v31[2] == *((_BYTE *)v32 + 2) )
          {
            v31 += 3;
            v32 = (_DWORD *)((char *)v32 + 3);
          }
          else
          {
            v31 += 2;
            v32 = (_DWORD *)((char *)v32 + 2);
          }
        }
        else
        {
          ++v31;
          v32 = (_DWORD *)((char *)v32 + 1);
        }
      }
LABEL_45:
      v35 = v31 - v29;
      v27 = (unsigned __int8 *)v32 - v35;
      if ( v35 > v57 )
        break;
      v51 = v35 + v67;
LABEL_74:
      v67 = v51 + 1;
      if ( (unsigned __int64)(v51 + 1) >= 0xC )
        goto LABEL_76;
    }
    v57 = v35;
    v36 = v27;
    v56 = v27;
    if ( &v27[v35] > v29 )
      goto LABEL_47;
LABEL_93:
    v51 = v67;
    goto LABEL_74;
  }
  return 3221225659LL;
}
