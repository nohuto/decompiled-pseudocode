/*
 * XREFs of PpmParkSteerInterrupts @ 0x1400D58E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeIntSteerSnapPerf @ 0x1400D4990 (KeIntSteerSnapPerf.c)
 *     KeComplementAffinityEx @ 0x1400D4BD0 (KeComplementAffinityEx.c)
 *     KiIntSteerCalculateDistribution @ 0x1400D4C40 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerDistributeInterrupts @ 0x1400D4EB0 (KiIntSteerDistributeInterrupts.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntSteerLogState @ 0x14012DC88 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401D3CB8 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  __int64 v0; // rbx
  unsigned __int16 v1; // cx
  unsigned __int16 i; // ax
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int16 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // r14d
  unsigned __int64 *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  bool v24; // cf
  unsigned __int16 v25; // r8
  unsigned __int16 v26; // di
  unsigned __int16 v27; // ax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  unsigned int v32; // r11d
  unsigned __int16 v33; // r10
  unsigned __int64 v34; // rdx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  char v37; // r9
  unsigned __int16 v38; // cx
  unsigned __int8 CurrentIrql; // bl
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int16 v43; // r9
  REGHANDLE v44; // r10
  __int64 v45; // rdx
  __int64 v46; // r8
  ULONGLONG v47; // r10
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r10
  unsigned __int16 *v52; // rdx
  SIZE_T v53; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v55; // esi
  unsigned int v56; // r8d
  _QWORD *v57; // r14
  unsigned __int64 *v58; // r11
  int v59; // edi
  unsigned __int64 v60; // r9
  __int64 v61; // r10
  unsigned __int64 v62; // rdx
  int FirstSetRightAffinity; // eax
  _DWORD *v64; // rcx
  __int16 v65; // bx
  ULONG_PTR *m; // rdi
  ULONG_PTR *n; // rsi
  unsigned int v68; // [rsp+40h] [rbp-C0h] BYREF
  int v69; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 *v70; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+50h] [rbp-B0h]
  __int16 v72; // [rsp+58h] [rbp-A8h]
  _DWORD v73[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v75[2]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v78[43]; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD v79[22]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int16 v80; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 v81; // [rsp+1F2h] [rbp+F2h]
  int j; // [rsp+1F4h] [rbp+F4h]
  _QWORD v83[21]; // [rsp+1F8h] [rbp+F8h]
  unsigned __int16 v84; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned __int16 v85; // [rsp+2A2h] [rbp+1A2h]
  int k; // [rsp+2A4h] [rbp+1A4h]
  _QWORD v87[21]; // [rsp+2A8h] [rbp+1A8h] BYREF
  _DWORD v88[44]; // [rsp+350h] [rbp+250h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+400h] [rbp+300h] BYREF
  __int64 v90; // [rsp+410h] [rbp+310h]
  __int64 v91; // [rsp+418h] [rbp+318h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+420h] [rbp+320h] BYREF
  int *v93; // [rsp+430h] [rbp+330h]
  __int64 v94; // [rsp+438h] [rbp+338h]
  int *v95; // [rsp+440h] [rbp+340h]
  __int64 v96; // [rsp+448h] [rbp+348h]
  int *v97; // [rsp+450h] [rbp+350h]
  __int64 v98; // [rsp+458h] [rbp+358h]
  __int64 *v99; // [rsp+460h] [rbp+360h]
  int v100; // [rsp+468h] [rbp+368h]
  int v101; // [rsp+46Ch] [rbp+36Ch]
  void *retaddr; // [rsp+4A8h] [rbp+3A8h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v53 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v53, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v53);
  }
  KeIntSteerSnapPerf(v73, &v74);
  KeComplementAffinityEx((__int64)&v80, PpmPerfCoreParkingMask);
  while ( 1 )
  {
    while ( 1 )
    {
      v0 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( KiCachedSystemAllowedCpuSetVersion == KiCpuSetSequence )
      break;
    KiCachedSystemAllowedCpuSet[0] = 1310721;
    memset(&unk_1403016E4, 0, 0xA4uLL);
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v55 = (unsigned __int16)KiActiveGroups;
      v56 = 0;
      if ( KiActiveGroups )
      {
        v57 = KiCpuSetAffinities;
        v58 = (unsigned __int64 *)&KiSystemAllowedCpuSets;
        v59 = 0;
        do
        {
          v60 = *v58;
          v61 = 0LL;
          if ( *v58 )
          {
            do
            {
              _BitScanForward64(&v62, v60);
              v73[1] = v62;
              v61 |= v57[(unsigned int)(v59 + v62)];
              v60 &= ~(1LL << v62);
            }
            while ( v60 );
            if ( v61 )
            {
              if ( LOWORD(KiCachedSystemAllowedCpuSet[0]) <= (unsigned __int16)v56 )
                LOWORD(KiCachedSystemAllowedCpuSet[0]) = v56 + 1;
              *(_QWORD *)&KiCachedSystemAllowedCpuSet[2 * (unsigned __int16)v56 + 2] |= v61;
            }
          }
          ++v56;
          ++v58;
          v59 += 64;
        }
        while ( v56 < v55 );
      }
    }
    else
    {
      KeCopyAffinityEx((__int64)KiCachedSystemAllowedCpuSet, (unsigned __int16 *)KeActiveProcessors);
    }
    if ( KiCpuSetSequence == v0 )
    {
      KiCachedSystemAllowedCpuSetVersion = v0;
      break;
    }
  }
  v1 = v80;
  if ( v80 >= LOWORD(KiCachedSystemAllowedCpuSet[0]) )
    v1 = KiCachedSystemAllowedCpuSet[0];
  v80 = v1;
  for ( i = 0; i < v80; v83[v3] &= *(_QWORD *)&KiCachedSystemAllowedCpuSet[2 * v3 + 2] )
    v3 = i++;
  v81 = 20;
  for ( j = 0; i < v81; v83[v4] = 0LL )
    v4 = i++;
  LODWORD(v79[0]) = 1310721;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset((char *)v79 + 4, 0, 0xA4uLL);
  v8 = qword_1403AA618[0];
  v9 = v74;
  v71 = qword_1403AA618[0];
  v10 = 0;
  v70 = (unsigned __int16 *)KeActiveProcessors;
LABEL_14:
  v11 = PpmIntSteerTrigger;
  while ( v8 )
  {
LABEL_16:
    _BitScanForward64(&v12, v8);
    ++v5;
    v8 &= ~(1LL << v12);
    v73[2] = v12;
    v71 = v8;
    v68 = KiProcessorNumberToIndexMappingTable[64 * v10 + (unsigned __int8)v12];
    v13 = v68;
    if ( ((v83[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v13] >> 6] >> (KiProcessorIndexToNumberMappingTable[v13] & 0x3F)) & 1) == 0 )
    {
      *(_QWORD *)(v11 + 8LL * v68) = 0LL;
      goto LABEL_14;
    }
    ++v7;
    if ( !*(_QWORD *)(v11 + 8LL * v68) )
    {
      *(_QWORD *)(v11 + 8LL * v68) = v9;
      v11 = PpmIntSteerTrigger;
    }
    if ( v9 - *(_QWORD *)(v11 + 8LL * (unsigned int)v13) >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
    {
      v14 = KiProcessorIndexToNumberMappingTable[(unsigned int)v13];
      v15 = v14 & 0x3F;
      v16 = v14 >> 6;
      if ( LOWORD(v79[0]) <= (unsigned int)v16 )
        LOWORD(v79[0]) = v16 + 1;
      v17 = &v79[v16 + 1];
      v18 = *v17;
      _bittestandset64(&v18, v15);
      *v17 = v18;
      ++v6;
    }
  }
  while ( 1 )
  {
    v72 = ++v10;
    if ( v10 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
    v8 = *(_QWORD *)&KeActiveProcessors[2 * v10 + 2];
    v71 = v8;
    if ( v8 )
      goto LABEL_16;
  }
  if ( !v6 )
  {
    if ( v7 )
    {
      KeCopyAffinityEx((__int64)v79, &v80);
      v6 = v7;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(KiCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v68 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v79, FirstSetRightAffinity);
      v6 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_26;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx((__int64)&v77, (unsigned __int16 *)KeActiveProcessors);
      v7 = v5;
      break;
    case 2:
      KeCopyAffinityEx((__int64)&v77, (unsigned __int16 *)v79);
      v7 = v6;
      break;
    case 3:
      v52 = &v80;
LABEL_73:
      KeCopyAffinityEx((__int64)&v77, v52);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_26:
        v19 = PpmIntSteerLoadMax + v73[0];
        if ( PpmIntSteerLoadMax == 50 )
          v7 = v19 / 0x32;
        else
          v7 = v19 / PpmIntSteerLoadMax;
        if ( v7 < v6 )
        {
          v77 = 1310721;
          memset(v78, 0, 0xA4uLL);
          v88[0] = 1310721;
          memset(&v88[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
          {
            v64 = v88;
            LOBYTE(v64) = 1;
            PpmParkPreferenceHandler(v64, PpmCheckTime, v7, v79, 0LL, v88, &v77);
          }
          v20 = 0;
          if ( (_WORD)v77 )
          {
            v21 = (unsigned __int64 *)&v78[1];
            v22 = (unsigned __int16)v77;
            do
            {
              v23 = *v21++;
              v20 += (unsigned int)((0x101010101010101LL
                                   * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v22;
            }
            while ( v22 );
          }
          v24 = v20 < v7;
          if ( v20 > v7 )
          {
            v77 = 1310721;
            memset(v78, 0, 0xA4uLL);
            v24 = v7 != 0;
            v20 = 0;
          }
          if ( v24 )
          {
            v25 = v79[0];
            v26 = 0;
            v27 = v88[0];
            v85 = 20;
            v84 = v79[0];
            if ( LOWORD(v79[0]) < LOWORD(v88[0]) )
              v27 = v79[0];
            if ( v27 )
            {
              v26 = v27;
              v28 = 0LL;
              v29 = v27;
              do
              {
                v87[v28 / 2] = v79[v28 / 2 + 1] & ~*(_QWORD *)&v88[v28 + 2];
                v28 += 2LL;
                --v29;
              }
              while ( v29 );
            }
            if ( v26 < v25 )
            {
              v65 = v25 - v26;
              memmove(&v87[v26], &v79[v26 + 1], 8LL * (unsigned __int16)(v25 - v26));
              v26 += v65;
            }
            for ( k = 0; v26 < v85; v87[v30] = 0LL )
              v30 = v26++;
            v31 = v87[0];
            v32 = v84;
            v71 = v87[0];
            v33 = 0;
            v70 = &v84;
            v72 = 0;
            while ( v31 )
            {
LABEL_48:
              _BitScanForward64(&v34, v31);
              v31 &= ~(1LL << v34);
              v73[3] = v34;
              v71 = v31;
              v68 = KiProcessorNumberToIndexMappingTable[64 * v33 + (unsigned __int8)v34];
              v35 = KiProcessorIndexToNumberMappingTable[v68];
              if ( ((*(_QWORD *)&v78[2 * (v35 >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v68] & 0x3F)) & 1) == 0 )
              {
                v36 = v35 >> 6;
                v37 = v35 & 0x3F;
                if ( (unsigned __int16)v77 <= (unsigned int)v36 )
                  LOWORD(v77) = v36 + 1;
                ++v20;
                *(_QWORD *)&v78[2 * v36 + 1] |= 1LL << v37;
                if ( v20 >= v7 )
                  goto LABEL_52;
              }
            }
            while ( 1 )
            {
              v72 = ++v33;
              if ( v33 >= v32 )
                break;
              v31 = v87[v33];
              v71 = v31;
              if ( v31 )
                goto LABEL_48;
            }
            if ( v20 < v7 )
            {
              v71 = v79[1];
              v70 = (unsigned __int16 *)v79;
              v72 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v68, &v70) )
              {
                if ( ((*(_QWORD *)&v78[2 * ((unsigned int)KiProcessorIndexToNumberMappingTable[v68] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v68] & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(&v77, v68);
                  if ( ++v20 >= v7 )
                    break;
                }
              }
            }
          }
          break;
        }
        v7 = v6;
        v52 = (unsigned __int16 *)v79;
        goto LABEL_73;
      }
      v77 = 1310721;
      memset(v78, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(&v77, PpmIntSteerMode - 5);
      v7 = 1;
      break;
  }
LABEL_52:
  v38 = 0;
  if ( (_WORD)v77 )
  {
    while ( !*(_QWORD *)&v78[2 * v38 + 1] )
    {
      if ( ++v38 >= (unsigned __int16)v77 )
        goto LABEL_120;
    }
  }
  else
  {
LABEL_120:
    KeAddProcessorAffinityEx(&v77, 0);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&KiIntTrackSpinlock);
  }
  KiIntSteerCalculateDistribution((unsigned __int16 *)&v77, v7);
  KiIntSteerMask = v77;
  dword_1403079A4 = 0;
  if ( (_WORD)v77 )
    memmove(&qword_1403079A8, &v78[1], 8LL * (unsigned __int16)v77);
  KiIntSteerMaskCount = v7;
  if ( KiIntSteerEtwHandle )
  {
    LOBYTE(v40) = 4;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(KiIntSteerEtwHandle + 32) + 80LL, v40, 1LL)
      || *(_BYTE *)(v44 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v44 + 40) + 80LL, v41, v42) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
      v94 = 4LL;
      v93 = &KiIntTrackRootCount;
      v96 = 4LL;
      v95 = &KiIntSteerMaskCount;
      v97 = &KiIntSteerMask;
      v98 = 2LL;
      v99 = &qword_1403079A8;
      v101 = 0;
      v100 = 160 * v43;
      EtwWrite(v44, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 5u, &UserData);
      v44 = KiIntSteerEtwHandle;
    }
    if ( v44 )
    {
      LOBYTE(v41) = 4;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v44 + 32) + 80LL, v41, 1LL)
        || *(_BYTE *)(v47 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v47 + 40) + 80LL, v45, v46) )
      {
        v75[1] = (unsigned __int16 *)qword_1403AA618[0];
        v75[0] = (unsigned __int16 *)KeActiveProcessors;
        v76 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v69, v75) )
        {
          v89.Ptr = (ULONGLONG)&v69;
          *(_QWORD *)&v89.Size = 4LL;
          v91 = 4LL;
          v90 = KiProcessorBlock[v69] + 11544;
          EtwWrite(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 2u, &v89);
        }
        v47 = KiIntSteerEtwHandle;
      }
      if ( v47 )
      {
        LOBYTE(v45) = 4;
        if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v47 + 32) + 80LL, v45, 1LL)
          || *(_BYTE *)(v50 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v50 + 40) + 80LL, v48, v49) )
        {
          for ( m = (ULONG_PTR *)KiIntTrackRootList; m != &KiIntTrackRootList; m = (ULONG_PTR *)*m )
          {
            if ( m[22] != m[20] )
            {
              for ( n = (ULONG_PTR *)m[2]; n != m + 2; n = (ULONG_PTR *)*n )
                KiIntSteerLogState(n, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
            }
          }
        }
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
  __writecr8(CurrentIrql);
  return 1;
}
