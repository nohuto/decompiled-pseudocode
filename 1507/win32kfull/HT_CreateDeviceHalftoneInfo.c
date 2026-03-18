/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00A61B0
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     ComputeHTCell @ 0x1C00A6068 (ComputeHTCell.c)
 *     GetCIEPrims @ 0x1C00A66F4 (GetCIEPrims.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00A6D50 (ComputeInverseMatrix3x3.c)
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     ComputeChecksum @ 0x1C00A7BB4 (ComputeChecksum.c)
 *     MulDivFD6Pairs @ 0x1C00A7BF8 (MulDivFD6Pairs.c)
 *     CleanUpDHI @ 0x1C00FE040 (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall HT_CreateDeviceHalftoneInfo(_DWORD *Src, _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r12
  HSEMAPHORE Semaphore; // rax
  __int64 (*v6)(); // rax
  __int16 v7; // r15
  __int64 v8; // r13
  __int16 v9; // r15
  int v10; // r10d
  unsigned __int16 v11; // r14
  int v12; // edx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int16 v15; // ax
  __int16 v16; // ax
  int v17; // r8d
  int v18; // eax
  int v19; // eax
  unsigned __int16 v20; // si
  int v21; // eax
  __int64 v22; // r8
  int v23; // ebx
  bool v24; // cc
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  unsigned int v27; // r13d
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  __int64 result; // rax
  int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // eax
  int v35; // edx
  bool v36; // zf
  int v37; // ecx
  unsigned int v38; // r8d
  int v39; // r13d
  unsigned __int16 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int16 v42; // r10
  int v43; // r14d
  int v44; // eax
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // ebx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // r14d
  unsigned int v52; // esi
  unsigned int v53; // r15d
  int v54; // ecx
  char v55; // al
  unsigned int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int16 v95; // ax
  __int64 v96; // rbx
  unsigned int v97; // edx
  unsigned int v98; // ebx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  int v106; // eax
  int v107; // eax
  __int64 v108; // rcx
  __int16 v109; // ax
  __int64 v110; // rcx
  __int16 v111; // ax
  __int64 v112; // rcx
  unsigned __int64 v113; // [rsp+20h] [rbp-E0h]
  __int64 v114; // [rsp+20h] [rbp-E0h]
  unsigned int v115; // [rsp+28h] [rbp-D8h]
  int v116; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v117; // [rsp+34h] [rbp-CCh]
  _QWORD v119[12]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v120[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v121; // [rsp+D0h] [rbp-30h]
  int v122; // [rsp+D4h] [rbp-2Ch]
  _DWORD v123[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v124; // [rsp+E0h] [rbp-20h]
  int v125; // [rsp+E4h] [rbp-1Ch]
  int v126; // [rsp+E8h] [rbp-18h]
  int v127; // [rsp+ECh] [rbp-14h]
  int v128; // [rsp+F0h] [rbp-10h]
  int v129; // [rsp+F4h] [rbp-Ch]
  int v130; // [rsp+F8h] [rbp-8h]

  v3 = 88;
  memset(v119, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v119, Src, v3);
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
  v6 = (__int64 (*)())v119[1];
  v7 = WORD2(v119[0]);
  v8 = v119[4];
  if ( !v119[1] )
    v6 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v6;
  v9 = v7 & 0x6FF;
  WORD2(v119[0]) = v9;
  if ( v8 && *(_WORD *)(v8 + 22) == 0xFFFE )
  {
    v116 = 0;
    v10 = 1;
  }
  else
  {
    qmemcpy(v120, "THTN0002.naDuohC", sizeof(v120));
    v116 = 1;
    v8 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum(v120, 305459218LL, 16LL);
  }
  v11 = v119[10];
  v12 = HIWORD(v119[6]);
  v13 = WORD2(v119[10]);
  v14 = WORD1(v119[10]);
  if ( LOWORD(v119[10]) == 0xFFFF && *(_DWORD *)((char *)&v119[10] + 2) == -1 )
  {
    v117 = 128;
LABEL_57:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v117 = 0;
  if ( (unsigned __int16)(LOWORD(v119[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v119[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v119[10]) - 100) > 0xFF78u )
  {
    goto LABEL_57;
  }
LABEL_14:
  *((_DWORD *)v4 + 56) = (unsigned __int16)(8 * (unsigned __int8)(v10 & BYTE4(v119[0])));
  v15 = WORD1(v119[6]);
  *((_WORD *)v4 + 114) = WORD1(v119[6]);
  if ( !v15 || (v16 = WORD2(v119[6]), *((_WORD *)v4 + 115) = WORD2(v119[6]), !v16) )
  {
    *((_DWORD *)v4 + 57) = 19661100;
    v12 = 0;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v35 = v12 & 0x7FFF;
    if ( (unsigned int)(v35 - 333) <= 0x394B )
    {
      v18 = 1000 * v35;
      goto LABEL_21;
    }
  }
  else
  {
    v17 = *((unsigned __int16 *)v4 + 114);
    if ( v12 > 3 * v17 || v12 > 3 * *((unsigned __int16 *)v4 + 115) )
      v12 = 0;
    if ( v12 )
    {
      v32 = *((unsigned __int16 *)v4 + 115) * *((unsigned __int16 *)v4 + 115);
      v33 = (unsigned int)(2 * v12 * v12);
      v120[1] = v33;
      v34 = DivFD6((unsigned int)(v17 * v17 + v32), v33, (unsigned int)(v17 * v17), 0LL);
      v18 = RaisePower(v34, 2LL, 3LL);
      v10 = 1;
      goto LABEL_21;
    }
  }
  v18 = 1000000;
LABEL_21:
  if ( (v9 & 4) != 0 )
  {
    *((_DWORD *)v4 + 56) |= 2u;
    *((_BYTE *)v4 + 73) = 0;
  }
  else
  {
    v36 = (v119[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = v10;
    if ( !v36 )
      *((_DWORD *)v4 + 56) |= 0x400u;
    if ( (v119[0] & 0x200000000LL) != 0 )
      *((_DWORD *)v4 + 56) |= v10;
  }
  *((_DWORD *)v4 + 58) = v18;
  v19 = v14;
  v20 = HIWORD(v119[0]);
  *((_DWORD *)v4 + 46) = 100 * v11;
  *((_DWORD *)v4 + 47) = 100 * v19;
  *((_DWORD *)v4 + 48) = 100 * v13;
  if ( (v116 || v20 > 0x12u || v20 == 18 && !v119[2]) && (unsigned __int16)(v20 - 6) > 1u )
  {
    v20 = 17;
    HIWORD(v119[0]) = 17;
  }
  if ( (v9 & 4) != 0 && v20 <= 3u )
  {
    v20 = 17;
    HIWORD(v119[0]) = 17;
  }
  v21 = BYTE4(v119[0]) & 0x70;
  switch ( v21 )
  {
    case ' ':
      v120[0] = 4;
      break;
    case '0':
      v120[0] = 2;
      break;
    case '@':
      v120[0] = 5;
      break;
    case 'P':
      v120[0] = 1;
      break;
    case '`':
      v120[0] = 6;
      break;
    default:
      v120[0] = v21 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v120[0];
  GetCIEPrims(v8, v4 + 14, 4LL, 1LL);
  GetCIEPrims(v119[3], (char *)v4 + 76, v22, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    v37 = v119[5];
    if ( v119[5] )
    {
      v38 = *(_DWORD *)(v119[5] + 8LL);
      v39 = 1;
      v114 = *(_QWORD *)v119[5];
      v40 = v38;
      v41 = *(_QWORD *)v119[5];
      v42 = *(_QWORD *)v119[5];
      if ( v42 > 0x2328u
        || WORD1(v114) > 0x2328u
        || WORD2(v114) > 0x2328u
        || HIWORD(v114) > 0x2328u
        || (unsigned __int16)v38 > 0x2328u
        || HIWORD(v38) > 0x2328u )
      {
        v37 = 0;
        v39 = 0;
      }
      else if ( (_DWORD)v114 )
      {
        v37 = 0;
      }
      else
      {
        v37 = 0;
        if ( !HIDWORD(v114) && !v38 )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v40 = v115;
      v38 = v115;
      v39 = 0;
      v42 = v113;
      v41 = v113;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v116 != v37 || !v39 )
      {
        v38 = 13762880;
        v40 = 320;
        v42 = DefaultSolidDyesInfo;
        v41 = DefaultSolidDyesInfo;
      }
      v130 = 1000000;
      v126 = 1000000;
      v123[0] = 1000000;
      v123[1] = 100 * WORD2(v41);
      v124 = 100 * v40;
      v125 = 100 * v42;
      v127 = 100 * HIWORD(v38);
      v128 = 100 * WORD1(v41);
      v129 = 100 * HIWORD(v41);
      ComputeInverseMatrix3x3(v123, (char *)v4 + 148);
      v43 = *((_DWORD *)v4 + 56);
      if ( (v43 & 1) == 0 )
      {
        v124 = *((_DWORD *)v4 + 37);
        v126 = *((_DWORD *)v4 + 38);
        v128 = *((_DWORD *)v4 + 39);
        v123[0] = 3;
        v125 = 1000000;
        v127 = 1000000;
        v129 = 1000000;
        v44 = MulDivFD6Pairs(v123);
        v45 = MulFD6((unsigned int)(1000000 - v44), *((unsigned int *)v4 + 114));
        v125 = 1000000;
        v46 = 1000000 - v45;
        v127 = 1000000;
        v124 = *((_DWORD *)v4 + 40);
        v126 = *((_DWORD *)v4 + 41);
        v128 = *((_DWORD *)v4 + 42);
        v129 = 1000000;
        v47 = MulDivFD6Pairs(v123);
        v48 = v46 - MulFD6((unsigned int)(1000000 - v47), *((unsigned int *)v4 + 115));
        v125 = 1000000;
        v124 = *((_DWORD *)v4 + 43);
        v126 = *((_DWORD *)v4 + 44);
        v128 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v43 | 1;
        v127 = 1000000;
        v129 = 1000000;
        v49 = MulDivFD6Pairs(v123);
        v50 = MulFD6((unsigned int)(1000000 - v49), *((unsigned int *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((unsigned int *)v4 + 36), (unsigned int)(v48 - v50));
      }
    }
  }
  v23 = ComputeHTCell(v20, v119[2], (__int64)(v4 + 5));
  if ( v23 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v23;
  }
  else
  {
    v24 = WORD2(v119[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v24 && LOWORD(v119[7]) == 24 && (*(_DWORD *)((char *)&v119[7] + 6) != 655370000 || WORD1(v119[8]) != 10000) )
    {
      v25 = *(_OWORD *)&v119[7];
      v26 = v119[9];
    }
    else
    {
      v25 = DefaultCA;
      v26 = 0LL;
    }
    *(_OWORD *)((char *)v4 + 12) = v25;
    *(_QWORD *)((char *)v4 + 28) = v26;
    if ( (v9 & 0x204) == 0x200 )
      *((_DWORD *)v4 + 56) |= 0x1000u;
    if ( (v119[0] & 0x800000000LL) != 0 )
    {
      v27 = BYTE6(v119[10]);
      v51 = (BYTE6(v119[10]) >> 2) & 7;
      v120[2] = v51;
      *((_DWORD *)v4 + 56) |= (8 * (v9 & 0x400)) | 0x100;
      v52 = v27 & 3;
      v53 = v27 >> 5;
      v120[1] = v27 >> 5;
      v120[3] = v52;
      if ( (_BYTE)v27 == 1 )
      {
        LOBYTE(v27) = 124;
        v52 = 4;
        v120[3] = 4;
        v51 = 4;
        v120[2] = 4;
        v53 = 4;
        v120[1] = 4;
      }
      else if ( (_BYTE)v27 == 2 )
      {
        LOBYTE(v27) = -41;
        v52 = 5;
        v120[3] = 5;
        v51 = 5;
        v120[2] = 5;
        v53 = 5;
        v120[1] = 5;
      }
      else if ( !v53 || !v51 || (v27 & 3) == 0 )
      {
        *((_DWORD *)v4 + 56) |= 0x200u;
        v52 = 255;
        v120[3] = 255;
        v51 = 255;
        v120[2] = 255;
        v53 = 255;
        v120[1] = 255;
        LOBYTE(v27) = -1;
      }
      v54 = *((_DWORD *)v4 + 56);
      *((_BYTE *)v4 + 844) = (v54 & 0x2000) != 0;
      if ( v53 == v51 && v53 == v52 )
      {
        v55 = v120[1];
        *((_DWORD *)v4 + 56) = v54 | 0x800;
        *((_BYTE *)v4 + 493) = v55;
      }
      else
      {
        *((_BYTE *)v4 + 493) = 0;
      }
      *((_DWORD *)v4 + 128) = 0xFFFF;
      v56 = v53;
      if ( v53 < v51 )
        v56 = v51;
      if ( v56 < v52 )
        v56 = v52;
      v121 = v56;
      if ( v56 <= 6 && (v57 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v57 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) |= 0x4000u;
        v58 = v57;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 19) + 1, 256LL, 1LL, 255LL);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 18) + 1, 256LL, v59, v60);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 21) + 1, 256LL, v61, v62);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 20) + 1, 256LL, v63, v64);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 5) + 1, 256LL, v65, v66);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 4) + 1, 256LL, v67, v68);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 25) + 1, 256LL, v69, v70);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 24) + 1, 256LL, v71, v72);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 27) + 1, 256LL, v73, v74);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 26) + 1, 256LL, v75, v76);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 29) + 1, 256LL, v77, v78);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 28) + 1, 256LL, v79, v80);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 31) + 1, 256LL, v81, v82);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 30) + 1, 256LL, v83, v84);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 33) + 1, 256LL, v85, v86);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 32) + 1, 256LL, v87, v88);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 35) + 1, 256LL, v89, v90);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 34) + 1, 256LL, v91, v92);
        v95 = *(_WORD *)(v58 + 10);
        if ( v95 < 0x2710u )
        {
          if ( v95 )
            *((_DWORD *)v4 + 128) = 100 * v95;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v96 = (unsigned int)DivFD6(1000000LL, *((unsigned int *)v4 + 58), v93, v94);
        *((_DWORD *)v4 + 125) = MulFD6(*((unsigned int *)v4 + v53 + 128), v96);
        *((_DWORD *)v4 + 126) = MulFD6(*((unsigned int *)v4 + v51 + 134), (unsigned int)v96);
        *((_DWORD *)v4 + 127) = MulFD6(*((unsigned int *)v4 + v52 + 140), (unsigned int)v96);
        v97 = 6;
        do
        {
          if ( v97 >= v53 )
            *((_DWORD *)v4 + v97 + 128) = 1000000;
          if ( v97 >= v51 )
            *((_DWORD *)v4 + v97 + 134) = 1000000;
          if ( v97 >= v52 )
            *((_DWORD *)v4 + v97 + 140) = 1000000;
          --v97;
        }
        while ( v97 );
        v122 = 0;
      }
      else
      {
        v98 = *((_DWORD *)v4 + 58) * v56;
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v53, v98, 1LL, 255LL);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v51, v98, v99, v100);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v52, v98, v101, v102);
      }
      v103 = *((_DWORD *)v4 + 126);
      v104 = *((unsigned int *)v4 + 125);
      if ( (int)v104 < v103 )
        v104 = (unsigned int)v103;
      v105 = *((_DWORD *)v4 + 127);
      if ( (int)v104 < v105 )
        v104 = (unsigned int)v105;
      if ( *((_DWORD *)v4 + 128) == 0xFFFF )
      {
        if ( (_DWORD)v104 == 1000000 && (v4[28] & 0x800) != 0 )
          v106 = 0;
        else
          v106 = 666667;
        *((_DWORD *)v4 + 128) = v106;
      }
      if ( !*((_DWORD *)v4 + 128) && ((_DWORD)v104 != 1000000 || (v4[28] & 0x800) == 0) )
        *((_DWORD *)v4 + 128) = 1000000;
      v107 = RaisePower(*((unsigned int *)v4 + 128), v104, 0LL);
      v108 = *((unsigned int *)v4 + 125);
      *((_DWORD *)v4 + 128) = v107;
      v109 = MulFD6(v108, 4095LL);
      v110 = *((unsigned int *)v4 + 126);
      *((_WORD *)v4 + 247) = v109 + 1;
      v111 = MulFD6(v110, 4095LL);
      v112 = *((unsigned int *)v4 + 127);
      *((_WORD *)v4 + 248) = v111 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v112, 4095LL) + 1;
    }
    else
    {
      v121 = 1;
      LOBYTE(v27) = -1;
      v120[3] = 1;
      v120[2] = 1;
      v120[1] = 1;
    }
    v28 = *((unsigned __int16 *)v4 + 114);
    v29 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 488) = v120[1];
    *((_BYTE *)v4 + 489) = v120[2];
    *((_BYTE *)v4 + 490) = v120[3];
    *((_BYTE *)v4 + 491) = v121;
    v120[2] = *((_DWORD *)v4 + 58);
    v120[0] = v28;
    v120[1] = v29;
    v120[3] = v29 + v28;
    *((_BYTE *)v4 + 492) = v27;
    v30 = ComputeChecksum(v120, 2820218943LL, 16LL);
    v24 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v30;
    if ( !v24 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v117;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
