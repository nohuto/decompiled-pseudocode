/*
 * XREFs of KeStartThread @ 0x14000F67C
 * Callers:
 *     KiInitializeIdleThread @ 0x1403F9B84 (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x14000DB6C (KiSelectIdealProcessor.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14000FA64 (KiUpdateNodeAffinitizedFlag.c)
 *     KiAcquireProcessLockExclusive @ 0x14000FB0C (KiAcquireProcessLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiFreezeSingleThread @ 0x1400D268C (KiFreezeSingleThread.c)
 *     KeSelectNodeForAffinity @ 0x14012B5E8 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiExtendProcessAffinity @ 0x14020A558 (KiExtendProcessAffinity.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, __int64 *a2, int *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // r14
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rcx
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // r14
  __int64 v20; // r15
  __int64 **v21; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v23; // edx
  __int64 v24; // rdx
  unsigned int v25; // edi
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 result; // rax
  char v29; // [rsp+20h] [rbp-40h]
  _BYTE v30[7]; // [rsp+21h] [rbp-3Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h]
  void *retaddr; // [rsp+98h] [rbp+38h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v29 = 0;
    v7 = *(_DWORD *)(v6 + 92);
  }
  else
  {
    v29 = 1;
    v6 = 0LL;
    v7 = 0;
    if ( !a2 )
    {
      v32 = 0LL;
      v33 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (2 * (*(int *)(v9 + 440) >> 1))) & 2;
  KiAcquireProcessLockExclusive(v9, v30);
  v12 = *(_BYTE *)(v9 + 444);
  *(_BYTE *)(a1 + 563) = v12;
  *(_BYTE *)(a1 + 195) = v12;
  if ( !v4 )
  {
    if ( (_KPROCESS *)v9 == CurrentThread->Process )
    {
      LOWORD(v33) = CurrentThread->UserAffinity.Group;
      v13 = *(_QWORD *)(v9 + 8LL * (unsigned __int16)v33 + 88);
    }
    else
    {
      v10 = *(unsigned __int16 *)(v9 + 80);
      v14 = 0;
      if ( !(_WORD)v10 )
      {
LABEL_17:
        v4 = &v32;
        goto LABEL_23;
      }
      v11 = 1LL;
      while ( !*(_QWORD *)(v9 + 8LL * v14 + 88) )
      {
        if ( ++v14 >= (unsigned __int16)v10 )
          goto LABEL_17;
      }
      v33 = v14;
      v13 = *(_QWORD *)(v9 + 8LL * v14 + 88);
    }
    v32 = v13;
    goto LABEL_17;
  }
  v11 = *((unsigned __int16 *)v4 + 4);
  v10 = *(_QWORD *)(v9 + 8 * v11 + 88);
  if ( !v10 || (v10 & *v4) != *v4 )
    KiExtendProcessAffinity(v9, (unsigned __int16)v11);
  if ( !*v4 )
    *v4 = *(_QWORD *)(v9 + 8LL * *((unsigned __int16 *)v4 + 4) + 88);
LABEL_23:
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *v4;
  KiUpdateNodeAffinitizedFlag(a1, v10, v11, 0LL);
  if ( a3 )
  {
    v18 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v17 = *((unsigned __int16 *)v4 + 4);
      v7 = *(_DWORD *)(v9 + 4 * v17 + 448);
      v6 = KeNodeBlock[*(unsigned __int16 *)(v9 + 2 * v17 + 528)];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v18 = KiSelectIdealProcessor(v6, v7, (__int64)v4);
    if ( v29 )
      *(_DWORD *)(v9 + 4LL * *((unsigned __int16 *)v4 + 4) + 448) = v18;
  }
  *(_DWORD *)(a1 + 196) = v18;
  v19 = (_QWORD *)(v9 + 48);
  *(_DWORD *)(a1 + 588) = v18;
  v20 = KiProcessorBlock[v18];
  if ( (_QWORD *)*v19 == v19 && (_UNKNOWN *)v9 != &KiInitialProcess )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v21 = (__int64 **)qword_140338D28;
    *(_QWORD *)(v9 + 584) = qword_140338D28;
    *(_QWORD *)(v9 + 576) = &KiProcessListHead;
    if ( *v21 != &KiProcessListHead )
      __fastfail(3u);
    *v21 = (__int64 *)(v9 + 576);
    qword_140338D28 = v9 + 576;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_39;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_39;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_39:
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(int *)(v9 + 440) >> 2 << 7)) & 0x80;
  v23 = *(unsigned __int8 *)(v9 + 445);
  *(_BYTE *)(a1 + 651) = v23;
  v24 = (unsigned int)(KiCyclesPerClockQuantum * v23);
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
  *(_QWORD *)(a1 + 32) = v24;
  v25 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)v9, 7u) )
  {
    do
    {
      if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v25);
    }
    while ( (*(_DWORD *)v9 & 0x80u) != 0 );
  }
  v26 = *(_QWORD **)(v9 + 56);
  v27 = a1 + 760;
  *(_QWORD *)(a1 + 760) = v19;
  *(_QWORD *)(a1 + 768) = v26;
  if ( (_QWORD *)*v26 != v19 )
    __fastfail(3u);
  *v26 = v27;
  *(_QWORD *)(v9 + 56) = v27;
  _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
  if ( (*(_DWORD *)(v9 + 440) & 8) != 0 )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v9 + 608);
  if ( *(_QWORD *)(v9 + 608) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v20, a1, v15, v16);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9 + 64, retaddr);
  else
    *(_DWORD *)(v9 + 64) = 0;
  result = v30[0];
  __writecr8(v30[0]);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 572), 8u);
  return result;
}
