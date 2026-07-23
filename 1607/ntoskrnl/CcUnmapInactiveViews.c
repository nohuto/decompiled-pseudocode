/*
 * XREFs of CcUnmapInactiveViews @ 0x140141F0C
 * Callers:
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     CcGetVacbLargeOffset @ 0x140017DC8 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x140017E34 (CcSetVacbInFreeList.c)
 *     CcDereferenceVacbArray @ 0x140017E94 (CcDereferenceVacbArray.c)
 *     SetVacb @ 0x14001817C (SetVacb.c)
 *     CcReferenceVacbArray @ 0x1400181B8 (CcReferenceVacbArray.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018490 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcCanReuseVacb @ 0x1401B2478 (CcCanReuseVacb.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401B2638 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401B26D0 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 */

__int64 __fastcall CcUnmapInactiveViews(unsigned int a1, char a2, _QWORD *a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  __int64 RandomVacbArrayWithReference; // rsi
  int v6; // r14d
  __int64 v7; // r13
  unsigned int v8; // ebp
  bool v10; // bl
  unsigned int v11; // ebx
  KIRQL v12; // di
  _DWORD *v13; // rax
  unsigned int v14; // ebx
  ULONG v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r11
  KIRQL v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rbx
  bool v22; // di
  int v23; // r12d
  int v24; // r14d
  __int64 v25; // rax
  __int64 VacbLargeOffset; // rdi
  unsigned int v27; // eax
  KIRQL v28; // bl
  KIRQL v29; // bl
  KIRQL v30; // bl
  unsigned int v31; // ebp
  int v32; // edi
  __int64 v33; // rbx
  int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  unsigned int v36; // [rsp+28h] [rbp-60h]
  int v37; // [rsp+2Ch] [rbp-5Ch]
  int v38; // [rsp+30h] [rbp-58h]
  unsigned int v39; // [rsp+34h] [rbp-54h]
  unsigned int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+98h] [rbp+10h]
  bool v43; // [rsp+A8h] [rbp+20h]

  v40 = a1;
  LODWORD(v3) = -1;
  v35 = 0;
  v4 = 0;
  v39 = 0;
  RandomVacbArrayWithReference = 0LL;
  v34 = 0;
  v6 = 0;
  v38 = 0;
  v7 = 0LL;
  v37 = 0;
  v8 = 0;
  v36 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v38 = 1;
  }
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  v41 = a2 & 1;
  v10 = v41 == 0;
  v43 = v10;
  do
  {
    while ( v4 < a1 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
        goto LABEL_20;
      LODWORD(v3) = -1;
      if ( v10 )
      {
        RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
        goto LABEL_19;
      }
      v11 = v8;
      v12 = KeAcquireQueuedSpinLock(4uLL);
      while ( 1 )
      {
        v13 = CcReferenceVacbArray(v11);
        RandomVacbArrayWithReference = (__int64)v13;
        if ( v13 )
          break;
        if ( ++v11 >= 0x500 )
        {
          KeReleaseQueuedSpinLock(4uLL, v12);
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_16;
        }
      }
      CcRecalculateVacbArrayHighwaterMark(v13);
      KeReleaseQueuedSpinLock(4uLL, v12);
LABEL_16:
      v10 = v43;
      v36 = ++v8;
      if ( RandomVacbArrayWithReference )
      {
LABEL_19:
        if ( *(_DWORD *)(RandomVacbArrayWithReference + 4) == 1 )
          goto LABEL_27;
LABEL_20:
        if ( !v10 )
        {
          if ( (_DWORD)v3 == -1 )
            LODWORD(v3) = *(_DWORD *)(RandomVacbArrayWithReference + 8) + 1;
          if ( (_DWORD)v3 )
          {
            do
            {
              v3 = (unsigned int)(v3 - 1);
              v16 = RandomVacbArrayWithReference + 8 * ((unsigned int)v3 + 2LL + 4 * v3);
              if ( (unsigned __int8)CcCanReuseVacb(v16, v7) )
                break;
              v16 = v17;
            }
            while ( (_DWORD)v3 );
            if ( v16 )
              goto LABEL_37;
          }
LABEL_27:
          CcDereferenceVacbArray(RandomVacbArrayWithReference, 0);
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_28;
        }
        v14 = 0;
        while ( 1 )
        {
          v15 = RtlRandomEx(&CcRandomSeed);
          v16 = RandomVacbArrayWithReference
              + 8
              * (v15 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1)
               + 4LL * (v15 % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1))
               + 2);
          if ( !(unsigned __int8)CcCanReuseVacb(v16, 0LL) )
          {
            ++v14;
            v16 = 0LL;
          }
          if ( v16 )
            break;
          if ( v14 > 0x10 )
          {
            ++CcDbgRandomFailed;
            v10 = 0;
            v43 = 0;
            goto LABEL_27;
          }
        }
        v10 = v43;
LABEL_37:
        v18 = KeAcquireQueuedSpinLock(4uLL);
        if ( (unsigned __int8)CcCanReuseVacb(v16, v7) )
        {
          KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
          v19 = *(_QWORD *)(v16 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v19 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v19 )
          {
            ++*(_DWORD *)(v19 + 4);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
            v20 = *(_QWORD *)(v16 + 8);
            v21 = *(_QWORD *)(v16 + 16);
            v22 = (*(_DWORD *)(v20 + 152) & 0x200) != 0;
            KeReleaseQueuedSpinLock(4uLL, v18);
            v23 = v22;
            CcAcquireBcbLockAndVacbLock(v22, (struct _FAST_MUTEX *)v20);
            v24 = 0;
            if ( v21 < 0
              || (v25 = *(_QWORD *)(v20 + 32), v21 >= v25)
              || (v25 <= 0x2000000
                ? (VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v20 + 88) + 8 * ((unsigned __int64)(unsigned int)v21 >> 18)))
                : (VacbLargeOffset = CcGetVacbLargeOffset(v20, v21)),
                  !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16)) )
            {
              CcReleaseBcbLockAndVacbLock(v23, (struct _FAST_MUTEX *)v20);
              v30 = KeAcquireQueuedSpinLock(5uLL);
              CcDecrementOpenCount((_DWORD *)v20);
              KeReleaseQueuedSpinLock(5uLL, v30);
              v4 = v35;
LABEL_58:
              v8 = v36;
              v10 = v43;
              goto LABEL_61;
            }
            SetVacb(v20, v21, 0LL);
            if ( CcNumberOfFreeHighPriorityVacbs >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
            {
              if ( !v38 )
              {
                v27 = v37 & 0xFFFFFFFD;
                v37 &= ~2u;
                if ( !v7 && v41 )
                  v7 = *(_QWORD *)VacbLargeOffset;
                goto LABEL_49;
              }
            }
            else
            {
              v24 = 1;
            }
            v7 = 0LL;
            v27 = v37 | 2;
            v37 |= 2u;
LABEL_49:
            CcUnmapVacb(VacbLargeOffset, v20, v27);
            CcReleaseBcbLockAndVacbLock(v23, (struct _FAST_MUTEX *)v20);
            v4 = v35;
            if ( !v24 )
            {
              v4 = v35 + 1;
              v39 = 1;
              ++v35;
              if ( v38 )
              {
                v38 = 0;
                *a3 = *(_QWORD *)VacbLargeOffset;
                *(_QWORD *)VacbLargeOffset = 0LL;
              }
            }
            v28 = KeAcquireQueuedSpinLock(4uLL);
            *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
            CcSetVacbInFreeList((_QWORD *)VacbLargeOffset, v24);
            KeReleaseQueuedSpinLock(4uLL, v28);
            v29 = KeAcquireQueuedSpinLock(5uLL);
            CcDecrementOpenCount((_DWORD *)v20);
            KeReleaseQueuedSpinLock(5uLL, v29);
            goto LABEL_58;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
        }
        v7 = 0LL;
        KeReleaseQueuedSpinLock(4uLL, v18);
LABEL_61:
        a1 = v40;
        v6 = v34;
      }
      else
      {
LABEL_28:
        a1 = v40;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray(RandomVacbArrayWithReference, 0);
      a1 = v40;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a1 )
      break;
    v6 = 1;
    v34 = 1;
    v31 = (a1 - v4) << 18;
    v32 = 0;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v33 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v32 |= (*(__int64 (__fastcall **)(_QWORD))(v33 + 16))(v31);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v33 = *(_QWORD *)v33;
      }
      while ( (__int64 *)v33 != &CcBcbTrimNotificationList );
      v6 = 1;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v8 = v36;
    v10 = v43;
    a1 = v40;
  }
  while ( v32 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v39;
}
