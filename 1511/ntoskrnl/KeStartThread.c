/*
 * XREFs of KeStartThread @ 0x140028824
 * Callers:
 *     KiInitializeIdleThread @ 0x1403A9D08 (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14002AA84 (KiUpdateNodeAffinitizedFlag.c)
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiSelectIdealProcessor @ 0x140093804 (KiSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x140096888 (KeSelectNodeForAffinity.c)
 *     KiFreezeSingleThread @ 0x140096FC0 (KiFreezeSingleThread.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeFirstGroupAffinityEx @ 0x1400EB098 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiExtendProcessAffinity @ 0x1401CB498 (KiExtendProcessAffinity.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, __int64 *a2, int *a3)
{
  __int64 *v4; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  char v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rsi
  __int64 v15; // rbp
  int v16; // ecx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 **v23; // rcx
  char v24; // r8
  char v25; // cl
  __int64 v26; // r8
  __int64 v27; // rdx
  char v28[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-58h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v8 = 0;
    v7 = *(_DWORD *)(v6 + 92);
  }
  else
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 1;
    if ( !a2 )
    {
      v30 = 0LL;
      v31 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (2 * (*(int *)(v10 + 440) >> 1))) & 2;
  KiAcquireProcessLockExclusive(v10, v28);
  v11 = *(_BYTE *)(v10 + 444);
  *(_BYTE *)(a1 + 563) = v11;
  *(_BYTE *)(a1 + 195) = v11;
  if ( v4 )
  {
    v26 = *((unsigned __int16 *)v4 + 4);
    v27 = *(_QWORD *)(v10 + 8 * v26 + 88);
    if ( !v27 || (v27 & *v4) != *v4 )
      KiExtendProcessAffinity(v10, (unsigned __int16)v26);
    if ( !*v4 )
      *v4 = *(_QWORD *)(v10 + 8LL * *((unsigned __int16 *)v4 + 4) + 88);
  }
  else
  {
    if ( (_KPROCESS *)v10 == CurrentThread->Process )
    {
      LOWORD(v31) = CurrentThread->UserAffinity.Group;
      v30 = *(_QWORD *)(v10 + 8LL * (unsigned __int16)v31 + 88);
    }
    else
    {
      KeFirstGroupAffinityEx(&v30, v10 + 80);
    }
    v4 = &v30;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v13 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v12 = *((unsigned __int16 *)v4 + 4);
      v7 = *(_DWORD *)(v10 + 4 * v12 + 448);
      v6 = KeNodeBlock[*(unsigned __int16 *)(v10 + 2 * v12 + 528)];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v13 = KiSelectIdealProcessor(v6, v7, v4);
    if ( v8 )
      *(_DWORD *)(v10 + 4LL * *((unsigned __int16 *)v4 + 4) + 448) = v13;
  }
  *(_DWORD *)(a1 + 196) = v13;
  v14 = (_QWORD *)(v10 + 48);
  *(_DWORD *)(a1 + 588) = v13;
  v15 = KiProcessorBlock[v13];
  if ( (_QWORD *)*v14 == v14 && (_UNKNOWN *)v10 != &KiInitialProcess )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v23 = (__int64 **)qword_1402E88A8;
    *(_QWORD *)(v10 + 584) = qword_1402E88A8;
    *(_QWORD *)(v10 + 576) = &KiProcessListHead;
    if ( *v23 != &KiProcessListHead )
      __fastfail(3u);
    *v23 = (__int64 *)(v10 + 576);
    qword_1402E88A8 = v10 + 576;
    KxReleaseQueuedSpinLock(&LockHandle, &KiProcessListHead, v21, v22);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(int *)(v10 + 440) >> 2 << 7)) & 0x80;
  v16 = *(unsigned __int8 *)(v10 + 445);
  *(_BYTE *)(a1 + 651) = v16;
  v17 = (unsigned int)(KiCyclesPerClockQuantum * v16);
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
  *(_QWORD *)(a1 + 32) = v17;
  KiAcquireKobjectLockSafe(v10);
  v18 = *(_QWORD **)(v10 + 56);
  v19 = a1 + 760;
  *(_QWORD *)(a1 + 760) = v14;
  *(_QWORD *)(a1 + 768) = v18;
  if ( (_QWORD *)*v18 != v14 )
    __fastfail(3u);
  *v18 = v19;
  *(_QWORD *)(v10 + 56) = v19;
  _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
  if ( (*(_DWORD *)(v10 + 440) & 8) != 0 )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v10 + 608);
  if ( *(_QWORD *)(v10 + 608) )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v15, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1498LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 2) == 0 )
  {
    v24 = *(_BYTE *)(a1 + 195);
    v25 = *(_BYTE *)(a1 + 563) + PsPrioritySeparation;
    if ( v25 >= 16 )
      v25 = 15;
    if ( v25 > v24 )
    {
      *(_BYTE *)(a1 + 564) = (v25 - v24) & 0xF;
      KiUpdateThreadPriority(0LL, a1, (unsigned int)v25, 0LL);
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 64));
  result = (unsigned __int8)v28[0];
  __writecr8((unsigned __int8)v28[0]);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 572), 8u);
  return result;
}
