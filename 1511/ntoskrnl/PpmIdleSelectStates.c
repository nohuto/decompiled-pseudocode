/*
 * XREFs of PpmIdleSelectStates @ 0x140134970
 * Callers:
 *     PoIdle @ 0x140046FE0 (PoIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x140077490 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400938C0 (PoCopyDeepIdleMask.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x140134C68 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmComputeIdleDurationHint @ 0x140134C7C (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x140134D20 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x140134F1C (PpmIdleEvaluateConstraints.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1401E6E34 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401E755C (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1401E7744 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1401E7CF0 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1401E7DE4 (PpmIdleSetSynchronizationState.c)
 *     PpmUnlockProcessors @ 0x1401E8AD0 (PpmUnlockProcessors.c)
 */

unsigned __int8 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int8 *a4,
        _DWORD *a5,
        __int64 a6,
        char *a7)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // r14
  __int64 v9; // r12
  __int64 (__fastcall *v11)(_QWORD, __int64); // rax
  __int64 v12; // rdi
  _DWORD *v13; // r15
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r15
  char v19; // al
  __int64 v20; // r10
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // ecx
  char v24; // al
  __int64 v25; // rdx
  char *v26; // r13
  _DWORD *v27; // rcx
  unsigned __int8 *result; // rax
  __int64 v29; // r13
  int *v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // edx
  __int64 v35; // r13
  int v36; // edi
  char v37; // al
  int v38; // r9d
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  bool v42; // zf
  __int64 v43; // r10
  __int64 v44; // r10
  int v45; // eax
  int *v46; // rax
  int v47; // edx
  int *v48; // rax
  __int64 v49; // rcx
  int v50; // eax
  char v51; // al
  int *v52; // rax
  int v53; // ecx
  char v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+44h] [rbp-BCh]
  unsigned int v57; // [rsp+48h] [rbp-B8h] BYREF
  int v58; // [rsp+4Ch] [rbp-B4h]
  int v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+54h] [rbp-ACh]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch] BYREF
  int *v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+70h] [rbp-90h]
  _DWORD *v66; // [rsp+78h] [rbp-88h]
  int i; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+88h] [rbp-78h] BYREF
  int v69; // [rsp+90h] [rbp-70h]
  char *v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+A8h] [rbp-58h]
  _QWORD *v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  _DWORD *v75; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v76; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  __int64 v79; // [rsp+E0h] [rbp-20h]
  int *v80; // [rsp+E8h] [rbp-18h] BYREF
  int v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F4h] [rbp-Ch]
  _DWORD *v83; // [rsp+F8h] [rbp-8h] BYREF
  int v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+104h] [rbp+4h]
  _BYTE v86[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = *(_QWORD *)(a1 + 23808);
  v8 = 0;
  v9 = PpmPlatformStates;
  v75 = a5;
  v78 = a6;
  v70 = a7;
  v77 = *(_QWORD *)(a1 + 23816);
  v57 = 0;
  v64 = 0LL;
  v59 = 0;
  v66 = 0LL;
  v56 = 0;
  v62 = 0;
  v68 = 0LL;
  v71 = 0LL;
  v63 = 0;
  v65 = PopFxSystemLatencyHint;
  v76 = a4;
  v73 = a3;
  v61 = a1;
  v54 = 1;
  LOBYTE(v58) = 0;
  v69 = -1;
  *a2 = PpmIdleEvaluateConstraints(a1, a3);
  *(_QWORD *)(v7 + 224) = 1310721LL;
  memset((void *)(v7 + 232), 0, 0xA0uLL);
  PpmComputeIdleDurationHint(a1, 0LL, *v73);
  v11 = *(__int64 (__fastcall **)(_QWORD, __int64))(v7 + 416);
  v60 = -1;
  if ( v11 )
    v60 = v11(*(_QWORD *)(v7 + 472), v7 + 480);
  if ( *(_BYTE *)(a1 + 23869) )
    v60 = 0;
  if ( v9 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v7 + 560));
    KeAddProcessorAffinityEx((_WORD *)(v7 + 560), *(_DWORD *)(a1 + 36));
    v29 = v7 + 776;
    v30 = *(int **)(v7 + 736);
    v79 = *(_QWORD *)(v9 + 48);
    v31 = *(_DWORD *)v9;
    v64 = v30;
    memset(v30, 0, 4 * v31 + 8);
    LODWORD(v12) = v57;
    v32 = 0LL;
    for ( i = 0; (unsigned int)v32 < *(_DWORD *)(v7 + 760); i = v32 )
    {
      v33 = *(_QWORD *)(v7 + 768) + 24 * v32;
      if ( *(_BYTE *)(v33 + 1) )
      {
        v35 = *(unsigned int *)(v33 + 4);
        v36 = v61;
        v72 = *(_DWORD *)(v33 + 4);
        if ( PpmDripsStateIndex == -1
          || (unsigned int)v35 < PpmDripsStateIndex
          || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v61) )
        {
          v37 = v54;
          if ( v8 == 1 )
            v37 = 1;
          v8 = 0;
        }
        else
        {
          v37 = v54;
          if ( !v8 )
            v37 = 1;
          v8 = 1;
        }
        v54 = v37;
        if ( v37 )
        {
          v54 = 0;
          PpmEstimateIdleDuration(v36, v8, *v73, 0, (__int64)&v68, (__int64)&v71, (__int64)&v63, (__int64)&v62);
        }
        v38 = v68;
        v39 = v65;
        v40 = v60;
        *(_DWORD *)(v7 + 780) = 0;
        v57 = -1;
        v41 = PpmIdleCheckCoordinatedStateEligibility(v36, v40, v39, v38, v35, v35, (__int64)&v57, v7 + 776);
        v42 = *(_BYTE *)(v9 + 12) == 0;
        v43 = v41;
        LODWORD(v12) = v57;
        v74 = v41;
        if ( v42 && !v41 )
        {
          v43 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v9 + 16))(
                  *(_QWORD *)(v7 + 472),
                  v57,
                  (unsigned int)v35);
          v74 = v43;
        }
        PpmIdleUpdateSelectionStatistics(v43, 1000 * v35 + v79 + 72);
        if ( !v44 )
        {
          v47 = v72;
          v48 = v64;
          v26 = v70;
          v49 = 384LL * v72;
          *v70 = 1;
          *v48 = v47;
          v50 = -1;
          if ( *(_BYTE *)(v49 + v9 + 113) )
            v50 = v47;
          v69 = v50;
          if ( (unsigned int)KeSubtractAffinityEx((unsigned __int16 *)(v7 + 224), (char *)(v49 + v9 + 120), v86) )
            PpmUnlockProcessors(v7 + 224, v86);
          v13 = v66;
          v23 = (int)v66;
LABEL_71:
          v25 = 1LL;
          goto LABEL_23;
        }
        v29 = v7 + 776;
        v45 = (unsigned __int8)v58;
        if ( v44 == 2147483651LL )
          v45 = 1;
        v58 = v45;
        PpmIdleRollbackCoordinatedSelection(v7 + 776, 0LL);
        v34 = v59;
        v64[v59 + 2] = v74;
      }
      else
      {
        v34 = v59;
        v64[v59 + 2] = -2;
      }
      v32 = (unsigned int)(i + 1);
      v59 = v34 + 1;
    }
    v46 = v64;
    *(_DWORD *)(v29 + 4) = 0;
    *v46 = -1;
    PpmUnlockProcessors(v7 + 224, v7 + 224);
  }
  else
  {
    LODWORD(v12) = v57;
  }
  v14 = *(_DWORD *)(v7 + 28);
  v8 = 0;
  v55 = 1;
  v66 = *(_DWORD **)(v7 + 728);
  v13 = v66;
  memset(v66, 0, 4 * v14 + 8);
  v15 = 0LL;
  if ( !*(_DWORD *)(v7 + 744) )
  {
    v26 = v70;
    v23 = 0;
    goto LABEL_71;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v7 + 752);
    v17 = v61;
    LODWORD(v12) = *(_DWORD *)(v16 + 24 * v15 + 4);
    v18 = v16 + 24 * v15;
    if ( !v9
      && (_DWORD)v12 == *(_DWORD *)(v7 + 28) - 1
      && *(_BYTE *)(v7 + 524)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v61) )
    {
      v19 = v55;
      if ( !v8 )
        v19 = 1;
      v8 = 1;
      v55 = v19;
    }
    else
    {
      if ( v8 == 1 )
      {
        v19 = 1;
        v55 = 1;
      }
      else
      {
        v19 = v55;
      }
      v8 = 0;
    }
    if ( v19 )
    {
      v55 = 0;
      PpmEstimateIdleDuration(v17, v8, *v73, 0, (__int64)&v68, (__int64)&v71, (__int64)&v63, (__int64)&v62);
    }
    if ( (_DWORD)v12 )
    {
      v20 = PpmIdleCheckProcessorStateEligibility(v61, v60, v65, v68, v12, 0);
      if ( !v20 )
        v20 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v7 + 424))(
                *(_QWORD *)(v7 + 472),
                (unsigned int)v12,
                0xFFFFFFFFLL);
    }
    else
    {
      v20 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v20, 992LL * *(unsigned int *)(v18 + 4) + v77 + 80);
    if ( !v21 )
      break;
    v13 = v66;
    v51 = v58;
    v25 = 1LL;
    if ( v21 == 2147483651LL )
      v51 = 1;
    v15 = (unsigned int)(v15 + 1);
    LOBYTE(v58) = v51;
    v66[v22 + 2] = v21;
    if ( (unsigned int)v15 >= *(_DWORD *)(v7 + 744) )
    {
      v26 = v70;
      v23 = 0;
      goto LABEL_23;
    }
  }
  v12 = *(unsigned int *)(v18 + 4);
  v23 = v15;
  v13 = v66;
  *v66 = v12;
  v56 = v15;
  if ( *(_BYTE *)(248 * v12 + v7 + 1042) && (!v9 || *(_BYTE *)(248 * v12 + v7 + 1045) && !(_DWORD)v12) )
  {
    v24 = 0;
    v25 = 1LL;
  }
  else
  {
    v25 = 1LL;
    v24 = 1;
  }
  v26 = v70;
  *v70 = v24;
LABEL_23:
  if ( *v26 )
  {
    LOBYTE(v25) = 1;
    PpmIdleSetSynchronizationState(v61 + 23872, v25);
    v23 = v56;
    LODWORD(v25) = 1;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v52 = v64;
    if ( v64 )
    {
      v53 = v59;
      v64[1] = v59;
      v80 = v52;
      v82 = 0;
      v81 = 4 * v53 + 8;
      EtwTraceKernelEvent((int)&v80, v25, 0x40200000u, 0x123Eu, 1538);
      v23 = v56;
      LODWORD(v25) = 1;
    }
    if ( v13 )
    {
      v13[1] = v23;
      v84 = 4 * v23 + 8;
      v83 = v13;
      v85 = 0;
      EtwTraceKernelEvent((int)&v83, v25, 0x40200000u, 0x123Du, 1538);
    }
  }
  *(_WORD *)(v7 + 36) |= v62;
  v27 = (_DWORD *)v78;
  *(_BYTE *)(v7 + 6) = v58;
  *(_QWORD *)(v7 + 504) = v71;
  *(_QWORD *)(v7 + 496) = v68;
  *(_BYTE *)(v7 + 525) = v63;
  *v75 = v12;
  *v27 = v69;
  result = v76;
  *v76 = v8;
  return result;
}
