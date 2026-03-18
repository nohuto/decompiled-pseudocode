/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x14024C654
 * Callers:
 *     RtlCompressBufferProgress @ 0x14014DA30 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x14024BF04 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x14014E56C (RtlpMakeXpressCallback.c)
 *     memset @ 0x140195A80 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x14024D948 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x14024DD24 (XpressDoHuffmanPass.c)
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
  unsigned __int8 *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int8 *v12; // rbx
  unsigned int v13; // ecx
  void *v14; // r9
  _DWORD *v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int8 *v18; // rdx
  int *v19; // rcx
  int v20; // r15d
  unsigned __int8 *v21; // rsi
  unsigned __int8 v22; // al
  _DWORD *v23; // rdx
  __int64 v24; // r10
  unsigned __int8 *v25; // r8
  unsigned __int8 v26; // di
  unsigned __int8 *v27; // r11
  unsigned __int8 v28; // cl
  __int64 v29; // rdx
  unsigned __int8 *v30; // rcx
  unsigned __int8 v31; // bp
  char *v32; // r9
  unsigned __int8 v33; // r10
  __int64 v34; // rdx
  unsigned __int8 *v35; // rcx
  unsigned __int8 v36; // r12
  _BYTE *v37; // r10
  unsigned __int8 v38; // bp
  __int64 v39; // rdx
  unsigned __int8 *v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  char v46; // cl
  unsigned __int8 v47; // cl
  unsigned __int64 v48; // rdx
  _BYTE *v49; // rsi
  _WORD *v50; // rsi
  unsigned __int64 v51; // rdx
  int v52; // eax
  int *v53; // rcx
  unsigned __int8 v54; // al
  int v55; // eax
  int v56; // edi
  __int64 v57; // rax
  bool v58; // zf
  unsigned __int64 v60; // [rsp+30h] [rbp-A8h]
  __int64 v61; // [rsp+38h] [rbp-A0h]
  int *v62; // [rsp+40h] [rbp-98h]
  unsigned __int64 XpressCallback; // [rsp+48h] [rbp-90h]
  __int64 v64; // [rsp+50h] [rbp-88h]
  unsigned __int8 *v65; // [rsp+58h] [rbp-80h]
  __int64 v66; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v67; // [rsp+68h] [rbp-70h]
  unsigned __int64 v68; // [rsp+70h] [rbp-68h]
  __int64 v69; // [rsp+78h] [rbp-60h]
  unsigned __int64 v70; // [rsp+80h] [rbp-58h]
  _QWORD v71[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-40h]
  int v74; // [rsp+F0h] [rbp+18h]

  v74 = a3;
  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v60 = v10;
  v68 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v66 = a3;
  v11 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v70 = v10 - 40;
  v12 = (unsigned __int8 *)a1;
  if ( !a7 || (v13 = a9, a9 > a2) )
    v13 = a2;
  v71[0] = a7;
  v14 = a6 + 22608;
  v15 = a6 + 23184;
  v16 = v13;
  v71[1] = a8;
  v72 = v13;
  v69 = v13;
  do
  {
    v64 = 0LL;
    v61 = 0LL;
    memset(v14, 0, 0x800uLL);
    v17 = (unsigned __int64)&v12[v16];
    v18 = v12 + 0x10000;
    v19 = v15;
    v62 = v15;
    if ( (unsigned __int64)(v12 + 0x10000) > v10 )
      v18 = (unsigned __int8 *)v10;
    v20 = 1;
    v65 = v18;
    if ( (unsigned __int64)(v18 - 40) < v17 )
      v17 = (unsigned __int64)(v18 - 40);
    v21 = (unsigned __int8 *)(v15 + 1);
    XpressCallback = v17;
    if ( v12 == v9 )
    {
      v20 = 2;
      ++a6[*v12 + 22608];
      v22 = *v12++;
      *v21 = v22;
      v21 = (unsigned __int8 *)v15 + 5;
    }
    if ( v12 < v18 - 40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = &a6[2 * *v12];
          v24 = v12[2] + 4 * v12[1];
          v25 = *(unsigned __int8 **)&v23[4 * v24];
          *(_QWORD *)&v23[4 * v24] = v12;
          if ( *(_WORD *)v25 == *(_WORD *)v12 && v25[2] == v12[2] && v12 - v25 < 0x10000 )
            break;
LABEL_41:
          ++a6[*v12 + 22608];
          v42 = *v12++;
          *v21++ = v42;
          if ( v20 <= 0 )
          {
            v52 = 2 * v20;
            goto LABEL_85;
          }
          v20 *= 2;
        }
        v26 = v25[3];
        v27 = v12 + 3;
        v28 = v12[3];
        v67 = v12;
        if ( v28 != v26 )
        {
          v29 = *v12 + 2 * v24;
          v30 = *(unsigned __int8 **)&a6[2 * v29 + 5612 + 2 * v28];
          *(_QWORD *)&a6[2 * v29 + 5612 + 2 * v26] = v25;
          if ( v12 - v30 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v30 )
          {
            v12 += 3;
            goto LABEL_35;
          }
          v25 = v30;
          *(_QWORD *)&a6[2 * v29 + 5612 + 2 * *v27] = v12;
        }
        v31 = v25[4];
        v32 = (char *)(v12 + 4);
        v33 = v12[4];
        if ( v33 != v31 )
        {
          v34 = 2
              * ((unsigned __int8)__ROR1__(v12[1] ^ __ROL1__(*v27 + *v12, 3), 1)
               + 4 * (unsigned __int8)__ROL1__(*v12 ^ __ROR1__(v12[2] + v12[1] + 97, 1), 3));
          v35 = *(unsigned __int8 **)&a6[2 * v34 + 5612 + 2 * v33];
          *(_QWORD *)&a6[2 * v34 + 5612 + 2 * v31] = v25;
          if ( v12 - v35 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v35 || *v32 != v35[4] || v12 == v35 )
          {
            v12 += 4;
            v25 += 4;
LABEL_37:
            v10 = v60;
            goto LABEL_38;
          }
          v25 = v35;
          *(_QWORD *)&a6[2 * v34 + 5612 + 2 * (unsigned __int8)*v32] = v12;
        }
        v36 = v25[5];
        v37 = v12 + 5;
        v38 = v12[5];
        if ( v38 != v36 )
        {
          v39 = 2
              * ((v12[2] ^ (unsigned __int8)__ROL1__(*v12, *v32))
               + 4
               * ((unsigned __int8)__ROR1__(v12[1] ^ __ROL1__(*v27, 3), 1)
                + (unsigned __int8)__ROL1__(*v32 ^ (__ROR1__(*v12, 1) + 69), 3)));
          v40 = *(unsigned __int8 **)&a6[2 * v39 + 5612 + 2 * v38];
          *(_QWORD *)&a6[2 * v39 + 5612 + 2 * v36] = v25;
          if ( v12 - v40 >= 0x10000
            || *(_DWORD *)v12 != *(_DWORD *)v40
            || *v32 != v40[4]
            || *v37 != v40[5]
            || v12 == v40 )
          {
            v12 += 5;
            v25 += 5;
            goto LABEL_37;
          }
          v25 = v40;
          *(_QWORD *)&a6[2 * v39 + 5612 + 2 * (unsigned __int8)*v37] = v12;
        }
        v12 += 6;
        for ( v25 += 6; ; v25 += 32 )
        {
          if ( (unsigned __int64)v12 >= v70 )
          {
            v10 = v60;
            while ( (unsigned __int64)v12 < v60 && *v12 == *v25 )
            {
              ++v12;
              ++v25;
            }
            goto LABEL_38;
          }
          if ( *(_DWORD *)v12 != *(_DWORD *)v25 )
            break;
          if ( *((_DWORD *)v12 + 1) != *((_DWORD *)v25 + 1) )
          {
            v12 += 4;
            v25 += 4;
            break;
          }
          if ( *((_DWORD *)v12 + 2) != *((_DWORD *)v25 + 2) )
          {
            v12 += 8;
            v25 += 8;
            break;
          }
          if ( *((_DWORD *)v12 + 3) != *((_DWORD *)v25 + 3) )
          {
            v12 += 12;
            v25 += 12;
            break;
          }
          if ( *((_DWORD *)v12 + 4) != *((_DWORD *)v25 + 4) )
          {
            v12 += 16;
            v25 += 16;
            break;
          }
          if ( *((_DWORD *)v12 + 5) != *((_DWORD *)v25 + 5) )
          {
            v12 += 20;
            v25 += 20;
            break;
          }
          if ( *((_DWORD *)v12 + 6) != *((_DWORD *)v25 + 6) )
          {
            v12 += 24;
            v25 += 24;
            break;
          }
          if ( *((_DWORD *)v12 + 7) != *((_DWORD *)v25 + 7) )
          {
            v12 += 28;
            v25 += 28;
            break;
          }
          v12 += 32;
        }
        if ( *v12 != *v25 )
          goto LABEL_37;
        if ( v12[1] != v25[1] )
        {
          ++v12;
          ++v25;
          goto LABEL_37;
        }
        v10 = v60;
        if ( v12[2] != v25[2] )
        {
          v12 += 2;
          v25 += 2;
          goto LABEL_38;
        }
        v12 += 3;
LABEL_35:
        v25 += 3;
LABEL_38:
        v41 = v12 - v25;
        if ( v12 - v67 == 3 && v41 > 0x1000 )
        {
          v12 = v67;
          goto LABEL_41;
        }
        if ( v41 < 0x100 )
          v43 = XpressHighBitIndexTable[v41];
        else
          v43 = XpressHighBitIndexTable[v41 >> 8] + 8;
        v64 += v43;
        v44 = v12 - v67 - 3;
        v45 = v41 - (1LL << v43);
        v46 = 16 * v43;
        if ( v44 < 0xF )
        {
          v47 = v44 + v46;
          *v21 = v47;
          v50 = v21 + 1;
        }
        else
        {
          v47 = v46 + 15;
          v48 = v12 - v67 - 18;
          *v21 = v47;
          v49 = v21 + 1;
          if ( v48 >= 0xFF )
          {
            v51 = v48 + 15;
            *v49 = -1;
            if ( v51 >= 0x10000 )
            {
              *(_WORD *)(v49 + 1) = 0;
              *(_DWORD *)(v49 + 3) = v51;
              v50 = v49 + 7;
              v61 += 7LL;
            }
            else
            {
              *(_WORD *)(v49 + 1) = v51;
              v50 = v49 + 3;
              v61 += 3LL;
            }
          }
          else
          {
            *v49 = v48;
            v50 = v49 + 1;
            ++v61;
          }
        }
        ++a6[v47 + 22864];
        *v50 = v45;
        v21 = (unsigned __int8 *)(v50 + 1);
        if ( v20 <= 0 )
        {
          v52 = 2 * v20 + 1;
LABEL_85:
          v53 = v62;
          v20 = 1;
          v62 = (int *)v21;
          v21 += 4;
          *v53 = v52;
          goto LABEL_86;
        }
        v20 = 2 * v20 + 1;
LABEL_86:
        if ( (unsigned __int64)v12 >= XpressCallback )
        {
          v18 = v65;
          if ( v12 >= v65 - 40 )
          {
            v11 = v66;
            v9 = (unsigned __int8 *)a1;
            v19 = v62;
            break;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v71, (unsigned __int64)(v65 - 40), (__int64)v12);
        }
      }
    }
    if ( v12 < v18 )
    {
      do
      {
        ++a6[*v12 + 22608];
        v54 = *v12++;
        *v21++ = v54;
        if ( v20 <= 0 )
        {
          v55 = 2 * v20;
          v20 = 1;
          *v19 = v55;
          v19 = (int *)v21;
          v21 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      while ( v12 < v18 );
      v9 = (unsigned __int8 *)a1;
    }
    while ( v20 > 0 )
      v20 = 2 * v20 + 1;
    *v19 = 2 * v20 + 1;
    if ( (unsigned __int64)v12 < v10 )
    {
      v56 = 0;
    }
    else
    {
      ++a6[22864];
      v56 = 1;
    }
    if ( v11 + v61 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 15304, 0LL) + v64 + 31) >> 5) + 258 >= v68 )
      return 3221225507LL;
    v57 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v21, v11, v56);
    v16 = v69;
    v14 = a6 + 22608;
    v66 = v57;
    v58 = v56 == 0;
    v11 = v57;
    v15 = a6 + 23184;
  }
  while ( v58 );
  *a5 = v57 - v74;
  return 0LL;
}
