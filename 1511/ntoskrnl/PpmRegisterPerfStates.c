/*
 * XREFs of PpmRegisterPerfStates @ 0x140536740
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x140536738 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14063DD50 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x1400EB098 (KeFirstGroupAffinityEx.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400F6988 (KeFindFirstSetRightGroupAffinity.c)
 *     PpmInstallFeedbackCounters @ 0x140138C60 (PpmInstallFeedbackCounters.c)
 *     PpmPerfCalculateMinMaxStates @ 0x140139450 (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x1401394A8 (PpmParkApplyPolicy.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401397E4 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1401F03CC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpmCheckApplyPerfConstraints @ 0x14050CF58 (PpmCheckApplyPerfConstraints.c)
 *     PpmAllocatePerfCheck @ 0x140536FC4 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 *     PpmHeteroComputeRelativePerformance @ 0x140537880 (PpmHeteroComputeRelativePerformance.c)
 */

__int64 __fastcall PpmRegisterPerfStates(unsigned int *a1, char a2)
{
  unsigned int v2; // eax
  LARGE_INTEGER *v3; // rdi
  __int64 v4; // r13
  unsigned int v6; // r14d
  unsigned int *v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r15d
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  LARGE_INTEGER *PoolWithTag; // rax
  __int64 *v17; // r12
  char *v18; // rax
  unsigned int v19; // ebx
  LARGE_INTEGER *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r15
  ULONG ProcessorIndexFromNumber; // eax
  int v24; // r12d
  unsigned int v25; // ebx
  __int64 *v26; // r10
  __int64 v27; // r11
  char *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  ULONG FirstSetRightGroupAffinity; // eax
  int v32; // eax
  char *v33; // rsi
  __int64 *v34; // r14
  __int64 v35; // rcx
  __int64 *v36; // r8
  __int64 v37; // r9
  char *v38; // rdx
  char **v39; // rax
  __int64 (__fastcall *v40)(_QWORD); // rcx
  __int64 **v41; // rax
  __int64 v42; // r8
  _BYTE *v43; // r9
  __int64 v44; // rdx
  signed __int32 v46[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v47; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v48; // [rsp+30h] [rbp-D8h]
  LONG v49; // [rsp+34h] [rbp-D4h]
  unsigned int v50; // [rsp+38h] [rbp-D0h]
  int v51; // [rsp+3Ch] [rbp-CCh]
  char *v52; // [rsp+40h] [rbp-C8h]
  __int64 v53; // [rsp+48h] [rbp-C0h]
  _QWORD v54[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int *v55; // [rsp+60h] [rbp-A8h]
  __int64 Prcb; // [rsp+68h] [rbp-A0h]
  _QWORD v57[3]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v58[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v59[21]; // [rsp+90h] [rbp-78h] BYREF
  char v60[176]; // [rsp+138h] [rbp+30h] BYREF

  v2 = a1[4];
  v3 = 0LL;
  v4 = a1[3];
  v6 = a1[8];
  v7 = a1;
  v58[1] = 0;
  v55 = a1;
  v49 = v2;
  v58[0] = 1310721;
  memset(v59, 0, 0xA0uLL);
  KeQueryActiveProcessorAffinity((__int64)v60);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = -1;
  v9 = 0LL;
  v47 = -1LL;
  if ( v6 )
  {
    v10 = *((_QWORD *)v7 + 48);
    while ( 1 )
    {
      v11 = *(unsigned int *)(v10 + 24 * v9 + 12);
      if ( (unsigned int)v11 >= 2 )
        goto LABEL_77;
      if ( *((_DWORD *)&v47 + v11) == -1 )
        *((_DWORD *)&v47 + v11) = v9;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v6 )
      {
        v8 = v47;
        break;
      }
    }
  }
  if ( v8 == -1 && HIDWORD(v47) == -1 )
  {
LABEL_77:
    v19 = -1073741811;
    goto LABEL_78;
  }
  v12 = 0;
  v13 = &v47;
  v14 = 2LL;
  do
  {
    if ( *(_DWORD *)v13 != -1 )
      ++v12;
    v13 = (__int64 *)((char *)v13 + 4);
    --v14;
  }
  while ( v14 );
  v51 = v12;
  v15 = (88 * v4 + 407) & 0xFFFFFFF8;
  PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 48 * (_DWORD)v4 * v12, 0x704D5050u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = -1073741670;
LABEL_78:
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x704D5050u);
    return v19;
  }
  memset(PoolWithTag, 0, v15 + 48 * (_DWORD)v4 * v12);
  v17 = (__int64 *)&v3[50];
  v18 = (char *)v3 + v15;
  v19 = 0;
  v52 = v18;
  v50 = 0;
  if ( (_DWORD)v4 )
  {
    v48 = 0;
    v20 = v3 + 51;
    v21 = 0LL;
    v53 = 0LL;
    while ( 1 )
    {
      v22 = v21 + *((_QWORD *)v7 + 49);
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v22);
      v24 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1
        || ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                               * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6)
                                               + 4] >> (KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F)) & 1) != 0 )
      {
        goto LABEL_77;
      }
      Prcb = KeGetPrcb(ProcessorIndexFromNumber);
      v19 = PpmAllocatePerfCheck(Prcb);
      if ( (v19 & 0x80000000) != 0 )
        goto LABEL_78;
      v20[-1].QuadPart = Prcb;
      v20[1].LowPart = 100;
      *v20 = *(LARGE_INTEGER *)(v22 + 8);
      v20[2].LowPart = *(_DWORD *)(v22 + 16);
      v20[2].HighPart = *(_DWORD *)(v22 + 20);
      v20[3].LowPart = *(_DWORD *)(v22 + 24);
      v20[6].LowPart = v49;
      v20[5].LowPart = 100;
      v20[5].HighPart = 100;
      v20[7].HighPart = 100;
      KeAddProcessorAffinityEx(v58, v24);
      if ( *(_DWORD *)(v22 + 16) < 0x64u )
      {
        v20[4].QuadPart = MEMORY[0xFFFFF78000000008];
        PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v22 + 16), v24);
      }
      v25 = v48;
      v26 = &v47;
      v27 = 2LL;
      v28 = &v52[48 * v48];
      do
      {
        v29 = *(unsigned int *)v26;
        if ( (_DWORD)v29 != -1 )
        {
          v30 = *((_QWORD *)v7 + 48);
          *((_QWORD *)v28 + 5) = *(_QWORD *)(*((_QWORD *)v7 + 50) + 8LL * (v25 + (unsigned int)v29));
          v28[33] = *(_BYTE *)(v30 + 24 * v29 + 17);
          v28[32] = *(_BYTE *)(v30 + 24 * v29 + 16);
          v28[34] = *(_BYTE *)(v30 + 24 * v29 + 8);
          *(_QWORD *)v28 = *(_QWORD *)(v30 + 24 * v29);
          v28 += 48;
        }
        v26 = (__int64 *)((char *)v26 + 4);
        --v27;
      }
      while ( v27 );
      v20 += 11;
      v12 = v51;
      v21 = v53 + 32;
      ++v50;
      v48 = v51 + v25;
      v53 += 32LL;
      if ( v50 >= (unsigned int)v4 )
      {
        v17 = (__int64 *)&v3[50];
        v19 = 0;
        break;
      }
    }
  }
  KeCopyAffinityEx((__int64)&v3[3], (unsigned __int16 *)v58);
  KeFirstGroupAffinityEx(v57, v58);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v57);
  v3[2].QuadPart = KeGetPrcb(FirstSetRightGroupAffinity);
  v3[26] = *(LARGE_INTEGER *)(v7 + 60);
  v3[28] = *(LARGE_INTEGER *)(v7 + 64);
  v3[29] = *(LARGE_INTEGER *)(v7 + 66);
  v3[30] = *(LARGE_INTEGER *)(v7 + 68);
  v3[31] = *(LARGE_INTEGER *)(v7 + 70);
  v3[32] = *(LARGE_INTEGER *)(v7 + 72);
  v3[27] = *(LARGE_INTEGER *)(v7 + 62);
  v3[25].QuadPart = (LONGLONG)v17;
  v3[48] = KeQueryPerformanceCounter(0LL);
  v3[36].HighPart = v49;
  v3[24].LowPart = v4;
  v3[37].LowPart = v7[5];
  v3[37].HighPart = v7[6];
  v3[38].LowPart = v7[7];
  LOBYTE(v3[41].LowPart) = *((_BYTE *)v7 + 4);
  v3[35] = *(LARGE_INTEGER *)(v7 + 82);
  v3[33] = *(LARGE_INTEGER *)(v7 + 78);
  v3[34] = *(LARGE_INTEGER *)(v7 + 80);
  BYTE4(v3[41].QuadPart) = *((_BYTE *)v7 + 40);
  v3[42].LowPart = 100;
  BYTE1(v3[41].LowPart) = *((_BYTE *)v7 + 6);
  BYTE2(v3[41].u.LowPart) = *((_BYTE *)v7 + 7);
  BYTE3(v3[41].QuadPart) = *((_BYTE *)v7 + 8);
  BYTE4(v3[24].QuadPart) = *(_BYTE *)(v3[2].QuadPart + 23858);
  v3[39] = *(LARGE_INTEGER *)(v7 + 12);
  v3[40] = *(LARGE_INTEGER *)(v7 + 14);
  if ( PpmCheckMinimumPeriod <= (unsigned __int64)v7[9] )
    PpmCheckMinimumPeriod = v7[9];
  v32 = PpmAllowedActions;
  if ( v3[29].QuadPart )
  {
    v32 = PpmAllowedActions | 0x100;
    PpmAllowedActions |= 0x100u;
  }
  if ( v3[28].QuadPart )
  {
    v32 |= 0x80u;
    PpmAllowedActions = v32;
  }
  if ( v3[27].QuadPart )
  {
    v32 |= 0x800u;
    PpmAllowedActions = v32;
  }
  if ( v3[30].QuadPart )
  {
    v32 |= 0x40u;
    PpmAllowedActions = v32;
  }
  if ( v3[32].QuadPart )
  {
    v32 |= 0x200u;
    PpmAllowedActions = v32;
  }
  if ( v3[31].QuadPart )
    PpmAllowedActions = v32 | 0x400;
  _InterlockedOr(v46, 0);
  if ( (_DWORD)v4 )
  {
    v33 = v52;
    v34 = v17;
    do
    {
      v35 = *v17;
      v36 = &v47;
      v37 = 2LL;
      *(_DWORD *)(v35 + 24232) = 0x10000;
      *(_QWORD *)(v35 + 24176) = v3;
      v38 = &v33[48 * v19];
      *(_QWORD *)(v35 + 24184) = v34;
      v54[0] = 0LL;
      v54[1] = 0LL;
      v39 = (char **)v54;
      do
      {
        if ( *(_DWORD *)v36 != -1 )
        {
          *v39 = v38;
          v38 += 48;
        }
        v36 = (__int64 *)((char *)v36 + 4);
        ++v39;
        --v37;
      }
      while ( v37 );
      PpmInstallFeedbackCounters(v35, v54);
      v34 += 11;
      v19 += v12;
      v17 += 11;
      --v4;
    }
    while ( v4 );
    v7 = v55;
    v19 = 0;
  }
  if ( !PpmPerfGlobalContext )
    PpmPerfGlobalContext = *((_QWORD *)v7 + 8);
  v40 = PpmPerfControlReadFeedback;
  if ( !PpmPerfControlReadFeedback )
  {
    v40 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v7 + 42);
    PpmPerfControlReadFeedback = v40;
  }
  if ( !PpmPerfControlAcquirePerformance )
    PpmPerfControlAcquirePerformance = *((_QWORD *)v7 + 43);
  if ( !PpmPerfControlCommitPerformance )
    PpmPerfControlCommitPerformance = *((_QWORD *)v7 + 44);
  if ( !PpmParkPreferenceHandler )
    PpmParkPreferenceHandler = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v7 + 45);
  if ( !PpmParkMaskHandler )
    PpmParkMaskHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v7 + 46);
  if ( !PpmCheckCompleteHandler )
    PpmCheckCompleteHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v7 + 47);
  if ( !PpmPerfControlStartPolicyUpdate )
    PpmPerfControlStartPolicyUpdate = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v7 + 37);
  if ( !PpmPerfControlCompletePolicyUpdate )
    PpmPerfControlCompletePolicyUpdate = (__int64 (*)(void))*((_QWORD *)v7 + 38);
  if ( v40 )
    PpmCheckPollForFeedback = 1;
  v41 = (__int64 **)qword_1403823B0;
  ++PpmPerfDomainCount;
  v3->QuadPart = (LONGLONG)&PpmPerfDomainHead;
  v3[1].QuadPart = (LONGLONG)v41;
  if ( *v41 != &PpmPerfDomainHead )
    __fastfail(3u);
  *v41 = (__int64 *)v3;
  qword_1403823B0 = (__int64)v3;
  PpmHeteroComputeRelativePerformance();
  PpmPerfCalculateMinMaxStates((__int64)v3);
  KeOrAffinityEx((unsigned __int16 *)v58, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
  KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(v3[2].QuadPart + 36));
  PopExecuteOnTargetProcessors(
    (__int64)v58,
    (__int64)PpmUpdateProcessorPolicyCallback,
    (__int64)&PpmAllowedActions,
    0LL);
  PopExecuteOnTargetProcessors((__int64)v58, (__int64)PpmCheckReset, 0LL, 0LL);
  v44 = v59[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  if ( (v44 & 1) != 0 )
    PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v44, v42, v43);
  PpmCheckReInit();
  PpmCheckApplyPerfConstraints(1);
  return v19;
}
