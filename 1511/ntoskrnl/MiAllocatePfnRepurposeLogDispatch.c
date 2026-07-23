/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  _SLIST_ENTRY *Next; // rax
  __int64 v5; // rax
  unsigned int Alignment_low; // edi
  int v7; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Next = 0LL;
    PoolWithTag[2].Next = (_SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[1].Next = v0;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1402FEDC0, &LockHandle);
  v3 = P;
  if ( !dword_1402FED88 )
    goto LABEL_22;
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
LABEL_22:
    P = 0LL;
  }
LABEL_6:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_24;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v5 = (__int64)(&v3[2].Next[-1].Next + 1);
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = v5;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection(&RunRef) )
      goto LABEL_24;
    Alignment_low = LOWORD(stru_140317B00.Alignment);
    if ( LOWORD(stru_140317B00.Alignment) >= (unsigned int)dword_140317AE8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140302790, 0x64u);
      v7 = 0;
    }
    else
    {
      RtlpInterlockedPushEntrySList(&stru_140317B00, v3);
      if ( Alignment_low >= 8 && !stru_140317AD0.Header.SignalState )
        KeSetEvent(&stru_140317AD0, 0, 0);
      v7 = 1;
    }
    ExReleaseRundownProtection_0(&RunRef);
    if ( !v7 )
LABEL_24:
      ExFreePoolWithTag(v3, 0);
  }
}
