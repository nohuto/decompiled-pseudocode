/*
 * XREFs of PpmParkSteerInterrupts @ 0x140074F40
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     KiEnumerateNextProcessorNumber @ 0x140076C5C (KiEnumerateNextProcessorNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KiIntSteerDistributeInterrupts @ 0x140076D30 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x140076EC0 (KiIntSteerCalculateDistribution.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140077160 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeComplementAffinityEx @ 0x140077200 (KeComplementAffinityEx.c)
 *     KeIntSteerSnapPerf @ 0x140077270 (KeIntSteerSnapPerf.c)
 *     KeSubtractAffinityEx @ 0x140077490 (KeSubtractAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     KiIntSteerLogState @ 0x140122EC4 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401C4CB8 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  __int16 v0; // cx
  unsigned __int16 i; // ax
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rsi
  unsigned __int16 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // edi
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  bool v23; // cf
  unsigned __int8 CurrentIrql; // di
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int16 v28; // r9
  REGHANDLE v29; // r10
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONGLONG v32; // r10
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r10
  _WORD *v37; // rdx
  SIZE_T v38; // rbx
  PVOID PoolWithTag; // rax
  unsigned int FirstSetRightAffinity; // eax
  ULONG_PTR *k; // rbx
  ULONG_PTR *m; // rsi
  unsigned int v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v44; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v45; // [rsp+46h] [rbp-BAh]
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int *v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int16 v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+78h] [rbp-88h]
  _QWORD v53[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD Src[21]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v58[21]; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int16 v59; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int16 j; // [rsp+202h] [rbp+102h]
  int v61; // [rsp+204h] [rbp+104h]
  _QWORD v62[21]; // [rsp+208h] [rbp+108h]
  _QWORD v63[22]; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v64[8]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v65; // [rsp+368h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+410h] [rbp+310h] BYREF
  __int64 v67; // [rsp+420h] [rbp+320h]
  __int64 v68; // [rsp+428h] [rbp+328h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+430h] [rbp+330h] BYREF
  int *v70; // [rsp+440h] [rbp+340h]
  __int64 v71; // [rsp+448h] [rbp+348h]
  int *v72; // [rsp+450h] [rbp+350h]
  __int64 v73; // [rsp+458h] [rbp+358h]
  int *v74; // [rsp+460h] [rbp+360h]
  __int64 v75; // [rsp+468h] [rbp+368h]
  __int64 *v76; // [rsp+470h] [rbp+370h]
  int v77; // [rsp+478h] [rbp+378h]
  int v78; // [rsp+47Ch] [rbp+37Ch]
  void *retaddr; // [rsp+4B8h] [rbp+3B8h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v38 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v38, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v38);
  }
  KeIntSteerSnapPerf(&v50, &v51);
  KeComplementAffinityEx(&v59, &PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(KiCachedSystemAllowedCpuSet, &KiCachedSystemAllowedCpuSetVersion);
  v0 = v59;
  if ( v59 >= (unsigned int)KiCachedSystemAllowedCpuSet[0] )
    v0 = KiCachedSystemAllowedCpuSet[0];
  v59 = v0;
  for ( i = 0; i < v59; v62[v2] &= *(_QWORD *)&KiCachedSystemAllowedCpuSet[4 * v2 + 4] )
    v2 = i++;
  v61 = 0;
  for ( j = 20; i < j; v62[v3] = 0LL )
    v3 = i++;
  v57 = 1310721LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  memset(v58, 0, 0xA0uLL);
  v7 = qword_1403825B8[0];
  v8 = v51;
  v48 = qword_1403825B8[0];
  v9 = 0;
  v47 = KeActiveProcessors;
LABEL_11:
  v10 = PpmIntSteerTrigger;
  while ( v7 )
  {
LABEL_13:
    _BitScanForward64(&v11, v7);
    ++v4;
    v7 &= ~(1LL << v11);
    v52 = v11;
    v48 = v7;
    v43 = KiProcessorNumberToIndexMappingTable[64 * v9 + (unsigned __int8)v11];
    v12 = v43;
    if ( ((v62[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v12] >> 6] >> (KiProcessorIndexToNumberMappingTable[v12] & 0x3F)) & 1) == 0 )
    {
      *(_QWORD *)(v10 + 8LL * v43) = 0LL;
      goto LABEL_11;
    }
    ++v6;
    if ( !*(_QWORD *)(v10 + 8LL * v43) )
    {
      *(_QWORD *)(v10 + 8LL * v43) = v8;
      v10 = PpmIntSteerTrigger;
    }
    if ( v8 - *(_QWORD *)(v10 + 8LL * (unsigned int)v12) >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
    {
      v13 = KiProcessorIndexToNumberMappingTable[(unsigned int)v12];
      v14 = v13 & 0x3F;
      v15 = v13 >> 6;
      if ( (unsigned __int16)v57 <= (unsigned int)v15 )
        LOWORD(v57) = v15 + 1;
      v16 = &v58[v15];
      v17 = *v16;
      _bittestandset64(&v17, v14);
      *v16 = v17;
      ++v5;
    }
  }
  while ( 1 )
  {
    v49 = ++v9;
    if ( v9 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
    v7 = *(_QWORD *)&KeActiveProcessors[2 * v9 + 2];
    v48 = v7;
    if ( v7 )
      goto LABEL_13;
  }
  if ( !v5 )
  {
    if ( v6 )
    {
      KeCopyAffinityEx(&v57, &v59);
      v5 = v6;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(KiCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v43 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(&v57, FirstSetRightAffinity);
      v5 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_23;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx(&v55, KeActiveProcessors);
      v6 = v4;
      break;
    case 2:
      KeCopyAffinityEx(&v55, &v57);
      v6 = v5;
      break;
    case 3:
      v37 = &v59;
LABEL_56:
      KeCopyAffinityEx(&v55, v37);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_23:
        v18 = PpmIntSteerLoadMax + v50;
        if ( PpmIntSteerLoadMax == 50 )
          v6 = v18 / 0x32;
        else
          v6 = v18 / PpmIntSteerLoadMax;
        if ( v6 < v5 )
        {
          v55 = 1310721LL;
          memset(Src, 0, 0xA0uLL);
          v63[0] = 1310721LL;
          memset(&v63[1], 0, 0xA0uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v6, &v57, 0LL, v63, &v55);
          v19 = 0;
          if ( (_WORD)v55 )
          {
            v20 = Src;
            v21 = (unsigned __int16)v55;
            do
            {
              v22 = *v20++;
              v19 += (unsigned int)((0x101010101010101LL
                                   * ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v21;
            }
            while ( v21 );
          }
          v23 = v19 < v6;
          if ( v19 > v6 )
          {
            v55 = 1310721LL;
            memset(Src, 0, 0xA0uLL);
            v23 = v6 != 0;
            v19 = 0;
          }
          if ( v23 )
          {
            KeSubtractAffinityEx(&v57, v63, v64);
            v48 = v65;
            v47 = (int *)v64;
            v49 = 0;
            while ( (int)KiEnumerateNextProcessorNumber(&v44, &v47) >= 0 )
            {
              v43 = KiProcessorNumberToIndexMappingTable[64 * v44 + v45];
              if ( ((Src[(unsigned int)KiProcessorIndexToNumberMappingTable[v43] >> 6] >> (KiProcessorIndexToNumberMappingTable[v43] & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(&v55, v43);
                if ( ++v19 >= v6 )
                  goto LABEL_38;
              }
            }
            if ( v19 < v6 )
            {
              v48 = v58[0];
              v47 = (int *)&v57;
              v49 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v43, &v47) )
              {
                if ( ((Src[(unsigned int)KiProcessorIndexToNumberMappingTable[v43] >> 6] >> (KiProcessorIndexToNumberMappingTable[v43] & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(&v55, v43);
                  if ( ++v19 >= v6 )
                    break;
                }
              }
            }
          }
          break;
        }
        v6 = v5;
        v37 = &v57;
        goto LABEL_56;
      }
      v55 = 1310721LL;
      memset(Src, 0, 0xA0uLL);
      KeAddProcessorAffinityEx(&v55, (unsigned int)(PpmIntSteerMode - 5));
      v6 = 1;
      break;
  }
LABEL_38:
  if ( (unsigned int)KeIsEmptyAffinityEx(&v55) )
    KeAddProcessorAffinityEx(&v55, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution(&v55, v6);
  KiIntSteerMask = v55;
  dword_1402E2464 = 0;
  if ( (_WORD)v55 )
    memmove(&qword_1402E2468, Src, 8LL * (unsigned __int16)v55);
  KiIntSteerMaskCount = v6;
  if ( KiIntSteerEtwHandle )
  {
    LOBYTE(v25) = 4;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(KiIntSteerEtwHandle + 32) + 80LL, v25, 1LL)
      || *(_BYTE *)(v29 + 100) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v29 + 40) + 80LL, v26, v27) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
      v71 = 4LL;
      v70 = &KiIntTrackRootCount;
      v73 = 4LL;
      v72 = &KiIntSteerMaskCount;
      v74 = &KiIntSteerMask;
      v75 = 2LL;
      v76 = &qword_1402E2468;
      v78 = 0;
      v77 = 160 * v28;
      EtwWrite(v29, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 5u, &UserData);
      v29 = KiIntSteerEtwHandle;
    }
    if ( v29 )
    {
      LOBYTE(v26) = 4;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v29 + 32) + 80LL, v26, 1LL)
        || *(_BYTE *)(v32 + 100) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v32 + 40) + 80LL, v30, v31) )
      {
        v53[1] = qword_1403825B8[0];
        v53[0] = KeActiveProcessors;
        v54 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v46, v53) )
        {
          v66.Ptr = (ULONGLONG)&v46;
          *(_QWORD *)&v66.Size = 4LL;
          v68 = 4LL;
          v67 = KiProcessorBlock[v46] + 11544;
          EtwWrite(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 2u, &v66);
        }
        v32 = KiIntSteerEtwHandle;
      }
      if ( v32 )
      {
        LOBYTE(v30) = 4;
        if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v32 + 32) + 80LL, v30, 1LL)
          || *(_BYTE *)(v35 + 100) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v35 + 40) + 80LL, v33, v34) )
        {
          for ( k = (ULONG_PTR *)KiIntTrackRootList; k != &KiIntTrackRootList; k = (ULONG_PTR *)*k )
          {
            if ( k[22] != k[20] )
            {
              for ( m = (ULONG_PTR *)k[2]; m != k + 2; m = (ULONG_PTR *)*m )
                KiIntSteerLogState(m, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
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
