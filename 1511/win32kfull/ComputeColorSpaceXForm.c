/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C00C0304
 * Callers:
 *     pDCIAdjClr @ 0x1C00BEF78 (pDCIAdjClr.c)
 * Callees:
 *     ComputeInverseMatrix3x3 @ 0x1C00C066C (ComputeInverseMatrix3x3.c)
 *     MulFD6 @ 0x1C00C0E40 (MulFD6.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C00C11E4 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  int v41; // r9d
  unsigned int v42; // [rsp+20h] [rbp-69h]
  unsigned int v43; // [rsp+24h] [rbp-65h]
  unsigned int v44; // [rsp+28h] [rbp-61h]
  unsigned int v45; // [rsp+2Ch] [rbp-5Dh]
  int v46; // [rsp+30h] [rbp-59h]
  unsigned int v47; // [rsp+34h] [rbp-55h]
  int v48; // [rsp+38h] [rbp-51h]
  unsigned int v50; // [rsp+48h] [rbp-41h]
  unsigned int v51; // [rsp+54h] [rbp-35h]
  unsigned __int64 v52; // [rsp+58h] [rbp-31h]
  __int128 v54; // [rsp+78h] [rbp-11h] BYREF
  __int128 v55; // [rsp+88h] [rbp-1h]
  int v56; // [rsp+98h] [rbp+Fh]
  unsigned int v57; // [rsp+9Ch] [rbp+13h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[3];
  v7 = a2[5];
  v8 = a2[2];
  v9 = a2[8];
  v10 = a2[4];
  v44 = v10;
  v48 = a4;
  v50 = *a2;
  v45 = v5;
  v43 = v6;
  v42 = v7;
  if ( a4 >= 0 )
  {
    v41 = a4 - 1;
    if ( v41 < 0 )
      v41 = 5;
    v48 = v41;
    v11 = 100 * StdIlluminant[2 * v41];
    a2[6] = v11;
    v12 = 100 * StdIlluminant[2 * v41 + 1];
    a2[7] = v12;
  }
  else
  {
    v11 = a2[6];
    v12 = a2[7];
  }
  *(_QWORD *)((char *)&v54 + 4) = __PAIR64__(v4, v9);
  v47 = v12;
  v46 = v11;
  v13 = v6 - v7;
  LODWORD(v54) = 65539;
  v14 = v7 - v5;
  v15 = v5 - v6;
  HIDWORD(v54) = v13;
  *(_QWORD *)&v55 = __PAIR64__(v14, v8);
  DWORD2(v55) = v10;
  HIDWORD(v55) = v5 - v6;
  v16 = MulDivFD6Pairs(&v54);
  DWORD1(v54) = MulFD6(v12, v16);
  HIDWORD(v54) = v13;
  DWORD1(v55) = v8 - v44;
  v17 = -v12;
  LODWORD(v54) = 65540;
  v56 = -v44;
  v57 = v43;
  DWORD2(v54) = v11;
  LODWORD(v55) = -v12;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v42, v8);
  v18 = MulDivFD6Pairs(&v54);
  *((_QWORD *)&v54 + 1) = __PAIR64__(v14, v11);
  v56 = v44;
  DWORD1(v55) = v44 - v4;
  DWORD2(v55) = -v4;
  HIDWORD(v55) = v42;
  LODWORD(v55) = v17;
  v57 = v45;
  v51 = MulDivFD6Pairs(&v54);
  DWORD1(v55) = v4 - v8;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v15, v11);
  v56 = -v8;
  LODWORD(v55) = v17;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v43, v4);
  v57 = v45;
  v19 = MulDivFD6Pairs(&v54);
  LODWORD(v54) = MulFD6(v4, v18);
  v20 = MulFD6(v8, v51);
  DWORD1(v54) = v20;
  DWORD2(v54) = MulFD6(v44, v19);
  v21 = DWORD2(v54) + v20;
  v22 = MulFD6(v45, v18);
  HIDWORD(v54) = v22;
  *(_DWORD *)(a3 + 48) = v22;
  v23 = MulFD6(v43, v51);
  LODWORD(v55) = v23;
  *(_DWORD *)(a3 + 52) = v23;
  v24 = MulFD6(v42, v19);
  DWORD1(v55) = v24;
  *(_DWORD *)(a3 + 56) = v24;
  v25 = v24 + v23;
  v26 = MulFD6(1000000 - v45 - v50, v18);
  DWORD2(v55) = v26;
  v27 = MulFD6(1000000 - v43 - v8, v51);
  HIDWORD(v55) = v27;
  v28 = MulFD6(1000000 - v42 - v44, v19);
  v29 = v54 + v21;
  v30 = v26 + v28 + v27;
  v56 = v28;
  v31 = v22 + v25;
  v32 = v28;
  v52 = __PAIR64__(v31, v29);
  v33 = 0;
  if ( v48 < 0 )
  {
    v34 = v55;
    *(_OWORD *)a3 = v54;
    *(_OWORD *)(a3 + 16) = v34;
    *(_DWORD *)(a3 + 32) = v32;
    ComputeInverseMatrix3x3(a3, &v54);
    v33 = 0;
  }
  *(_DWORD *)(a3 + 76) = v31;
  if ( v31 != 1000000 )
  {
    if ( v31 )
    {
      LODWORD(v52) = DivFD6(v29, v31);
      v29 = v52;
      v30 = DivFD6(v30, v31);
      v33 = 0;
    }
    else
    {
      v30 = 0;
      LODWORD(v52) = 0;
      v29 = 0;
    }
    v31 = 1000000;
    HIDWORD(v52) = 1000000;
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
  v37 = v54;
  v38 = v56;
  v39 = v55;
  *(_DWORD *)(a3 + 64) = v33;
  *(_OWORD *)a3 = v37;
  *(_DWORD *)(a3 + 68) = v46;
  result = v47;
  *(_QWORD *)(a3 + 36) = v52;
  *(_OWORD *)(a3 + 16) = v39;
  *(_DWORD *)(a3 + 44) = v30;
  *(_DWORD *)(a3 + 32) = v38;
  *(_DWORD *)(a3 + 60) = v36;
  *(_DWORD *)(a3 + 72) = v47;
  return result;
}
