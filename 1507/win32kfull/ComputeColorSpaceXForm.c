/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C00A69E8
 * Callers:
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 * Callees:
 *     ComputeInverseMatrix3x3 @ 0x1C00A6D50 (ComputeInverseMatrix3x3.c)
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C00A7BF8 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  unsigned int v7; // edi
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  int v11; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // eax
  int v17; // ebx
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  int v20; // r15d
  int v21; // r15d
  int v22; // r12d
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // edi
  int v27; // r14d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  unsigned int v33; // esi
  int v34; // ecx
  int v35; // eax
  __int128 v36; // xmm1
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  int v40; // r15d
  __int64 v41; // r8
  __int64 v42; // r9
  __int128 v43; // xmm0
  int v44; // ecx
  __int128 v45; // xmm1
  __int64 result; // rax
  int v47; // r9d
  unsigned int v48; // [rsp+20h] [rbp-69h]
  unsigned int v49; // [rsp+24h] [rbp-65h]
  unsigned int v50; // [rsp+28h] [rbp-61h]
  unsigned int v51; // [rsp+2Ch] [rbp-5Dh]
  int v52; // [rsp+30h] [rbp-59h]
  unsigned int v53; // [rsp+34h] [rbp-55h]
  int v54; // [rsp+38h] [rbp-51h]
  unsigned int v56; // [rsp+48h] [rbp-41h]
  unsigned int v57; // [rsp+54h] [rbp-35h]
  unsigned __int64 v58; // [rsp+58h] [rbp-31h]
  __int128 v60; // [rsp+78h] [rbp-11h] BYREF
  __int128 v61; // [rsp+88h] [rbp-1h]
  int v62; // [rsp+98h] [rbp+Fh]
  unsigned int v63; // [rsp+9Ch] [rbp+13h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[3];
  v7 = a2[5];
  v8 = a2[2];
  v9 = a2[8];
  v10 = a2[4];
  v50 = v10;
  v54 = a4;
  v56 = *a2;
  v51 = v5;
  v49 = v6;
  v48 = v7;
  if ( a4 >= 0 )
  {
    v47 = a4 - 1;
    if ( v47 < 0 )
      v47 = 5;
    v54 = v47;
    v11 = 100 * StdIlluminant[2 * v47];
    a2[6] = v11;
    v12 = 100 * StdIlluminant[2 * v47 + 1];
    a2[7] = v12;
  }
  else
  {
    v11 = a2[6];
    v12 = a2[7];
  }
  *(_QWORD *)((char *)&v60 + 4) = __PAIR64__(v4, v9);
  v53 = v12;
  v52 = v11;
  v13 = v6 - v7;
  LODWORD(v60) = 65539;
  v14 = v7 - v5;
  v15 = v5 - v6;
  HIDWORD(v60) = v13;
  *(_QWORD *)&v61 = __PAIR64__(v14, v8);
  DWORD2(v61) = v10;
  HIDWORD(v61) = v5 - v6;
  v16 = MulDivFD6Pairs(&v60);
  DWORD1(v60) = MulFD6(v12, v16);
  HIDWORD(v60) = v13;
  DWORD1(v61) = v8 - v50;
  v17 = -v12;
  LODWORD(v60) = 65540;
  v62 = -v50;
  v63 = v49;
  DWORD2(v60) = v11;
  LODWORD(v61) = -v12;
  *((_QWORD *)&v61 + 1) = __PAIR64__(v48, v8);
  v18 = MulDivFD6Pairs(&v60);
  *((_QWORD *)&v60 + 1) = __PAIR64__(v14, v11);
  v62 = v50;
  DWORD1(v61) = v50 - v4;
  DWORD2(v61) = -v4;
  HIDWORD(v61) = v48;
  LODWORD(v61) = v17;
  v63 = v51;
  v57 = MulDivFD6Pairs(&v60);
  DWORD1(v61) = v4 - v8;
  *((_QWORD *)&v60 + 1) = __PAIR64__(v15, v11);
  v62 = -v8;
  LODWORD(v61) = v17;
  *((_QWORD *)&v61 + 1) = __PAIR64__(v49, v4);
  v63 = v51;
  v19 = MulDivFD6Pairs(&v60);
  LODWORD(v60) = MulFD6(v4, v18);
  v20 = MulFD6(v8, v57);
  DWORD1(v60) = v20;
  DWORD2(v60) = MulFD6(v50, v19);
  v21 = DWORD2(v60) + v20;
  v22 = MulFD6(v51, v18);
  HIDWORD(v60) = v22;
  *(_DWORD *)(a3 + 48) = v22;
  v23 = MulFD6(v49, v57);
  LODWORD(v61) = v23;
  *(_DWORD *)(a3 + 52) = v23;
  v24 = MulFD6(v48, v19);
  DWORD1(v61) = v24;
  *(_DWORD *)(a3 + 56) = v24;
  v25 = v24 + v23;
  v26 = MulFD6(1000000 - v51 - v56, v18);
  DWORD2(v61) = v26;
  v27 = MulFD6(1000000 - v49 - v8, v57);
  HIDWORD(v61) = v27;
  v28 = MulFD6(1000000 - v48 - v50, v19);
  v31 = v60 + v21;
  v32 = v26 + v28 + v27;
  v62 = v28;
  v33 = v22 + v25;
  v34 = v28;
  v58 = __PAIR64__(v33, v31);
  v35 = 0;
  if ( v54 < 0 )
  {
    v36 = v61;
    *(_OWORD *)a3 = v60;
    *(_OWORD *)(a3 + 16) = v36;
    *(_DWORD *)(a3 + 32) = v34;
    ComputeInverseMatrix3x3(a3, &v60);
    v35 = 0;
  }
  *(_DWORD *)(a3 + 76) = v33;
  if ( v33 != 1000000 )
  {
    if ( v33 )
    {
      LODWORD(v58) = DivFD6(v31, v33, v29, v30);
      v31 = v58;
      v32 = DivFD6(v32, v33, v37, v38);
      v35 = 0;
    }
    else
    {
      v32 = 0;
      LODWORD(v58) = 0;
      v31 = 0;
    }
    v33 = 1000000;
    HIDWORD(v58) = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v40 = 0;
  }
  else
  {
    v39 = v31 + 2 * (v33 + v32 + 4 * v33) + v33 + v32 + 4 * v33;
    v40 = DivFD6(4 * v31, v39, v29, v30);
    v35 = DivFD6(9 * v33, v39, v41, v42);
  }
  v43 = v60;
  v44 = v62;
  v45 = v61;
  *(_DWORD *)(a3 + 64) = v35;
  *(_OWORD *)a3 = v43;
  *(_DWORD *)(a3 + 68) = v52;
  result = v53;
  *(_QWORD *)(a3 + 36) = v58;
  *(_OWORD *)(a3 + 16) = v45;
  *(_DWORD *)(a3 + 44) = v32;
  *(_DWORD *)(a3 + 32) = v44;
  *(_DWORD *)(a3 + 60) = v40;
  *(_DWORD *)(a3 + 72) = v53;
  return result;
}
