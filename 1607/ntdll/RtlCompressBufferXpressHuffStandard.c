/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x180060610
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800605B0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x180060E50 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180061130 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800FCAEC (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int8 *v7; // rdi
  void *v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // r15
  int *v14; // r12
  unsigned __int8 *v15; // rbx
  int v16; // esi
  unsigned __int8 v17; // al
  _DWORD *v18; // rdx
  __int64 v19; // r8
  unsigned __int8 *v20; // r9
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // r11
  unsigned __int8 v23; // r10
  unsigned __int8 v24; // r11
  unsigned __int8 v25; // bp
  unsigned __int8 v26; // r12
  _BYTE *v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  char v32; // cl
  unsigned __int8 v33; // cl
  _WORD *v34; // rbx
  unsigned __int8 v35; // al
  int v36; // esi
  int v37; // r8d
  __int64 v38; // rax
  bool v39; // zf
  unsigned __int8 v41; // al
  __int64 v42; // r8
  unsigned __int8 *v43; // rcx
  __int64 v44; // rdx
  unsigned __int8 *v45; // rcx
  __int64 v46; // rdx
  unsigned __int8 *v47; // rcx
  unsigned __int8 v48; // al
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r8
  int v51; // eax
  unsigned __int64 XpressCallback; // [rsp+30h] [rbp-98h]
  unsigned __int64 v53; // [rsp+38h] [rbp-90h]
  __int64 v54; // [rsp+40h] [rbp-88h]
  unsigned __int64 v55; // [rsp+48h] [rbp-80h]
  __int64 v56; // [rsp+50h] [rbp-78h]
  __int64 v57; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v58; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v59; // [rsp+68h] [rbp-60h]
  unsigned __int64 v60; // [rsp+70h] [rbp-58h]
  _QWORD v61[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+88h] [rbp-40h]
  int v64; // [rsp+E0h] [rbp+18h]
  int *v65; // [rsp+100h] [rbp+38h]
  __int64 v66; // [rsp+108h] [rbp+40h]

  v64 = a3;
  v57 = a2;
  v6 = a2 + a1;
  v55 = v6;
  v60 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  memset64(a6, a1, 0xAF6uLL);
  v56 = a3;
  v61[0] = 0LL;
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v7 = (unsigned __int8 *)a1;
  v61[1] = 0LL;
  v8 = a6 + 22608;
  v62 = a2;
  v9 = a6 + 23184;
  while ( 2 )
  {
    v10 = 0LL;
    v54 = 0LL;
    v11 = 0LL;
    v66 = 0LL;
    memset(v8, 0, 0x800uLL);
    v12 = v7 + 0x10000;
    if ( (unsigned __int64)(v7 + 0x10000) > v6 )
      v12 = (unsigned __int8 *)v6;
    v59 = v12;
    XpressCallback = (unsigned __int64)&v7[v57];
    v13 = (unsigned __int64)(v12 - 40);
    v53 = (unsigned __int64)(v12 - 40);
    if ( v12 - 40 < &v7[v57] )
      XpressCallback = (unsigned __int64)(v12 - 40);
    v14 = v9;
    v65 = v9;
    v15 = (unsigned __int8 *)(v9 + 1);
    v16 = 1;
    if ( v7 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++a6[*v7 + 22608];
      v17 = *v7++;
      *v15++ = v17;
    }
    if ( (unsigned __int64)v7 >= v13 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = &a6[2 * *v7];
          v19 = v7[2] + 4 * v7[1];
          v20 = *(unsigned __int8 **)&v18[4 * v19];
          *(_QWORD *)&v18[4 * v19] = v7;
          if ( *(_WORD *)v20 != *(_WORD *)v7 || v20[2] != v7[2] || v7 - v20 >= 0x10000 )
            break;
          v21 = v20[3];
          v22 = v7[3];
          v58 = v7;
          if ( v22 != v21 )
          {
            v42 = *v7 + 2 * v19;
            v43 = *(unsigned __int8 **)&a6[2 * v42 + 5612 + 2 * v22];
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v21] = v20;
            if ( v7 - v43 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v43 )
              goto LABEL_47;
            v20 = v43;
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v7[3]] = v7;
          }
          v23 = v20[4];
          v24 = v7[4];
          if ( v24 != v23 )
          {
            v44 = 2
                * ((unsigned __int8)__ROR1__(v7[1] ^ __ROL1__(*v7 + v7[3], 3), 1)
                 + 4 * (unsigned __int8)__ROL1__(*v7 ^ __ROR1__(v7[2] + v7[1] + 97, 1), 3));
            v45 = *(unsigned __int8 **)&a6[2 * v44 + 5612 + 2 * v24];
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * v23] = v20;
            if ( v7 - v45 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v45 || (v48 = v7[4], v48 != v45[4]) || v7 == v45 )
            {
              v7 += 4;
              v20 += 4;
              goto LABEL_22;
            }
            v20 = v45;
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * v48] = v7;
          }
          v25 = v20[5];
          v26 = v7[5];
          v27 = v7 + 5;
          if ( v26 != v25 )
          {
            v46 = 2
                * ((v7[2] ^ (unsigned __int8)__ROL1__(*v7, v7[4]))
                 + 4
                 * ((unsigned __int8)__ROR1__(v7[1] ^ __ROL1__(v7[3], 3), 1)
                  + (unsigned __int8)__ROL1__(v7[4] ^ (__ROR1__(*v7, 1) + 69), 3)));
            v47 = *(unsigned __int8 **)&a6[2 * v46 + 5612 + 2 * v26];
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * v25] = v20;
            if ( v7 - v47 >= 0x10000
              || *(_DWORD *)v7 != *(_DWORD *)v47
              || v7[4] != v47[4]
              || *v27 != v47[5]
              || v7 == v47 )
            {
              v7 += 5;
              v20 += 5;
              goto LABEL_21;
            }
            v20 = v47;
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * (unsigned __int8)*v27] = v7;
          }
          v7 += 6;
          v20 += 6;
          if ( (unsigned __int64)v7 >= v55 - 40 )
          {
LABEL_72:
            while ( (unsigned __int64)v7 < v55 )
            {
              if ( *v7 != *v20 )
                break;
              ++v7;
              ++v20;
            }
          }
          else
          {
            while ( *(_DWORD *)v7 == *(_DWORD *)v20 )
            {
              if ( *((_DWORD *)v7 + 1) != *((_DWORD *)v20 + 1) )
              {
                v7 += 4;
                v20 += 4;
                break;
              }
              if ( *((_DWORD *)v7 + 2) != *((_DWORD *)v20 + 2) )
              {
                v7 += 8;
                v20 += 8;
                break;
              }
              if ( *((_DWORD *)v7 + 3) != *((_DWORD *)v20 + 3) )
              {
                v7 += 12;
                v20 += 12;
                break;
              }
              if ( *((_DWORD *)v7 + 4) != *((_DWORD *)v20 + 4) )
              {
                v7 += 16;
                v20 += 16;
                break;
              }
              if ( *((_DWORD *)v7 + 5) != *((_DWORD *)v20 + 5) )
              {
                v7 += 20;
                v20 += 20;
                break;
              }
              if ( *((_DWORD *)v7 + 6) != *((_DWORD *)v20 + 6) )
              {
                v7 += 24;
                v20 += 24;
                break;
              }
              if ( *((_DWORD *)v7 + 7) != *((_DWORD *)v20 + 7) )
              {
                v7 += 28;
                v20 += 28;
                break;
              }
              v7 += 32;
              v20 += 32;
              if ( (unsigned __int64)v7 >= v55 - 40 )
                goto LABEL_72;
            }
            if ( *v7 == *v20 )
            {
              if ( v7[1] == v20[1] )
              {
                v14 = v65;
                if ( v7[2] != v20[2] )
                {
                  v7 += 2;
                  v20 += 2;
                  goto LABEL_22;
                }
LABEL_47:
                v7 += 3;
                v20 += 3;
                goto LABEL_22;
              }
              ++v7;
              ++v20;
            }
          }
LABEL_21:
          v14 = v65;
LABEL_22:
          v28 = v7 - v20;
          if ( v7 - v58 == 3 && v28 > 0x1000 )
          {
            v13 = v53;
            v7 = v58;
            break;
          }
          if ( v28 >= 0x100 )
            v29 = XpressHighBitIndexTable[v28 >> 8] + 8;
          else
            v29 = XpressHighBitIndexTable[v28];
          v11 = v66;
          v10 = v29 + v54;
          v30 = v7 - v58 - 3;
          v31 = v28 - (1LL << v29);
          v32 = 16 * v29;
          v54 = v10;
          if ( v30 >= 0xF )
          {
            v33 = v32 + 15;
            v49 = v7 - v58 - 18;
            *v15 = v33;
            if ( v49 >= 0xFF )
            {
              v50 = v49 + 15;
              v15[1] = -1;
              if ( v50 >= 0x10000 )
              {
                *((_WORD *)v15 + 1) = 0;
                *((_DWORD *)v15 + 1) = v50;
                v34 = v15 + 8;
                v11 = v66 + 7;
              }
              else
              {
                *((_WORD *)v15 + 1) = v50;
                v34 = v15 + 4;
                v11 = v66 + 3;
              }
              v66 = v11;
            }
            else
            {
              v15[1] = v49;
              v34 = v15 + 2;
              v11 = ++v66;
            }
          }
          else
          {
            v33 = v30 + v32;
            *v15 = v33;
            v34 = v15 + 1;
          }
          ++a6[v33 + 22864];
          *v34 = v31;
          v15 = (unsigned __int8 *)(v34 + 1);
          if ( v16 <= 0 )
          {
            v65 = (int *)v15;
            *v14 = 2 * v16 + 1;
            v16 = 1;
            v14 = (int *)v15;
            v15 += 4;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          v13 = v53;
          if ( (unsigned __int64)v7 >= XpressCallback )
          {
            if ( (unsigned __int64)v7 >= v53 )
              goto LABEL_31;
LABEL_98:
            XpressCallback = RtlpMakeXpressCallback(v61, v13, v7);
          }
        }
        ++a6[*v7 + 22608];
        v41 = *v7++;
        *v15++ = v41;
        if ( v16 <= 0 )
          break;
        v16 *= 2;
      }
      v65 = (int *)v15;
      *v14 = 2 * v16;
      v16 = 1;
      v14 = (int *)v15;
      v15 += 4;
    }
    while ( (unsigned __int64)v7 < XpressCallback );
    if ( (unsigned __int64)v7 < v13 )
      goto LABEL_98;
    v10 = v54;
    v11 = v66;
LABEL_31:
    v12 = v59;
LABEL_32:
    while ( v7 < v12 )
    {
      ++a6[*v7 + 22608];
      v35 = *v7++;
      *v15++ = v35;
      if ( v16 <= 0 )
      {
        v51 = 2 * v16;
        v16 = 1;
        *v14 = v51;
        v14 = (int *)v15;
        v15 += 4;
      }
      else
      {
        v16 *= 2;
      }
    }
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    *v14 = 2 * v16 + 1;
    if ( (unsigned __int64)v7 < v55 )
    {
      v36 = 0;
    }
    else
    {
      ++a6[22864];
      v36 = 1;
    }
    if ( v11 + 4 * ((unsigned __int64)(v10 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v56 + 258 < v60 )
    {
      v37 = (int)v15;
      v9 = a6 + 23184;
      v38 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v37, v56, v36);
      v39 = v36 == 0;
      v56 = v38;
      v6 = v55;
      v8 = a6 + 22608;
      if ( !v39 )
      {
        *a5 = v38 - v64;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
