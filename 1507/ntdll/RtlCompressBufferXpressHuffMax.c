/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1800F1C00
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005B540 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005BDC0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18005C09C (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800F2F1C (RtlpMakeXpressCallback.c)
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
  unsigned __int8 *v11; // rbx
  __int64 v12; // r13
  unsigned __int8 *v13; // r10
  int *v14; // rcx
  unsigned __int64 v15; // r9
  int v16; // esi
  unsigned __int64 v17; // rbp
  unsigned __int8 *v18; // rdi
  unsigned __int8 v19; // al
  unsigned __int8 *v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  int v25; // r11d
  unsigned __int8 *v26; // r8
  int v27; // eax
  unsigned __int8 *v28; // r9
  unsigned __int8 *v29; // r10
  int v30; // eax
  int v31; // eax
  unsigned __int8 *v32; // rbx
  _DWORD *v33; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  char v43; // cl
  unsigned __int8 v44; // cl
  unsigned __int64 v45; // rdx
  _BYTE *v46; // rdi
  _WORD *v47; // rdi
  unsigned __int64 v48; // rdx
  int v49; // eax
  int *v50; // rcx
  unsigned __int8 v51; // al
  int v52; // eax
  int v53; // esi
  _BYTE *v54; // rax
  bool v55; // zf
  __int64 v56; // [rsp+30h] [rbp-88h]
  unsigned __int8 *v57; // [rsp+38h] [rbp-80h]
  unsigned __int64 v58; // [rsp+40h] [rbp-78h]
  __int64 v59; // [rsp+48h] [rbp-70h]
  _BYTE *v60; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v61; // [rsp+58h] [rbp-60h]
  unsigned __int64 v62; // [rsp+60h] [rbp-58h]
  _QWORD v63[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+78h] [rbp-40h]
  __int64 v65; // [rsp+C0h] [rbp+8h]
  int v66; // [rsp+D0h] [rbp+18h]
  __int64 XpressCallback; // [rsp+F0h] [rbp+38h]
  char *v70; // [rsp+F8h] [rbp+40h]

  v66 = a3;
  v6 = a2;
  v62 = a3 + a4;
  v9 = a1 + a2;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v60 = (_BYTE *)a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v11 = (unsigned __int8 *)a1;
    v63[0] = 0LL;
    v12 = a3;
    v63[1] = 0LL;
    v65 = 0LL;
    v57 = 0LL;
    v64 = v6;
    v58 = 3LL;
    while ( 1 )
    {
      v59 = 0LL;
      v56 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v13 = v11 + 0x10000;
      v14 = (int *)(a6 + 1342240);
      if ( (unsigned __int64)(v11 + 0x10000) > v9 )
        v13 = (unsigned __int8 *)v9;
      v70 = (char *)(a6 + 1342240);
      v15 = (unsigned __int64)&v11[v6];
      v61 = v13;
      v16 = 1;
      v17 = (unsigned __int64)(v13 - 5);
      if ( (unsigned __int64)(v13 - 5) < v15 )
        v15 = (unsigned __int64)(v13 - 5);
      v18 = a6 + 1342244;
      XpressCallback = v15;
      if ( v11 == (unsigned __int8 *)a1 )
      {
        v16 = 2;
        ++*(_DWORD *)&a6[4 * *v11 + 1339936];
        v19 = *v11++;
        *v18 = v19;
        v18 = a6 + 1342245;
      }
      if ( (unsigned __int64)v11 >= v17 )
        goto LABEL_88;
      v20 = v11;
      v21 = (__int64)&v11[-a1] % 0x20000;
      do
      {
        v22 = (unsigned __int16)XpressHashFunction[*v20] ^ (unsigned __int16)word_18011C4A0[v20[2]] ^ (unsigned __int64)(unsigned __int16)word_18011C2A0[v20[1]];
        v23 = *(_QWORD *)&a6[8 * v22];
        *(_QWORD *)&a6[8 * v22] = v20++;
        *(_QWORD *)&a6[8 * v21 + 0x40000] = v23;
        v21 = ((_DWORD)v21 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v20 < v17 );
      v24 = 0LL;
LABEL_15:
      if ( (unsigned __int64)v11 < v15 )
        goto LABEL_18;
      if ( (unsigned __int64)v11 < v17 )
        break;
      v14 = (int *)v70;
      v13 = v61;
      v56 = v24;
      v12 = (__int64)v60;
LABEL_88:
      while ( v11 < v13 )
      {
        ++*(_DWORD *)&a6[4 * *v11 + 1339936];
        v51 = *v11++;
        *v18++ = v51;
        if ( v16 <= 0 )
        {
          v52 = 2 * v16;
          v16 = 1;
          *v14 = v52;
          v14 = (int *)v18;
          v18 += 4;
        }
        else
        {
          v16 *= 2;
        }
      }
      while ( v16 > 0 )
        v16 = 2 * v16 + 1;
      *v14 = 2 * v16 + 1;
      if ( (unsigned __int64)v11 < v9 )
      {
        v53 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v53 = 1;
      }
      if ( v12
         + v56
         + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v59 + 31) >> 5)
         + 258 >= v62 )
        return 3221225507LL;
      v54 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v18, v12, v53);
      v60 = v54;
      v55 = v53 == 0;
      v12 = (__int64)v54;
      v6 = a2;
      if ( !v55 )
      {
        *a5 = (_DWORD)v54 - v66;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback(v63, v17, v11);
LABEL_18:
    v25 = *(_DWORD *)v11;
    v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v11[-a1] % 0x20000) + 0x40000];
    if ( v26 + 0x10000 <= v11 )
      goto LABEL_68;
    v27 = v25 ^ *(_DWORD *)v26;
    if ( !v27 )
      goto LABEL_20;
    if ( (v27 & 0xFFFFFF) != 0 )
    {
      v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
      if ( v26 + 0x10000 <= v11 )
        goto LABEL_68;
      v30 = v25 ^ *(_DWORD *)v26;
      if ( !v30 )
        goto LABEL_20;
      if ( (v30 & 0xFFFFFF) != 0 )
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 + 0x10000 <= v11 )
          goto LABEL_68;
        v31 = v25 ^ *(_DWORD *)v26;
        if ( !v31 )
        {
LABEL_20:
          v28 = v11;
          v29 = v11 - 0x10000;
          goto LABEL_32;
        }
        if ( (v31 & 0xFFFFFF) != 0 )
          goto LABEL_68;
      }
    }
    v28 = v11;
    v57 = v26;
    v29 = v11 - 0x10000;
    while ( 1 )
    {
      v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
      if ( v26 <= v29 )
      {
LABEL_64:
        v36 = v57;
LABEL_65:
        v38 = v58;
        v65 = 0LL;
        v39 = v28 - v36;
        v58 = 3LL;
        v11 = &v28[v38];
        if ( v38 == 3 && v39 > 0x1000 )
        {
          v11 = v28;
LABEL_68:
          ++*(_DWORD *)&a6[4 * (unsigned __int8)v25 + 1339936];
          *v18++ = v25;
          ++v11;
          if ( v16 > 0 )
          {
            v16 *= 2;
            goto LABEL_70;
          }
          v49 = 2 * v16;
LABEL_85:
          v50 = (int *)v70;
          v16 = 1;
          v70 = (char *)v18;
          v18 += 4;
          *v50 = v49;
        }
        else
        {
          if ( v39 < 0x100 )
            v40 = XpressHighBitIndexTable[v39];
          else
            v40 = XpressHighBitIndexTable[v39 >> 8] + 8;
          v59 += v40;
          v41 = v38 - 3;
          v42 = v39 - (1LL << v40);
          v43 = 16 * v40;
          if ( v41 < 0xF )
          {
            v44 = v41 + v43;
            *v18 = v44;
            v47 = v18 + 1;
          }
          else
          {
            v44 = v43 + 15;
            v45 = v41 - 15;
            *v18 = v44;
            v46 = v18 + 1;
            if ( v45 >= 0xFF )
            {
              v48 = v45 + 15;
              *v46 = -1;
              if ( v48 >= 0x10000 )
              {
                *(_WORD *)(v46 + 1) = 0;
                *(_DWORD *)(v46 + 3) = v48;
                v47 = v46 + 7;
                v24 += 7LL;
              }
              else
              {
                *(_WORD *)(v46 + 1) = v48;
                v47 = v46 + 3;
                v24 += 3LL;
              }
            }
            else
            {
              *v46 = v45;
              v47 = v46 + 1;
              ++v24;
            }
          }
          ++*(_DWORD *)&a6[4 * v44 + 1340960];
          *v47 = v42;
          v18 = (unsigned __int8 *)(v47 + 1);
          if ( v16 <= 0 )
          {
            v49 = 2 * v16 + 1;
            goto LABEL_85;
          }
          v16 = 2 * v16 + 1;
        }
LABEL_70:
        v15 = XpressCallback;
        goto LABEL_15;
      }
      if ( v25 == *(_DWORD *)v26 )
      {
        v11 = v28;
LABEL_32:
        v32 = v11 + 4;
        v33 = v26 + 4;
        for ( i = (unsigned __int64)(v32 + 32); ; i += 32LL )
        {
          if ( i >= v9 )
          {
            while ( (unsigned __int64)v32 < v9 && *v32 == *(_BYTE *)v33 )
            {
              ++v32;
              v33 = (_DWORD *)((char *)v33 + 1);
            }
            goto LABEL_60;
          }
          if ( *(_DWORD *)v32 != *v33 )
            goto LABEL_51;
          if ( *((_DWORD *)v32 + 1) != v33[1] )
          {
            v32 += 4;
            ++v33;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 2) != v33[2] )
          {
            v32 += 8;
            v33 += 2;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 3) != v33[3] )
          {
            v32 += 12;
            v33 += 3;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 4) != v33[4] )
          {
            v32 += 16;
            v33 += 4;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 5) != v33[5] )
          {
            v32 += 20;
            v33 += 5;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 6) != v33[6] )
          {
            v32 += 24;
            v33 += 6;
            goto LABEL_51;
          }
          if ( *((_DWORD *)v32 + 7) != v33[7] )
            break;
          v33 += 8;
          v32 = (unsigned __int8 *)i;
        }
        v32 += 28;
        v33 += 7;
LABEL_51:
        if ( *v32 == *(_BYTE *)v33 )
        {
          if ( v32[1] == *((_BYTE *)v33 + 1) )
          {
            if ( v32[2] == *((_BYTE *)v33 + 2) )
            {
              v32 += 3;
              v33 = (_DWORD *)((char *)v33 + 3);
            }
            else
            {
              v32 += 2;
              v33 = (_DWORD *)((char *)v33 + 2);
            }
          }
          else
          {
            ++v32;
            v33 = (_DWORD *)((char *)v33 + 1);
          }
        }
LABEL_60:
        v35 = v32 - v28;
        v26 = (unsigned __int8 *)v33 - v35;
        if ( v35 <= v58 )
        {
          v37 = v35 + v65;
          goto LABEL_63;
        }
        v58 = v35;
        v36 = v26;
        v57 = v26;
        if ( &v26[v35] > v28 )
          goto LABEL_65;
      }
      v37 = v65;
LABEL_63:
      v65 = v37 + 1;
      if ( (unsigned __int64)(v37 + 1) >= 0xC )
        goto LABEL_64;
    }
  }
  return 3221225507LL;
}
