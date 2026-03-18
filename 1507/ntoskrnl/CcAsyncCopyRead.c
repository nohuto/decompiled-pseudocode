/*
 * XREFs of CcAsyncCopyRead @ 0x14011DCB4
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v12; // r14
  struct _KPRCB *CurrentPrcb; // r12
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v15; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  volatile signed __int64 *v20; // rcx
  KIRQL v21; // al
  struct _KTHREAD *v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  __int64 v26; // [rsp+60h] [rbp+8h]

  v26 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  if ( *a2 + a3 > *(_QWORD *)(v26 + 8) )
    KeBugCheckEx(0x34u, 0x3EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Object[3].Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, (__int64)a7);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[6].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v15 )
      {
        ExFreePoolWithTag(v12, 0x73416343u);
        RtlRaiseStatus(-1073741670);
      }
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  if ( !a7 )
    CurrentThread = KeGetCurrentThread();
  v20 = (volatile signed __int64 *)CurrentThread->Process[2].ActiveProcessors.Bitmap[5];
  if ( v20 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(v20, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(v20 + 2, 1uLL);
  }
  v21 = KeAcquireQueuedSpinLock(5uLL);
  ++*(_DWORD *)(v26 + 4);
  *(_DWORD *)(v26 + 152) |= 0x40000000u;
  KeReleaseQueuedSpinLock(5uLL, v21);
  _InterlockedIncrement((volatile signed __int32 *)(v26 + 520));
  *((_BYTE *)&v15[6].Next + 8) = 5;
  v15[1].Next = (_SLIST_ENTRY *)v26;
  v15[2].Next = Object;
  *((_QWORD *)&v15[1].Next + 1) = *a2;
  *((_DWORD *)&v15[2].Next + 2) = a3;
  v15[3].Next = v12;
  v15[4].Next = *(_SLIST_ENTRY **)(a8 + 16);
  *((_QWORD *)&v15[4].Next + 1) = a6;
  v15[5].Next = (_SLIST_ENTRY *)a8;
  v22 = KeGetCurrentThread();
  v23 = (*((_DWORD *)&v22[1].SwapListEntry + 3) >> 12) & 7;
  if ( (v22->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v24 = 2;
    if ( v23 < 2 )
      v24 = v23;
    v23 = v24;
  }
  *((_DWORD *)&v15[3].Next + 2) = v23;
  *((_QWORD *)&v15[5].Next + 1) = CurrentThread->Process;
  LOBYTE(v15[6].Next) = *(_BYTE *)(a8 + 24);
  HIDWORD(v15[6].Next) = *(_DWORD *)(a8 + 28);
  if ( *(_DWORD *)(a8 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x478uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v15);
  return 1;
}
