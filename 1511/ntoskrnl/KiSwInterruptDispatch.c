/*
 * XREFs of KiSwInterruptDispatch @ 0x14014DF2C
 * Callers:
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x1400287D4 (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x1401C386C (KiReadKernelDr7.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     SdbpCheckDll @ 0x140237C10 (SdbpCheckDll.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // r11
  unsigned __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  ULONG v10; // r10d
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm1
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int128 v25; // rax
  int v26; // ebx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  int v30; // eax
  _QWORD *v31; // r9
  __int64 v32; // rdx
  const char *v33; // rax
  unsigned __int64 v34; // r11
  int v35; // r8d
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int *v39; // rax
  int v40; // ecx
  unsigned int v41; // ecx
  _QWORD *v42; // r9
  unsigned int v43; // r8d
  int *v44; // rbx
  __int64 v45; // r10
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  _QWORD *v53; // r9
  unsigned __int64 v54; // r8
  const char *v55; // rax
  int v56; // r11d
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // r10
  __int64 v59; // rax
  unsigned __int64 i; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int8 v65; // r13
  __int64 v66; // rdx
  unsigned int *v67; // rax
  unsigned __int64 v68; // r15
  __int64 v69; // r8
  __int64 *v70; // r9
  __int64 *v71; // r10
  __int64 v72; // rcx
  __int64 v73; // rax
  bool v74; // zf
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  unsigned __int8 v78; // r15
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r14
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v85; // rdx
  unsigned int *v86; // rax
  unsigned __int64 v87; // r15
  __int64 v88; // r8
  __int64 *v89; // r9
  __int64 *v90; // r10
  __int64 v91; // rcx
  __int64 v92; // rax
  bool v93; // zf
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // r10
  unsigned __int64 v97; // r11
  __int64 v98; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r8
  _QWORD *DpcStack; // r13
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // r15
  _QWORD *v104; // r14
  unsigned int v105; // esi
  _QWORD *v106; // r12
  __int64 v107; // rbx
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  __int64 v110; // r10
  _QWORD *v111; // rcx
  char *v112; // rdx
  int v113; // r8d
  unsigned __int64 v114; // r9
  signed __int64 v115; // rdx
  int v116; // ecx
  int v117; // ecx
  int v118; // ecx
  int v119; // ecx
  int v120; // ecx
  volatile signed __int32 *v121; // rax
  int v122; // ebx
  int v123; // r11d
  __int64 v124; // r8
  _QWORD *v125; // r9
  __int64 v126; // rdx
  const char *v127; // rax
  __int64 v128; // r10
  __int64 v129; // rax
  struct _KTHREAD *KernelDr7; // rax
  int v131; // ecx
  __int64 v133; // [rsp+40h] [rbp-79h]
  unsigned int v134; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v135; // [rsp+50h] [rbp-69h]
  int v136; // [rsp+58h] [rbp-61h]
  int v137; // [rsp+5Ch] [rbp-5Dh]
  int v138; // [rsp+60h] [rbp-59h]
  int v139; // [rsp+64h] [rbp-55h]
  int v140; // [rsp+68h] [rbp-51h]
  int v141; // [rsp+6Ch] [rbp-4Dh]
  int v142; // [rsp+70h] [rbp-49h]
  int v143; // [rsp+74h] [rbp-45h]
  _QWORD *v144; // [rsp+78h] [rbp-41h] BYREF
  __int64 v145; // [rsp+80h] [rbp-39h]
  __int64 v146; // [rsp+88h] [rbp-31h]
  unsigned __int64 v147; // [rsp+90h] [rbp-29h]
  struct _KTHREAD *v148; // [rsp+98h] [rbp-21h]
  __int64 v149; // [rsp+A0h] [rbp-19h]
  __int64 v150; // [rsp+A8h] [rbp-11h]
  __int64 v151; // [rsp+B0h] [rbp-9h]
  __int64 v152; // [rsp+B8h] [rbp-1h]
  __int64 v153; // [rsp+C0h] [rbp+7h]
  int v155; // [rsp+128h] [rbp+6Fh]

  v1 = qword_1403821C0;
  v2 = a1;
  v3 = *(_QWORD *)(qword_1403821C0 + 1864);
  v4 = __rdtsc();
  v5 = 0;
  v6 = __ROR8__(v4, 3);
  v150 = ((v6 ^ v4) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v7 = ((0x7010008004002001LL * (v6 ^ v4)) ^ v150) % 0xB;
  if ( (unsigned int)v7 > 5 )
  {
    v11 = v7 - 6;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            v139 = -1333354875;
            v10 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v14 = __rdtsc();
            v15 = __ROR8__(v14, 3);
            v153 = ((v15 ^ v14) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v10 = ((((((((unsigned int)v153 ^ (67117057 * ((unsigned int)v15 ^ (unsigned int)v14))) % 0x1A + 97) << 8) | ((((unsigned int)v153 ^ (67117057 * ((unsigned int)v15 ^ (unsigned int)v14))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v153 ^ (67117057 * ((unsigned int)v15 ^ (unsigned int)v14))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v153 ^ (67117057 * ((unsigned int)v15 ^ (unsigned int)v14))) >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v140 = 1684422978;
          v10 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v136 = -2100910376;
        v10 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v138 = 1314342514;
      v10 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v7 == 5 )
  {
    v141 = 680282605;
    v10 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v10 = __ROR4__(-1474152133, 15);
        else
          v10 = __ROL4__(1728537748, 4);
      }
      else
      {
        v143 = -2051698419;
        v10 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v137 = -1297272415;
      v10 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v142 = -795291432;
    v10 = __ROR4__(-795291432, 6);
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1959, v10);
  v135 = PoolWithTag;
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = PoolWithTag;
    PoolWithTag[2] = sub_14014EF58;
    v18 = PoolWithTag + 4;
    *PoolWithTag = 0LL;
    v19 = PoolWithTag + 4;
    v20 = (_OWORD *)v1;
    v21 = 14LL;
    do
    {
      *v19 = *v20;
      v19[1] = v20[1];
      v19[2] = v20[2];
      v19[3] = v20[3];
      v19[4] = v20[4];
      v19[5] = v20[5];
      v19[6] = v20[6];
      v19 += 8;
      v22 = v20[7];
      v20 += 8;
      *(v19 - 1) = v22;
      --v21;
    }
    while ( v21 );
    *v19 = *v20;
    v19[1] = v20[1];
    v19[2] = v20[2];
    v19[3] = v20[3];
    v19[4] = v20[4];
    PoolWithTag[234] = v1;
    PoolWithTag[235] = PoolWithTag + 238;
    v23 = __rdtsc();
    *((_DWORD *)v17 + 366) = 0;
    v24 = *((unsigned int *)v17 + 359);
    v25 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
    v152 = *((_QWORD *)&v25 + 1);
    *((_DWORD *)v17 + 364) = (*((_QWORD *)&v25 + 1) ^ (unsigned __int64)v25) % v24;
    v26 = *((_DWORD *)v17 + 361);
    v27 = __rdtsc();
    v28 = __ROR8__(v27, 3);
    v29 = v17[234];
    v30 = 67117057 * (v28 ^ v27);
    v31 = (_QWORD *)v29;
    v151 = ((v28 ^ v27) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v32 = v17[181];
    *((_DWORD *)v17 + 368) = v151 ^ v30;
    v17[236] = ((unsigned __int64)v17 + 1959) & 0xFFFFFFFFFFFFFFF8uLL;
    v33 = (const char *)v29;
    v34 = *(unsigned int *)(v29 + 1364);
    if ( v29 < v29 + v34 )
    {
      do
      {
        _mm_prefetch(v33, 0);
        v33 += 64;
      }
      while ( (unsigned __int64)v33 < v29 + v34 );
    }
    v35 = *(_DWORD *)(v29 + 1364);
    if ( (unsigned int)v34 >= 8 )
    {
      v36 = v34 >> 3;
      do
      {
        v32 = __ROL8__(*v31++ ^ v32, v26);
        v35 -= 8;
        --v36;
      }
      while ( v36 );
    }
    for ( ; v35; --v35 )
    {
      v37 = *(unsigned __int8 *)v31;
      v31 = (_QWORD *)((char *)v31 + 1);
      v32 = __ROL8__(v37 ^ v32, v26);
    }
    if ( v32 != qword_1403821C8 )
    {
      v38 = v17[151];
      *(_QWORD *)v38 = v29;
      *(_DWORD *)(v38 + 16) = v34;
      if ( !*((_DWORD *)v17 + 394) )
      {
        *(_QWORD *)(v17[151] + 24LL) = qword_1403821C8 ^ v32;
        if ( !*((_DWORD *)v17 + 394) )
        {
          v17[199] = 0LL;
          v17[198] = v17 - 0xB8BF814EDC6E95FLL;
          v17[200] = 273LL;
          v17[201] = v32;
          *((_DWORD *)v17 + 394) = 1;
        }
      }
    }
    v133 = 0LL;
    v39 = &v134;
    v40 = 4;
    do
    {
      *(_BYTE *)v39 = 0;
      v39 = (unsigned int *)((char *)v39 + 1);
      --v40;
    }
    while ( v40 );
    v41 = 0;
    v155 = 0;
    if ( *((_DWORD *)v17 + 359) )
    {
      while ( 1 )
      {
        v42 = v18;
        v43 = 0;
        if ( v18[230] )
          v42 = (_QWORD *)v18[230];
        v44 = (int *)((char *)v42 + *((unsigned int *)v42 + 350));
        if ( (_DWORD)v133 && HIDWORD(v133) <= v41 )
        {
          v43 = HIDWORD(v133);
          v44 = (int *)((char *)v42 + v134);
        }
        if ( v43 != v41 )
        {
          v45 = v41 - v43;
          v43 = v41;
          while ( 1 )
          {
            v46 = *v44;
            if ( *v44 > 17 )
            {
              switch ( v46 )
              {
                case 19:
LABEL_66:
                  v51 = 56LL;
                  goto LABEL_67;
                case 28:
                  v52 = *((unsigned __int16 *)v44 + 20);
                  goto LABEL_56;
                case 30:
                  v51 = (((v44[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v44 + 20) + 2);
                  goto LABEL_67;
              }
              if ( (unsigned int)(v46 - 33) <= 1 )
              {
                v51 = 20 * (unsigned int)(((v44[8] & 0xFFF) + (unsigned __int64)(unsigned int)v44[10] + 4095) >> 12)
                    + 48;
                goto LABEL_67;
              }
            }
            else
            {
              if ( v46 == 17 )
                goto LABEL_66;
              v47 = v46 - 1;
              if ( !v47 )
              {
LABEL_58:
                v51 = 4 * (v44[4] / 0xCu) + 48;
                goto LABEL_67;
              }
              v48 = v47 - 6;
              if ( !v48 )
              {
                v51 = (unsigned int)(24 * (v44[6] + 2));
                goto LABEL_67;
              }
              v49 = v48 - 1;
              if ( !v49 )
              {
                v52 = *((unsigned __int16 *)v44 + 16);
LABEL_56:
                v51 = (v52 + 55) & 0xFFFFFFF8;
                goto LABEL_67;
              }
              v50 = v49 - 2;
              if ( !v50 )
              {
                v51 = (unsigned int)(16 * (v44[7] + 3));
                goto LABEL_67;
              }
              if ( v50 == 2 )
                goto LABEL_58;
            }
            v51 = 48LL;
LABEL_67:
            v44 = (int *)((char *)v44 + v51);
            if ( !--v45 )
            {
              v41 = v155;
              break;
            }
          }
        }
        LODWORD(v133) = 1;
        HIDWORD(v133) = v43;
        v134 = (_DWORD)v44 - (_DWORD)v42;
        if ( *v44 == 36 )
          break;
        if ( ((*v44 - 1) & 0xFFFFFFDF) == 0 )
        {
          v83 = v18[138];
          v77 = v18[135] + 16LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ((void (__fastcall *)(__int64))v18[41])(v83);
          v86 = (unsigned int *)v18[135];
          LOBYTE(v5) = *((_BYTE *)v86 + 12) != 0;
          v87 = v77 + 24LL * *v86;
          while ( 2 )
          {
            v88 = 24LL;
            v89 = (__int64 *)(v44 + 6);
            v90 = (__int64 *)v77;
            while ( 1 )
            {
              v91 = *v90++;
              v92 = *v89++;
              if ( v91 != v92 )
                break;
              v88 = (unsigned int)(v88 - 8);
              if ( (unsigned int)v88 < 8 )
              {
                v93 = (_DWORD)v88 == 0;
                while ( !v93 )
                {
                  v85 = *(unsigned __int8 *)v90;
                  v90 = (__int64 *)((char *)v90 + 1);
                  v94 = *(unsigned __int8 *)v89;
                  v89 = (__int64 *)((char *)v89 + 1);
                  if ( v85 != v94 )
                    goto LABEL_119;
                  v93 = (_DWORD)v88 == 1;
                  v88 = (unsigned int)(v88 - 1);
                }
                goto LABEL_120;
              }
            }
LABEL_119:
            v77 += 24LL;
            if ( v77 < v87 )
              continue;
            break;
          }
LABEL_120:
          ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v18[49])(v18[138], v85, v88, v89);
          __writecr8(CurrentIrql);
          if ( v5 && *((_QWORD *)v44 + 3) == 1LL )
          {
            v41 = v155;
            v5 = 0;
          }
          else
          {
            v41 = v155;
            v5 = 0;
            if ( v77 == v87 )
              goto LABEL_108;
          }
        }
LABEL_125:
        v155 = ++v41;
        if ( v41 >= *((_DWORD *)v18 + 351) )
        {
          v17 = v135;
          v2 = a1;
          goto LABEL_127;
        }
      }
      v53 = (_QWORD *)*((_QWORD *)v44 + 1);
      v54 = (unsigned int)v44[4];
      v55 = (const char *)v53;
      *((_DWORD *)v18 + 358) += v54;
      v56 = *((_DWORD *)v18 + 353);
      v57 = v18[177];
      if ( v53 < (_QWORD *)((char *)v53 + v54) )
      {
        do
        {
          _mm_prefetch(v55, 0);
          v55 += 64;
        }
        while ( v55 < (const char *)v53 + v54 );
      }
      if ( (unsigned int)v54 >= 8 )
      {
        v58 = v54 >> 3;
        do
        {
          v57 = __ROL8__(*v53++ ^ v57, v56);
          v54 = (unsigned int)(v54 - 8);
          --v58;
        }
        while ( v58 );
      }
      if ( (_DWORD)v54 )
      {
        do
        {
          v59 = *(unsigned __int8 *)v53;
          v53 = (_QWORD *)((char *)v53 + 1);
          v57 = __ROL8__(v59 ^ v57, v56);
          v74 = (_DWORD)v54 == 1;
          v54 = (unsigned int)(v54 - 1);
        }
        while ( !v74 );
      }
      for ( i = v57; ; v57 = (unsigned int)i ^ (unsigned int)v57 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v61 = (unsigned int)v44[5];
      LODWORD(v57) = v57 & 0x7FFFFFFF;
      if ( (_DWORD)v57 != (_DWORD)v61 )
      {
        if ( !*((_DWORD *)v18 + 386) )
          *(_QWORD *)(v18[147] + 24LL) = v61 ^ (unsigned int)v57;
        v62 = *((_QWORD *)v44 + 1);
        if ( !*((_DWORD *)v18 + 386) )
        {
          v18[194] = v18 - 0xB8BF814EDC6E963LL;
          v18[195] = (char *)v44 - 0x4C48B4211BBACBEBLL;
          v18[196] = *v44;
          v18[197] = v62;
          *((_DWORD *)v18 + 386) = 1;
        }
      }
      v63 = v18[138];
      v64 = v18[135] + 16LL;
      v65 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, unsigned __int64, unsigned __int64, _QWORD *))v18[41])(v63, v57, v54, v53);
      v67 = (unsigned int *)v18[135];
      LOBYTE(v5) = *((_BYTE *)v67 + 12) != 0;
      v68 = v64 + 24LL * *v67;
      while ( 2 )
      {
        v69 = 24LL;
        v70 = (__int64 *)(v44 + 6);
        v71 = (__int64 *)v64;
        while ( 1 )
        {
          v72 = *v71++;
          v73 = *v70++;
          if ( v72 != v73 )
            break;
          v69 = (unsigned int)(v69 - 8);
          if ( (unsigned int)v69 < 8 )
          {
            v74 = (_DWORD)v69 == 0;
            while ( !v74 )
            {
              v66 = *(unsigned __int8 *)v71;
              v71 = (__int64 *)((char *)v71 + 1);
              v75 = *(unsigned __int8 *)v70;
              v70 = (__int64 *)((char *)v70 + 1);
              if ( v66 != v75 )
                goto LABEL_93;
              v74 = (_DWORD)v69 == 1;
              v69 = (unsigned int)(v69 - 1);
            }
            goto LABEL_94;
          }
        }
LABEL_93:
        v64 += 24LL;
        if ( v64 < v68 )
          continue;
        break;
      }
LABEL_94:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v18[49])(v18[138], v66, v69, v70);
      __writecr8(v65);
      if ( v5 && *((_QWORD *)v44 + 3) == 1LL )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        if ( v64 == v68 && !*((_DWORD *)v18 + 386) )
        {
          v18[194] = v18 - 0xB8BF814EDC6E963LL;
          v18[195] = (char *)v44 - 0x4C48B4211BBACBEBLL;
          v18[196] = *v44;
          v18[197] = v64;
          *((_DWORD *)v18 + 386) = 1;
        }
      }
      v76 = v18[138];
      v77 = v18[135] + 16LL;
      v78 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v18[41])(v76);
      v79 = 0LL;
      v80 = v77 + 24LL * *(unsigned int *)v18[135];
      while ( 1 )
      {
        v77 += 24LL;
        if ( v77 >= v80 )
          break;
        v81 = *(_QWORD *)(v77 + 8);
        if ( v81 < v79 )
          break;
        if ( (v81 & 0xFFFFFFFFFFFFF000uLL) != v81 )
          break;
        v82 = v81 + *(unsigned int *)(v77 + 16);
        if ( v82 <= v81 || v82 == v79 )
          break;
        v79 = v81 + *(unsigned int *)(v77 + 16);
      }
      ((void (__fastcall *)(_QWORD))v18[49])(v18[138]);
      __writecr8(v78);
      v41 = v155;
      if ( v77 == v80 )
        goto LABEL_125;
LABEL_108:
      if ( !*((_DWORD *)v18 + 386) )
      {
        v18[194] = v18 - 0xB8BF814EDC6E963LL;
        v18[195] = (char *)v44 - 0x4C48B4211BBACBEBLL;
        v18[196] = *v44;
        v18[197] = v77;
        *((_DWORD *)v18 + 386) = 1;
      }
      goto LABEL_125;
    }
LABEL_127:
    if ( *((_DWORD *)v18 + 386) )
    {
      v95 = v18[196];
      v96 = v18[197];
      v97 = v18[195];
      v98 = v18[194];
      v149 = v95;
      v146 = v96;
      v147 = v97;
      v145 = v98;
      v144 = v18;
      if ( KeGetCurrentIrql() < 2u )
        __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      v148 = CurrentThread;
      DpcStack = CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v144 > DpcStack || &v144 < DpcStack - 3072 )
        DpcStack = CurrentThread->InitialStack;
      if ( (v18[210] & 0x8000000) == 0 )
      {
        v97 = __readcr0();
        v135 = (_QWORD *)v97;
        __writecr0(v97 & 0xFFFFFFFFFFFEFFFFuLL);
        v102 = (unsigned __int64)(v18 + 235);
        v103 = (unsigned __int64)&v18[2 * *((unsigned int *)v18 + 468) + 235];
        v104 = (_QWORD *)v103;
        if ( *((_DWORD *)v18 + 469) )
        {
          v105 = 0;
          do
          {
            v106 = (_QWORD *)*v104;
            v107 = v104[1];
            *v106 = v107;
            if ( (unsigned int)MiPteInShadowRange(v106) )
              MiWritePteShadow(v106, v107);
            v108 = __readcr4();
            if ( (v108 & 0x20080) != 0 )
            {
              __writecr4(v108 ^ 0x80);
              __writecr4(v108);
            }
            else
            {
              v109 = __readcr3();
              __writecr3(v109);
            }
            v104 += 2;
            ++v105;
          }
          while ( v105 < *((_DWORD *)v18 + 469) );
          v97 = (unsigned __int64)v135;
          v102 = (unsigned __int64)(v18 + 235);
          LODWORD(v98) = v145;
        }
        while ( v102 < v103 )
        {
          v110 = *(unsigned int *)(v102 + 8);
          v111 = v104;
          v112 = *(char **)v102;
          v113 = v110;
          if ( (unsigned int)v110 >= 8 )
          {
            v114 = (unsigned __int64)(unsigned int)v110 >> 3;
            do
            {
              v113 -= 8;
              *(_QWORD *)v112 = *v111++;
              v112 += 8;
              --v114;
            }
            while ( v114 );
          }
          if ( v113 )
          {
            v115 = v112 - (char *)v111;
            do
            {
              *((_BYTE *)v111 + v115) = *(_BYTE *)v111;
              v111 = (_QWORD *)((char *)v111 + 1);
              --v113;
            }
            while ( v113 );
          }
          v104 = (_QWORD *)((char *)v104 + v110);
          v102 += 16LL;
        }
        *(_BYTE *)v18[61] = -61;
        __writecr0(v97);
        CurrentThread = v148;
        v95 = v149;
        LODWORD(v96) = v146;
        LODWORD(v97) = v147;
      }
      if ( *((_DWORD *)v18 + 398) && KeGetCurrentIrql() < 2u )
        __writecr8(2uLL);
      v116 = *((_DWORD *)v18 + 398);
      if ( v116 )
      {
        v117 = v116 - 1;
        if ( v117 )
        {
          v118 = v117 - 1;
          if ( v118 )
          {
            v119 = v118 - 1;
            if ( v119 )
            {
              v120 = v119 - 1;
              if ( v120 )
              {
                if ( v120 == 1 )
                  _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*((_DWORD *)v18 + 420) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(v18[152] + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                  (*((_DWORD *)v18 + 420) >> 10) & 0x1F);
              }
              goto LABEL_184;
            }
            v121 = (volatile signed __int32 *)v18[142];
          }
          else
          {
            v121 = (volatile signed __int32 *)v18[141];
          }
        }
        else
        {
          v121 = (volatile signed __int32 *)v18[139];
        }
        _interlockedbittestandset64(v121, 0LL);
      }
LABEL_184:
      CurrentThread[1].InitialStack = 0LL;
      CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      SdbpCheckDll(265, v98, v97, v96, v95, v18[42], (__int64)DpcStack);
      JUMPOUT(0x14014ECB9LL);
    }
    v122 = *((_DWORD *)v18 + 49);
    v123 = *((_DWORD *)v18 + 353);
    LODWORD(v124) = 1264;
    *((_DWORD *)v18 + 358) += 1264;
    v125 = v18;
    v126 = v18[177];
    v127 = (const char *)v18;
    *((_DWORD *)v18 + 49) = 0;
    if ( v18 < v18 + 158 )
    {
      do
      {
        _mm_prefetch(v127, 0);
        v127 += 64;
      }
      while ( v127 < (const char *)v18 + 1264 );
    }
    v128 = 158LL;
    do
    {
      v126 = __ROL8__(*v125++ ^ v126, v123);
      v124 = (unsigned int)(v124 - 8);
      --v128;
    }
    while ( v128 );
    if ( (_DWORD)v124 )
    {
      do
      {
        v129 = *(unsigned __int8 *)v125;
        v125 = (_QWORD *)((char *)v125 + 1);
        v126 = __ROL8__(v129 ^ v126, v123);
        v74 = (_DWORD)v124 == 1;
        v124 = (unsigned int)(v124 - 1);
      }
      while ( !v74 );
    }
    v18[227] = v126;
    *((_DWORD *)v18 + 49) = v122;
    ((void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v18[33])(v17, 1LL, v124, v125);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v131 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    KernelDr7 = KeGetCurrentThread();
    v131 = _bittest((const signed __int32 *)&KernelDr7->Header.Lock, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v131 )
  {
    KernelDr7 = (struct _KTHREAD *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
