/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C00F5218
 * Callers:
 *     pDCIAdjClr @ 0x1C00F3FD4 (pDCIAdjClr.c)
 * Callees:
 *     ComputeInverseMatrix3x3 @ 0x1C00F5584 (ComputeInverseMatrix3x3.c)
 *     MulFD6 @ 0x1C00F5D54 (MulFD6.c)
 *     DivFD6 @ 0x1C00F5E78 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C00F6104 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  int v12; // r15d
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // esi
  unsigned int v17; // eax
  int v18; // ebx
  unsigned int v19; // r14d
  int v20; // r15d
  int v21; // r15d
  int v22; // r12d
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // edi
  int v27; // r14d
  int v28; // eax
  unsigned int v29; // r15d
  unsigned int v30; // r14d
  unsigned int v31; // esi
  int v32; // ecx
  int v33; // eax
  __int128 v34; // xmm1
  unsigned int v35; // ebx
  int v36; // r15d
  __int128 v37; // xmm0
  int v38; // ecx
  __int128 v39; // xmm1
  __int64 result; // rax
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-69h]
  unsigned int v43; // [rsp+24h] [rbp-65h]
  unsigned int v44; // [rsp+28h] [rbp-61h]
  unsigned int v45; // [rsp+2Ch] [rbp-5Dh]
  int v46; // [rsp+30h] [rbp-59h]
  int v47; // [rsp+34h] [rbp-55h]
  unsigned int v48; // [rsp+38h] [rbp-51h]
  unsigned int v50; // [rsp+48h] [rbp-41h]
  unsigned int v51; // [rsp+54h] [rbp-35h]
  unsigned int v52; // [rsp+58h] [rbp-31h]
  unsigned __int64 v53; // [rsp+60h] [rbp-29h]
  __int128 v55; // [rsp+78h] [rbp-11h] BYREF
  __int128 v56; // [rsp+88h] [rbp-1h]
  int v57; // [rsp+98h] [rbp+Fh]
  unsigned int v58; // [rsp+9Ch] [rbp+13h]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[3];
  v8 = a2[5];
  v9 = a2[2];
  v10 = a2[8];
  v11 = a2[4];
  v46 = a4;
  v50 = *a2;
  v45 = v6;
  v42 = v7;
  v44 = v11;
  v43 = v8;
  if ( a4 >= 0 )
  {
    v41 = a4 - 1;
    if ( v41 < 0 )
      v41 = 5;
    v46 = v41;
    v12 = 100 * StdIlluminant[2 * v41];
    a2[6] = v12;
    v13 = 100 * StdIlluminant[2 * v41 + 1];
    a2[7] = v13;
  }
  else
  {
    v12 = a2[6];
    v13 = a2[7];
  }
  *(_QWORD *)((char *)&v55 + 4) = __PAIR64__(v4, v10);
  v48 = v13;
  v47 = v12;
  LODWORD(v55) = 65539;
  v14 = v7 - v8;
  v15 = v8 - v6;
  HIDWORD(v55) = v7 - v8;
  v16 = v6 - v7;
  LODWORD(v56) = v9;
  DWORD1(v56) = v8 - v6;
  DWORD2(v56) = v11;
  HIDWORD(v56) = v6 - v7;
  v17 = MulDivFD6Pairs(&v55);
  DWORD1(v55) = MulFD6(v13, v17);
  HIDWORD(v55) = v14;
  DWORD1(v56) = v9 - v44;
  v18 = -v13;
  LODWORD(v55) = 65540;
  v57 = -v44;
  v58 = v42;
  DWORD2(v55) = v12;
  LODWORD(v56) = -v13;
  *((_QWORD *)&v56 + 1) = __PAIR64__(v43, v9);
  v19 = MulDivFD6Pairs(&v55);
  *((_QWORD *)&v55 + 1) = __PAIR64__(v15, v12);
  v57 = v44;
  DWORD1(v56) = v44 - v4;
  DWORD2(v56) = -v4;
  HIDWORD(v56) = v43;
  LODWORD(v56) = v18;
  v58 = v45;
  v51 = MulDivFD6Pairs(&v55);
  DWORD1(v56) = v4 - v9;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v16, v12);
  v57 = -v9;
  LODWORD(v56) = v18;
  *((_QWORD *)&v56 + 1) = __PAIR64__(v42, v4);
  v58 = v45;
  v52 = MulDivFD6Pairs(&v55);
  LODWORD(v55) = MulFD6(v4, v19);
  v20 = MulFD6(v9, v51);
  DWORD1(v55) = v20;
  DWORD2(v55) = MulFD6(v44, v52);
  v21 = DWORD2(v55) + v20;
  v22 = MulFD6(v45, v19);
  HIDWORD(v55) = v22;
  *(_DWORD *)(a3 + 48) = v22;
  v23 = MulFD6(v42, v51);
  LODWORD(v56) = v23;
  *(_DWORD *)(a3 + 52) = v23;
  v24 = MulFD6(v43, v52);
  DWORD1(v56) = v24;
  *(_DWORD *)(a3 + 56) = v24;
  v25 = v24 + v23;
  v26 = MulFD6(1000000 - v45 - v50, v19);
  DWORD2(v56) = v26;
  v27 = MulFD6(1000000 - v42 - v9, v51);
  HIDWORD(v56) = v27;
  v28 = MulFD6(1000000 - v43 - v44, v52);
  v29 = v55 + v21;
  v30 = v26 + v28 + v27;
  v57 = v28;
  v31 = v22 + v25;
  v32 = v28;
  v53 = __PAIR64__(v31, v29);
  v33 = 0;
  if ( v46 < 0 )
  {
    v34 = v56;
    *(_OWORD *)a3 = v55;
    *(_OWORD *)(a3 + 16) = v34;
    *(_DWORD *)(a3 + 32) = v32;
    ComputeInverseMatrix3x3(a3, &v55);
    v33 = 0;
  }
  *(_DWORD *)(a3 + 76) = v31;
  if ( v31 != 1000000 )
  {
    if ( v31 )
    {
      LODWORD(v53) = DivFD6(v29, v31);
      v29 = v53;
      v30 = DivFD6(v30, v31);
      v33 = 0;
    }
    else
    {
      v30 = 0;
      LODWORD(v53) = 0;
      v29 = 0;
    }
    v31 = 1000000;
    HIDWORD(v53) = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v36 = 0;
  }
  else
  {
    v35 = v29 + 2 * (v31 + v30 + 4 * v31) + v31 + v30 + 4 * v31;
    v36 = DivFD6(4 * v29, v35);
    v33 = DivFD6(9 * v31, v35);
  }
  v37 = v55;
  v38 = v57;
  v39 = v56;
  *(_DWORD *)(a3 + 64) = v33;
  *(_OWORD *)a3 = v37;
  *(_DWORD *)(a3 + 68) = v47;
  result = v48;
  *(_QWORD *)(a3 + 36) = v53;
  *(_OWORD *)(a3 + 16) = v39;
  *(_DWORD *)(a3 + 44) = v30;
  *(_DWORD *)(a3 + 32) = v38;
  *(_DWORD *)(a3 + 60) = v36;
  *(_DWORD *)(a3 + 72) = v48;
  return result;
}
