/*
 * XREFs of ComputeColorSpaceXForm @ 0x14014758C
 * Callers:
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140147938 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x140147B2C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  int v6; // r11d
  int v7; // r12d
  unsigned int v8; // r10d
  unsigned int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // r14d
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // r14d
  int v29; // r13d
  int v30; // ebx
  int v31; // esi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 result; // rax
  int v35; // [rsp+20h] [rbp-59h]
  int v36; // [rsp+20h] [rbp-59h]
  int v37; // [rsp+24h] [rbp-55h]
  __int64 v38; // [rsp+28h] [rbp-51h]
  int v39; // [rsp+28h] [rbp-51h]
  unsigned __int64 v40; // [rsp+30h] [rbp-49h]
  int v41; // [rsp+38h] [rbp-41h]
  int v42; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v43; // [rsp+40h] [rbp-39h]
  int v44; // [rsp+44h] [rbp-35h]
  int v45; // [rsp+48h] [rbp-31h]
  int v46; // [rsp+4Ch] [rbp-2Dh]
  int v47; // [rsp+50h] [rbp-29h]
  int v48; // [rsp+54h] [rbp-25h]
  unsigned __int64 v49; // [rsp+58h] [rbp-21h]
  __int128 v51; // [rsp+70h] [rbp-9h] BYREF
  __int128 v52; // [rsp+80h] [rbp+7h]
  int v53; // [rsp+90h] [rbp+17h]
  int v54; // [rsp+94h] [rbp+1Bh]

  v4 = *a2;
  LODWORD(v5) = a4;
  v6 = a2[1];
  v7 = 0;
  v8 = a2[3];
  v10 = a2[2];
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[8];
  LODWORD(v38) = *a2;
  v35 = v6;
  v40 = __PAIR64__(v12, v10);
  HIDWORD(v38) = v8;
  v37 = v11;
  if ( (int)v5 >= 0 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (int)v5 < 0 )
      v5 = 5LL;
    v14 = 100 * StdIlluminant[2 * v5];
    a2[6] = v14;
    v15 = 100 * StdIlluminant[2 * v5 + 1];
    a2[7] = v15;
  }
  else
  {
    v14 = a2[6];
    v15 = a2[7];
  }
  *(_QWORD *)((char *)&v51 + 4) = __PAIR64__(v4, v13);
  v16 = v8 - v12;
  v43 = v15;
  v42 = v14;
  v17 = v12 - v6;
  LODWORD(v51) = 65539;
  v18 = v6 - v8;
  HIDWORD(v51) = v16;
  *(_QWORD *)&v52 = __PAIR64__(v17, v10);
  DWORD2(v52) = v11;
  HIDWORD(v52) = v6 - v8;
  v19 = MulDivFD6Pairs(&v51);
  DWORD1(v51) = MulFD6(v15, v19);
  LOWORD(v51) = 4;
  LODWORD(v52) = -v15;
  *((_QWORD *)&v52 + 1) = v40;
  DWORD1(v52) = v40 - v37;
  DWORD2(v51) = v14;
  v53 = -v37;
  v54 = HIDWORD(v38);
  v20 = MulDivFD6Pairs(&v51);
  HIDWORD(v51) = v17;
  v21 = v20;
  DWORD1(v52) = v37 - v38;
  v53 = v37;
  DWORD2(v52) = -(int)v38;
  v54 = v35;
  v22 = MulDivFD6Pairs(&v51);
  HIDWORD(v51) = v18;
  v23 = v22;
  DWORD1(v52) = v38 - v40;
  *((_QWORD *)&v52 + 1) = v38;
  v53 = -(int)v40;
  v24 = MulDivFD6Pairs(&v51);
  v46 = MulFD6(v38, v21);
  LODWORD(v51) = v46;
  v41 = MulFD6(v40, v23);
  DWORD1(v51) = v41;
  v45 = MulFD6(v37, v24);
  DWORD2(v51) = v45;
  v44 = MulFD6(v35, v21);
  HIDWORD(v51) = v44;
  *(_DWORD *)(a3 + 48) = v44;
  v47 = MulFD6(SHIDWORD(v38), v23);
  LODWORD(v52) = v47;
  *(_DWORD *)(a3 + 52) = v47;
  v48 = MulFD6(SHIDWORD(v40), v24);
  DWORD1(v52) = v48;
  *(_DWORD *)(a3 + 56) = v48;
  v36 = MulFD6(1000000 - v35 - (int)v38, v21);
  DWORD2(v52) = v36;
  v39 = MulFD6(1000000 - HIDWORD(v38) - (int)v40, v23);
  HIDWORD(v52) = v39;
  v25 = MulFD6(1000000 - HIDWORD(v40) - v37, v24);
  v26 = v44 + v48 + v47;
  v53 = v25;
  v27 = v46 + v45 + v41;
  v28 = v25 + v39 + v36;
  v49 = __PAIR64__(v26, v27);
  if ( (int)v5 >= 0 )
  {
    v29 = v25;
  }
  else
  {
    *(_DWORD *)a3 = v46;
    *(_DWORD *)(a3 + 4) = v41;
    *(_DWORD *)(a3 + 8) = v45;
    *(_DWORD *)(a3 + 12) = v44;
    *(_DWORD *)(a3 + 16) = v47;
    *(_DWORD *)(a3 + 20) = v48;
    *(_DWORD *)(a3 + 24) = v36;
    *(_DWORD *)(a3 + 28) = v39;
    *(_DWORD *)(a3 + 32) = v25;
    ComputeInverseMatrix3x3(a3, &v51);
    v29 = v53;
  }
  *(_DWORD *)(a3 + 76) = v26;
  if ( v26 != 1000000 )
  {
    if ( v26 )
    {
      LODWORD(v49) = DivFD6(v27, v26);
      v27 = v49;
      v28 = DivFD6(v28, v26);
    }
    else
    {
      v28 = 0;
      LODWORD(v49) = 0;
      v27 = 0;
    }
    v26 = 1000000;
    HIDWORD(v49) = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v31 = 0;
  }
  else
  {
    v30 = v26 + v28 + 4 * v26 + v27 + 2 * (v26 + v28 + 4 * v26);
    v31 = DivFD6(4 * v27, v30);
    v7 = DivFD6(9 * v26, v30);
  }
  v32 = v51;
  v33 = v52;
  *(_DWORD *)(a3 + 68) = v42;
  result = v43;
  *(_OWORD *)a3 = v32;
  *(_DWORD *)(a3 + 60) = v31;
  *(_QWORD *)(a3 + 36) = v49;
  *(_OWORD *)(a3 + 16) = v33;
  *(_DWORD *)(a3 + 44) = v28;
  *(_DWORD *)(a3 + 32) = v29;
  *(_DWORD *)(a3 + 64) = v7;
  *(_DWORD *)(a3 + 72) = v43;
  return result;
}
