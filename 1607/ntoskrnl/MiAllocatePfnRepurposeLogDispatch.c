/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  struct _SLIST_ENTRY *PoolWithTag; // rax
  struct _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  struct _SLIST_ENTRY *Next; // rax
  __int64 v5; // rax
  unsigned int Alignment_low; // edi
  int v7; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Next = 0LL;
    PoolWithTag[2].Next = (struct _SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[1].Next = v0;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1403271C0, &LockHandle);
  v3 = P;
  if ( !dword_140327188 )
    goto LABEL_23;
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
LABEL_23:
    P = 0LL;
  }
LABEL_6:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (struct _SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_22;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v5 = (__int64)(&v3[2].Next[-1].Next + 1);
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = v5;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection(&stru_14033B7C8) )
      goto LABEL_22;
    Alignment_low = LOWORD(ListHead.Alignment);
    if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B7E8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328310, 0x64u);
      v7 = 0;
    }
    else
    {
      RtlpInterlockedPushEntrySList(&ListHead, v3);
      if ( Alignment_low >= 8 && !Event.Header.SignalState )
        KeSetEvent(&Event, 0, 0);
      v7 = 1;
    }
    ExReleaseRundownProtection(&stru_14033B7C8);
    if ( !v7 )
LABEL_22:
      ExFreePoolWithTag(v3, 0);
  }
}
