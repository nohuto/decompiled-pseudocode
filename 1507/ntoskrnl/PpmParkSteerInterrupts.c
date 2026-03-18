/*
 * XREFs of PpmParkSteerInterrupts @ 0x1400E87E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntSteerLogProc @ 0x1400E9FE4 (KiIntSteerLogProc.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiIntSteerDistributeInterrupts @ 0x1400EA110 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x1400EA300 (KiIntSteerCalculateDistribution.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1400EA560 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeIntSteerSnapPerf @ 0x1400EA650 (KeIntSteerSnapPerf.c)
 *     KiIntSteerLogState @ 0x140155CB8 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r8d
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int16 v4; // bx
  __int16 v5; // cx
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned __int64 v12; // r9
  __int16 v13; // dx
  __int64 v14; // r11
  unsigned __int16 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned __int16 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // r10
  unsigned int v21; // r8d
  __int64 v22; // rcx
  char v23; // r8
  unsigned __int16 v24; // di
  unsigned __int16 v25; // r12
  unsigned __int16 v26; // r13
  unsigned int v27; // r14d
  unsigned __int64 *v28; // rdi
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  bool v31; // cf
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // bx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  unsigned int v38; // r10d
  unsigned __int16 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned int v41; // edi
  __int64 v42; // rcx
  char v43; // di
  unsigned __int16 v44; // cx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int16 v46; // di
  REGHANDLE v47; // rbx
  SIZE_T v49; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  unsigned int v53; // r8d
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 *v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned int v59; // ecx
  char v60; // di
  __int64 v61; // rcx
  unsigned __int64 v62; // rdi
  unsigned __int16 v63; // r8
  unsigned __int64 v64; // rdx
  unsigned int v65; // r9d
  __int64 v66; // rcx
  char v67; // r9
  __int64 v68; // rcx
  ULONG_PTR *k; // rdi
  ULONG_PTR *m; // rbx
  unsigned __int16 v71; // [rsp+40h] [rbp-C0h]
  unsigned int v72; // [rsp+44h] [rbp-BCh]
  _DWORD v73[6]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  _QWORD Src[21]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v77; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v78[21]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int16 i; // [rsp+1D0h] [rbp+D0h]
  unsigned __int16 v80; // [rsp+1D2h] [rbp+D2h]
  int v81; // [rsp+1D4h] [rbp+D4h]
  _QWORD v82[21]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 v83; // [rsp+280h] [rbp+180h]
  unsigned __int16 v84; // [rsp+282h] [rbp+182h]
  int j; // [rsp+284h] [rbp+184h]
  _QWORD v86[21]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v87; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v88[21]; // [rsp+338h] [rbp+238h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3E0h] [rbp+2E0h] BYREF
  int *v90; // [rsp+3F0h] [rbp+2F0h]
  __int64 v91; // [rsp+3F8h] [rbp+2F8h]
  int *v92; // [rsp+400h] [rbp+300h]
  __int64 v93; // [rsp+408h] [rbp+308h]
  int *v94; // [rsp+410h] [rbp+310h]
  __int64 v95; // [rsp+418h] [rbp+318h]
  __int64 *v96; // [rsp+420h] [rbp+320h]
  int v97; // [rsp+428h] [rbp+328h]
  int v98; // [rsp+42Ch] [rbp+32Ch]
  void *retaddr; // [rsp+468h] [rbp+368h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v49 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v49, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v49);
  }
  KeIntSteerSnapPerf(v73, &v74);
  v0 = 0;
  if ( PpmPerfCoreParkingMask[0] )
  {
    v1 = 0LL;
    v0 = (unsigned __int16)PpmPerfCoreParkingMask[0];
    v2 = (unsigned __int16)PpmPerfCoreParkingMask[0];
    do
    {
      v3 = qword_140320A48[v1++];
      *(_QWORD *)((char *)&i + v1 * 8) = ~v3;
      --v2;
    }
    while ( v2 );
  }
  v4 = word_140320A42;
  if ( v0 < (unsigned __int16)word_140320A42 )
    memset(&v82[v0], 0xFFu, 8LL * ((unsigned __int16)word_140320A42 - v0));
  v81 = 0;
  v80 = v4;
  KeQuerySystemAllowedCpuSetAffinity(KiCachedSystemAllowedCpuSet, &KiCachedSystemAllowedCpuSetVersion);
  if ( v4 < KiCachedSystemAllowedCpuSet[0] )
    v5 = v4;
  else
    v5 = KiCachedSystemAllowedCpuSet[0];
  v71 = v5;
  v6 = 0;
  for ( i = v5; v6 < i; v71 = i )
  {
    v7 = v6++;
    v82[v7] &= *(_QWORD *)&KiCachedSystemAllowedCpuSet[4 * v7 + 4];
  }
  v81 = 0;
  v80 = 20;
  if ( v6 < 0x14u )
  {
    do
    {
      v8 = v6++;
      v82[v8] = 0LL;
    }
    while ( v6 < v80 );
    v71 = i;
  }
  v77 = 1310721LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  memset(v78, 0, 0xA0uLL);
  v12 = qword_1403D15E8[0];
  v13 = 0;
  v14 = PpmIntSteerTrigger;
  v15 = 0;
  v16 = v74;
  v17 = PpmIntSteerTriggerMax;
LABEL_17:
  v18 = KeActiveProcessors[0];
  while ( v12 )
  {
LABEL_19:
    _BitScanForward64(&v19, v12);
    ++v9;
    v12 &= ~(1LL << v19);
    v73[4] = v19;
    v20 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v15 + (unsigned __int8)v19];
    v21 = KiProcessorIndexToNumberMappingTable[v20];
    if ( ((v82[(unsigned __int64)v21 >> 6] >> (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)) & 1) == 0 )
    {
      v13 = 0;
      *(_QWORD *)(v14 + 8 * v20) = 0LL;
      goto LABEL_17;
    }
    ++v11;
    if ( !*(_QWORD *)(v14 + 8 * v20) )
    {
      *(_QWORD *)(v14 + 8 * v20) = v16;
      v18 = KeActiveProcessors[0];
    }
    v13 = 0;
    if ( v16 - *(_QWORD *)(v14 + 8 * v20) >= (unsigned __int64)(10000 * v17) )
    {
      v22 = v21 >> 6;
      v23 = v21 & 0x3F;
      if ( (unsigned __int16)v77 <= (unsigned int)v22 )
        LOWORD(v77) = v22 + 1;
      ++v10;
      v78[v22] |= 1LL << v23;
      v13 = 0;
    }
  }
  while ( ++v15 < (unsigned int)v18 )
  {
    v12 = qword_1403D15E8[v15];
    if ( v12 )
      goto LABEL_19;
  }
  v72 = v9;
  v24 = v80;
  if ( v10 )
  {
    v25 = v77;
    v26 = v71;
  }
  else if ( v11 )
  {
    v26 = v71;
    LOWORD(v77) = v71;
    v25 = v71;
    WORD1(v77) = v80;
    HIDWORD(v77) = 0;
    if ( v71 )
    {
      memmove(v78, v82, 8LL * v71);
      v25 = v77;
    }
    v10 = v11;
  }
  else
  {
    if ( KiCachedSystemAllowedCpuSet[0] )
    {
      while ( 1 )
      {
        v51 = *(_QWORD *)&KiCachedSystemAllowedCpuSet[4 * v13 + 4];
        if ( v51 )
          break;
        if ( ++v13 >= (int)KiCachedSystemAllowedCpuSet[0] )
          goto LABEL_85;
      }
      _BitScanForward64(&v58, v51);
      v73[2] = v58;
      v52 = (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v58 + (v13 << 6))];
    }
    else
    {
LABEL_85:
      v52 = 0xFFFFFFFFLL;
    }
    if ( (_DWORD)v52 == -1 )
      v52 = 0LL;
    v53 = KiProcessorIndexToNumberMappingTable[v52];
    v54 = v53 >> 6;
    v55 = v53 & 0x3F;
    if ( (unsigned __int16)v77 <= (unsigned int)v54 )
      LOWORD(v77) = v54 + 1;
    v26 = v71;
    v56 = &v78[v54];
    v57 = *v56;
    _bittestandset64(&v57, v55);
    *v56 = v57;
    v25 = v77;
    v10 = 1;
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_30;
  switch ( PpmIntSteerMode )
  {
    case 1:
      LOWORD(v75) = v18;
      WORD1(v75) = HIWORD(KeActiveProcessors[0]);
      HIDWORD(v75) = 0;
      if ( v18 )
        memmove(Src, qword_1403D15E8, 8LL * v18);
      v11 = v72;
      break;
    case 2:
      LOWORD(v75) = v25;
      WORD1(v75) = WORD1(v77);
      HIDWORD(v75) = 0;
      if ( v25 )
        memmove(Src, v78, 8LL * v25);
      v11 = v10;
      break;
    case 3:
      LOWORD(v75) = v26;
      WORD1(v75) = v24;
      HIDWORD(v75) = 0;
      if ( v26 )
        memmove(Src, v82, 8LL * v26);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_30:
        v11 = (PpmIntSteerLoadMax + v73[0]) / (unsigned int)PpmIntSteerLoadMax;
        if ( v11 >= v10 )
        {
          v11 = v10;
          WORD1(v75) = WORD1(v77);
          LOWORD(v75) = v25;
          HIDWORD(v75) = 0;
          if ( v25 )
            memmove(Src, v78, 8LL * v25);
        }
        else
        {
          v75 = 1310721LL;
          memset(Src, 0, 0xA0uLL);
          v87 = 1310721LL;
          memset(v88, 0, 0xA0uLL);
          if ( PpmParkPreferenceHandler )
          {
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v11, &v77, 0LL, &v87, &v75);
            v25 = v77;
          }
          v27 = 0;
          if ( (_WORD)v75 )
          {
            v28 = Src;
            v29 = (unsigned __int16)v75;
            do
            {
              v30 = *v28++;
              v27 += (unsigned int)((0x101010101010101LL
                                   * ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v30 - ((v30 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v30 - ((v30 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v29;
            }
            while ( v29 );
          }
          v31 = v27 < v11;
          if ( v27 > v11 )
          {
            v75 = 1310721LL;
            memset(Src, 0, 0xA0uLL);
            v31 = v11 != 0;
            v27 = 0;
          }
          if ( v31 )
          {
            v32 = v87;
            v33 = 0;
            v84 = 20;
            v83 = v25;
            if ( v25 < (unsigned __int16)v87 )
              v32 = v25;
            if ( v32 )
            {
              v33 = v32;
              v34 = 0LL;
              v35 = v32;
              do
              {
                v86[v34] = v78[v34] & ~v88[v34];
                ++v34;
                --v35;
              }
              while ( v35 );
            }
            if ( v33 < v25 )
            {
              memmove(&v86[v33], &v78[v33], 8LL * (unsigned __int16)(v25 - v33));
              v33 = v25;
            }
            for ( j = 0; v33 < v84; v86[v36] = 0LL )
              v36 = v33++;
            v37 = v86[0];
            v38 = v83;
            v39 = 0;
            while ( v37 )
            {
LABEL_50:
              _BitScanForward64(&v40, v37);
              v37 &= ~(1LL << v40);
              v73[3] = v40;
              v41 = KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * v39
                                                                                            + (unsigned __int8)v40]];
              if ( ((Src[(unsigned __int64)v41 >> 6] >> (KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * v39 + (unsigned __int8)v40]] & 0x3F)) & 1) == 0 )
              {
                v42 = v41 >> 6;
                v43 = v41 & 0x3F;
                if ( (unsigned __int16)v75 <= (unsigned int)v42 )
                  LOWORD(v75) = v42 + 1;
                ++v27;
                Src[v42] |= 1LL << v43;
                if ( v27 >= v11 )
                  goto LABEL_54;
              }
            }
            while ( ++v39 < v38 )
            {
              v37 = v86[v39];
              if ( v37 )
                goto LABEL_50;
            }
            if ( v27 < v11 )
            {
              v62 = v78[0];
              v63 = 0;
              while ( v62 )
              {
LABEL_115:
                _BitScanForward64(&v64, v62);
                v62 &= ~(1LL << v64);
                v73[1] = v64;
                v65 = KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * v63
                                                                                              + (unsigned __int8)v64]];
                if ( ((Src[(unsigned __int64)v65 >> 6] >> (KiProcessorIndexToNumberMappingTable[KiProcessorNumberToIndexMappingTable[64 * v63 + (unsigned __int8)v64]] & 0x3F)) & 1) == 0 )
                {
                  v66 = v65 >> 6;
                  v67 = v65 & 0x3F;
                  if ( (unsigned __int16)v75 <= (unsigned int)v66 )
                    LOWORD(v75) = v66 + 1;
                  ++v27;
                  Src[v66] |= 1LL << v67;
                  if ( v27 >= v11 )
                    goto LABEL_54;
                }
              }
              while ( ++v63 < (unsigned int)v25 )
              {
                v62 = v78[v63];
                if ( v62 )
                  goto LABEL_115;
              }
            }
          }
        }
        break;
      }
      v75 = 1310721LL;
      memset(Src, 0, 0xA0uLL);
      v59 = KiProcessorIndexToNumberMappingTable[PpmIntSteerMode - 5];
      v60 = v59 & 0x3F;
      v61 = v59 >> 6;
      if ( (_DWORD)v61 )
        LOWORD(v75) = v61 + 1;
      v11 = 1;
      Src[v61] |= 1LL << v60;
      break;
  }
LABEL_54:
  v44 = 0;
  if ( (_WORD)v75 )
  {
    while ( !Src[v44] )
    {
      if ( ++v44 >= (unsigned __int16)v75 )
        goto LABEL_121;
    }
  }
  else
  {
LABEL_121:
    v68 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    if ( (unsigned __int16)v75 <= (unsigned int)v68 )
      LOWORD(v75) = v68 + 1;
    Src[v68] |= 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
  }
  KiIntSteerCalculateDistribution(&v75, v11);
  v46 = v75;
  KiIntSteerMask = v75;
  dword_1403328C4 = 0;
  if ( (_WORD)v75 )
  {
    memmove(qword_1403328C8, Src, 8LL * (unsigned __int16)v75);
    v46 = KiIntSteerMask;
  }
  v47 = KiIntSteerEtwHandle;
  KiIntSteerMaskCount = v11;
  if ( KiIntSteerEtwHandle && EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v91 = 4LL;
    v90 = &KiIntTrackRootCount;
    v93 = 4LL;
    v92 = &KiIntSteerMaskCount;
    v95 = 2LL;
    v94 = &KiIntSteerMask;
    v96 = qword_1403328C8;
    v98 = 0;
    v97 = 160 * v46;
    EtwWrite(v47, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 5u, &UserData);
  }
  KiIntSteerLogProc(0LL);
  if ( KiIntSteerEtwHandle )
  {
    if ( EtwEventEnabled(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
    {
      for ( k = (ULONG_PTR *)KiIntTrackRootList; k != &KiIntTrackRootList; k = (ULONG_PTR *)*k )
      {
        if ( k[21] != k[19] )
        {
          for ( m = (ULONG_PTR *)k[2]; m != k + 2; m = (ULONG_PTR *)*m )
            KiIntSteerLogState(m, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
        }
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
  else
    _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
  __writecr8(CurrentIrql);
  return 1;
}
