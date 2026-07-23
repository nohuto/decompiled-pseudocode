/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x140217124
 * Callers:
 *     RtlCompressBufferProgress @ 0x14011469C (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x14013824C (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x140138AF0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x140138DD0 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
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
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r8
  char v48; // cl
  unsigned __int8 v49; // cl
  unsigned __int64 v50; // rdx
  _BYTE *v51; // rdi
  _WORD *v52; // rdi
  unsigned __int64 v53; // rdx
  unsigned __int8 v54; // al
  int v55; // eax
  int v56; // esi
  _BYTE *v57; // rax
  bool v58; // zf
  __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 XpressCallback; // [rsp+38h] [rbp-90h]
  __int64 v61; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v62; // [rsp+48h] [rbp-80h]
  unsigned __int64 v63; // [rsp+50h] [rbp-78h]
  __int64 v64; // [rsp+58h] [rbp-70h]
  _BYTE *v65; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v66; // [rsp+68h] [rbp-60h]
  unsigned __int64 v67; // [rsp+70h] [rbp-58h]
  _QWORD v68[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-40h]
  int *v70; // [rsp+D0h] [rbp+8h]
  int v71; // [rsp+E0h] [rbp+18h]

  v71 = a3;
  v67 = a3 + a4;
  v12 = a1 + a2;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v65 = (_BYTE *)a3;
    v14 = (unsigned __int8 *)a1;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v15 = a3;
    if ( !a7 || (v16 = a9, a9 > a2) )
    {
      v16 = a2;
      a9 = a2;
    }
    v68[0] = a7;
    v68[1] = a8;
    v69 = v16;
    v59 = 0LL;
    v63 = 3LL;
    v62 = 0LL;
    while ( 1 )
    {
      v64 = 0LL;
      v61 = 0LL;
      memset(a6 + 1339936, 0, 0x800uLL);
      v17 = v14 + 0x10000;
      v18 = (int *)(a6 + 1342240);
      if ( (unsigned __int64)(v14 + 0x10000) > v12 )
        v17 = (unsigned __int8 *)v12;
      v70 = (int *)(a6 + 1342240);
      v19 = (unsigned __int64)&v14[v16];
      v66 = v17;
      v20 = 1;
      v21 = (unsigned __int64)(v17 - 5);
      if ( (unsigned __int64)(v17 - 5) < v19 )
        v19 = (unsigned __int64)(v17 - 5);
      v22 = a6 + 1342244;
      XpressCallback = v19;
      if ( v14 == (unsigned __int8 *)a1 )
      {
        v20 = 2;
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v23 = *v14++;
        *v22 = v23;
        v22 = a6 + 1342245;
      }
      if ( (unsigned __int64)v14 >= v21 )
        goto LABEL_92;
      v24 = v14;
      v25 = (__int64)&v14[-a1] % 0x20000;
      do
      {
        v26 = (unsigned __int16)XpressHashFunction[*v24] ^ (unsigned __int16)word_14025EF30[v24[2]] ^ (unsigned __int64)(unsigned __int16)word_14025ED30[v24[1]];
        v27 = *(_QWORD *)&a6[8 * v26];
        *(_QWORD *)&a6[8 * v26] = v24++;
        *(_QWORD *)&a6[8 * v25 + 0x40000] = v27;
        v25 = ((_DWORD)v25 + 1) & 0x1FFFF;
      }
      while ( (unsigned __int64)v24 < v21 );
      v18 = (int *)(a6 + 1342240);
      v28 = 0LL;
LABEL_18:
      if ( (unsigned __int64)v14 < v19 )
        goto LABEL_21;
      if ( (unsigned __int64)v14 < v21 )
        break;
      v17 = v66;
      v61 = v28;
      v15 = (__int64)v65;
LABEL_92:
      while ( v14 < v17 )
      {
        ++*(_DWORD *)&a6[4 * *v14 + 1339936];
        v54 = *v14++;
        *v22++ = v54;
        if ( v20 <= 0 )
        {
          v55 = 2 * v20;
          v20 = 1;
          *v18 = v55;
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
        v56 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v56 = 1;
      }
      if ( v15
         + v61
         + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v64 + 31) >> 5)
         + 258 >= v67 )
        return 3221225507LL;
      v57 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v22, v15, v56);
      v65 = v57;
      v58 = v56 == 0;
      v15 = (__int64)v57;
      v16 = a9;
      if ( !v58 )
      {
        *a5 = (_DWORD)v57 - v71;
        return 0LL;
      }
    }
    XpressCallback = RtlpMakeXpressCallback((__int64)v68, v21, (__int64)v14);
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
    v62 = v30;
    v33 = v14 - 0x10000;
    while ( 1 )
    {
      v30 = *(unsigned __int8 **)&a6[8 * ((__int64)&v30[-a1] % 0x20000) + 0x40000];
      if ( v30 <= v33 )
      {
LABEL_67:
        v40 = v62;
LABEL_68:
        v42 = v63;
        v59 = 0LL;
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
          v44 = 2 * v20;
LABEL_77:
          v20 = 1;
          *v70 = v44;
          v18 = (int *)v22;
          v70 = (int *)v22;
          v22 += 4;
        }
        else
        {
          if ( v43 < 0x100 )
            v45 = XpressHighBitIndexTable[v43];
          else
            v45 = XpressHighBitIndexTable[v43 >> 8] + 8;
          v64 += v45;
          v46 = v42 - 3;
          v47 = v43 - (1LL << v45);
          v48 = 16 * v45;
          if ( v46 < 0xF )
          {
            v49 = v46 + v48;
            *v22 = v49;
            v52 = v22 + 1;
          }
          else
          {
            v49 = v48 + 15;
            v50 = v46 - 15;
            *v22 = v49;
            v51 = v22 + 1;
            if ( v50 >= 0xFF )
            {
              v53 = v50 + 15;
              *v51 = -1;
              if ( v53 >= 0x10000 )
              {
                *(_WORD *)(v51 + 1) = 0;
                *(_DWORD *)(v51 + 3) = v53;
                v52 = v51 + 7;
                v28 += 7LL;
              }
              else
              {
                *(_WORD *)(v51 + 1) = v53;
                v52 = v51 + 3;
                v28 += 3LL;
              }
            }
            else
            {
              *v51 = v50;
              v52 = v51 + 1;
              ++v28;
            }
          }
          ++*(_DWORD *)&a6[4 * v49 + 1340960];
          *v52 = v47;
          v22 = (unsigned __int8 *)(v52 + 1);
          if ( v20 <= 0 )
          {
            v44 = 2 * v20 + 1;
            goto LABEL_77;
          }
          v20 = 2 * v20 + 1;
LABEL_73:
          v18 = v70;
        }
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
          v41 = v39 + v59;
          goto LABEL_66;
        }
        v63 = v39;
        v40 = v30;
        v62 = v30;
        if ( &v30[v39] > v32 )
          goto LABEL_68;
      }
      v41 = v59;
LABEL_66:
      v59 = v41 + 1;
      if ( (unsigned __int64)(v41 + 1) >= 0xC )
        goto LABEL_67;
    }
  }
  return 3221225507LL;
}
