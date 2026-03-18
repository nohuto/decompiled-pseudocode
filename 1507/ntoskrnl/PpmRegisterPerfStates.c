/*
 * XREFs of PpmRegisterPerfStates @ 0x1405AF60C
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x1405AF604 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406BE5EC (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmInstallFeedbackCounters @ 0x140167770 (PpmInstallFeedbackCounters.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401679C8 (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x140167A20 (PpmParkApplyPolicy.c)
 *     KeQueryActiveProcessorAffinity @ 0x140167D5C (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14023E7B8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PpmCheckApplyPerfConstraints @ 0x14058430C (PpmCheckApplyPerfConstraints.c)
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405B109C (PpmHeteroComputeRelativePerformance.c)
 */

__int64 __fastcall PpmRegisterPerfStates(unsigned int *a1, char a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  __int64 v4; // r12
  unsigned int v6; // r14d
  unsigned int *v7; // rsi
  LARGE_INTEGER *v8; // rdi
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  LARGE_INTEGER *PoolWithTag; // rax
  char *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // r15d
  LARGE_INTEGER *v22; // r14
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  unsigned __int8 v25; // dl
  unsigned int v26; // r10d
  __int64 v27; // rax
  unsigned int v28; // ecx
  char v29; // dl
  __int64 v30; // rcx
  __int64 *v31; // r10
  __int64 v32; // r11
  char *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned __int16 v36; // dx
  unsigned __int16 i; // r8
  __int64 v38; // rcx
  unsigned __int16 v39; // dx
  unsigned __int64 QuadPart; // rcx
  __int64 v41; // rcx
  __int64 *v42; // r13
  int v43; // eax
  int v44; // esi
  __int64 v45; // r15
  char *v46; // r12
  LARGE_INTEGER *v47; // r14
  __int64 v48; // rcx
  __int64 *v49; // r8
  __int64 v50; // r9
  char *v51; // rdx
  char **v52; // rax
  __int64 (__fastcall *v53)(_QWORD); // rcx
  __int64 **v54; // rax
  unsigned __int16 v55; // r11
  __int16 *v56; // r8
  unsigned __int16 v57; // dx
  unsigned __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // r8d
  __int64 v63; // r8
  _BYTE *v64; // r9
  __int64 v65; // rdx
  __int64 v67; // rcx
  signed __int32 v68[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v69; // [rsp+28h] [rbp-E0h] BYREF
  int v70; // [rsp+30h] [rbp-D8h]
  LONG v71; // [rsp+34h] [rbp-D4h]
  char *v72; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+40h] [rbp-C8h]
  __int64 v74; // [rsp+48h] [rbp-C0h]
  char *v75; // [rsp+50h] [rbp-B8h]
  _QWORD v76[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v77; // [rsp+68h] [rbp-A0h]
  __int64 v78; // [rsp+70h] [rbp-98h]
  __int64 v79; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v80[21]; // [rsp+80h] [rbp-88h] BYREF
  int v81[44]; // [rsp+128h] [rbp+20h] BYREF

  v2 = a1[4];
  v3 = 0;
  v4 = a1[3];
  v6 = a1[8];
  v7 = a1;
  v77 = a1;
  v71 = v2;
  v79 = 1310721LL;
  v8 = 0LL;
  memset(v80, 0, 0xA0uLL);
  KeQueryActiveProcessorAffinity(v81);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = -1;
  v69 = -1LL;
  v10 = 0;
  if ( v6 )
  {
    v11 = *((_QWORD *)v7 + 48);
    while ( 1 )
    {
      v12 = *(unsigned int *)(v11 + 24LL * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_107;
      if ( *((_DWORD *)&v69 + v12) == -1 )
        *((_DWORD *)&v69 + v12) = v10;
      if ( ++v10 >= v6 )
      {
        v9 = v69;
        break;
      }
    }
  }
  if ( v9 == -1 && HIDWORD(v69) == -1 )
  {
LABEL_107:
    LODWORD(v20) = -1073741811;
    goto LABEL_108;
  }
  v13 = 0;
  v14 = &v69;
  v15 = 2LL;
  do
  {
    if ( *(_DWORD *)v14 != -1 )
      ++v13;
    v14 = (__int64 *)((char *)v14 + 4);
    --v15;
  }
  while ( v15 );
  v70 = v13;
  v16 = (88 * v4 + 407) & 0xFFFFFFF8;
  v17 = (48 * v4 * v13 + v16 + 7) & 0xFFFFFFF8;
  PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v17 + 192 * (_DWORD)v4, 0x704D5050u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v20) = -1073741670;
LABEL_108:
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x704D5050u);
    return (unsigned int)v20;
  }
  memset(PoolWithTag, 0, v17 + 192 * (_DWORD)v4);
  v19 = (char *)v8 + v16;
  v20 = 0LL;
  v72 = v19;
  v75 = (char *)v8 + v17;
  if ( (_DWORD)v4 )
  {
    v21 = 0;
    v22 = v8 + 51;
    while ( 1 )
    {
      v23 = *((_QWORD *)v7 + 49);
      if ( *(_BYTE *)(v20 + v23 + 3) )
        goto LABEL_107;
      v24 = *(_WORD *)(v20 + v23);
      if ( v24 || *(_BYTE *)(v20 + v23 + 2) )
      {
        if ( v24 >= (unsigned __int16)KiMaximumGroups || (v25 = *(_BYTE *)(v20 + v23 + 2), v25 >= 0x40u) )
        {
          v26 = -1;
        }
        else
        {
          v26 = KiProcessorNumberToIndexMappingTable[64 * v24 + v25];
          if ( !v26 )
            goto LABEL_107;
        }
        if ( v26 == -1 )
          goto LABEL_107;
      }
      else
      {
        v26 = 0;
      }
      if ( ((*(_QWORD *)&PpmPerfStatesRegistered[4 * ((unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) != 0 )
        goto LABEL_107;
      if ( v26 >= (unsigned int)KeNumberProcessors_0 )
        v27 = 0LL;
      else
        v27 = KiProcessorBlock[v26];
      v22[-1].QuadPart = v27;
      v22[1].LowPart = 100;
      *v22 = *(LARGE_INTEGER *)(v20 + v23 + 8);
      v22[2].LowPart = *(_DWORD *)(v20 + v23 + 16);
      v22[2].HighPart = *(_DWORD *)(v20 + v23 + 20);
      v22[3].LowPart = *(_DWORD *)(v20 + v23 + 24);
      v22[6].LowPart = v71;
      v28 = KiProcessorIndexToNumberMappingTable[v26];
      v22[5].LowPart = 100;
      v29 = v28 & 0x3F;
      v22[5].HighPart = 100;
      v22[7].HighPart = 100;
      v30 = v28 >> 6;
      if ( (unsigned __int16)v79 <= (unsigned int)v30 )
        LOWORD(v79) = v30 + 1;
      v80[(unsigned int)v30].QuadPart = v80[v30].QuadPart | (1LL << v29);
      if ( *(_DWORD *)(v20 + v23 + 16) < 0x64u )
      {
        v22[4].QuadPart = MEMORY[0xFFFFF78000000008];
        PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v20 + v23 + 16), v26);
      }
      v31 = &v69;
      v32 = 2LL;
      v33 = &v72[48 * v21];
      do
      {
        v34 = *(unsigned int *)v31;
        if ( (_DWORD)v34 != -1 )
        {
          v35 = *((_QWORD *)v7 + 48);
          *((_QWORD *)v33 + 5) = *(_QWORD *)(*((_QWORD *)v7 + 50) + 8LL * (v21 + (unsigned int)v34));
          v33[33] = *(_BYTE *)(v35 + 24 * v34 + 17);
          v33[32] = *(_BYTE *)(v35 + 24 * v34 + 16);
          v33[34] = *(_BYTE *)(v35 + 24 * v34 + 8);
          *(_QWORD *)v33 = *(_QWORD *)(v35 + 24 * v34);
          v33 += 48;
        }
        v31 = (__int64 *)((char *)v31 + 4);
        --v32;
      }
      while ( v32 );
      v21 += v70;
      ++v3;
      v20 += 32LL;
      v22 += 11;
      if ( v3 >= (unsigned int)v4 )
      {
        LODWORD(v20) = 0;
        break;
      }
    }
  }
  v36 = 0;
  v8[3].LowPart = v79;
  v8[3].HighPart = 0;
  for ( i = v79; v36 < (unsigned __int16)v79; i = v79 )
  {
    v38 = v36++;
    v8[v38 + 4] = v80[v38];
  }
  v39 = 0;
  if ( i )
  {
    while ( 1 )
    {
      QuadPart = v80[v39].QuadPart;
      if ( QuadPart )
        break;
      if ( ++v39 >= i )
        goto LABEL_115;
    }
    LOWORD(v74) = v39;
    v73 = QuadPart;
  }
  else
  {
LABEL_115:
    QuadPart = v73;
  }
  if ( QuadPart )
  {
    _BitScanForward64(&QuadPart, QuadPart);
    LODWORD(v78) = QuadPart;
    LODWORD(QuadPart) = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v74 + (unsigned int)QuadPart];
  }
  else
  {
    LODWORD(QuadPart) = -1;
  }
  if ( (unsigned int)QuadPart >= (unsigned int)KeNumberProcessors_0 )
    v41 = 0LL;
  else
    v41 = KiProcessorBlock[(unsigned int)QuadPart];
  v8[2].QuadPart = v41;
  v42 = (__int64 *)&v8[50];
  v8[26] = *(LARGE_INTEGER *)(v7 + 60);
  v8[28] = *(LARGE_INTEGER *)(v7 + 64);
  v8[29] = *(LARGE_INTEGER *)(v7 + 66);
  v8[30] = *(LARGE_INTEGER *)(v7 + 68);
  v8[31] = *(LARGE_INTEGER *)(v7 + 70);
  v8[32] = *(LARGE_INTEGER *)(v7 + 72);
  v8[27] = *(LARGE_INTEGER *)(v7 + 62);
  v8[25].QuadPart = (LONGLONG)&v8[50];
  v8[48] = KeQueryPerformanceCounter(0LL);
  v8[36].HighPart = v71;
  v8[24].LowPart = v4;
  v8[37].LowPart = v7[5];
  v8[37].HighPart = v7[6];
  v8[38].LowPart = v7[7];
  LOBYTE(v8[41].LowPart) = *((_BYTE *)v7 + 4);
  v8[35] = *(LARGE_INTEGER *)(v7 + 82);
  v8[33] = *(LARGE_INTEGER *)(v7 + 78);
  v8[34] = *(LARGE_INTEGER *)(v7 + 80);
  BYTE4(v8[41].QuadPart) = *((_BYTE *)v7 + 40);
  v8[42].LowPart = 100;
  BYTE1(v8[41].LowPart) = *((_BYTE *)v7 + 6);
  BYTE2(v8[41].u.LowPart) = *((_BYTE *)v7 + 7);
  BYTE3(v8[41].QuadPart) = *((_BYTE *)v7 + 8);
  BYTE4(v8[24].QuadPart) = *(_BYTE *)(v8[2].QuadPart + 23858);
  v8[39] = *(LARGE_INTEGER *)(v7 + 12);
  v8[40] = *(LARGE_INTEGER *)(v7 + 14);
  if ( PpmCheckMinimumPeriod <= (unsigned __int64)v7[9] )
    PpmCheckMinimumPeriod = v7[9];
  v43 = PpmAllowedActions;
  if ( v8[29].QuadPart )
  {
    v43 = PpmAllowedActions | 0x100;
    PpmAllowedActions |= 0x100u;
  }
  if ( v8[28].QuadPart )
  {
    v43 |= 0x80u;
    PpmAllowedActions = v43;
  }
  if ( v8[27].QuadPart )
  {
    v43 |= 0x800u;
    PpmAllowedActions = v43;
  }
  if ( v8[30].QuadPart )
  {
    v43 |= 0x40u;
    PpmAllowedActions = v43;
  }
  if ( v8[32].QuadPart )
  {
    v43 |= 0x200u;
    PpmAllowedActions = v43;
  }
  if ( v8[31].QuadPart )
    PpmAllowedActions = v43 | 0x400;
  _InterlockedOr(v68, 0);
  if ( (_DWORD)v4 )
  {
    v44 = v70;
    v45 = v4;
    v46 = v75;
    v47 = v8 + 50;
    do
    {
      v48 = *v42;
      v49 = &v69;
      v50 = 2LL;
      *(_DWORD *)(v48 + 24232) = 0x10000;
      *(_QWORD *)(v48 + 24176) = v8;
      v51 = &v72[48 * (unsigned int)v20];
      *(_QWORD *)(v48 + 24168) = v46;
      v76[0] = 0LL;
      v76[1] = 0LL;
      v52 = (char **)v76;
      *(_QWORD *)(v48 + 24184) = v47;
      do
      {
        if ( *(_DWORD *)v49 != -1 )
        {
          *v52 = v51;
          v51 += 48;
        }
        v49 = (__int64 *)((char *)v49 + 4);
        ++v52;
        --v50;
      }
      while ( v50 );
      PpmInstallFeedbackCounters(v48, v76);
      v46 += 192;
      v47 += 11;
      LODWORD(v20) = v44 + v20;
      v42 += 11;
      --v45;
    }
    while ( v45 );
    v7 = v77;
    LODWORD(v20) = 0;
  }
  if ( !PpmPerfGlobalContext )
    PpmPerfGlobalContext = *((_QWORD *)v7 + 8);
  v53 = PpmPerfControlReadFeedback;
  if ( !PpmPerfControlReadFeedback )
  {
    v53 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v7 + 42);
    PpmPerfControlReadFeedback = v53;
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
    PpmPerfControlStartPolicyUpdate = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v7 + 37);
  if ( !PpmPerfControlCompletePolicyUpdate )
    PpmPerfControlCompletePolicyUpdate = (__int64 (*)(void))*((_QWORD *)v7 + 38);
  if ( v53 )
    PpmCheckPollForFeedback = 1;
  v54 = (__int64 **)qword_1403D13D8;
  ++PpmPerfDomainCount;
  v8->QuadPart = (LONGLONG)&PpmPerfDomainHead;
  v8[1].QuadPart = (LONGLONG)v54;
  if ( *v54 != &PpmPerfDomainHead )
    __fastfail(3u);
  *v54 = (__int64 *)v8;
  qword_1403D13D8 = (__int64)v8;
  PpmHeteroComputeRelativePerformance();
  PpmPerfCalculateMinMaxStates((__int64)v8);
  v55 = v79;
  if ( (unsigned __int16)v79 < (unsigned int)PpmPerfStatesRegistered[0] )
  {
    v56 = PpmPerfStatesRegistered;
  }
  else
  {
    v56 = (__int16 *)&v79;
    v55 = PpmPerfStatesRegistered[0];
  }
  v57 = 0;
  word_1403208E2 = 20;
  PpmPerfStatesRegistered[0] = *v56;
  if ( v55 )
  {
    v57 = v55;
    v58 = 0LL;
    v59 = v55;
    do
    {
      *(_QWORD *)&PpmPerfStatesRegistered[v58 / 2 + 4] |= v80[v58 / 8].QuadPart;
      v58 += 8LL;
      --v59;
    }
    while ( v59 );
  }
  while ( v57 < (unsigned __int16)*v56 )
  {
    v67 = v57++;
    *(_QWORD *)&PpmPerfStatesRegistered[4 * v67 + 4] = *(_QWORD *)&v56[4 * v67 + 4];
  }
  dword_1403208E4 = 0;
  while ( v57 < (unsigned __int16)word_1403208E2 )
  {
    v60 = v57++;
    *(_QWORD *)&PpmPerfStatesRegistered[4 * v60 + 4] = 0LL;
  }
  v61 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8[2].QuadPart + 36)] >> 6;
  v62 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8[2].QuadPart + 36)] & 0x3F;
  if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v61 )
    LOWORD(PpmPerfDomainsToUpdate) = v61 + 1;
  qword_140320838[(unsigned int)v61] = qword_140320838[v61] | (1LL << v62);
  PopExecuteOnTargetProcessors(
    (__int64)&v79,
    (__int64)PpmUpdateProcessorPolicyCallback,
    (__int64)&PpmAllowedActions,
    0LL);
  v65 = (unsigned __int64)v80[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6].QuadPart >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  if ( (v65 & 1) != 0 )
    PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v65, v63, v64);
  PpmCheckReInit();
  PpmCheckApplyPerfConstraints(1);
  return (unsigned int)v20;
}
