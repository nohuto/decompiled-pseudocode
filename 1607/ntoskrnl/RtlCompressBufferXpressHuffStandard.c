/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1401382C0
 * Callers:
 *     RtlCompressBufferProgress @ 0x14011469C (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x14013824C (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140114480 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x140138AF0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x140138DD0 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int8 *v9; // rdi
  unsigned int v10; // ecx
  _DWORD *v11; // rbx
  __int64 v12; // r14
  void *v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // r11
  unsigned __int8 *v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int8 *v18; // r13
  bool v19; // cf
  int *v20; // r10
  int v21; // r14d
  unsigned __int8 *v22; // rbx
  unsigned __int8 v23; // al
  _DWORD *v24; // rdx
  __int64 v25; // r8
  unsigned __int8 *v26; // r9
  unsigned __int8 v27; // al
  unsigned __int8 v28; // r10
  unsigned __int8 *v29; // rbp
  unsigned __int8 v30; // r11
  unsigned __int8 v31; // r11
  unsigned __int8 v32; // r12
  unsigned __int8 v33; // r12
  unsigned __int8 *v34; // r9
  __int64 v35; // r8
  unsigned __int8 *v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  char v40; // cl
  unsigned __int64 v41; // r8
  unsigned __int8 v42; // cl
  _WORD *v43; // rbx
  int v44; // ebp
  int v45; // r8d
  __int64 v47; // rdx
  unsigned __int8 *v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 *v50; // rcx
  unsigned __int64 v51; // r8
  int *v52; // rcx
  int v53; // eax
  unsigned __int8 v54; // al
  unsigned __int8 v55; // al
  unsigned __int64 v56; // r8
  unsigned __int8 v57; // al
  int v58; // eax
  unsigned __int64 XpressCallback; // rax
  unsigned __int64 v60; // [rsp+30h] [rbp-A8h]
  int *v61; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v62; // [rsp+40h] [rbp-98h]
  __int64 v63; // [rsp+48h] [rbp-90h]
  unsigned __int64 v64; // [rsp+50h] [rbp-88h]
  __int64 v65; // [rsp+58h] [rbp-80h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-78h]
  __int64 v67; // [rsp+68h] [rbp-70h]
  __int64 v68; // [rsp+70h] [rbp-68h]
  unsigned __int64 v69; // [rsp+78h] [rbp-60h]
  _QWORD v70[2]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+90h] [rbp-48h]
  unsigned __int8 v73; // [rsp+E8h] [rbp+10h]
  int v74; // [rsp+F0h] [rbp+18h]

  v74 = a3;
  v62 = a1 + a2;
  v69 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v9 = (unsigned __int8 *)a1;
  v67 = a3;
  if ( !a7 || (v10 = a9, a9 > a2) )
    v10 = a2;
  v70[0] = a7;
  v11 = a6 + 23184;
  v12 = v10;
  v70[1] = a8;
  v13 = a6 + 22608;
  v71 = v10;
  v68 = v10;
  while ( 2 )
  {
    v14 = 0LL;
    v65 = 0LL;
    v63 = 0LL;
    memset(v13, 0, 0x800uLL);
    v15 = v62;
    v16 = v9 + 0x10000;
    v66 = v9 + 0x10000;
    if ( (unsigned __int64)(v9 + 0x10000) > v62 )
    {
      v16 = (unsigned __int8 *)v62;
      v66 = (unsigned __int8 *)v62;
    }
    v17 = (unsigned __int64)(v16 - 40);
    v61 = v11;
    v18 = &v9[v12];
    v64 = (unsigned __int64)(v16 - 40);
    v19 = v16 - 40 < &v9[v12];
    v20 = v11;
    v21 = 1;
    if ( v19 )
      v18 = v16 - 40;
    v22 = (unsigned __int8 *)(v11 + 1);
    v60 = (unsigned __int64)v18;
    if ( v9 == (unsigned __int8 *)a1 )
    {
      v21 = 2;
      ++a6[*v9 + 22608];
      v23 = *v9++;
      *v22++ = v23;
    }
    if ( (unsigned __int64)v9 >= v17 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = &a6[2 * *v9];
          v25 = v9[2] + 4 * v9[1];
          v26 = *(unsigned __int8 **)&v24[4 * v25];
          *(_QWORD *)&v24[4 * v25] = v9;
          if ( *(_WORD *)v26 != *(_WORD *)v9 || v26[2] != v9[2] || v9 - v26 >= 0x10000 )
            break;
          v28 = v26[3];
          v29 = v9;
          v30 = v9[3];
          if ( v30 != v28 )
          {
            v35 = *v9 + 2 * v25;
            v36 = *(unsigned __int8 **)&a6[2 * v35 + 5612 + 2 * v30];
            *(_QWORD *)&a6[2 * v35 + 5612 + 2 * v28] = v26;
            if ( v9 - v36 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v36 )
            {
              v15 = v62;
              v9 += 3;
              v34 = v26 + 3;
              goto LABEL_42;
            }
            v26 = v36;
            *(_QWORD *)&a6[2 * v35 + 5612 + 2 * v9[3]] = v9;
          }
          v31 = v26[4];
          v32 = v9[4];
          if ( v32 != v31 )
          {
            v47 = 2
                * ((unsigned __int8)__ROR1__(v9[1] ^ __ROL1__(*v9 + v9[3], 3), 1)
                 + 4 * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + v9[1] + 97, 1), 3));
            v48 = *(unsigned __int8 **)&a6[2 * v47 + 5612 + 2 * v32];
            *(_QWORD *)&a6[2 * v47 + 5612 + 2 * v31] = v26;
            if ( v9 - v48 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v48 || (v54 = v9[4], v54 != v48[4]) || v9 == v48 )
            {
              v15 = v62;
              v9 += 4;
              v34 = v26 + 4;
              goto LABEL_41;
            }
            v26 = v48;
            *(_QWORD *)&a6[2 * v47 + 5612 + 2 * v54] = v9;
          }
          v33 = v26[5];
          v73 = v9[5];
          if ( v73 != v33 )
          {
            v49 = 2
                * ((v9[2] ^ (unsigned __int8)__ROL1__(*v9, v9[4]))
                 + 4
                 * ((unsigned __int8)__ROR1__(v9[1] ^ __ROL1__(v9[3], 3), 1)
                  + (unsigned __int8)__ROL1__(v9[4] ^ (__ROR1__(*v9, 1) + 69), 3)));
            v50 = *(unsigned __int8 **)&a6[2 * v49 + 5612 + 2 * v73];
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * v33] = v26;
            if ( v9 - v50 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v50
              || v9[4] != v50[4]
              || (v55 = v9[5], v55 != v50[5])
              || v9 == v50 )
            {
              v15 = v62;
              v9 += 5;
              v34 = v26 + 5;
              goto LABEL_41;
            }
            v26 = v50;
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * v55] = v9;
          }
          v15 = v62;
          v9 += 6;
          v34 = v26 + 6;
          if ( (unsigned __int64)v9 >= v62 - 40 )
          {
LABEL_30:
            while ( (unsigned __int64)v9 < v62 )
            {
              if ( *v9 != *v34 )
                break;
              ++v9;
              ++v34;
            }
            goto LABEL_41;
          }
          while ( *(_DWORD *)v9 == *(_DWORD *)v34 )
          {
            if ( *((_DWORD *)v9 + 1) != *((_DWORD *)v34 + 1) )
            {
              v9 += 4;
              v34 += 4;
              break;
            }
            if ( *((_DWORD *)v9 + 2) != *((_DWORD *)v34 + 2) )
            {
              v9 += 8;
              v34 += 8;
              break;
            }
            if ( *((_DWORD *)v9 + 3) != *((_DWORD *)v34 + 3) )
            {
              v9 += 12;
              v34 += 12;
              break;
            }
            if ( *((_DWORD *)v9 + 4) != *((_DWORD *)v34 + 4) )
            {
              v9 += 16;
              v34 += 16;
              break;
            }
            if ( *((_DWORD *)v9 + 5) != *((_DWORD *)v34 + 5) )
            {
              v9 += 20;
              v34 += 20;
              break;
            }
            if ( *((_DWORD *)v9 + 6) != *((_DWORD *)v34 + 6) )
            {
              v9 += 24;
              v34 += 24;
              break;
            }
            if ( *((_DWORD *)v9 + 7) != *((_DWORD *)v34 + 7) )
            {
              v9 += 28;
              v34 += 28;
              break;
            }
            v9 += 32;
            v34 += 32;
            if ( (unsigned __int64)v9 >= v62 - 40 )
              goto LABEL_30;
          }
          if ( *v9 != *v34 )
            goto LABEL_41;
          if ( v9[1] != v34[1] )
          {
            ++v9;
            ++v34;
LABEL_41:
            v18 = (unsigned __int8 *)v60;
            goto LABEL_42;
          }
          v18 = (unsigned __int8 *)v60;
          if ( v9[2] == v34[2] )
          {
            v9 += 3;
            v34 += 3;
          }
          else
          {
            v9 += 2;
            v34 += 2;
          }
LABEL_42:
          v37 = v9 - v34;
          if ( v9 - v29 == 3 && v37 > 0x1000 )
          {
            v20 = v61;
            v9 = v29;
            v17 = v64;
            break;
          }
          if ( v37 >= 0x100 )
            v38 = XpressHighBitIndexTable[v37 >> 8] + 8;
          else
            v38 = XpressHighBitIndexTable[v37];
          v14 = v38 + v65;
          v39 = v37 - (1LL << v38);
          v40 = 16 * v38;
          v41 = v9 - v29 - 3;
          v65 = v14;
          if ( v41 >= 0xF )
          {
            v42 = v40 + 15;
            v51 = v9 - v29 - 18;
            *v22 = v42;
            if ( v51 >= 0xFF )
            {
              v56 = v51 + 15;
              v22[1] = -1;
              if ( v56 >= 0x10000 )
              {
                *((_WORD *)v22 + 1) = 0;
                *((_DWORD *)v22 + 1) = v56;
                v43 = v22 + 8;
                v63 += 7LL;
              }
              else
              {
                *((_WORD *)v22 + 1) = v56;
                v43 = v22 + 4;
                v63 += 3LL;
              }
            }
            else
            {
              v22[1] = v51;
              v43 = v22 + 2;
              ++v63;
            }
          }
          else
          {
            v42 = v41 + v40;
            *v22 = v42;
            v43 = v22 + 1;
          }
          ++a6[v42 + 22864];
          *v43 = v39;
          v22 = (unsigned __int8 *)(v43 + 1);
          if ( v21 <= 0 )
          {
            v52 = v61;
            v53 = 2 * v21 + 1;
            v61 = (int *)v22;
            v21 = 1;
            v22 += 4;
            *v52 = v53;
          }
          else
          {
            v21 = 2 * v21 + 1;
          }
          v20 = v61;
          v17 = v64;
          if ( v9 >= v18 )
          {
            if ( (unsigned __int64)v9 >= v64 )
              goto LABEL_51;
LABEL_103:
            XpressCallback = RtlpMakeXpressCallback((__int64)v70, v17, (__int64)v9);
            v20 = v61;
            v18 = (unsigned __int8 *)XpressCallback;
            v15 = v62;
            v60 = XpressCallback;
          }
        }
        ++a6[*v9 + 22608];
        v27 = *v9++;
        *v22++ = v27;
        if ( v21 <= 0 )
          break;
        v21 *= 2;
      }
      v61 = (int *)v22;
      *v20 = 2 * v21;
      v21 = 1;
      v20 = (int *)v22;
      v22 += 4;
    }
    while ( v9 < v18 );
    if ( (unsigned __int64)v9 < v17 )
      goto LABEL_103;
    v14 = v65;
LABEL_51:
    v16 = v66;
LABEL_52:
    while ( v9 < v16 )
    {
      ++a6[*v9 + 22608];
      v57 = *v9++;
      *v22++ = v57;
      if ( v21 <= 0 )
      {
        v58 = 2 * v21;
        v21 = 1;
        *v20 = v58;
        v20 = (int *)v22;
        v22 += 4;
      }
      else
      {
        v21 *= 2;
      }
    }
    for ( ; v21 > 0; v21 = 2 * v21 + 1 )
      ;
    *v20 = 2 * v21 + 1;
    if ( (unsigned __int64)v9 < v15 )
    {
      v44 = 0;
    }
    else
    {
      ++a6[22864];
      v44 = 1;
    }
    if ( v63 + 4 * ((unsigned __int64)(v14 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v67 + 258 >= v69 )
      return 3221225507LL;
    v45 = (int)v22;
    v11 = a6 + 23184;
    v67 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v45, v67, v44);
    v13 = a6 + 22608;
    if ( !v44 )
    {
      v12 = v68;
      continue;
    }
    break;
  }
  *a5 = v67 - v74;
  return 0LL;
}
