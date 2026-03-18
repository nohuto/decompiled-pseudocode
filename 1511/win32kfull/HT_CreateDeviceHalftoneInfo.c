/*
 * XREFs of HT_CreateDeviceHalftoneInfo @ 0x1C00BFB60
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C001C078 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     ComputeHTCell @ 0x1C00BF818 (ComputeHTCell.c)
 *     GetCIEPrims @ 0x1C00C010C (GetCIEPrims.c)
 *     ComputeInverseMatrix3x3 @ 0x1C00C066C (ComputeInverseMatrix3x3.c)
 *     MulFD6 @ 0x1C00C0E40 (MulFD6.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 *     ComputeChecksum @ 0x1C00C11A0 (ComputeChecksum.c)
 *     MulDivFD6Pairs @ 0x1C00C11E4 (MulDivFD6Pairs.c)
 *     CleanUpDHI @ 0x1C010A320 (CleanUpDHI.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  int v32; // edx
  bool v33; // zf
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // eax
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
  unsigned __int16 v59; // ax
  unsigned int v60; // ebx
  unsigned int v61; // edx
  unsigned int v62; // ebx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rcx
  __int16 v69; // ax
  __int64 v70; // rcx
  __int16 v71; // ax
  __int64 v72; // rcx
  unsigned __int64 v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+20h] [rbp-E0h]
  unsigned int v75; // [rsp+28h] [rbp-D8h]
  int v76; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v77; // [rsp+34h] [rbp-CCh]
  _QWORD v79[12]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v80[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v81; // [rsp+D0h] [rbp-30h]
  int v82; // [rsp+D4h] [rbp-2Ch]
  _DWORD v83[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v84; // [rsp+E0h] [rbp-20h]
  int v85; // [rsp+E4h] [rbp-1Ch]
  int v86; // [rsp+E8h] [rbp-18h]
  int v87; // [rsp+ECh] [rbp-14h]
  int v88; // [rsp+F0h] [rbp-10h]
  int v89; // [rsp+F4h] [rbp-Ch]
  int v90; // [rsp+F8h] [rbp-8h]

  v3 = 88;
  memset(v79, 0, 0x58uLL);
  if ( *Src == 1213491458 )
  {
    v3 = 80;
  }
  else if ( *Src != 1213491459 )
  {
    return 0xFFFFFFFFLL;
  }
  memmove(v79, Src, v3);
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
  v6 = (__int64 (*)())v79[1];
  v7 = WORD2(v79[0]);
  v8 = v79[4];
  if ( !v79[1] )
    v6 = IsMulDestroyBrushInternalSupported;
  *((_DWORD *)v4 + 16) = 305459218;
  v4[7] = v6;
  v9 = v7 & 0x6FF;
  WORD2(v79[0]) = v9;
  if ( v8 && *(_WORD *)(v8 + 22) == 0xFFFE )
  {
    v76 = 0;
    v10 = 1;
  }
  else
  {
    qmemcpy(v80, "THTN0002.naDuohC", sizeof(v80));
    v76 = 1;
    v8 = 0LL;
    *((_DWORD *)v4 + 16) = ComputeChecksum(v80, 305459218LL, 16LL);
  }
  v11 = v79[10];
  v12 = HIWORD(v79[6]);
  v13 = WORD2(v79[10]);
  v14 = WORD1(v79[10]);
  if ( LOWORD(v79[10]) == 0xFFFF && *(_DWORD *)((char *)&v79[10] + 2) == -1 )
  {
    v77 = 128;
LABEL_52:
    v13 = 10000;
    v14 = 10000;
    v11 = 10000;
    goto LABEL_14;
  }
  v77 = 0;
  if ( (unsigned __int16)(LOWORD(v79[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD1(v79[10]) - 100) > 0xFF78u
    || (unsigned __int16)(WORD2(v79[10]) - 100) > 0xFF78u )
  {
    goto LABEL_52;
  }
LABEL_14:
  *((_DWORD *)v4 + 56) = (unsigned __int16)(8 * (unsigned __int8)(v10 & BYTE4(v79[0])));
  v15 = WORD1(v79[6]);
  *((_WORD *)v4 + 114) = WORD1(v79[6]);
  if ( !v15 || (v16 = WORD2(v79[6]), *((_WORD *)v4 + 115) = WORD2(v79[6]), !v16) )
  {
    *((_DWORD *)v4 + 57) = 19661100;
    v12 = 0;
  }
  if ( (v12 & 0x8000) != 0 )
  {
    v32 = v12 & 0x7FFF;
    if ( (unsigned int)(v32 - 333) <= 0x394B )
    {
      v18 = 1000 * v32;
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
      v34 = *((unsigned __int16 *)v4 + 115) * *((unsigned __int16 *)v4 + 115);
      v35 = (unsigned int)(2 * v12 * v12);
      v80[1] = v35;
      v36 = DivFD6((unsigned int)(v17 * v17 + v34), v35);
      v18 = RaisePower(v36, 2LL, 3LL);
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
    v33 = (v79[0] & 0x8000000000LL) == 0;
    *((_BYTE *)v4 + 73) = v10;
    if ( !v33 )
      *((_DWORD *)v4 + 56) |= 0x400u;
    if ( (v79[0] & 0x200000000LL) != 0 )
      *((_DWORD *)v4 + 56) |= v10;
  }
  *((_DWORD *)v4 + 58) = v18;
  v19 = v14;
  v20 = HIWORD(v79[0]);
  *((_DWORD *)v4 + 46) = 100 * v11;
  *((_DWORD *)v4 + 47) = 100 * v19;
  *((_DWORD *)v4 + 48) = 100 * v13;
  if ( (v76 || v20 > 0x12u || v20 == 18 && !v79[2]) && (unsigned __int16)(v20 - 6) > 1u )
  {
    v20 = 17;
    HIWORD(v79[0]) = 17;
  }
  if ( (v9 & 4) != 0 && v20 <= 3u )
  {
    v20 = 17;
    HIWORD(v79[0]) = 17;
  }
  v21 = BYTE4(v79[0]) & 0x70;
  switch ( v21 )
  {
    case ' ':
      v80[0] = 4;
      break;
    case '0':
      v80[0] = 2;
      break;
    case '@':
      v80[0] = 5;
      break;
    case 'P':
      v80[0] = 1;
      break;
    case '`':
      v80[0] = 6;
      break;
    default:
      v80[0] = v21 != 112 ? 3 : 0;
      break;
  }
  *((_BYTE *)v4 + 74) = v80[0];
  GetCIEPrims(v8, v4 + 14, 4LL, 1LL);
  GetCIEPrims(v79[3], (char *)v4 + 76, v22, 0LL);
  if ( (v4[28] & 4) != 0 )
  {
    v37 = v79[5];
    if ( v79[5] )
    {
      v38 = *(_DWORD *)(v79[5] + 8LL);
      v39 = 1;
      v74 = *(_QWORD *)v79[5];
      v40 = v38;
      v41 = *(_QWORD *)v79[5];
      v42 = *(_QWORD *)v79[5];
      if ( v42 > 0x2328u
        || WORD1(v74) > 0x2328u
        || WORD2(v74) > 0x2328u
        || HIWORD(v74) > 0x2328u
        || (unsigned __int16)v38 > 0x2328u
        || HIWORD(v38) > 0x2328u )
      {
        v37 = 0;
        v39 = 0;
      }
      else if ( (_DWORD)v74 )
      {
        v37 = 0;
      }
      else
      {
        v37 = 0;
        if ( !HIDWORD(v74) && !v38 )
          *((_DWORD *)v4 + 56) &= 0xFFFBu;
      }
    }
    else
    {
      v40 = v75;
      v38 = v75;
      v39 = 0;
      v42 = v73;
      v41 = v73;
      *((_DWORD *)v4 + 56) &= 0xFFFBu;
    }
    if ( (v4[28] & 4) != 0 )
    {
      if ( v76 != v37 || !v39 )
      {
        v38 = 13762880;
        v40 = 320;
        v42 = DefaultSolidDyesInfo;
        v41 = DefaultSolidDyesInfo;
      }
      v90 = 1000000;
      v86 = 1000000;
      v83[0] = 1000000;
      v83[1] = 100 * WORD2(v41);
      v84 = 100 * v40;
      v85 = 100 * v42;
      v87 = 100 * HIWORD(v38);
      v88 = 100 * WORD1(v41);
      v89 = 100 * HIWORD(v41);
      ComputeInverseMatrix3x3(v83, (char *)v4 + 148);
      v43 = *((_DWORD *)v4 + 56);
      if ( (v43 & 1) == 0 )
      {
        v84 = *((_DWORD *)v4 + 37);
        v86 = *((_DWORD *)v4 + 38);
        v88 = *((_DWORD *)v4 + 39);
        v83[0] = 3;
        v85 = 1000000;
        v87 = 1000000;
        v89 = 1000000;
        v44 = MulDivFD6Pairs(v83);
        v45 = MulFD6((unsigned int)(1000000 - v44), *((unsigned int *)v4 + 114));
        v85 = 1000000;
        v46 = 1000000 - v45;
        v87 = 1000000;
        v84 = *((_DWORD *)v4 + 40);
        v86 = *((_DWORD *)v4 + 41);
        v88 = *((_DWORD *)v4 + 42);
        v89 = 1000000;
        v47 = MulDivFD6Pairs(v83);
        v48 = v46 - MulFD6((unsigned int)(1000000 - v47), *((unsigned int *)v4 + 115));
        v85 = 1000000;
        v84 = *((_DWORD *)v4 + 43);
        v86 = *((_DWORD *)v4 + 44);
        v88 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 56) = v43 | 1;
        v87 = 1000000;
        v89 = 1000000;
        v49 = MulDivFD6Pairs(v83);
        v50 = MulFD6((unsigned int)(1000000 - v49), *((unsigned int *)v4 + 116));
        *((_DWORD *)v4 + 36) = MulFD6(*((unsigned int *)v4 + 36), (unsigned int)(v48 - v50));
      }
    }
  }
  v23 = ComputeHTCell(v20, v79[2], (__int64)(v4 + 5));
  if ( v23 < 0 )
  {
    CleanUpDHI(v4);
    return (unsigned int)v23;
  }
  else
  {
    v24 = WORD2(v79[7]) <= 8u;
    *((_DWORD *)v4 + 216) = 603980031;
    *((_DWORD *)v4 + 222) = 75497503;
    *v4 = 0LL;
    *((_WORD *)v4 + 4) = *((_WORD *)v4 + 103);
    *((_WORD *)v4 + 5) = *((_WORD *)v4 + 105);
    if ( v24 && LOWORD(v79[7]) == 24 && (*(_DWORD *)((char *)&v79[7] + 6) != 655370000 || WORD1(v79[8]) != 10000) )
    {
      v25 = *(_OWORD *)&v79[7];
      v26 = v79[9];
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
    if ( (v79[0] & 0x800000000LL) != 0 )
    {
      v27 = BYTE6(v79[10]);
      v51 = (BYTE6(v79[10]) >> 2) & 7;
      v80[2] = v51;
      *((_DWORD *)v4 + 56) |= (8 * (v9 & 0x400)) | 0x100;
      v52 = v27 & 3;
      v53 = v27 >> 5;
      v80[1] = v27 >> 5;
      v80[3] = v52;
      if ( (_BYTE)v27 == 1 )
      {
        LOBYTE(v27) = 124;
        v52 = 4;
        v80[3] = 4;
        v51 = 4;
        v80[2] = 4;
        v53 = 4;
        v80[1] = 4;
      }
      else if ( (_BYTE)v27 == 2 )
      {
        LOBYTE(v27) = -41;
        v52 = 5;
        v80[3] = 5;
        v51 = 5;
        v80[2] = 5;
        v53 = 5;
        v80[1] = 5;
      }
      else if ( !v53 || !v51 || (v27 & 3) == 0 )
      {
        *((_DWORD *)v4 + 56) |= 0x200u;
        v52 = 255;
        v80[3] = 255;
        v51 = 255;
        v80[2] = 255;
        v53 = 255;
        v80[1] = 255;
        LOBYTE(v27) = -1;
      }
      v54 = *((_DWORD *)v4 + 56);
      *((_BYTE *)v4 + 844) = (v54 & 0x2000) != 0;
      if ( v53 == v51 && v53 == v52 )
      {
        v55 = v80[1];
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
      v81 = v56;
      if ( v56 <= 6 && (v57 = *((_QWORD *)Src + 4)) != 0 && *(_WORD *)(v57 + 16) == 0xFFFE )
      {
        *((_DWORD *)v4 + 56) |= 0x4000u;
        v58 = v57;
        *((_DWORD *)v4 + 129) = DivFD6((unsigned int)*(unsigned __int8 *)(v57 + 19) + 1, 256LL);
        *((_DWORD *)v4 + 130) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 18) + 1, 256LL);
        *((_DWORD *)v4 + 131) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 21) + 1, 256LL);
        *((_DWORD *)v4 + 132) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 20) + 1, 256LL);
        *((_DWORD *)v4 + 133) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 5) + 1, 256LL);
        *((_DWORD *)v4 + 134) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 4) + 1, 256LL);
        *((_DWORD *)v4 + 135) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 25) + 1, 256LL);
        *((_DWORD *)v4 + 136) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 24) + 1, 256LL);
        *((_DWORD *)v4 + 137) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 27) + 1, 256LL);
        *((_DWORD *)v4 + 138) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 26) + 1, 256LL);
        *((_DWORD *)v4 + 139) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 29) + 1, 256LL);
        *((_DWORD *)v4 + 140) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 28) + 1, 256LL);
        *((_DWORD *)v4 + 141) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 31) + 1, 256LL);
        *((_DWORD *)v4 + 142) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 30) + 1, 256LL);
        *((_DWORD *)v4 + 143) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 33) + 1, 256LL);
        *((_DWORD *)v4 + 144) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 32) + 1, 256LL);
        *((_DWORD *)v4 + 145) = DivFD6((unsigned int)*(unsigned __int8 *)(v58 + 35) + 1, 256LL);
        *((_DWORD *)v4 + 146) = DivFD6((unsigned int)(unsigned __int8)*(_WORD *)(v58 + 34) + 1, 256LL);
        v59 = *(_WORD *)(v58 + 10);
        if ( v59 < 0x2710u )
        {
          if ( v59 )
            *((_DWORD *)v4 + 128) = 100 * v59;
        }
        else
        {
          *((_DWORD *)v4 + 128) = 0;
        }
        v60 = DivFD6(1000000LL, *((unsigned int *)v4 + 58));
        *((_DWORD *)v4 + 125) = MulFD6(*((unsigned int *)v4 + v53 + 128), v60);
        *((_DWORD *)v4 + 126) = MulFD6(*((unsigned int *)v4 + v51 + 134), v60);
        *((_DWORD *)v4 + 127) = MulFD6(*((unsigned int *)v4 + v52 + 140), v60);
        v61 = 6;
        do
        {
          if ( v61 >= v53 )
            *((_DWORD *)v4 + v61 + 128) = 1000000;
          if ( v61 >= v51 )
            *((_DWORD *)v4 + v61 + 134) = 1000000;
          if ( v61 >= v52 )
            *((_DWORD *)v4 + v61 + 140) = 1000000;
          --v61;
        }
        while ( v61 );
        v82 = 0;
      }
      else
      {
        v62 = *((_DWORD *)v4 + 58) * v56;
        *((_DWORD *)v4 + 125) = DivFD6(1000000 * v53, v62);
        *((_DWORD *)v4 + 126) = DivFD6(1000000 * v51, v62);
        *((_DWORD *)v4 + 127) = DivFD6(1000000 * v52, v62);
      }
      v63 = *((_DWORD *)v4 + 126);
      v64 = *((unsigned int *)v4 + 125);
      if ( (int)v64 < v63 )
        v64 = (unsigned int)v63;
      v65 = *((_DWORD *)v4 + 127);
      if ( (int)v64 < v65 )
        v64 = (unsigned int)v65;
      if ( *((_DWORD *)v4 + 128) == 0xFFFF )
      {
        if ( (_DWORD)v64 == 1000000 && (v4[28] & 0x800) != 0 )
          v66 = 0;
        else
          v66 = 666667;
        *((_DWORD *)v4 + 128) = v66;
      }
      if ( !*((_DWORD *)v4 + 128) && ((_DWORD)v64 != 1000000 || (v4[28] & 0x800) == 0) )
        *((_DWORD *)v4 + 128) = 1000000;
      v67 = RaisePower(*((_DWORD *)v4 + 128), v64, 0LL);
      v68 = *((unsigned int *)v4 + 125);
      *((_DWORD *)v4 + 128) = v67;
      v69 = MulFD6(v68, 4095LL);
      v70 = *((unsigned int *)v4 + 126);
      *((_WORD *)v4 + 247) = v69 + 1;
      v71 = MulFD6(v70, 4095LL);
      v72 = *((unsigned int *)v4 + 127);
      *((_WORD *)v4 + 248) = v71 + 1;
      *((_WORD *)v4 + 249) = MulFD6(v72, 4095LL) + 1;
    }
    else
    {
      v81 = 1;
      LOBYTE(v27) = -1;
      v80[3] = 1;
      v80[2] = 1;
      v80[1] = 1;
    }
    v28 = *((unsigned __int16 *)v4 + 114);
    v29 = *((unsigned __int16 *)v4 + 115);
    *((_BYTE *)v4 + 488) = v80[1];
    *((_BYTE *)v4 + 489) = v80[2];
    *((_BYTE *)v4 + 490) = v80[3];
    *((_BYTE *)v4 + 491) = v81;
    v80[2] = *((_DWORD *)v4 + 58);
    v80[0] = v28;
    v80[1] = v29;
    v80[3] = v29 + v28;
    *((_BYTE *)v4 + 492) = v27;
    v30 = ComputeChecksum(v80, 2820218943LL, 16LL);
    v24 = *((_BYTE *)v4 + 74) <= 6u;
    *((_DWORD *)v4 + 17) = v30;
    if ( !v24 )
      *((_BYTE *)v4 + 74) = 3;
    result = 1414021956LL;
    *((_DWORD *)v4 + 56) |= v77;
    *((_WORD *)v4 + 118) = 0x8000;
    *((_WORD *)v4 + 120) = -1;
    *a2 = v4;
  }
  return result;
}
