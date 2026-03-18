/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x14017F0FC
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x14018087C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140147938 (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x140147B2C (ComputeInverseMatrix3x3.c)
 *     CleanUpDHI @ 0x14017ECC8 (CleanUpDHI.c)
 *     ComputeHTCell @ 0x14017EDFC (ComputeHTCell.c)
 *     GetCIEPrims @ 0x14017FF40 (GetCIEPrims.c)
 *     ComputeChecksum @ 0x140180144 (ComputeChecksum.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  size_t v3; // rbx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 v6; // rax
  __int64 v7; // r10
  __int16 v8; // r15
  int v9; // r10d
  unsigned __int16 v10; // r13
  unsigned int v11; // edx
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // cx
  __int16 v15; // si
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // r14
  unsigned int v22; // r13d
  int v23; // eax
  __int64 v24; // r8
  int v25; // ebx
  __int64 result; // rax
  bool v27; // cc
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  _QWORD *v31; // rcx
  int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // rdx
  unsigned __int16 v35; // r9
  unsigned int v36; // r8d
  unsigned __int16 v37; // r10
  int v38; // r13d
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  __int64 v45; // xmm1_8
  unsigned int v46; // ecx
  int v47; // esi
  unsigned int v48; // r14d
  unsigned int v49; // r15d
  char v50; // al
  unsigned int v51; // ebx
  __int64 v52; // rsi
  int v53; // eax
  int v54; // ebx
  unsigned int v55; // edx
  int v56; // ebx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  __int16 v63; // ax
  int v64; // ecx
  __int16 v65; // ax
  int v66; // ecx
  char v67; // [rsp+20h] [rbp-E0h]
  int v68; // [rsp+24h] [rbp-DCh]
  int v69; // [rsp+28h] [rbp-D8h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v71; // [rsp+38h] [rbp-C8h]
  _BYTE v72[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+54h] [rbp-ACh]
  __int64 v74; // [rsp+58h] [rbp-A8h]
  __int64 v75; // [rsp+60h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h]
  unsigned __int16 v79; // [rsp+82h] [rbp-7Eh]
  unsigned __int16 v80; // [rsp+84h] [rbp-7Ch]
  unsigned __int16 v81; // [rsp+86h] [rbp-7Ah]
  __int128 v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  unsigned __int16 v84; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v85; // [rsp+A2h] [rbp-5Eh]
  unsigned __int16 v86; // [rsp+A4h] [rbp-5Ch]
  unsigned __int8 v87; // [rsp+A6h] [rbp-5Ah]
  _QWORD *v88; // [rsp+B8h] [rbp-48h]
  _DWORD v89[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v90; // [rsp+D0h] [rbp-30h]
  int v91; // [rsp+D4h] [rbp-2Ch]
  __int128 v92; // [rsp+D8h] [rbp-28h] BYREF
  int v93; // [rsp+E8h] [rbp-18h]
  int v94; // [rsp+ECh] [rbp-14h]
  int v95; // [rsp+F0h] [rbp-10h]
  int v96; // [rsp+F4h] [rbp-Ch]
  int v97; // [rsp+F8h] [rbp-8h]

  v88 = a2;
  v3 = 88LL;
  memset_0(v72, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80LL;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v72, Src, v3);
  v4 = EngAllocMem(1u, 0x1BC8u, 0x30345448u);
  if ( !v4 )
    return 4294967294LL;
  *((_DWORD *)v4 + 10) = 1414021956;
  Semaphore = EngCreateSemaphore();
  v4[6] = Semaphore;
  if ( !Semaphore )
  {
    EngFreeMem(v4);
    return 4294956296LL;
  }
  v6 = v74;
  v4[7] = v74;
  if ( !v6 )
    v4[7] = IsMulDestroyBrushInternalSupported;
  v7 = v77;
  v8 = v73 & 0x6FF;
  LOWORD(v73) = v73 & 0x6FF;
  *((_DWORD *)v4 + 16) = 305459218;
  v70 = v7;
  if ( v7 && *(_WORD *)(v7 + 22) == 0xFFFE )
  {
    v68 = 0;
    v9 = 1;
  }
  else
  {
    v70 = 0LL;
    v68 = 1;
    qmemcpy(v89, "THTN0002.naDuohC", sizeof(v89));
    *((_DWORD *)v4 + 16) = ComputeChecksum(v89, 305459218LL, 16LL);
  }
  v10 = v84;
  v11 = v81;
  v12 = v86;
  v13 = v85;
  if ( v84 == 0xFFFF && v85 == 0xFFFF && v86 == 0xFFFF )
  {
    v69 = 128;
LABEL_14:
    v12 = 10000;
    v13 = 10000;
    v10 = 10000;
    goto LABEL_15;
  }
  v69 = 0;
  if ( (unsigned __int16)(v84 - 100) > 0xFF78u
    || (unsigned __int16)(v85 - 100) > 0xFF78u
    || (unsigned __int16)(v86 - 100) > 0xFF78u )
  {
    goto LABEL_14;
  }
LABEL_15:
  v14 = v79;
  v15 = v73;
  v16 = v73;
  *((_WORD *)v4 + 114) = v79;
  *((_DWORD *)v4 + 56) = 8 * (v9 & v16);
  if ( v14 && (v17 = v80, *((_WORD *)v4 + 115) = v80, v17) )
  {
    if ( (v11 & 0x8000) != 0 )
    {
      v18 = v11 & 0x7FFF;
      if ( v18 <= 0x3A98 && v18 >= 0x14D )
      {
        v19 = 1000 * v18;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
  }
  else
  {
    v17 = 300;
    *((_DWORD *)v4 + 57) = 19661100;
    v14 = 300;
    v11 = 0;
  }
  if ( v11 <= 3 * (unsigned int)v14 && v11 <= 3 * (unsigned int)v17 && v11 )
  {
    v89[1] = 2 * v11 * v11;
    v32 = DivFD6(v14 * v14 + v17 * (unsigned int)v17, v89[1]);
    v19 = RaisePower(v32, 2LL, 3LL);
    v9 = 1;
    goto LABEL_24;
  }
LABEL_23:
  v19 = 1000000;
LABEL_24:
  if ( (v8 & 4) != 0 )
  {
    *((_DWORD *)v4 + 56) |= 2u;
    *((_BYTE *)v4 + 73) = 0;
  }
  else
  {
    *((_BYTE *)v4 + 73) = v9;
    if ( (v8 & 0x80u) != 0 )
      *((_DWORD *)v4 + 56) |= 0x400u;
    if ( (v8 & 2) != 0 )
      *((_DWORD *)v4 + 56) |= v9;
  }
  *((_DWORD *)v4 + 58) = v19;
  v20 = v13;
  v21 = HIWORD(v73);
  *((_DWORD *)v4 + 46) = 100 * v10;
  *((_DWORD *)v4 + 47) = 100 * v20;
  *((_DWORD *)v4 + 48) = 100 * v12;
  if ( v68 || v21 > 0x12u || v21 == 18 && !v75 )
  {
    v22 = 1;
    if ( (unsigned __int16)(v21 - 6) > 1u )
    {
      HIWORD(v73) = 17;
      v21 = 17;
      v15 = v73;
    }
  }
  else
  {
    v22 = 1;
  }
  if ( (v8 & 4) != 0 && v21 <= 3u )
  {
    HIWORD(v73) = 17;
    v21 = 17;
    v15 = v73;
  }
  v23 = v15 & 0x70;
  if ( (v15 & 0x70) == 0 )
    goto LABEL_54;
  switch ( v23 )
  {
    case ' ':
      v89[0] = 4;
      break;
    case '0':
      v89[0] = 2;
      break;
    case '@':
      v89[0] = 5;
      break;
    case 'P':
      v89[0] = 1;
      break;
    case '`':
      v89[0] = 6;
      break;
    case 'p':
      v89[0] = 0;
      break;
    default:
LABEL_54:
      v89[0] = 3;
      break;
  }
  *((_BYTE *)v4 + 74) = v89[0];
  GetCIEPrims(v70, v4 + 14, 3LL, 1LL);
  GetCIEPrims(v76, (char *)v4 + 76, v24, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    v33 = v78;
    v34 = 0LL;
    v35 = 0;
    v36 = 0;
    if ( v78 )
    {
      v36 = *(_DWORD *)(v78 + 8);
      v35 = v36;
      v71 = *(_QWORD *)v78;
      v34 = *(_QWORD *)v78;
      v37 = *(_QWORD *)v78;
      if ( v37 > 0x2328u
        || WORD1(v71) > 0x2328u
        || WORD2(v71) > 0x2328u
        || HIWORD(v71) > 0x2328u
        || (unsigned __int16)v36 > 0x2328u
        || HIWORD(v36) > 0x2328u )
      {
        v33 = 0;
        v22 = 0;
      }
      else if ( (_WORD)v71 || *(_DWORD *)((char *)&v71 + 2) )
      {
        v33 = 0;
      }
      else
      {
        v33 = 0;
        if ( !HIWORD(v71) && !v36 )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v22 = 0;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
      v37 = 0;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v68 != v33 || !v22 )
      {
        v36 = 13762880;
        v35 = 320;
        v37 = DefaultSolidDyesInfo;
        v34 = DefaultSolidDyesInfo;
      }
      DWORD1(v92) = 100 * WORD2(v34);
      DWORD2(v92) = 100 * v35;
      HIDWORD(v92) = 100 * v37;
      v94 = 100 * HIWORD(v36);
      v95 = 100 * WORD1(v34);
      v96 = 100 * HIWORD(v34);
      v97 = 1000000;
      v93 = 1000000;
      LODWORD(v92) = 1000000;
      ComputeInverseMatrix3x3(&v92, (__int64)v4 + 148);
      v38 = *((_DWORD *)v4 + 56);
      if ( (v38 & 1) == 0 )
      {
        DWORD2(v92) = *((_DWORD *)v4 + 37);
        v93 = *((_DWORD *)v4 + 38);
        v95 = *((_DWORD *)v4 + 39);
        LODWORD(v92) = 3;
        HIDWORD(v92) = 1000000;
        v94 = 1000000;
        v96 = 1000000;
        v39 = MulDivFD6Pairs((unsigned __int16 *)&v92);
        v40 = 1000000 - MulFD6(1000000 - v39, *((_DWORD *)v4 + 114));
        DWORD2(v92) = *((_DWORD *)v4 + 40);
        v93 = *((_DWORD *)v4 + 41);
        v95 = *((_DWORD *)v4 + 42);
        v41 = MulDivFD6Pairs((unsigned __int16 *)&v92);
        v42 = v40 - MulFD6(1000000 - v41, *((_DWORD *)v4 + 115));
        DWORD2(v92) = *((_DWORD *)v4 + 43);
        v93 = *((_DWORD *)v4 + 44);
        v95 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v38 | 1;
        v43 = MulDivFD6Pairs((unsigned __int16 *)&v92);
        v44 = MulFD6(1000000 - v43, *((_DWORD *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((_DWORD *)v4 + 36), v42 - v44);
      }
    }
    LOBYTE(v22) = 1;
  }
  v25 = ComputeHTCell(v21, v75, (__int64)(v4 + 5));
  if ( v25 >= 0 )
  {
    v27 = WORD2(v82) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v27 && (_WORD)v82 == 24 && (*(_DWORD *)((char *)&v82 + 6) != 655370000 || WORD5(v82) != 10000) )
    {
      v45 = v83;
      *(_OWORD *)((char *)v4 + 12) = v82;
      *(_QWORD *)((char *)v4 + 28) = v45;
    }
    else
    {
      *(_OWORD *)((char *)v4 + 12) = DefaultCA;
      *(_QWORD *)((char *)v4 + 28) = 0LL;
    }
    if ( (v8 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v8 & 8) != 0 )
    {
      v46 = v87;
      v67 = v87;
      v47 = *((_DWORD *)v4 + 56) | (8 * (v15 & 0x400 | 0x20));
      v48 = v87 & 3;
      v49 = (v87 >> 2) & 7;
      *((_DWORD *)v4 + 56) = v47;
      v89[2] = v49;
      v22 = v46 >> 5;
      v89[3] = v48;
      if ( (_BYTE)v46 == 1 )
      {
        v67 = 124;
        v48 = 4;
        v89[3] = 4;
        v49 = 4;
        v89[2] = 4;
        v22 = 4;
      }
      else if ( (_BYTE)v46 == 2 )
      {
        v67 = -41;
        v48 = 5;
        v89[3] = 5;
        v49 = 5;
        v89[2] = 5;
        v22 = 5;
      }
      else if ( !v22 || !v49 || !v48 )
      {
        v47 |= 0x200u;
        v89[3] = 255;
        *((_DWORD *)v4 + 56) = v47;
        v48 = 255;
        v49 = 255;
        v89[2] = 255;
        v22 = 255;
        v67 = -1;
      }
      *((_BYTE *)v4 + 844) = (v47 & 0x2000) != 0;
      if ( v22 == v49 && v22 == v48 )
      {
        v50 = v22;
        *((_DWORD *)v4 + 56) = v47 | 0x800;
      }
      else
      {
        v50 = 0;
      }
      *((_BYTE *)v4 + 493) = v50;
      v51 = v22;
      *((_DWORD *)v4 + 128) = 0xFFFF;
      if ( v22 < v49 )
        v51 = v49;
      if ( v51 < v48 )
        v51 = v48;
      v90 = v51;
      if ( v51 <= 6 && (v52 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v52 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) |= 0x4000u;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 19) + 1, 256);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 18) + 1, 256);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 21) + 1, 256);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 20) + 1, 256);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 5) + 1, 256);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 4) + 1, 256);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 25) + 1, 256);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 24) + 1, 256);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 27) + 1, 256);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 26) + 1, 256);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 29) + 1, 256);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 28) + 1, 256);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 31) + 1, 256);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 30) + 1, 256);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 33) + 1, 256);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 32) + 1, 256);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v52 + 35) + 1, 256);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v52 + 34) + 1, 256);
        v53 = *(unsigned __int16 *)(v52 + 10);
        if ( (unsigned __int16)v53 < 0x2710u )
        {
          if ( (_WORD)v53 )
            *((_DWORD *)v4 + 128) = 100 * v53;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v54 = DivFD6(1000000, *((_DWORD *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((_DWORD *)v4 + v22 + 128), v54);
        *((_DWORD *)v4 + 126) = MulFD6(*((_DWORD *)v4 + v49 + 134), v54);
        *((_DWORD *)v4 + 127) = MulFD6(*((_DWORD *)v4 + v48 + 140), v54);
        v55 = 6;
        do
        {
          if ( v55 >= v22 )
            *((_DWORD *)v4 + v55 + 128) = 1000000;
          if ( v55 >= v49 )
            *((_DWORD *)v4 + v55 + 134) = 1000000;
          if ( v55 >= v48 )
            *((_DWORD *)v4 + v55 + 140) = 1000000;
          --v55;
        }
        while ( v55 );
        v91 = 0;
      }
      else
      {
        v56 = *((_DWORD *)v4 + 58) * v51;
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v22, v56);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v49, v56);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v48, v56);
      }
      v57 = *((_DWORD *)v4 + 126);
      v58 = *((unsigned int *)v4 + 125);
      v59 = *((_DWORD *)v4 + 128);
      if ( (int)v58 < v57 )
        v58 = (unsigned int)v57;
      v60 = *((_DWORD *)v4 + 127);
      if ( (int)v58 < v60 )
        v58 = (unsigned int)v60;
      if ( v59 == 0xFFFF )
      {
        if ( (_DWORD)v58 == 1000000 && (v4[28] & 0x800) != 0 )
          v59 = 0;
        else
          v59 = 666667;
        *((_DWORD *)v4 + 128) = v59;
      }
      if ( !v59 )
      {
        if ( (_DWORD)v58 != 1000000 || (v59 = 0, (v4[28] & 0x800) == 0) )
        {
          *((_DWORD *)v4 + 128) = 1000000;
          v59 = 1000000;
        }
      }
      v61 = RaisePower(v59, v58, 0LL);
      v62 = *((_DWORD *)v4 + 125);
      *((_DWORD *)v4 + 128) = v61;
      v63 = MulFD6(v62, 4095);
      v64 = *((_DWORD *)v4 + 126);
      *((_WORD *)v4 + 247) = v63 + 1;
      v65 = MulFD6(v64, 4095);
      v66 = *((_DWORD *)v4 + 127);
      *((_WORD *)v4 + 248) = v65 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v66, 4095) + 1;
    }
    else
    {
      v90 = 1;
      v89[3] = 1;
      v89[2] = 1;
      v67 = -1;
    }
    v28 = *((unsigned __int16 *)v4 + 114);
    v29 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 489) = v89[2];
    *((_BYTE *)v4 + 490) = v89[3];
    *((_BYTE *)v4 + 491) = v90;
    *((_BYTE *)v4 + 492) = v67;
    v89[2] = *((_DWORD *)v4 + 58);
    v89[0] = v28;
    v89[1] = v29;
    v89[3] = v29 + v28;
    *((_BYTE *)v4 + 488) = v22;
    v30 = ComputeChecksum(v89, 2820218943LL, 16LL);
    v27 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v30;
    if ( !v27 )
      *((_BYTE *)v4 + 74) = 3;
    *((_DWORD *)v4 + 56) |= v69;
    result = 1414021956LL;
    v31 = v88;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *v31 = v4;
  }
  else
  {
    CleanUpDHI((HSEMAPHORE *)v4);
    return (unsigned int)v25;
  }
  return result;
}
