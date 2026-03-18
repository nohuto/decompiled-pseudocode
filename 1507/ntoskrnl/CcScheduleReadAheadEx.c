/*
 * XREFs of CcScheduleReadAheadEx @ 0x1400E4230
 * Callers:
 *     CcCopyReadEx @ 0x140053770 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x14011D7C4 (CcAsyncReadPrefetch.c)
 *     CcAsyncCopyRead @ 0x14011DCB4 (CcAsyncCopyRead.c)
 *     CcScheduleReadAhead @ 0x1401DD33C (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 * Callees:
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     CcChargeThreadForReadAhead @ 0x140125E28 (CcChargeThreadForReadAhead.c)
 *     CcPerfLogScheduleReadAhead @ 0x140128368 (CcPerfLogScheduleReadAhead.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall CcScheduleReadAheadEx(_SLIST_ENTRY *Object, __int64 *a2, unsigned int a3, __int64 a4)
{
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  int v8; // r11d
  _SLIST_ENTRY *Next; // rdi
  __int64 v10; // r13
  int v11; // eax
  signed __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // r12d
  int v17; // ecx
  int v18; // ebp
  int v19; // ecx
  int v20; // ecx
  signed __int64 v21; // rcx
  int v22; // r8d
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  int v28; // r8d
  int v29; // r8d
  struct _KTHREAD *v30; // rax
  unsigned int v31; // edx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // ecx
  unsigned int v35; // r9d
  _GENERAL_LOOKASIDE *P; // r14
  int v37; // edx
  PSLIST_ENTRY v38; // rbx
  int v39; // r8d
  _GENERAL_LOOKASIDE *L; // r14
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned __int8 v44; // bl
  unsigned __int64 v45; // rax
  KIRQL v46; // al
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  _SLIST_ENTRY *v51; // [rsp+A0h] [rbp+8h]
  __int64 v52; // [rsp+A0h] [rbp+8h]
  struct _KPRCB *CurrentPrcb; // [rsp+A0h] [rbp+8h]

  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v8 = 0;
  if ( v8 < 2 && CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v8 = 2;
  Next = Object[3].Next;
  v10 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  if ( !Next )
    return;
  if ( !v10 )
    return;
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 1) != 0
    || (v11 & 0x2000) != 0
    || ((__int64)Object[5].Next & 0x100000) != 0
    || v8 < 2
    || !(unsigned __int8)CcCanIWriteStream(Object, 0x1000000LL, 0LL, 4LL)
    || CcQueueThrottle )
  {
    return;
  }
  v13 = a3;
  v14 = a3;
  v15 = a3 + *a2;
  v16 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&Next[5]);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&Next[5], 0LL) )
      goto LABEL_20;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Next[5]);
  }
  v14 = a3;
  v13 = a3;
LABEL_20:
  if ( ((__int64)Next->Next & 0x20000) == 0 )
    LODWORD(Next->Next) |= 0x20000u;
  v17 = *(_DWORD *)(*((_QWORD *)&Next->Next + 1) + 80LL);
  if ( (v17 & 0x20) != 0 )
  {
    v18 = 1;
  }
  else if ( (v17 & 0x100000) != 0 )
  {
    v18 = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 1) == *((_DWORD *)&Next[2].Next + 3) )
    {
      v19 = *((_DWORD *)&Next[2].Next + 2);
      if ( ((unsigned int)(*(_DWORD *)a2 - v19) <= 0x200 || (unsigned int)(v19 - *(_DWORD *)a2) <= 0x200)
        && *((_DWORD *)&Next[1].Next + 3) == HIDWORD(Next[2].Next) )
      {
        LODWORD(v12) = *((_DWORD *)&Next[1].Next + 2);
        v20 = (int)Next[2].Next;
        if ( (unsigned int)(v12 - v20) <= 0x200 || (unsigned int)(v20 - v12) <= 0x200 )
        {
          v18 = 2;
          goto LABEL_33;
        }
      }
    }
    v33 = *a2;
    v18 = 0;
    v12 = (char *)Next[2].Next - (char *)Next[1].Next;
    if ( v33 - (unsigned __int64)Next[2].Next == v12 )
      v18 = 3;
  }
  if ( !v18 )
  {
    LODWORD(Next[3].Next) = 0;
    Next[4].Next = 0LL;
    *((_QWORD *)&Next[4].Next + 1) = 0LL;
    goto LABEL_80;
  }
  if ( v18 == 1 )
  {
LABEL_33:
    v21 = (signed __int64)Next[4].Next;
    if ( v15 + v14 + (unsigned int)(2 * v16) >= v21 )
    {
      v51 = Next[4].Next;
      *((_QWORD *)&Next[3].Next + 1) = v15 & 0xFFFFFFFFFFFFF000uLL;
      if ( (__int64)(v15 & 0xFFFFFFFFFFFFF000uLL) >= v21 )
        LODWORD(v51) = ~(v16 - 1) & (v16 + v15 - 1);
      ++LODWORD(Next[3].Next);
      v22 = v16;
      v23 = (unsigned int)Next[3].Next;
      if ( v18 == 1 || v23 >= 3 )
        v22 = 2 * v16;
      v24 = (_DWORD)v51 - *((_DWORD *)&Next[3].Next + 2) + v22;
      if ( v23 >= 3 )
      {
        v25 = *((unsigned int *)&Next[5].Next + 3);
        if ( (_DWORD)v25 )
        {
          v26 = v25 * v13 * v23;
          v12 = (v26 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
          v27 = v26 / 0x64;
          if ( v27 > 0xFFFFFFFF )
            v27 = 0xFFFFFFFFLL;
          if ( v27 > v24 )
            v24 = v27;
        }
      }
      HIDWORD(Next[3].Next) = v24;
      goto LABEL_46;
    }
LABEL_80:
    v34 = (int)a2;
LABEL_81:
    if ( (xmmword_1403D1290 & 0x20000) != 0 )
      CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v34, a3, v16, v18, v5);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&Next[5], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&Next[5], 0LL);
    v45 = CurrentIrql;
    goto LABEL_87;
  }
  v34 = (int)a2;
  v52 = 2 * *a2 - (unsigned __int64)Next[2].Next;
  if ( v52 < 0 )
    goto LABEL_81;
  v35 = (v52 & 0xFFF) + v13;
  LODWORD(v52) = v52 & 0xFFFFF000;
  *((_QWORD *)&Next[3].Next + 1) = v52;
  a3 = v35;
  HIDWORD(Next[3].Next) = (v35 + 4095) & 0xFFFFF000;
LABEL_46:
  v28 = (int)Next->Next;
  v5 = 1;
  if ( ((__int64)Next->Next & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
      CcChargeThreadForReadAhead((_DWORD)Object, v12, v28, v18, a4);
    goto LABEL_80;
  }
  v29 = v28 | 0x10000;
  LODWORD(Next->Next) = v29;
  v30 = KeGetCurrentThread();
  v31 = (*((_DWORD *)&v30[1].SwapListEntry + 3) >> 12) & 7;
  if ( (v30->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v32 = 2;
    if ( v31 < 2 )
      v32 = v31;
    v31 = v32;
  }
  LODWORD(Next->Next) = v29 ^ (v29 ^ (v31 << 18)) & 0x1C0000;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&Next[5], retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&Next[5], 0LL);
  __writecr8(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v38 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v38 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[6].L;
    ++L->TotalAllocates;
    v38 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v38 )
    {
      Size = L->Size;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v38 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
      if ( !v38 )
      {
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&Next[5]);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[5], 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Next[5]);
        }
        LODWORD(Next->Next) &= ~0x10000u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&Next[5], retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&Next[5], 0LL);
        v45 = v44;
LABEL_87:
        __writecr8(v45);
        return;
      }
    }
  }
  LODWORD(v38->Next) = CurrentPrcb->Number;
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogScheduleReadAhead((_DWORD)v38, (_DWORD)Object, (_DWORD)a2, a3, v16, v18, 1);
  if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
    CcChargeThreadForReadAhead((_DWORD)Object, v37, v39, v18, a4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  v46 = KeAcquireQueuedSpinLock(5uLL);
  ++*(_DWORD *)(v10 + 4);
  *(_DWORD *)(v10 + 152) |= 0x4000u;
  KeReleaseQueuedSpinLock(5uLL, v46);
  Next[7].Next = v38;
  *((_BYTE *)&v38[6].Next + 8) = 1;
  v38[1].Next = Object;
  CcPostWorkQueue((__int64)v38, (__int64)&CcExpressWorkQueue, v47, v48);
}
