/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x14024BFB4
 * Callers:
 *     RtlCompressBufferProgress @ 0x14014DA30 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x14024BF04 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14014E56C (RtlpMakeXpressCallback.c)
 *     memset @ 0x140195A80 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x14024D948 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x14024DD24 (XpressDoHuffmanPass.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v12; // r12
  unsigned __int8 *v14; // rbx
  __int64 v15; // r13
  unsigned int v16; // esi
  unsigned __int8 *v17; // r10
  int *v18; // rcx
  unsigned __int64 v19; // r9
  int v20; // esi
  unsigned __int64 v21; // rbp
  unsigned __int8 *v22; // rdi
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r13
  int v29; // r11d
  unsigned __int8 *v30; // r8
  int v31; // eax
  unsigned __int8 *v32; // r9
  unsigned __int8 *v33; // r10
  int v34; // eax
  int v35; // eax
  unsigned __int8 *v36; // rbx
  _DWORD *v37; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v39; // rbx
  unsigned __int8 *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  char v47; // cl
  unsigned __int8 v48; // cl
  unsigned __int64 v49; // rdx
  _BYTE *v50; // rdi
  _WORD *v51; // rdi
  unsigned __int64 v52; // rdx
  int v53; // eax
  int *v54; // rcx
  unsigned __int8 v55; // al
  int v56; // eax
  int v57; // esi
  __int64 v58; // rax
  bool v59; // zf
  char *v60; // [rsp+30h] [rbp-98h]
  unsigned __int64 XpressCallback; // [rsp+38h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-88h]
  unsigned __int64 v63; // [rsp+48h] [rbp-80h]
  unsigned __int8 *v64; // [rsp+50h] [rbp-78h]
  __int64 v65; // [rsp+58h] [rbp-70h]
  __int64 v66; // [rsp+60h] [rbp-68h]
  unsigned __int64 v67; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v68; // [rsp+70h] [rbp-58h]
  _QWORD v69[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v70; // [rsp+88h] [rbp-40h]
  __int64 v71; // [rsp+D0h] [rbp+8h]
  int v72; // [rsp+E0h] [rbp+18h]

  v72 = a3;
  v67 = a3 + a4;
  v12 = a1 + a2;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v66 = a3;
    v14 = (unsigned __int8 *)a1;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v15 = a3;
    if ( !a7 || (v16 = a9, a9 > a2) )
    {
      v16 = a2;
      a9 = a2;
    }
    v69[0] = a7;
    v69[1] = a8;
    v70 = v16;
    v71 = 0LL;
    v63 = 3LL;
    v64 = 0LL;
    while ( 1 )
    {
      v65 = 0LL;
      v62 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v17 = v14 + 0x10000;
      v18 = (int *)(a6 + 1342240);
      if ( (unsigned __int64)(v14 + 0x10000) > v12 )
        v17 = (unsigned __int8 *)v12;
      v60 = a6 + 1342240;
      v19 = (unsigned __int64)&v14[v16];
      v68 = v17;
      v20 = 1;
      v21 = (unsigned __int64)(v17 - 5);
      if ( (unsigned __int64)(v17 - 5) < v19 )
        v19 = (unsigned __int64)(v17 - 5);
      v22 = (unsigned __int8 *)(a6 + 1342244);
      XpressCallback = v19;
      if ( v14 == (unsigned __int8 *)a1 )
      {
        v20 = 2;
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v23 = *v14++;
        *v22 = v23;
        v22 = (unsigned __int8 *)(a6 + 1342245);
      }
      if ( (unsigned __int64)v14 >= v21 )
        goto LABEL_91;
      v24 = v14;
      v25 = (__int64)&v14[-a1] % 0x20000;
      do
      {
        v26 = (unsigned __int16)XpressHashFunction[*v24] ^ (unsigned __int16)word_140292900[v24[2]] ^ (unsigned __int64)(unsigned __int16)word_140292700[v24[1]];
        v27 = *(_QWORD *)&a6[8 * v26];
        *(_QWORD *)&a6[8 * v26] = v24++;
        *(_QWORD *)&a6[8 * v25 + 0x40000] = v27;
        v25 = ((_DWORD)v25 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v24 < v21 );
      v28 = 0LL;
LABEL_18:
      if ( (unsigned __int64)v14 < v19 )
        goto LABEL_21;
      if ( (unsigned __int64)v14 < v21 )
        break;
      v18 = (int *)v60;
      v17 = v68;
      v62 = v28;
      v15 = v66;
LABEL_91:
      while ( v14 < v17 )
      {
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v55 = *v14++;
        *v22++ = v55;
        if ( v20 <= 0 )
        {
          v56 = 2 * v20;
          v20 = 1;
          *v18 = v56;
          v18 = (int *)v22;
          v22 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      while ( v20 > 0 )
        v20 = 2 * v20 + 1;
      *v18 = 2 * v20 + 1;
      if ( (unsigned __int64)v14 < v12 )
      {
        v57 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v57 = 1;
      }
      if ( v15 + v62 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 1310720, 0LL) + v65 + 31) >> 5) + 258 >= v67 )
        return 3221225507LL;
      v58 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v22, v15, v57);
      v66 = v58;
      v59 = v57 == 0;
      v15 = v58;
      v16 = a9;
      if ( !v59 )
      {
        *a5 = v58 - v72;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback((__int64)v69, v21, (__int64)v14);
LABEL_21:
    v29 = *(_DWORD *)v14;
    v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v14[-a1] % 0x20000) + 0x40000];
    if ( v30 + 0x10000 <= v14 )
      goto LABEL_71;
    v31 = v29 ^ *(_DWORD *)v30;
    if ( !v31 )
      goto LABEL_23;
    if ( (v31 & 0xFFFFFF) != 0 )
    {
      v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
      if ( v30 + 0x10000 <= v14 )
        goto LABEL_71;
      v34 = v29 ^ *(_DWORD *)v30;
      if ( !v34 )
        goto LABEL_23;
      if ( (v34 & 0xFFFFFF) != 0 )
      {
        v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
        if ( v30 + 0x10000 <= v14 )
          goto LABEL_71;
        v35 = v29 ^ *(_DWORD *)v30;
        if ( !v35 )
        {
LABEL_23:
          v32 = v14;
          v33 = v14 - 0x10000;
          goto LABEL_35;
        }
        if ( (v35 & 0xFFFFFF) != 0 )
          goto LABEL_71;
      }
    }
    v32 = v14;
    v64 = v30;
    v33 = v14 - 0x10000;
    while ( 1 )
    {
      v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
      if ( v30 <= v33 )
      {
LABEL_67:
        v40 = v64;
LABEL_68:
        v42 = v63;
        v71 = 0LL;
        v43 = v32 - v40;
        v63 = 3LL;
        v14 = &v32[v42];
        if ( v42 == 3 && v43 > 0x1000 )
        {
          v14 = v32;
LABEL_71:
          ++*(_DWORD *)&a6[4 * (unsigned __int8)v29 + 1339936];
          *v22++ = v29;
          ++v14;
          if ( v20 > 0 )
          {
            v20 *= 2;
            goto LABEL_73;
          }
          v53 = 2 * v20;
LABEL_88:
          v54 = (int *)v60;
          v20 = 1;
          v60 = (char *)v22;
          v22 += 4;
          *v54 = v53;
        }
        else
        {
          if ( v43 < 0x100 )
            v44 = XpressHighBitIndexTable[v43];
          else
            v44 = XpressHighBitIndexTable[v43 >> 8] + 8;
          v65 += v44;
          v45 = v42 - 3;
          v46 = v43 - (1LL << v44);
          v47 = 16 * v44;
          if ( v45 < 0xF )
          {
            v48 = v45 + v47;
            *v22 = v48;
            v51 = v22 + 1;
          }
          else
          {
            v48 = v47 + 15;
            v49 = v45 - 15;
            *v22 = v48;
            v50 = v22 + 1;
            if ( v49 >= 0xFF )
            {
              v52 = v49 + 15;
              *v50 = -1;
              if ( v52 >= 0x10000 )
              {
                *(_WORD *)(v50 + 1) = 0;
                *(_DWORD *)(v50 + 3) = v52;
                v51 = v50 + 7;
                v28 += 7LL;
              }
              else
              {
                *(_WORD *)(v50 + 1) = v52;
                v51 = v50 + 3;
                v28 += 3LL;
              }
            }
            else
            {
              *v50 = v49;
              v51 = v50 + 1;
              ++v28;
            }
          }
          ++*(_DWORD *)&a6[4 * v48 + 1340960];
          *v51 = v46;
          v22 = (unsigned __int8 *)(v51 + 1);
          if ( v20 <= 0 )
          {
            v53 = 2 * v20 + 1;
            goto LABEL_88;
          }
          v20 = 2 * v20 + 1;
        }
LABEL_73:
        v19 = XpressCallback;
        goto LABEL_18;
      }
      if ( v29 == *(_DWORD *)v30 )
      {
        v14 = v32;
LABEL_35:
        v36 = v14 + 4;
        v37 = v30 + 4;
        for ( i = (unsigned __int64)(v36 + 32); ; i += 32LL )
        {
          if ( i >= v12 )
          {
            while ( (unsigned __int64)v36 < v12 && *v36 == *(_BYTE *)v37 )
            {
              ++v36;
              v37 = (_DWORD *)((char *)v37 + 1);
            }
            goto LABEL_63;
          }
          if ( *(_DWORD *)v36 != *v37 )
            goto LABEL_54;
          if ( *((_DWORD *)v36 + 1) != v37[1] )
          {
            v36 += 4;
            ++v37;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 2) != v37[2] )
          {
            v36 += 8;
            v37 += 2;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 3) != v37[3] )
          {
            v36 += 12;
            v37 += 3;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 4) != v37[4] )
          {
            v36 += 16;
            v37 += 4;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 5) != v37[5] )
          {
            v36 += 20;
            v37 += 5;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 6) != v37[6] )
          {
            v36 += 24;
            v37 += 6;
            goto LABEL_54;
          }
          if ( *((_DWORD *)v36 + 7) != v37[7] )
            break;
          v37 += 8;
          v36 = (unsigned __int8 *)i;
        }
        v36 += 28;
        v37 += 7;
LABEL_54:
        if ( *v36 == *(_BYTE *)v37 )
        {
          if ( v36[1] == *((_BYTE *)v37 + 1) )
          {
            if ( v36[2] == *((_BYTE *)v37 + 2) )
            {
              v36 += 3;
              v37 = (_DWORD *)((char *)v37 + 3);
            }
            else
            {
              v36 += 2;
              v37 = (_DWORD *)((char *)v37 + 2);
            }
          }
          else
          {
            ++v36;
            v37 = (_DWORD *)((char *)v37 + 1);
          }
        }
LABEL_63:
        v39 = v36 - v32;
        v30 = (unsigned __int8 *)v37 - v39;
        if ( v39 <= v63 )
        {
          v41 = v39 + v71;
          goto LABEL_66;
        }
        v63 = v39;
        v40 = v30;
        v64 = v30;
        if ( &v30[v39] > v32 )
          goto LABEL_68;
      }
      v41 = v71;
LABEL_66:
      v71 = v41 + 1;
      if ( (unsigned __int64)(v41 + 1) >= 0xC )
        goto LABEL_67;
    }
  }
  return 3221225507LL;
}
