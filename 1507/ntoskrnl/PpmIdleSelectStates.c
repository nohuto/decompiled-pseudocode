/*
 * XREFs of PpmIdleSelectStates @ 0x140160AB0
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PpmEstimateIdleDuration @ 0x140161464 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x14016165C (PpmIdleEvaluateConstraints.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1402340E0 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140234828 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140234B18 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140235064 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmUnlockProcessors @ 0x140235DB4 (PpmUnlockProcessors.c)
 */

unsigned __int8 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int8 *a4,
        _DWORD *a5,
        int *a6,
        char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v10; // r12
  char v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // r15d
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  signed __int64 v18; // rax
  int v19; // ecx
  __int64 (__fastcall *v20)(_QWORD, __int64); // rax
  __int64 *v21; // rdx
  __int64 v22; // r9
  unsigned __int16 v23; // cx
  __int64 v24; // r8
  unsigned int v25; // ecx
  char v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rbx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rsi
  int v33; // ebx
  unsigned __int8 v34; // al
  char v35; // al
  int v36; // r9d
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // r12d
  _DWORD *v48; // r15
  __int64 v49; // r11
  unsigned __int16 *v50; // r10
  __int64 v51; // rsi
  unsigned __int16 v52; // bx
  int v53; // edx
  unsigned __int16 v54; // cx
  unsigned __int16 v55; // ax
  char *v56; // r10
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // bx
  __int64 v62; // r9
  _QWORD *v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  _DWORD *v66; // rbx
  unsigned __int8 v67; // r14
  unsigned int v68; // esi
  int v69; // eax
  char v70; // bl
  char v71; // r10
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // r15
  unsigned __int8 v75; // al
  char v76; // al
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  int v80; // eax
  char v81; // al
  _DWORD *v82; // rax
  char v83; // al
  __int64 v84; // r8
  signed __int32 *v85; // roff
  signed __int32 v86; // eax
  signed __int32 v87; // edx
  int v88; // eax
  unsigned __int8 *result; // rax
  unsigned __int8 v90; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v91; // [rsp+40h] [rbp-C0h]
  unsigned int v92; // [rsp+44h] [rbp-BCh] BYREF
  int v93; // [rsp+48h] [rbp-B8h]
  int v94; // [rsp+4Ch] [rbp-B4h]
  unsigned int v95; // [rsp+50h] [rbp-B0h]
  int v96; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD *v97; // [rsp+58h] [rbp-A8h]
  int v98; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h] BYREF
  int v101; // [rsp+78h] [rbp-88h]
  int v102; // [rsp+7Ch] [rbp-84h]
  __int64 v103; // [rsp+80h] [rbp-80h]
  __int64 v104; // [rsp+88h] [rbp-78h]
  __int16 v105; // [rsp+90h] [rbp-70h] BYREF
  char *v106; // [rsp+98h] [rbp-68h]
  __int64 v107; // [rsp+A0h] [rbp-60h] BYREF
  char v108[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+B8h] [rbp-48h] BYREF
  int *v111; // [rsp+C0h] [rbp-40h]
  __int64 v112; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 *v113; // [rsp+D0h] [rbp-30h]
  __int64 v114; // [rsp+D8h] [rbp-28h]
  __int64 v115; // [rsp+E0h] [rbp-20h]
  _DWORD *v116; // [rsp+E8h] [rbp-18h]
  _DWORD *v117; // [rsp+F0h] [rbp-10h] BYREF
  int v118; // [rsp+F8h] [rbp-8h]
  int v119; // [rsp+FCh] [rbp-4h]
  _DWORD *v120; // [rsp+100h] [rbp+0h] BYREF
  int v121; // [rsp+108h] [rbp+8h]
  int v122; // [rsp+10Ch] [rbp+Ch]
  unsigned __int16 v123; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v124; // [rsp+112h] [rbp+12h]
  int i; // [rsp+114h] [rbp+14h]
  _QWORD v126[21]; // [rsp+118h] [rbp+18h] BYREF

  v7 = PpmPlatformStates;
  v8 = *(_QWORD *)(a1 + 23808);
  v116 = a5;
  v10 = a1;
  v11 = 1;
  v111 = a6;
  v106 = a7;
  v114 = *(_QWORD *)(a1 + 23816);
  v92 = 0;
  v97 = 0LL;
  v93 = 0;
  v99 = 0LL;
  v95 = 0;
  v98 = 0;
  v100 = 0LL;
  v107 = 0LL;
  v96 = 0;
  v101 = PopFxSystemLatencyHint;
  v113 = a4;
  v109 = a3;
  v103 = a1;
  v90 = 0;
  LOBYTE(v94) = 0;
  v104 = PpmPlatformStates;
  v12 = v8 + 224;
  *a2 = PpmIdleEvaluateConstraints(a1, a3);
  *(_QWORD *)(v8 + 224) = 1310721LL;
  memset((void *)(v8 + 232), 0, 0xA0uLL);
  v13 = *a3;
  v14 = *(_QWORD *)(v10 + 23808);
  if ( *(_BYTE *)(v10 + 33) || !KiSerializeTimerExpiration )
  {
    v15 = 0;
    LODWORD(v16) = 0;
  }
  else
  {
    v15 = 0;
    LODWORD(v16) = 0;
    _m_prefetchw(&PpmPlatformIdleHint);
    v17 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v18 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v17 ^ (unsigned __int16)(v17 ^ (v17 - 1)), v17);
        if ( v17 == v18 )
          break;
        v17 = v18;
        _mm_pause();
        if ( !(_WORD)v18 )
          goto LABEL_9;
      }
      v16 = v17 >> 16;
    }
  }
LABEL_9:
  PpmEstimateIdleDuration(v10, 0, v13, v16, (__int64)&v112, (__int64)&v110, (__int64)v108, (__int64)&v105);
  v19 = -1;
  *(_WORD *)(v14 + 36) |= v105;
  *(_QWORD *)(v14 + 504) = v110;
  *(_BYTE *)(v14 + 525) = v108[0];
  *(_QWORD *)(v14 + 496) = v112;
  v20 = *(__int64 (__fastcall **)(_QWORD, __int64))(v8 + 416);
  if ( v20 )
    v19 = v20(*(_QWORD *)(v8 + 472), v8 + 480);
  if ( *(_BYTE *)(v10 + 23869) )
    v19 = 0;
  v102 = v19;
  if ( !v7 )
  {
    LODWORD(v7) = v92;
    goto LABEL_73;
  }
  *(_QWORD *)(v8 + 560) = 1310721LL;
  memset((void *)(v8 + 568), 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v21 = KeNodeBlock;
    v22 = (unsigned __int16)KeNumberNodes;
    do
    {
      v23 = *(_WORD *)(*v21 + 144);
      v24 = *(_QWORD *)(*v21 + 64);
      if ( *(_WORD *)(v8 + 560) <= v23 )
        *(_WORD *)(v8 + 560) = v23 + 1;
      ++v21;
      *(_QWORD *)(v8 + 8LL * v23 + 568) |= v24;
      --v22;
    }
    while ( v22 );
  }
  v25 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v10 + 36)];
  v26 = v25 & 0x3F;
  v27 = v25 >> 6;
  if ( *(unsigned __int16 *)(v8 + 560) <= (unsigned int)v27 )
    *(_WORD *)(v8 + 560) = v27 + 1;
  *(_QWORD *)(8 * v27 + v8 + 568) |= 1LL << v26;
  v28 = *(_DWORD **)(v8 + 736);
  v115 = *(_QWORD *)(v7 + 48);
  v29 = *(_DWORD *)v7;
  v97 = v28;
  memset(v28, 0, 4 * v29 + 8);
  LODWORD(v7) = v92;
  if ( !*(_DWORD *)(v8 + 760) )
  {
LABEL_51:
    *(_DWORD *)(v8 + 780) = 0;
    *v28 = -1;
    PpmUnlockProcessors(v12, v12);
    v10 = v103;
LABEL_73:
    v69 = *(_DWORD *)(v8 + 28);
    v67 = 0;
    v91 = 0;
    v70 = 1;
    v99 = *(_DWORD **)(v8 + 728);
    memset(v99, 0, 4 * v69 + 8);
    v49 = 0LL;
    v68 = 0;
    if ( !*(_DWORD *)(v8 + 744) )
    {
      v48 = v97;
      v47 = -1;
      v66 = v99;
      goto LABEL_113;
    }
    v71 = 1;
    while ( 1 )
    {
      v72 = *(_QWORD *)(v8 + 752);
      v73 = v68;
      LODWORD(v7) = *(_DWORD *)(v72 + 24LL * v68 + 4);
      v74 = v72 + 24LL * v68;
      v92 = v7;
      if ( !v104
        && (_DWORD)v7 == *(_DWORD *)(v8 + 28) - 1
        && *(_BYTE *)(v8 + 524)
        && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v10) )
      {
        v75 = 1;
        if ( !v91 )
          v70 = v71;
      }
      else
      {
        v76 = v70;
        if ( v91 == 1 )
          v76 = v71;
        v70 = v76;
        v75 = 0;
      }
      v91 = v75;
      if ( v70 )
      {
        v70 = 0;
        PpmEstimateIdleDuration(v10, v75, *v109, 0, (__int64)&v100, (__int64)&v107, (__int64)&v96, (__int64)&v98);
        v49 = 0LL;
      }
      if ( (_DWORD)v7 )
      {
        v77 = PpmIdleCheckProcessorStateEligibility(v10, v102, v101, v100, v7, 0);
        if ( !v77 )
          v77 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v8 + 424))(
                  *(_QWORD *)(v8 + 472),
                  (unsigned int)v7,
                  0xFFFFFFFFLL);
        v49 = 0LL;
      }
      else
      {
        v77 = v49;
      }
      if ( v77 )
      {
        if ( (v77 & 0x80000000) != 0 )
        {
          if ( (unsigned int)v77 > 0x8000000B )
            goto LABEL_99;
          v79 = (unsigned int)(v77 - 2147483646);
        }
        else
        {
          v80 = v49;
          LOBYTE(v80) = (v77 & 0x100000000LL) != 0;
          v79 = (unsigned int)(v80 + 1);
        }
      }
      else
      {
        v79 = (unsigned int)v49;
      }
      v78 = v114 + 984LL * *(unsigned int *)(v74 + 4);
      ++*(_QWORD *)(v78 + 8 * v79 + 80);
LABEL_99:
      if ( !v77 )
      {
        v7 = *(unsigned int *)(v74 + 4);
        v66 = v99;
        *v99 = v7;
        v92 = v7;
        if ( !*(_BYTE *)(248 * v7 + v8 + 1042) || v104 && (!*(_BYTE *)(248 * v7 + v8 + 1045) || (_DWORD)v7) )
          v83 = 1;
        else
          v83 = v49;
        v47 = -1;
        v67 = v91;
        v48 = v97;
        *v106 = v83;
        goto LABEL_113;
      }
      v81 = v94;
      v71 = 1;
      if ( v77 == 2147483651LL )
        v81 = 1;
      ++v68;
      LOBYTE(v94) = v81;
      v82 = v99;
      v99[v73 + 2] = v77;
      if ( v68 >= *(_DWORD *)(v8 + 744) )
      {
        v67 = v91;
        v47 = -1;
        v48 = v97;
        v66 = v82;
        v68 = v95;
        goto LABEL_113;
      }
    }
  }
  while ( 1 )
  {
    v30 = *(_QWORD *)(v8 + 768) + 24LL * v15;
    if ( *(_BYTE *)(v30 + 1) )
      break;
    v31 = v93;
    v28[v93 + 2] = -2;
    v93 = v31 + 1;
LABEL_49:
    if ( ++v15 >= *(_DWORD *)(v8 + 760) )
    {
      v12 = v8 + 224;
      goto LABEL_51;
    }
  }
  v32 = *(unsigned int *)(v30 + 4);
  v33 = v103;
  if ( PpmDripsStateIndex == -1
    || (unsigned int)v32 < PpmDripsStateIndex
    || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v103) )
  {
    v35 = v11;
    if ( v90 == 1 )
      v35 = 1;
    v11 = v35;
    v34 = 0;
  }
  else
  {
    v34 = 1;
    if ( !v90 )
      v11 = 1;
  }
  v90 = v34;
  if ( v11 )
  {
    v11 = 0;
    PpmEstimateIdleDuration(v33, v34, *v109, 0, (__int64)&v100, (__int64)&v107, (__int64)&v96, (__int64)&v98);
  }
  v36 = v100;
  v37 = v101;
  v38 = v102;
  *(_DWORD *)(v8 + 780) = 0;
  v92 = -1;
  v39 = PpmIdleCheckCoordinatedStateEligibility(v33, v38, v37, v36, v32, v32, (__int64)&v92, v8 + 776);
  v40 = v104;
  v41 = v39;
  LODWORD(v7) = v92;
  if ( !*(_BYTE *)(v104 + 12) )
  {
    if ( v39 )
      goto LABEL_40;
    v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v104 + 16))(*(_QWORD *)(v8 + 472), v92, (unsigned int)v32);
    v40 = v104;
    v41 = v42;
  }
  if ( !v41 )
  {
    v43 = 0;
    goto LABEL_44;
  }
LABEL_40:
  if ( (v41 & 0x80000000) != 0 )
  {
    if ( (unsigned int)v41 > 0x8000000B )
      goto LABEL_45;
    v43 = v41 - 2147483646;
  }
  else
  {
    v43 = ((v41 & 0x100000000LL) != 0) + 1;
  }
LABEL_44:
  ++*(_QWORD *)(v115 + 992 * v32 + 8LL * v43 + 72);
LABEL_45:
  if ( v41 )
  {
    v44 = (unsigned __int8)v94;
    if ( v41 == 2147483651LL )
      v44 = 1;
    v94 = v44;
    PpmIdleRollbackCoordinatedSelection(v8 + 776, 0LL);
    v45 = v93;
    v46 = v97;
    v97[v93 + 2] = v41;
    v93 = v45 + 1;
    v28 = v46;
    goto LABEL_49;
  }
  v47 = -1;
  v48 = v97;
  v124 = 20;
  *v106 = 1;
  *v48 = v32;
  if ( *(_BYTE *)(384 * v32 + v40 + 113) )
    v47 = v32;
  LODWORD(v49) = 0;
  v50 = (unsigned __int16 *)(v40 + 384 * v32 + 120);
  v51 = v8 + 224;
  v52 = *(_WORD *)(v8 + 224);
  v53 = 0;
  v123 = v52;
  v54 = 0;
  v55 = *v50;
  if ( v52 < *v50 )
    v55 = v52;
  if ( v55 )
  {
    v56 = (char *)v50 - v51;
    v54 = v55;
    v57 = v55;
    v58 = v8 + 232;
    do
    {
      v59 = *(_QWORD *)&v56[v58];
      v58 += 8LL;
      v60 = *(_QWORD *)(v58 - 8) & ~v59;
      *(_QWORD *)((char *)&v123 + v58 - v51 - 8) = v60;
      if ( v60 )
        v53 = 1;
      --v57;
    }
    while ( v57 );
    LODWORD(v49) = 0;
  }
  if ( v54 < v52 )
  {
    v61 = v52 - v54;
    v62 = v61;
    v63 = &v126[v54];
    v54 += v61;
    do
    {
      v64 = *(_QWORD *)((char *)v63 + v51 - (_QWORD)v126 + 8);
      *v63++ = v64;
      if ( v64 )
        v53 = 1;
      --v62;
    }
    while ( v62 );
  }
  for ( i = 0; v54 < v124; v126[v65] = 0LL )
    v65 = v54++;
  if ( v53 )
  {
    PpmUnlockProcessors(v8 + 224, &v123);
    v66 = v99;
    LODWORD(v49) = 0;
  }
  else
  {
    v66 = v99;
  }
  v67 = v90;
  v68 = (unsigned int)v99;
LABEL_113:
  if ( *v106 )
  {
    v84 = v103;
    v85 = (signed __int32 *)(v103 + 23872);
    _m_prefetchw((const void *)(v103 + 23872));
    v86 = *v85;
    do
    {
      v87 = v86;
      v86 = _InterlockedCompareExchange((volatile signed __int32 *)(v84 + 23872), v86 & 0xFFFFFF | 0x1000000, v86);
    }
    while ( v86 != v87 );
    LODWORD(v7) = v92;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    if ( v48 )
    {
      v88 = v93;
      v48[1] = v93;
      v117 = v48;
      v119 = v49;
      v118 = 4 * v88 + 8;
      EtwTraceKernelEvent((int)&v117, 1, 0x40200000u, 0x123Eu, 1538);
    }
    if ( v66 )
    {
      v66[1] = v68;
      v121 = 4 * v68 + 8;
      v120 = v66;
      v122 = 0;
      EtwTraceKernelEvent((int)&v120, 1, 0x40200000u, 0x123Du, 1538);
    }
  }
  *(_WORD *)(v8 + 36) |= v98;
  *(_BYTE *)(v8 + 6) = v94;
  *(_QWORD *)(v8 + 504) = v107;
  *(_QWORD *)(v8 + 496) = v100;
  *(_BYTE *)(v8 + 525) = v96;
  *v116 = v7;
  *v111 = v47;
  result = v113;
  *v113 = v67;
  return result;
}
