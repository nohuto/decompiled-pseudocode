/*
 * XREFs of CcAsyncCopyRead @ 0x1400FF7AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     CcAllocateWorkQueueEntry @ 0x140101324 (CcAllocateWorkQueueEntry.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *CurrentThread; // rdi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v16; // rsi
  NTSTATUS v17; // r15d
  volatile signed __int64 *v18; // rcx
  KIRQL v19; // al
  PSLIST_ENTRY v20; // rcx
  __int64 v21; // r8
  int PagePriorityThread; // eax
  PSLIST_ENTRY v23; // rcx
  __int64 v24; // r8
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp+8h] BYREF

  v8 = *((_QWORD *)&Object[2].Next + 1);
  Next = Object[3].Next;
  v13 = *(_QWORD *)(v8 + 8);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x3EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, (__int64)a7);
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
  v18 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[6];
  if ( v18 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v18, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v18 + 2, 1uLL);
  }
  v19 = KeAcquireQueuedSpinLock(5uLL);
  ++*(_DWORD *)(v13 + 4);
  *(_DWORD *)(v13 + 152) |= 0x40000000u;
  KeReleaseQueuedSpinLock(5uLL, v19);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 520));
  v20 = ListEntry;
  v21 = a8;
  *((_BYTE *)&ListEntry[6].Next + 8) = 5;
  v20[1].Next = (_SLIST_ENTRY *)v13;
  v20[2].Next = Object;
  *((_QWORD *)&v20[1].Next + 1) = *a2;
  *((_DWORD *)&v20[2].Next + 2) = a3;
  v20[3].Next = v16;
  v20[4].Next = *(_SLIST_ENTRY **)(v21 + 16);
  *((_QWORD *)&v20[4].Next + 1) = a6;
  v20[5].Next = (_SLIST_ENTRY *)v21;
  PagePriorityThread = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  v23 = ListEntry;
  *((_DWORD *)&ListEntry[3].Next + 2) = PagePriorityThread;
  *((_QWORD *)&v23[5].Next + 1) = CurrentThread->Process;
  LOBYTE(v23[6].Next) = *(_BYTE *)(v24 + 24);
  HIDWORD(v23[6].Next) = *(_DWORD *)(v24 + 28);
  if ( *(_DWORD *)(v24 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x478uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v23);
  return 1;
}
