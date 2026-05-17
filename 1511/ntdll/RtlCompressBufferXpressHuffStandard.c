/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x180065A60
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x180065A00 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x1800662A0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180066578 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpMakeXpressCallback @ 0x1800F3420 (RtlpMakeXpressCallback.c)
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
  int *v13; // r12
  unsigned __int8 *v14; // rbx
  int v15; // esi
  unsigned __int8 v16; // al
  _DWORD *v17; // rdx
  __int64 v18; // r8
  unsigned __int8 *v19; // r9
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // r11
  unsigned __int8 v22; // r10
  unsigned __int8 v23; // r11
  unsigned __int8 v24; // bp
  unsigned __int8 v25; // r12
  _BYTE *v26; // r10
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  char v31; // cl
  unsigned __int8 v32; // cl
  _WORD *v33; // rbx
  unsigned __int64 v34; // r15
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
  int *v49; // rcx
  int v50; // eax
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r8
  int v53; // eax
  unsigned __int64 XpressCallback; // [rsp+30h] [rbp-98h]
  __int64 v55; // [rsp+38h] [rbp-90h]
  unsigned __int64 v56; // [rsp+40h] [rbp-88h]
  __int64 v57; // [rsp+48h] [rbp-80h]
  unsigned __int64 v58; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v59; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v60; // [rsp+60h] [rbp-68h]
  unsigned __int64 v61; // [rsp+68h] [rbp-60h]
  __int64 v62; // [rsp+70h] [rbp-58h]
  _QWORD v63[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+88h] [rbp-40h]
  int v66; // [rsp+E0h] [rbp+18h]
  __int64 v67; // [rsp+100h] [rbp+38h]
  int *v68; // [rsp+108h] [rbp+40h]

  v66 = a3;
  v62 = a2;
  v6 = a2 + a1;
  v56 = v6;
  v61 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  memset64(a6, a1, 0xAF6uLL);
  v57 = a3;
  v63[0] = 0LL;
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v7 = (unsigned __int8 *)a1;
  v63[1] = 0LL;
  v8 = a6 + 22608;
  v64 = a2;
  v9 = a6 + 23184;
  while ( 2 )
  {
    v10 = 0LL;
    v55 = 0LL;
    v11 = 0LL;
    v67 = 0LL;
    memset(v8, 0, 0x800uLL);
    v12 = v7 + 0x10000;
    if ( (unsigned __int64)(v7 + 0x10000) > v6 )
      v12 = (unsigned __int8 *)v6;
    v60 = v12;
    XpressCallback = (unsigned __int64)&v7[v62];
    v58 = (unsigned __int64)(v12 - 40);
    if ( v12 - 40 < &v7[v62] )
      XpressCallback = (unsigned __int64)(v12 - 40);
    v13 = v9;
    v68 = v9;
    v14 = (unsigned __int8 *)(v9 + 1);
    v15 = 1;
    if ( v7 == (unsigned __int8 *)a1 )
    {
      v15 = 2;
      ++a6[*v7 + 22608];
      v16 = *v7++;
      *v14++ = v16;
    }
    if ( v7 >= v12 - 40 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = &a6[2 * *v7];
          v18 = v7[2] + 4 * v7[1];
          v19 = *(unsigned __int8 **)&v17[4 * v18];
          *(_QWORD *)&v17[4 * v18] = v7;
          if ( *(_WORD *)v19 != *(_WORD *)v7 || v19[2] != v7[2] || v7 - v19 >= 0x10000 )
            break;
          v20 = v19[3];
          v21 = v7[3];
          v59 = v7;
          if ( v21 != v20 )
          {
            v42 = *v7 + 2 * v18;
            v43 = *(unsigned __int8 **)&a6[2 * v42 + 5612 + 2 * v21];
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v20] = v19;
            if ( v7 - v43 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v43 )
              goto LABEL_46;
            v19 = v43;
            *(_QWORD *)&a6[2 * v42 + 5612 + 2 * v7[3]] = v7;
          }
          v22 = v19[4];
          v23 = v7[4];
          if ( v23 != v22 )
          {
            v44 = 2
                * ((unsigned __int8)__ROR1__(v7[1] ^ __ROL1__(*v7 + v7[3], 3), 1)
                 + 4 * (unsigned __int8)__ROL1__(*v7 ^ __ROR1__(v7[2] + v7[1] + 97, 1), 3));
            v45 = *(unsigned __int8 **)&a6[2 * v44 + 5612 + 2 * v23];
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * v22] = v19;
            if ( v7 - v45 >= 0x10000 || *(_DWORD *)v7 != *(_DWORD *)v45 || (v48 = v7[4], v48 != v45[4]) || v7 == v45 )
            {
              v7 += 4;
              v19 += 4;
              goto LABEL_21;
            }
            v19 = v45;
            *(_QWORD *)&a6[2 * v44 + 5612 + 2 * v48] = v7;
          }
          v24 = v19[5];
          v25 = v7[5];
          v26 = v7 + 5;
          if ( v25 != v24 )
          {
            v46 = 2
                * ((v7[2] ^ (unsigned __int8)__ROL1__(*v7, v7[4]))
                 + 4
                 * ((unsigned __int8)__ROR1__(v7[1] ^ __ROL1__(v7[3], 3), 1)
                  + (unsigned __int8)__ROL1__(v7[4] ^ (__ROR1__(*v7, 1) + 69), 3)));
            v47 = *(unsigned __int8 **)&a6[2 * v46 + 5612 + 2 * v25];
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * v24] = v19;
            if ( v7 - v47 >= 0x10000
              || *(_DWORD *)v7 != *(_DWORD *)v47
              || v7[4] != v47[4]
              || *v26 != v47[5]
              || v7 == v47 )
            {
              v7 += 5;
              v19 += 5;
              goto LABEL_21;
            }
            v19 = v47;
            *(_QWORD *)&a6[2 * v46 + 5612 + 2 * (unsigned __int8)*v26] = v7;
          }
          v7 += 6;
          v19 += 6;
          if ( (unsigned __int64)v7 >= v56 - 40 )
          {
LABEL_59:
            while ( (unsigned __int64)v7 < v56 )
            {
              if ( *v7 != *v19 )
                break;
              ++v7;
              ++v19;
            }
          }
          else
          {
            while ( *(_DWORD *)v7 == *(_DWORD *)v19 )
            {
              if ( *((_DWORD *)v7 + 1) != *((_DWORD *)v19 + 1) )
              {
                v7 += 4;
                v19 += 4;
                break;
              }
              if ( *((_DWORD *)v7 + 2) != *((_DWORD *)v19 + 2) )
              {
                v7 += 8;
                v19 += 8;
                break;
              }
              if ( *((_DWORD *)v7 + 3) != *((_DWORD *)v19 + 3) )
              {
                v7 += 12;
                v19 += 12;
                break;
              }
              if ( *((_DWORD *)v7 + 4) != *((_DWORD *)v19 + 4) )
              {
                v7 += 16;
                v19 += 16;
                break;
              }
              if ( *((_DWORD *)v7 + 5) != *((_DWORD *)v19 + 5) )
              {
                v7 += 20;
                v19 += 20;
                break;
              }
              if ( *((_DWORD *)v7 + 6) != *((_DWORD *)v19 + 6) )
              {
                v7 += 24;
                v19 += 24;
                break;
              }
              if ( *((_DWORD *)v7 + 7) != *((_DWORD *)v19 + 7) )
              {
                v7 += 28;
                v19 += 28;
                break;
              }
              v7 += 32;
              v19 += 32;
              if ( (unsigned __int64)v7 >= v56 - 40 )
                goto LABEL_59;
            }
            if ( *v7 == *v19 )
            {
              if ( v7[1] == v19[1] )
              {
                if ( v7[2] != v19[2] )
                {
                  v7 += 2;
                  v19 += 2;
                  goto LABEL_21;
                }
LABEL_46:
                v7 += 3;
                v19 += 3;
                goto LABEL_21;
              }
              ++v7;
              ++v19;
            }
          }
LABEL_21:
          v27 = v7 - v19;
          if ( v7 - v59 == 3 && v27 > 0x1000 )
          {
            v7 = v59;
            break;
          }
          if ( v27 >= 0x100 )
            v28 = XpressHighBitIndexTable[v27 >> 8] + 8;
          else
            v28 = XpressHighBitIndexTable[v27];
          v11 = v67;
          v10 = v28 + v55;
          v29 = v7 - v59 - 3;
          v30 = v27 - (1LL << v28);
          v31 = 16 * v28;
          v55 = v10;
          if ( v29 >= 0xF )
          {
            v32 = v31 + 15;
            v51 = v7 - v59 - 18;
            *v14 = v32;
            if ( v51 >= 0xFF )
            {
              v52 = v51 + 15;
              v14[1] = -1;
              if ( v52 >= 0x10000 )
              {
                *((_WORD *)v14 + 1) = 0;
                *((_DWORD *)v14 + 1) = v52;
                v33 = v14 + 8;
                v11 = v67 + 7;
              }
              else
              {
                *((_WORD *)v14 + 1) = v52;
                v33 = v14 + 4;
                v11 = v67 + 3;
              }
              v67 = v11;
            }
            else
            {
              v14[1] = v51;
              v33 = v14 + 2;
              v11 = ++v67;
            }
          }
          else
          {
            v32 = v29 + v31;
            *v14 = v32;
            v33 = v14 + 1;
          }
          v13 = v68;
          ++a6[v32 + 22864];
          *v33 = v30;
          v14 = (unsigned __int8 *)(v33 + 1);
          if ( v15 <= 0 )
          {
            v68 = (int *)v14;
            *v13 = 2 * v15 + 1;
            v15 = 1;
            v13 = (int *)v14;
            v14 += 4;
          }
          else
          {
            v15 = 2 * v15 + 1;
          }
          if ( (unsigned __int64)v7 >= XpressCallback )
          {
            v34 = v58;
            if ( (unsigned __int64)v7 >= v58 )
              goto LABEL_30;
LABEL_98:
            XpressCallback = RtlpMakeXpressCallback(v63, v34, v7);
          }
        }
        ++a6[*v7 + 22608];
        v41 = *v7++;
        *v14++ = v41;
        if ( v15 <= 0 )
          break;
        v15 *= 2;
      }
      v49 = v68;
      v50 = 2 * v15;
      v68 = (int *)v14;
      v13 = (int *)v14;
      v14 += 4;
      v15 = 1;
      *v49 = v50;
    }
    while ( (unsigned __int64)v7 < XpressCallback );
    v34 = v58;
    if ( (unsigned __int64)v7 < v58 )
      goto LABEL_98;
    v10 = v55;
    v11 = v67;
LABEL_30:
    v12 = v60;
LABEL_31:
    while ( v7 < v12 )
    {
      ++a6[*v7 + 22608];
      v35 = *v7++;
      *v14++ = v35;
      if ( v15 <= 0 )
      {
        v53 = 2 * v15;
        v15 = 1;
        *v13 = v53;
        v13 = (int *)v14;
        v14 += 4;
      }
      else
      {
        v15 *= 2;
      }
    }
    for ( ; v15 > 0; v15 = 2 * v15 + 1 )
      ;
    *v13 = 2 * v15 + 1;
    if ( (unsigned __int64)v7 < v56 )
    {
      v36 = 0;
    }
    else
    {
      ++a6[22864];
      v36 = 1;
    }
    if ( v11 + 4 * ((unsigned __int64)(v10 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v57 + 258 < v61 )
    {
      v37 = (int)v14;
      v9 = a6 + 23184;
      v38 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v37, v57, v36);
      v39 = v36 == 0;
      v57 = v38;
      v6 = v56;
      v8 = a6 + 22608;
      if ( !v39 )
      {
        *a5 = v38 - v66;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
