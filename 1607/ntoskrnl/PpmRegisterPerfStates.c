/*
 * XREFs of PpmRegisterPerfStates @ 0x140569AC8
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x140569A30 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406765A0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14000BE38 (KeFindFirstSetRightGroupAffinity.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     PpmInstallFeedbackCounters @ 0x140143BEC (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x1401443E0 (PpmParkApplyPolicy.c)
 *     PpmPerfCalculateMinMaxStates @ 0x14014471C (PpmPerfCalculateMinMaxStates.c)
 *     KeIsEqualAffinityEx @ 0x140144778 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401448E4 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140208FD4 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpmCheckApplyPerfConstraints @ 0x140544D3C (PpmCheckApplyPerfConstraints.c)
 *     PpmUpdateProcessorPolicy @ 0x140545A2C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x14056A464 (PpmAllocatePerfCheck.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmRegisterPerfStates(_DWORD *a1, char a2)
{
  unsigned int v2; // r12d
  int v4; // eax
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  int v7; // r13d
  _BYTE *v8; // rdi
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _BYTE *PoolWithTag; // rax
  int v17; // ebx
  __int64 v18; // rax
  char *v19; // r14
  __int64 v20; // r15
  char *v21; // r14
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 *v24; // r10
  __int64 v25; // r11
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  int v31; // eax
  unsigned int v32; // r14d
  char *v33; // rsi
  char *v34; // rdx
  unsigned int v35; // r15d
  char *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rcx
  char *v40; // rdx
  char **v41; // rax
  __int64 (__fastcall *v42)(_QWORD); // rcx
  _QWORD *v43; // rax
  __int64 v44; // r8
  _BYTE *v45; // r9
  __int64 v46; // rdx
  signed __int32 v48[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v49; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v51; // [rsp+38h] [rbp-D0h]
  int v52; // [rsp+3Ch] [rbp-CCh]
  int v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+44h] [rbp-C4h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  char *v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h]
  _DWORD *v58; // [rsp+60h] [rbp-A8h]
  _QWORD v59[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v60[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v61[44]; // [rsp+88h] [rbp-80h] BYREF
  char v62[176]; // [rsp+138h] [rbp+30h] BYREF

  v2 = a1[3];
  v4 = a1[4];
  v5 = a1;
  v6 = a1[8];
  v7 = 0;
  v58 = a1;
  LODWORD(v55) = v2;
  v54 = v4;
  v8 = 0LL;
  v61[0] = 1310721;
  memset(&v61[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v62);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = -1;
  v50 = -1LL;
  v10 = 0;
  if ( v6 )
  {
    v11 = *((_QWORD *)v5 + 49);
    do
    {
      v12 = *(unsigned int *)(v11 + 24LL * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v50 + v12) == -1 )
        *((_DWORD *)&v50 + v12) = v10;
      ++v10;
    }
    while ( v10 < v6 );
    v9 = v50;
  }
  if ( v9 == -1 && HIDWORD(v50) == -1 )
  {
LABEL_18:
    v17 = -1073741811;
    goto LABEL_38;
  }
  v13 = &v50;
  v14 = 2LL;
  do
  {
    if ( *(_DWORD *)v13 != -1 )
      ++v7;
    v13 = (__int64 *)((char *)v13 + 4);
    --v14;
  }
  while ( v14 );
  v52 = v7;
  v15 = (96 * v2 + 415) & 0xFFFFFFF8;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 48 * v2 * v7, 0x704D5050u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v17 = -1073741670;
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, v15 + 48 * v2 * v7);
  v18 = v15;
  v19 = v8 + 408;
  v17 = 0;
  v51 = 0;
  v56 = &v8[v18];
  if ( !v2 )
  {
LABEL_35:
    if ( (unsigned int)KeIsEmptyAffinityEx(v61) )
    {
      v8[199] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v60, v61);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v60);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v8 + 2) = Prcb;
      v8[196] = *(_BYTE *)(Prcb + 23858);
    }
    KeCopyAffinityEx((__int64)(v8 + 24), (unsigned __int16 *)v61);
    *((_QWORD *)v8 + 26) = *((_QWORD *)v5 + 30);
    *((_QWORD *)v8 + 28) = *((_QWORD *)v5 + 32);
    *((_QWORD *)v8 + 29) = *((_QWORD *)v5 + 33);
    *((_QWORD *)v8 + 30) = *((_QWORD *)v5 + 34);
    *((_QWORD *)v8 + 31) = *((_QWORD *)v5 + 35);
    *((_QWORD *)v8 + 32) = *((_QWORD *)v5 + 36);
    *((_QWORD *)v8 + 27) = *((_QWORD *)v5 + 31);
    *((_QWORD *)v8 + 25) = v19;
    *((LARGE_INTEGER *)v8 + 49) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)v8 + 75) = v54;
    *((_DWORD *)v8 + 48) = v2;
    *((_DWORD *)v8 + 76) = v5[5];
    *((_DWORD *)v8 + 77) = v5[6];
    *((_DWORD *)v8 + 78) = v5[7];
    v8[336] = *((_BYTE *)v5 + 4);
    *((_QWORD *)v8 + 35) = *((_QWORD *)v5 + 41);
    *((_QWORD *)v8 + 36) = *((_QWORD *)v5 + 42);
    *((_QWORD *)v8 + 33) = *((_QWORD *)v5 + 39);
    *((_QWORD *)v8 + 34) = *((_QWORD *)v5 + 40);
    v8[340] = *((_BYTE *)v5 + 40);
    *((_DWORD *)v8 + 86) = 100;
    v8[337] = *((_BYTE *)v5 + 6);
    v8[338] = *((_BYTE *)v5 + 7);
    v8[339] = *((_BYTE *)v5 + 8);
    *((_QWORD *)v8 + 40) = *((_QWORD *)v5 + 6);
    *((_QWORD *)v8 + 41) = *((_QWORD *)v5 + 7);
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)(unsigned int)v5[9] )
      PpmCheckMinimumPeriod = (unsigned int)v5[9];
    v31 = PpmAllowedActions;
    if ( *((_QWORD *)v8 + 29) )
    {
      v31 = PpmAllowedActions | 0x100;
      PpmAllowedActions |= 0x100u;
    }
    if ( *((_QWORD *)v8 + 28) )
    {
      v31 |= 0x80u;
      PpmAllowedActions = v31;
    }
    if ( *((_QWORD *)v8 + 27) )
    {
      v31 |= 0x800u;
      PpmAllowedActions = v31;
    }
    if ( *((_QWORD *)v8 + 30) )
    {
      v31 |= 0x40u;
      PpmAllowedActions = v31;
    }
    if ( *((_QWORD *)v8 + 32) )
    {
      v31 |= 0x200u;
      PpmAllowedActions = v31;
    }
    if ( *((_QWORD *)v8 + 31) )
      PpmAllowedActions = v31 | 0x400;
    _InterlockedOr(v48, 0);
    v32 = 0;
    if ( v2 )
    {
      v33 = v56;
      v34 = v8 + 408;
      v35 = 0;
      v36 = v8 + 408;
      do
      {
        if ( !v36[16] )
        {
          v37 = *(_QWORD *)v36;
          v38 = 2LL;
          *(_DWORD *)(v37 + 24232) = 0x10000;
          *(_QWORD *)(v37 + 24176) = v8;
          *(_QWORD *)(v37 + 24184) = &v34[96 * v32];
          v39 = &v50;
          v40 = &v33[48 * v35];
          v59[0] = 0LL;
          v59[1] = 0LL;
          v41 = (char **)v59;
          do
          {
            if ( *(_DWORD *)v39 != -1 )
            {
              *v41 = v40;
              v40 += 48;
            }
            v39 = (__int64 *)((char *)v39 + 4);
            ++v41;
            --v38;
          }
          while ( v38 );
          PpmInstallFeedbackCounters(v37, v59);
          v34 = v8 + 408;
        }
        ++v32;
        v35 += v7;
        v36 += 96;
      }
      while ( v32 < v2 );
      v5 = v58;
      v17 = 0;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *((_QWORD *)v5 + 8);
    v42 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v42 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v5 + 43);
      PpmPerfControlReadFeedback = v42;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *((_QWORD *)v5 + 44);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *((_QWORD *)v5 + 45);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v5 + 46);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 47);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 48);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 37);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 38);
    if ( v42 )
      PpmCheckPollForFeedback = 1;
    v43 = (_QWORD *)qword_1403AA350;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_1403AA350 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v8 = &PpmPerfDomainHead;
    *((_QWORD *)v8 + 1) = v43;
    *v43 = v8;
    qword_1403AA350 = (__int64)v8;
    PpmPerfCalculateMinMaxStates((__int64)v8);
    KeOrAffinityEx((unsigned __int16 *)v61, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    v8[406] = 1;
    v8[404] = 1;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v8);
    PopExecuteOnTargetProcessors((__int64)v61, (__int64)PpmCheckReset, 0LL, 0LL);
    v46 = *(_QWORD *)&v61[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    if ( (v46 & 1) != 0 )
      PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v46, v44, v45);
    PpmCheckReInit();
    v8 = 0LL;
    PpmCheckApplyPerfConstraints();
    goto LABEL_89;
  }
  v53 = 0;
  v20 = 0LL;
  v21 = v8 + 428;
  while ( 1 )
  {
    v22 = *((_QWORD *)v5 + 50);
    *(v21 - 4) = *(_BYTE *)(v20 + v22 + 28);
    if ( !*(_BYTE *)(v20 + v22 + 28) )
      break;
    LODWORD(v23) = -1;
    *(_DWORD *)v21 = *(_DWORD *)(v20 + v22);
LABEL_27:
    *((_DWORD *)v21 + 1) = 100;
    *(_QWORD *)(v21 - 12) = *(_QWORD *)(v20 + v22 + 8);
    *((_DWORD *)v21 + 3) = *(_DWORD *)(v20 + v22 + 16);
    *((_DWORD *)v21 + 4) = *(_DWORD *)(v20 + v22 + 20);
    *((_DWORD *)v21 + 5) = *(_DWORD *)(v20 + v22 + 24);
    *((_DWORD *)v21 + 11) = v54;
    *((_DWORD *)v21 + 9) = 100;
    *((_DWORD *)v21 + 10) = 100;
    *((_DWORD *)v21 + 14) = 100;
    if ( *(_DWORD *)(v20 + v22 + 16) < 0x64u )
    {
      *(_QWORD *)(v21 + 28) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v20 + v22 + 16), v23);
    }
    v24 = &v50;
    v25 = 2LL;
    v26 = &v56[48 * v17];
    do
    {
      v27 = *(unsigned int *)v24;
      if ( (_DWORD)v27 != -1 )
      {
        v28 = *((_QWORD *)v5 + 49);
        *((_QWORD *)v26 + 5) = *(_QWORD *)(*((_QWORD *)v5 + 51) + 8LL * (unsigned int)(v17 + v27));
        v26[33] = *(_BYTE *)(v28 + 24 * v27 + 17);
        v26[32] = *(_BYTE *)(v28 + 24 * v27 + 16);
        v26[34] = *(_BYTE *)(v28 + 24 * v27 + 8);
        *(_QWORD *)v26 = *(_QWORD *)(v28 + 24 * v27);
        v26 += 48;
      }
      v24 = (__int64 *)((char *)v24 + 4);
      --v25;
    }
    while ( v25 );
    v7 = v52;
    v2 = v55;
    v17 += v52;
    ++v51;
    v20 += 32LL;
    v53 = v17;
    v21 += 96;
    if ( v51 >= (unsigned int)v55 )
    {
      v19 = v8 + 408;
      v17 = 0;
      goto LABEL_35;
    }
  }
  v23 = *(unsigned int *)(v20 + v22);
  if ( (_DWORD)v23 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v23] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v23] & 0x3F)) & 1) == 0 )
  {
    v57 = KeGetPrcb(v23);
    v17 = PpmAllocatePerfCheck(v57);
    if ( v17 < 0 )
      goto LABEL_38;
    KeAddProcessorAffinityEx(v61, v23);
    v17 = v53;
    *(_QWORD *)(v21 - 20) = v57;
    goto LABEL_27;
  }
  v17 = -1073741811;
LABEL_38:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_89:
  if ( (unsigned int)PpmPerfDomainCount > 1
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
  {
    LOWORD(v49) = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    LODWORD(v49) = v49 | 0x20;
    PpmReapplyPerfPolicy(&v49);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x704D5050u);
  return (unsigned int)v17;
}
