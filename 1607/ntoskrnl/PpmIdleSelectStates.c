/*
 * XREFs of PpmIdleSelectStates @ 0x14013BBF0
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PoCopyDeepIdleMask @ 0x14007DA50 (PoCopyDeepIdleMask.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x14013BF08 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmComputeIdleDurationHint @ 0x14013BF1C (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x14013BFC0 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x14013C1BC (PpmIdleEvaluateConstraints.c)
 *     KeSubtractAffinityEx @ 0x1401447FC (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1401FF5FC (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1401FFF40 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140200128 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402006D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1402007C8 (PpmIdleSetSynchronizationState.c)
 *     PpmUnlockProcessors @ 0x140201324 (PpmUnlockProcessors.c)
 */

char *__fastcall PpmIdleSelectStates(__int64 a1, _QWORD *a2, _QWORD *a3, char *a4, _DWORD *a5, int *a6, char *a7)
{
  __int64 v8; // r13
  __int64 v9; // rdi
  char v10; // r15
  __int64 (__fastcall *v11)(_QWORD, __int64); // rax
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // r13d
  _DWORD *v15; // r12
  char v16; // r15
  int v17; // eax
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r8
  int v22; // r10d
  unsigned int v23; // r14d
  __int64 v24; // r12
  int v25; // ecx
  char v26; // al
  char v27; // al
  int v28; // edx
  __int64 v29; // r10
  __int64 v30; // r10
  unsigned int v31; // esi
  char v32; // al
  _DWORD *v33; // r14
  char *result; // rax
  __int64 v35; // r14
  _DWORD *v36; // rsi
  int v37; // eax
  __int64 v38; // rdx
  int v39; // r8d
  unsigned int v40; // r13d
  char v41; // r9
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rsi
  int v45; // ebx
  char v46; // al
  char v47; // al
  int v48; // r9d
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r10
  int v53; // eax
  int v54; // eax
  char v55; // al
  int v56; // eax
  char v57; // [rsp+40h] [rbp-C0h]
  char v58; // [rsp+41h] [rbp-BFh]
  unsigned int v59; // [rsp+44h] [rbp-BCh] BYREF
  int v60; // [rsp+48h] [rbp-B8h]
  int v61; // [rsp+4Ch] [rbp-B4h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD *v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+70h] [rbp-90h]
  int v67; // [rsp+74h] [rbp-8Ch]
  _DWORD *v68; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h]
  _QWORD *v71; // [rsp+90h] [rbp-70h]
  char *v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  _DWORD *v76; // [rsp+B8h] [rbp-48h]
  int *v77; // [rsp+C0h] [rbp-40h]
  char *v78; // [rsp+C8h] [rbp-38h]
  _DWORD *v79; // [rsp+D0h] [rbp-30h] BYREF
  int v80; // [rsp+D8h] [rbp-28h]
  int v81; // [rsp+DCh] [rbp-24h]
  _DWORD *v82; // [rsp+E0h] [rbp-20h] BYREF
  int v83; // [rsp+E8h] [rbp-18h]
  int v84; // [rsp+ECh] [rbp-14h]
  _BYTE v85[176]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = PpmPlatformStates;
  v76 = a5;
  v9 = *(_QWORD *)(a1 + 23808);
  v77 = a6;
  v62 = a1;
  v72 = a7;
  v75 = *(_QWORD *)(a1 + 23816);
  v10 = 1;
  v57 = 0;
  LOBYTE(v61) = 0;
  v58 = 0;
  v59 = 0;
  v65 = 0LL;
  v60 = 0;
  v68 = 0LL;
  v63 = 0;
  v69 = 0LL;
  v73 = 0LL;
  v64 = 0;
  v66 = PopFxSystemLatencyHint;
  v78 = a4;
  v71 = a3;
  v70 = PpmPlatformStates;
  *a2 = PpmIdleEvaluateConstraints(a1, a3);
  *(_QWORD *)(v9 + 224) = 1310721LL;
  memset((void *)(v9 + 232), 0, 0xA0uLL);
  PpmComputeIdleDurationHint(a1, 0LL, *v71);
  v11 = *(__int64 (__fastcall **)(_QWORD, __int64))(v9 + 416);
  v12 = -1;
  if ( v11 )
    v12 = v11(*(_QWORD *)(v9 + 472), v9 + 480);
  if ( *(_BYTE *)(a1 + 23869) )
    v12 = 0;
  v67 = v12;
  if ( v8 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v9 + 560));
    KeAddProcessorAffinityEx((_WORD *)(v9 + 560), *(_DWORD *)(a1 + 36));
    v35 = v9 + 776;
    v36 = *(_DWORD **)(v9 + 736);
    v74 = *(_QWORD *)(v8 + 48);
    v37 = *(_DWORD *)v8;
    v65 = v36;
    memset(v36, 0, 4 * v37 + 8);
    LODWORD(v13) = v59;
    v39 = 0;
    v40 = 0;
    if ( *(_DWORD *)(v9 + 760) )
    {
      v41 = 1;
      do
      {
        v42 = *(_QWORD *)(v9 + 768);
        if ( *(_BYTE *)(v42 + 24LL * v40 + 1) )
        {
          v44 = *(unsigned int *)(v42 + 24LL * v40 + 4);
          v45 = v62;
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v44 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v62, v38, 0LL, 1LL) )
          {
            v47 = v10;
            if ( v57 == v41 )
              v47 = v41;
            v10 = v47;
            v46 = v39;
          }
          else
          {
            v46 = v41;
            if ( v57 == (_BYTE)v39 )
              v10 = v41;
          }
          v57 = v46;
          if ( v10 )
          {
            v10 = v39;
            LOBYTE(v38) = v46;
            PpmEstimateIdleDuration(v45, v38, *v71, 0, (__int64)&v69, (__int64)&v73, (__int64)&v64, (__int64)&v63);
            v39 = 0;
          }
          v48 = v69;
          v49 = v67;
          v59 = -1;
          *(_DWORD *)(v35 + 4) = v39;
          v50 = PpmIdleCheckCoordinatedStateEligibility(v45, v49, v66, v48, v44, v44, (__int64)&v59, v35);
          v51 = v50;
          LODWORD(v13) = v59;
          if ( !*(_BYTE *)(v70 + 12) && !v50 )
            v51 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v70 + 16))(
                    *(_QWORD *)(v9 + 472),
                    v59,
                    (unsigned int)v44);
          PpmIdleUpdateSelectionStatistics(v51, 1000 * v44 + v74 + 72);
          if ( !v51 )
          {
            v33 = v65;
            v14 = -1;
            *v72 = 1;
            *v33 = v44;
            if ( *(_BYTE *)(384 * v44 + v52 + 113) )
              v14 = v44;
            if ( (unsigned int)KeSubtractAffinityEx(v9 + 224, v52 + 120 + 384 * v44, v85) )
            {
              PpmUnlockProcessors(v9 + 224, v85, 0LL);
              v15 = v68;
              v31 = (unsigned int)v68;
            }
            else
            {
              v15 = 0LL;
              v31 = 0;
            }
            v22 = 1;
            goto LABEL_23;
          }
          if ( v51 == 2147483651LL )
          {
            v58 = 1;
          }
          else
          {
            v53 = (unsigned __int8)v61;
            if ( v51 == 2147483656LL )
              v53 = 1;
            v61 = v53;
          }
          PpmIdleRollbackCoordinatedSelection(v9 + 776, 0LL);
          v54 = v60;
          v41 = 1;
          v36 = v65;
          v65[v60 + 2] = v51;
          v60 = v54 + 1;
          v35 = v9 + 776;
          v39 = 0;
        }
        else
        {
          v43 = v60;
          v36[v60 + 2] = -2;
          v60 = v43 + 1;
        }
        ++v40;
      }
      while ( v40 < *(_DWORD *)(v9 + 760) );
    }
    v14 = -1;
    *(_DWORD *)(v35 + 4) = 0;
    *v36 = -1;
    PpmUnlockProcessors(v9 + 224, v9 + 224, 0LL);
  }
  else
  {
    LODWORD(v13) = v59;
    v14 = -1;
  }
  v16 = 0;
  v17 = *(_DWORD *)(v9 + 28);
  v57 = 0;
  v18 = 1;
  v68 = *(_DWORD **)(v9 + 728);
  v15 = v68;
  memset(v68, 0, 4 * v17 + 8);
  v21 = 0LL;
  v22 = 1;
  v23 = 0;
  if ( *(_DWORD *)(v9 + 744) )
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(v9 + 752);
      v25 = v62;
      LODWORD(v13) = *(_DWORD *)(v24 + 24LL * v23 + 4);
      if ( !v70
        && (_DWORD)v13 == *(_DWORD *)(v9 + 28) - 1
        && *(_BYTE *)(v9 + 524)
        && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v62, v19, 0LL, v20) )
      {
        v27 = v22;
        if ( v57 == (_BYTE)v21 )
          v18 = v22;
      }
      else
      {
        v26 = v18;
        if ( v57 == (_BYTE)v22 )
          v26 = v22;
        v18 = v26;
        v27 = v21;
      }
      v57 = v27;
      if ( v18 )
      {
        v18 = v21;
        v28 = (int)v71;
        LOBYTE(v28) = v27;
        PpmEstimateIdleDuration(v25, v28, *v71, 0, (__int64)&v69, (__int64)&v73, (__int64)&v64, (__int64)&v63);
        v21 = 0LL;
      }
      if ( (_DWORD)v13 )
      {
        v29 = PpmIdleCheckProcessorStateEligibility(v62, v67, v66, v69, v13, v21);
        if ( !v29 )
          v29 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v9 + 424))(
                  *(_QWORD *)(v9 + 472),
                  (unsigned int)v13,
                  0xFFFFFFFFLL);
      }
      else
      {
        v29 = v21;
      }
      PpmIdleUpdateSelectionStatistics(v29, 992LL * *(unsigned int *)(v24 + 24LL * v23 + 4) + v75 + 80);
      v21 = 0LL;
      if ( !v30 )
        break;
      if ( v30 == 2147483651LL )
      {
        v58 = 1;
      }
      else
      {
        v55 = v61;
        v19 = 1LL;
        if ( v30 == 2147483656LL )
          v55 = 1;
        LOBYTE(v61) = v55;
      }
      v15 = v68;
      v68[v23 + 2] = v30;
      v22 = 1;
      if ( ++v23 >= *(_DWORD *)(v9 + 744) )
      {
        v33 = v65;
        v14 = -1;
        v31 = 0;
        goto LABEL_23;
      }
    }
    v13 = *(unsigned int *)(v24 + 24LL * v23 + 4);
    v31 = v23;
    v15 = v68;
    *v68 = v13;
    if ( *(_BYTE *)(248 * v13 + v9 + 1042) && (!v70 || *(_BYTE *)(248 * v13 + v9 + 1045) && !(_DWORD)v13) )
    {
      v32 = 0;
      v22 = 1;
    }
    else
    {
      v22 = 1;
      v32 = 1;
    }
    v14 = -1;
    v33 = v65;
    *v72 = v32;
LABEL_23:
    v16 = v57;
  }
  else
  {
    v33 = v65;
    v31 = 0;
  }
  if ( *v72 )
  {
    LOBYTE(v19) = 1;
    PpmIdleSetSynchronizationState(v62 + 23872, v19);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    if ( v33 )
    {
      v56 = v60;
      v33[1] = v60;
      v81 = 0;
      v79 = v33;
      v80 = 4 * v56 + 8;
      EtwTraceKernelEvent((int)&v79, v22, 0x40200000u, 4670, 1538);
    }
    if ( v15 )
    {
      v84 = 0;
      v83 = 4 * v31 + 8;
      v15[1] = v31;
      v82 = v15;
      EtwTraceKernelEvent((int)&v82, 1, 0x40200000u, 4669, 1538);
    }
  }
  *(_WORD *)(v9 + 36) |= v63;
  *(_BYTE *)(v9 + 7) = v61;
  *(_BYTE *)(v9 + 6) = v58;
  *(_QWORD *)(v9 + 504) = v73;
  *(_QWORD *)(v9 + 496) = v69;
  *(_BYTE *)(v9 + 525) = v64;
  *v76 = v13;
  *v77 = v14;
  result = v78;
  *v78 = v16;
  return result;
}
