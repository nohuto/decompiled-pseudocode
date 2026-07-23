/*
 * XREFs of KiSwInterruptDispatch @ 0x1401578BC
 * Callers:
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x1400AC280 (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x1401D1F38 (KiReadKernelDr7.c)
 *     SdbpCheckDll @ 0x1402534D0 (SdbpCheckDll.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  _QWORD *PoolWithTag; // rax
  int v6; // r12d
  _QWORD *v7; // rsi
  char *v8; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm1
  unsigned __int64 v13; // rax
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // r11d
  _QWORD *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  const char *v20; // rax
  unsigned __int64 v21; // r10
  int v22; // r8d
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int *v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  char *v29; // r9
  unsigned int v30; // r8d
  char *v31; // rdi
  __int64 v32; // r10
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rax
  int v39; // eax
  _QWORD *v40; // r9
  unsigned __int64 v41; // r8
  const char *v42; // rax
  int v43; // r10d
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 i; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  unsigned __int8 v52; // r13
  __int64 v53; // rdx
  unsigned int *v54; // rax
  unsigned __int64 v55; // r15
  __int64 v56; // r8
  __int64 *v57; // r9
  __int64 *v58; // r10
  __int64 v59; // rcx
  __int64 v60; // rax
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int8 v65; // r15
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v72; // rdx
  unsigned int *v73; // rax
  unsigned __int64 v74; // r15
  __int64 v75; // r8
  __int64 *v76; // r9
  __int64 *v77; // r10
  __int64 v78; // rcx
  __int64 v79; // rax
  bool v80; // zf
  __int64 v81; // rax
  _QWORD *v82; // r8
  __int64 v83; // r10
  __int64 v84; // r11
  __int64 v85; // r13
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  char **DpcStack; // r14
  unsigned __int64 v89; // r12
  unsigned __int64 v90; // rdx
  unsigned int v91; // r10d
  unsigned __int64 v92; // r9
  _QWORD *j; // r8
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rax
  __int64 v96; // rsi
  _QWORD *v97; // rcx
  char *v98; // r10
  int v99; // r11d
  unsigned __int64 v100; // rdi
  signed __int64 v101; // r10
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // ecx
  volatile signed __int32 *v107; // rax
  int v108; // edi
  int v109; // r11d
  __int64 v110; // r8
  _QWORD *v111; // r9
  __int64 v112; // rdx
  const char *v113; // rax
  __int64 v114; // r10
  __int64 v115; // rax
  struct _KTHREAD *KernelDr7; // rax
  int v117; // ecx
  int v119; // [rsp+40h] [rbp-38h]
  __int64 v120; // [rsp+60h] [rbp-18h]
  int v121; // [rsp+68h] [rbp-10h] BYREF
  int v123; // [rsp+C8h] [rbp+50h]
  int v124; // [rsp+C8h] [rbp+50h]
  char *v125; // [rsp+D0h] [rbp+58h] BYREF
  _QWORD *v126; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = qword_1403AA200;
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  *(_QWORD *)(v2 + 1936) + 2031LL,
                  dword_1402F9BF0[((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) & 0xF]);
  v6 = 0;
  v126 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = PoolWithTag;
    v8 = (char *)(PoolWithTag + 4);
    PoolWithTag[2] = sub_1401586D8;
    v9 = (_OWORD *)v2;
    *v7 = 0LL;
    v10 = v7 + 4;
    v11 = 15LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      v12 = v9[7];
      v9 += 8;
      *(v10 - 1) = v12;
      --v11;
    }
    while ( v11 );
    *v10 = *v9;
    *((_QWORD *)v10 + 2) = *((_QWORD *)v9 + 2);
    v7[243] = v2;
    v7[244] = v7 + 247;
    v13 = __rdtsc();
    *((_DWORD *)v7 + 384) = 0;
    v14 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v7 + 382) = (*((_QWORD *)&v14 + 1) ^ (unsigned __int64)v14) % *((unsigned int *)v7 + 377);
    *(_QWORD *)&v14 = __rdtsc();
    v15 = v7[243];
    v16 = *((_DWORD *)v7 + 379);
    v17 = (_QWORD *)v15;
    v18 = __ROR8__(v14, 3);
    v19 = v7[190];
    *((_DWORD *)v7 + 386) = (((v18 ^ (unsigned __int64)v14) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v18 ^ v14));
    v7[245] = ((unsigned __int64)v7 + 2031) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = (const char *)v15;
    v21 = *(unsigned int *)(v15 + 1436);
    if ( v15 < v15 + v21 )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( (unsigned __int64)v20 < v15 + v21 );
    }
    v22 = *(_DWORD *)(v15 + 1436);
    if ( (unsigned int)v21 >= 8 )
    {
      v23 = v21 >> 3;
      do
      {
        v19 = __ROL8__(*v17++ ^ v19, v16);
        v22 -= 8;
        --v23;
      }
      while ( v23 );
    }
    for ( ; v22; --v22 )
    {
      v24 = *(unsigned __int8 *)v17;
      v17 = (_QWORD *)((char *)v17 + 1);
      v19 = __ROL8__(v24 ^ v19, v16);
    }
    if ( v19 != qword_1403AA208 )
    {
      v25 = v7[159];
      *(_QWORD *)v25 = v15;
      *(_DWORD *)(v25 + 16) = v21;
      if ( !*((_DWORD *)v7 + 412) )
      {
        *(_QWORD *)(v7[159] + 24LL) = v19 ^ qword_1403AA208;
        if ( !*((_DWORD *)v7 + 412) )
        {
          v7[208] = 0LL;
          v7[207] = v7 - 0xB8BF814EDC6E95FLL;
          v7[209] = 273LL;
          v7[210] = v19;
          *((_DWORD *)v7 + 412) = 1;
        }
      }
    }
    v120 = 0LL;
    v26 = &v121;
    v27 = 4;
    do
    {
      *(_BYTE *)v26 = 0;
      v26 = (int *)((char *)v26 + 1);
      --v27;
    }
    while ( v27 );
    v28 = 0;
    v123 = 0;
    if ( *((_DWORD *)v7 + 377) )
    {
      while ( 1 )
      {
        v29 = v8;
        v30 = 0;
        if ( *((_QWORD *)v8 + 239) )
          v29 = (char *)*((_QWORD *)v8 + 239);
        v31 = &v29[*((unsigned int *)v29 + 368)];
        if ( (_DWORD)v120 && HIDWORD(v120) <= v28 )
        {
          v30 = HIDWORD(v120);
          v31 = &v29[v121];
        }
        if ( v30 != v28 )
        {
          v32 = v28 - v30;
          v30 = v28;
          while ( 1 )
          {
            v33 = *(_DWORD *)v31;
            if ( *(int *)v31 > 17 )
            {
              switch ( v33 )
              {
                case 19:
LABEL_45:
                  v38 = 56LL;
                  goto LABEL_46;
                case 28:
                  v39 = *((unsigned __int16 *)v31 + 20);
                  goto LABEL_35;
                case 30:
                  v38 = (((*((_DWORD *)v31 + 9) - 1) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v31 + 20) + 2);
                  goto LABEL_46;
              }
              if ( (unsigned int)(v33 - 33) <= 1 )
              {
                v38 = 20
                    * (unsigned int)(((*((_DWORD *)v31 + 8) & 0xFFF)
                                    + (unsigned __int64)*((unsigned int *)v31 + 10)
                                    + 4095) >> 12)
                    + 48;
                goto LABEL_46;
              }
            }
            else
            {
              if ( v33 == 17 )
                goto LABEL_45;
              v34 = v33 - 1;
              if ( !v34 )
              {
LABEL_37:
                v38 = 4 * (*((_DWORD *)v31 + 4) / 0xCu) + 48;
                goto LABEL_46;
              }
              v35 = v34 - 6;
              if ( !v35 )
              {
                v38 = (unsigned int)(24 * (*((_DWORD *)v31 + 6) + 2));
                goto LABEL_46;
              }
              v36 = v35 - 1;
              if ( !v36 )
              {
                v39 = *((unsigned __int16 *)v31 + 16);
LABEL_35:
                v38 = (v39 + 55) & 0xFFFFFFF8;
                goto LABEL_46;
              }
              v37 = v36 - 2;
              if ( !v37 )
              {
                v38 = (unsigned int)(16 * (*((_DWORD *)v31 + 7) + 3));
                goto LABEL_46;
              }
              if ( v37 == 2 )
                goto LABEL_37;
            }
            v38 = 48LL;
LABEL_46:
            v31 += v38;
            if ( !--v32 )
            {
              v28 = v123;
              break;
            }
          }
        }
        LODWORD(v120) = 1;
        HIDWORD(v120) = v30;
        v121 = (_DWORD)v31 - (_DWORD)v29;
        if ( *(_DWORD *)v31 == 36 )
          break;
        if ( ((*(_DWORD *)v31 - 1) & 0xFFFFFFDF) == 0 )
        {
          v70 = *((_QWORD *)v8 + 145);
          v64 = *((_QWORD *)v8 + 142) + 16LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*((void (__fastcall **)(__int64, __int64))v8 + 39))(v70, 2LL);
          v73 = (unsigned int *)*((_QWORD *)v8 + 142);
          LOBYTE(v6) = *((_BYTE *)v73 + 12) != 0;
          v74 = v64 + 24LL * *v73;
          while ( 2 )
          {
            v75 = 24LL;
            v76 = (__int64 *)(v31 + 24);
            v77 = (__int64 *)v64;
            while ( 1 )
            {
              v78 = *v77++;
              v79 = *v76++;
              if ( v78 != v79 )
                break;
              v75 = (unsigned int)(v75 - 8);
              if ( (unsigned int)v75 < 8 )
              {
                v80 = (_DWORD)v75 == 0;
                while ( !v80 )
                {
                  v72 = *(unsigned __int8 *)v77;
                  v77 = (__int64 *)((char *)v77 + 1);
                  v81 = *(unsigned __int8 *)v76;
                  v76 = (__int64 *)((char *)v76 + 1);
                  if ( v72 != v81 )
                    goto LABEL_98;
                  v80 = (_DWORD)v75 == 1;
                  v75 = (unsigned int)(v75 - 1);
                }
                goto LABEL_99;
              }
            }
LABEL_98:
            v64 += 24LL;
            if ( v64 < v74 )
              continue;
            break;
          }
LABEL_99:
          (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))v8 + 47))(*((_QWORD *)v8 + 145), v72, v75, v76);
          __writecr8(CurrentIrql);
          if ( v6 && *((_QWORD *)v31 + 3) == 1LL )
          {
            v28 = v123;
            v6 = 0;
          }
          else
          {
            v28 = v123;
            v6 = 0;
            if ( v64 == v74 )
              goto LABEL_87;
          }
        }
LABEL_104:
        v123 = ++v28;
        if ( v28 >= *((_DWORD *)v8 + 369) )
        {
          v7 = v126;
          v1 = a1;
          goto LABEL_106;
        }
      }
      v40 = (_QWORD *)*((_QWORD *)v31 + 1);
      v41 = *((unsigned int *)v31 + 4);
      v42 = (const char *)v40;
      *((_DWORD *)v8 + 376) += v41;
      v43 = *((_DWORD *)v8 + 371);
      v44 = *((_QWORD *)v8 + 186);
      if ( v40 < (_QWORD *)((char *)v40 + v41) )
      {
        do
        {
          _mm_prefetch(v42, 0);
          v42 += 64;
        }
        while ( v42 < (const char *)v40 + v41 );
      }
      if ( (unsigned int)v41 >= 8 )
      {
        v45 = v41 >> 3;
        do
        {
          v44 = __ROL8__(*v40++ ^ v44, v43);
          v41 = (unsigned int)(v41 - 8);
          --v45;
        }
        while ( v45 );
      }
      if ( (_DWORD)v41 )
      {
        do
        {
          v46 = *(unsigned __int8 *)v40;
          v40 = (_QWORD *)((char *)v40 + 1);
          v44 = __ROL8__(v46 ^ v44, v43);
          v61 = (_DWORD)v41 == 1;
          v41 = (unsigned int)(v41 - 1);
        }
        while ( !v61 );
      }
      for ( i = v44; ; v44 = (unsigned int)i ^ (unsigned int)v44 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v48 = *((unsigned int *)v31 + 5);
      LODWORD(v44) = v44 & 0x7FFFFFFF;
      if ( (_DWORD)v44 != (_DWORD)v48 )
      {
        if ( !*((_DWORD *)v8 + 404) )
          *(_QWORD *)(*((_QWORD *)v8 + 155) + 24LL) = v48 ^ (unsigned int)v44;
        v49 = *((_QWORD *)v31 + 1);
        if ( !*((_DWORD *)v8 + 404) )
        {
          *((_QWORD *)v8 + 203) = v8 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v8 + 204) = v31 - 0x4C48B4211BBACBEBLL;
          *((_QWORD *)v8 + 205) = *(int *)v31;
          *((_QWORD *)v8 + 206) = v49;
          *((_DWORD *)v8 + 404) = 1;
        }
      }
      v50 = *((_QWORD *)v8 + 145);
      v51 = *((_QWORD *)v8 + 142) + 16LL;
      v52 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD *))v8 + 39))(v50, v44, v41, v40);
      v54 = (unsigned int *)*((_QWORD *)v8 + 142);
      LOBYTE(v6) = *((_BYTE *)v54 + 12) != 0;
      v55 = v51 + 24LL * *v54;
      while ( 2 )
      {
        v56 = 24LL;
        v57 = (__int64 *)(v31 + 24);
        v58 = (__int64 *)v51;
        while ( 1 )
        {
          v59 = *v58++;
          v60 = *v57++;
          if ( v59 != v60 )
            break;
          v56 = (unsigned int)(v56 - 8);
          if ( (unsigned int)v56 < 8 )
          {
            v61 = (_DWORD)v56 == 0;
            while ( !v61 )
            {
              v53 = *(unsigned __int8 *)v58;
              v58 = (__int64 *)((char *)v58 + 1);
              v62 = *(unsigned __int8 *)v57;
              v57 = (__int64 *)((char *)v57 + 1);
              if ( v53 != v62 )
                goto LABEL_72;
              v61 = (_DWORD)v56 == 1;
              v56 = (unsigned int)(v56 - 1);
            }
            goto LABEL_73;
          }
        }
LABEL_72:
        v51 += 24LL;
        if ( v51 < v55 )
          continue;
        break;
      }
LABEL_73:
      (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))v8 + 47))(*((_QWORD *)v8 + 145), v53, v56, v57);
      __writecr8(v52);
      if ( v6 && *((_QWORD *)v31 + 3) == 1LL )
      {
        v6 = 0;
      }
      else
      {
        v6 = 0;
        if ( v51 == v55 && !*((_DWORD *)v8 + 404) )
        {
          *((_QWORD *)v8 + 203) = v8 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v8 + 204) = v31 - 0x4C48B4211BBACBEBLL;
          *((_QWORD *)v8 + 205) = *(int *)v31;
          *((_QWORD *)v8 + 206) = v51;
          *((_DWORD *)v8 + 404) = 1;
        }
      }
      v63 = *((_QWORD *)v8 + 145);
      v64 = *((_QWORD *)v8 + 142) + 16LL;
      v65 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64))v8 + 39))(v63);
      v66 = 0LL;
      v67 = v64 + 24LL * **((unsigned int **)v8 + 142);
      while ( 1 )
      {
        v64 += 24LL;
        if ( v64 >= v67 )
          break;
        v68 = *(_QWORD *)(v64 + 8);
        if ( v68 < v66 )
          break;
        if ( (v68 & 0xFFFFFFFFFFFFF000uLL) != v68 )
          break;
        v69 = v68 + *(unsigned int *)(v64 + 16);
        if ( v69 <= v68 || v69 == v66 )
          break;
        v66 = v68 + *(unsigned int *)(v64 + 16);
      }
      (*((void (__fastcall **)(_QWORD))v8 + 47))(*((_QWORD *)v8 + 145));
      __writecr8(v65);
      v28 = v123;
      if ( v64 == v67 )
        goto LABEL_104;
LABEL_87:
      if ( !*((_DWORD *)v8 + 404) )
      {
        *((_QWORD *)v8 + 203) = v8 - 0x5C5FC0A76E374B18LL;
        *((_QWORD *)v8 + 204) = v31 - 0x4C48B4211BBACBEBLL;
        *((_QWORD *)v8 + 205) = *(int *)v31;
        *((_QWORD *)v8 + 206) = v64;
        *((_DWORD *)v8 + 404) = 1;
      }
      goto LABEL_104;
    }
LABEL_106:
    if ( *((_DWORD *)v8 + 404) )
    {
      v82 = (_QWORD *)*((_QWORD *)v8 + 206);
      v83 = *((_QWORD *)v8 + 204);
      v84 = *((_QWORD *)v8 + 203);
      v85 = *((_QWORD *)v8 + 205);
      v126 = v82;
      v119 = v83;
      v124 = v84;
      v125 = v8;
      if ( KeGetCurrentIrql() < 2u )
        __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = (char **)CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v125 > DpcStack || &v125 < DpcStack - 3072 )
        DpcStack = (char **)CurrentThread->InitialStack;
      if ( (*((_DWORD *)v8 + 438) & 0x8000000) == 0 )
      {
        v89 = __readcr0();
        __writecr0(v89 & 0xFFFFFFFFFFFEFFFFuLL);
        v90 = (unsigned __int64)(v8 + 1952);
        v91 = 0;
        v92 = (unsigned __int64)&v8[16 * *((unsigned int *)v8 + 486) + 1952];
        for ( j = (_QWORD *)v92; v91 < *((_DWORD *)v8 + 487); ++v91 )
        {
          *(_QWORD *)*j = j[1];
          v94 = __readcr4();
          if ( (v94 & 0x20080) != 0 )
          {
            __writecr4(v94 ^ 0x80);
            __writecr4(v94);
          }
          else
          {
            v95 = __readcr3();
            __writecr3(v95);
          }
          j += 2;
        }
        if ( v90 < v92 )
        {
          do
          {
            v96 = *(unsigned int *)(v90 + 8);
            v97 = j;
            v98 = *(char **)v90;
            v99 = v96;
            if ( (unsigned int)v96 >= 8 )
            {
              v100 = (unsigned __int64)(unsigned int)v96 >> 3;
              do
              {
                v99 -= 8;
                *(_QWORD *)v98 = *v97++;
                v98 += 8;
                --v100;
              }
              while ( v100 );
            }
            if ( v99 )
            {
              v101 = v98 - (char *)v97;
              do
              {
                *((_BYTE *)v97 + v101) = *(_BYTE *)v97;
                v97 = (_QWORD *)((char *)v97 + 1);
                --v99;
              }
              while ( v99 );
            }
            j = (_QWORD *)((char *)j + v96);
            v90 += 16LL;
          }
          while ( v90 < v92 );
          LODWORD(v84) = v124;
        }
        **((_BYTE **)v8 + 64) = -61;
        __writecr0(v89);
        LODWORD(v82) = (_DWORD)v126;
        LODWORD(v83) = v119;
      }
      if ( *((_DWORD *)v8 + 416) && KeGetCurrentIrql() < 2u )
        __writecr8(2uLL);
      v102 = *((_DWORD *)v8 + 416);
      if ( v102 )
      {
        v103 = v102 - 1;
        if ( v103 )
        {
          v104 = v103 - 1;
          if ( v104 )
          {
            v105 = v104 - 1;
            if ( v105 )
            {
              v106 = v105 - 1;
              if ( v106 )
              {
                if ( v106 == 1 )
                  _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*((_DWORD *)v8 + 438) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v8 + 160) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                  (*((_DWORD *)v8 + 438) >> 10) & 0x1F);
              }
              goto LABEL_160;
            }
            v107 = (volatile signed __int32 *)*((_QWORD *)v8 + 149);
          }
          else
          {
            v107 = (volatile signed __int32 *)*((_QWORD *)v8 + 148);
          }
        }
        else
        {
          v107 = (volatile signed __int32 *)*((_QWORD *)v8 + 146);
        }
        _interlockedbittestandset64(v107, 0LL);
      }
LABEL_160:
      CurrentThread[1].InitialStack = 0LL;
      CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      SdbpCheckDll(265, v84, v83, (_DWORD)v82, v85, *((_QWORD *)v8 + 40), (__int64)DpcStack);
      JUMPOUT(0x14015843ALL);
    }
    v108 = *((_DWORD *)v8 + 49);
    v109 = *((_DWORD *)v8 + 371);
    LODWORD(v110) = 1336;
    *((_DWORD *)v8 + 376) += 1336;
    v111 = v8;
    v112 = *((_QWORD *)v8 + 186);
    v113 = v8;
    for ( *((_DWORD *)v8 + 49) = 0; v113 < v8 + 1336; v113 += 64 )
      _mm_prefetch(v113, 0);
    v114 = 167LL;
    do
    {
      v112 = __ROL8__(*v111++ ^ v112, v109);
      v110 = (unsigned int)(v110 - 8);
      --v114;
    }
    while ( v114 );
    if ( (_DWORD)v110 )
    {
      do
      {
        v115 = *(unsigned __int8 *)v111;
        v111 = (_QWORD *)((char *)v111 + 1);
        v112 = __ROL8__(v115 ^ v112, v109);
        v61 = (_DWORD)v110 == 1;
        v110 = (unsigned int)(v110 - 1);
      }
      while ( !v61 );
    }
    *((_QWORD *)v8 + 236) = v112;
    *((_DWORD *)v8 + 49) = v108;
    (*((void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *))v8 + 31))(v7, 1LL, v110, v111);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v1);
  v117 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    KernelDr7 = KeGetCurrentThread();
    v117 = _bittest((const signed __int32 *)&KernelDr7->Header.Lock, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v117 )
  {
    KernelDr7 = (struct _KTHREAD *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
