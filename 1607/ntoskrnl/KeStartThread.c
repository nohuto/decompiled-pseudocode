/*
 * XREFs of KeStartThread @ 0x1400F08BC
 * Callers:
 *     KiInitializeIdleThread @ 0x1403D4908 (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KiSelectIdealProcessor @ 0x14007D254 (KiSelectIdealProcessor.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KeFirstGroupAffinityEx @ 0x1400AA560 (KeFirstGroupAffinityEx.c)
 *     KeSelectNodeForAffinity @ 0x1400AE80C (KeSelectNodeForAffinity.c)
 *     KiFreezeSingleThread @ 0x1400C6E8C (KiFreezeSingleThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400F0CF8 (KiUpdateNodeAffinitizedFlag.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiExtendProcessAffinity @ 0x1401DAD98 (KiExtendProcessAffinity.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // rbp
  int v7; // r12d
  char v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v10; // rdi
  char BasePriority; // al
  __int64 v12; // rcx
  unsigned int v13; // eax
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v15; // rbp
  int QuantumReset; // ecx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  _LIST_ENTRY **v24; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  char v26; // r8
  char v27; // cl
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  char v32[8]; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+48h] [rbp-50h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity((__int64)a2);
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
      v34 = 0LL;
      v35 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (2 * (v10->ProcessFlags >> 1))) & 2;
  KiAcquireProcessLockExclusive(v10, v32);
  BasePriority = v10->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v30 = *((unsigned __int16 *)v4 + 4);
    v31 = v10->Affinity.Bitmap[v30];
    if ( !v31 || (v31 & *v4) != *v4 )
      KiExtendProcessAffinity(v10, (unsigned __int16)v30);
    if ( !*v4 )
      *v4 = v10->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v10 == CurrentThread->Process )
    {
      LOWORD(v35) = CurrentThread->UserAffinity.Group;
      v34 = v10->Affinity.Bitmap[(unsigned __int16)v35];
    }
    else
    {
      KeFirstGroupAffinityEx(&v34, &v10->Affinity.Count);
    }
    v4 = &v34;
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
      v7 = v10->ThreadSeed[v12];
      v6 = KeNodeBlock[v10->IdealNode[v12]];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v13 = KiSelectIdealProcessor(v6, v7, (__int64)v4);
    if ( v8 )
      v10->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v13;
  }
  *(_DWORD *)(a1 + 196) = v13;
  p_ThreadListHead = &v10->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v13;
  v15 = KiProcessorBlock[v13];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v10 != (_KPROCESS *)&KiInitialProcess )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v24 = (_LIST_ENTRY **)qword_14030E2C8;
    p_ProcessListEntry = &v10->ProcessListEntry;
    if ( *(__int64 **)qword_14030E2C8 != &KiProcessListHead )
      __fastfail(3u);
    v10->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_14030E2C8;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v24 = p_ProcessListEntry;
    qword_14030E2C8 = (__int64)&v10->ProcessListEntry;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (v10->ProcessFlags >> 2 << 7)) & 0x80;
  QuantumReset = (unsigned __int8)v10->QuantumReset;
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v17 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
  *(_QWORD *)(a1 + 32) = v17;
  KiAcquireKobjectLockSafe(&v10->Header.Lock);
  Blink = v10->ThreadListHead.Blink;
  v21 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
    __fastfail(3u);
  v21->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v21;
  v10->ThreadListHead.Blink = v21;
  _InterlockedAnd(&v10->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v10->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v10->SchedulingGroup;
  if ( v10->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v15, a1, v18, v19);
  v22 = *(_QWORD *)(a1 + 544);
  if ( *(_BYTE *)(v22 + 1466) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 2) == 0 )
  {
    v22 = 15LL;
    v26 = *(_BYTE *)(a1 + 195);
    v27 = *(_BYTE *)(a1 + 563) + PsPrioritySeparation;
    if ( v27 >= 16 )
      v27 = 15;
    if ( v27 > v26 )
    {
      *(_BYTE *)(a1 + 564) = (v27 - v26) & 0xF;
      KiUpdateThreadPriority(0LL, a1, v27, 0);
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1, v28, v29);
    }
  }
  LOBYTE(v22) = v32[0];
  result = KiReleaseProcessLockExclusive(v10, v22);
  _InterlockedExchangeAdd(&v10->StackCount.Value, 8u);
  return result;
}
