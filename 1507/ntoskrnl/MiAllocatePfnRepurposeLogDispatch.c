/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14012C120
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  int v4; // esi
  __int64 Next; // rax
  _SLIST_ENTRY *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rtt
  unsigned int Alignment_low; // edi
  unsigned __int64 v10; // rtt
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[2].Next = (_SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    PoolWithTag[1].Next = v0;
    PoolWithTag->Next = 0LL;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034F280, &LockHandle);
  v3 = P;
  if ( !dword_14034F248 )
    goto LABEL_28;
  if ( v2 )
  {
    P = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( P )
  {
    if ( ((__int64)P[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
LABEL_28:
    P = 0LL;
  }
LABEL_6:
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_9;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_9:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    v6 = v3[2].Next;
    if ( v6 == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_30;
    if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v7 = (__int64)(&v3[2].Next[-1].Next + 1);
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = v7;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    _m_prefetchw(&stru_140367D88);
    v8 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140367D88,
                 (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                 stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&stru_140367D88) )
    {
      goto LABEL_30;
    }
    Alignment_low = LOWORD(stru_140367DC0.Alignment);
    if ( LOWORD(stru_140367DC0.Alignment) >= (unsigned int)dword_140367DA8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140350510, 0x64u);
      v4 = 0;
    }
    else
    {
      RtlpInterlockedPushEntrySList(&stru_140367DC0, v3);
      if ( Alignment_low >= 8 && !stru_140367D90.Header.SignalState )
        KeSetEvent(&stru_140367D90, 0, 0);
    }
    _m_prefetchw(&stru_140367D88);
    v10 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&stru_140367D88,
                  (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140367D88);
    if ( !v4 )
LABEL_30:
      ExFreePoolWithTag(v3, 0);
  }
}
