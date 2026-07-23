/*
 * XREFs of CcAsyncCopyRead @ 0x14006D6EC
 * Callers:
 *     <none>
 * Callees:
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006E890 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  __int64 v8; // rax
  _SLIST_ENTRY *Next; // rcx
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v16; // rbx
  NTSTATUS v17; // r15d
  volatile signed __int64 *v18; // rcx
  KIRQL v19; // al
  PSLIST_ENTRY v20; // rdx
  __int64 v21; // rbx
  int PagePriorityThread; // eax
  __int64 v23; // rdx
  PSLIST_ENTRY v24; // rbp
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp+8h] BYREF

  v8 = *((_QWORD *)&Object[2].Next + 1);
  Next = Object[3].Next;
  v13 = *(_QWORD *)(v8 + 8);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x426uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  v17 = CcAllocateWorkQueueEntry(&ListEntry);
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v16, 0x73416343u);
    RtlRaiseStatus(v17);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v18 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[8];
  if ( v18 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v18, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v18 + 2, 1uLL);
  }
  v19 = KeAcquireQueuedSpinLock(5uLL);
  ++*(_DWORD *)(v13 + 4);
  KeReleaseQueuedSpinLock(5uLL, v19);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 520));
  v20 = ListEntry;
  *((_BYTE *)&ListEntry[7].Next + 8) = 5;
  v20[1].Next = (_SLIST_ENTRY *)v13;
  v20[2].Next = Object;
  *((_QWORD *)&v20[1].Next + 1) = *a2;
  *((_DWORD *)&v20[2].Next + 2) = a3;
  v20[3].Next = v16;
  v21 = a8;
  v20[4].Next = *(_SLIST_ENTRY **)(a8 + 16);
  *((_QWORD *)&v20[4].Next + 1) = a6;
  v20[5].Next = (_SLIST_ENTRY *)v21;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  *(_DWORD *)(v23 + 56) = PagePriorityThread;
  v24 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v24[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v24[7].Next) = *(_BYTE *)(v21 + 24);
  HIDWORD(v24[7].Next) = *(_DWORD *)(v21 + 28);
  *((_QWORD *)&v24[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, &v24[6].Next + 1);
  if ( *(_DWORD *)(v21 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4BFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v24);
  return 1;
}
