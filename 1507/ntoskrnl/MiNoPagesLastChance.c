/*
 * XREFs of MiNoPagesLastChance @ 0x14022DB04
 * Callers:
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  const void *v2; // r12
  int v3; // eax
  unsigned __int64 v5; // rdi
  int v6; // esi
  int v7; // r14d
  unsigned int v8; // eax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r11
  _QWORD *v13; // rdx
  int v14; // r15d
  const void *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 *v18; // rdi
  __int64 v19; // r14
  KSPIN_LOCK *v20; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r12
  volatile signed __int32 *v27; // r14
  unsigned int v28; // r12d
  signed __int32 i; // edx
  __int64 Next; // rax
  __int64 v31; // rax
  struct _WORK_QUEUE_ITEM *v32; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-39h] BYREF
  int v34; // [rsp+58h] [rbp-21h]
  __int64 v35; // [rsp+60h] [rbp-19h]
  __int64 v36; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+70h] [rbp-9h]
  ULONG_PTR v38; // [rsp+78h] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+7h]
  __int64 v40; // [rsp+88h] [rbp+Fh]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int BugCheckParameter3; // [rsp+E8h] [rbp+6Fh]
  ULONG BugCheckCode; // [rsp+F0h] [rbp+77h]
  int v45; // [rsp+F8h] [rbp+7Fh]

  v2 = *(const void **)(a1 + 5744);
  v3 = *(_DWORD *)(a1 + 616);
  v5 = a2;
  v6 = 0;
  BugCheckParameter3 = 0;
  v7 = 0;
  v45 = 0;
  BugCheckParameter2 = (ULONG_PTR)v2;
  if ( v3 < 0 )
  {
    v7 = v3;
    v45 = v3;
    v6 = 1;
    BugCheckParameter3 = 1;
  }
  if ( *(int *)(a1 + 612) < 0 )
  {
    v6 |= 2u;
    v45 = *(_DWORD *)(a1 + 612);
    BugCheckParameter3 = v6;
    v7 = v45;
  }
  v8 = *(_DWORD *)(a1 + 5336);
  v9 = 0LL;
  v10 = 0LL;
  if ( !v8 )
    goto LABEL_11;
  v11 = a1 + 5344;
  v12 = v8;
  do
  {
    v13 = *(_QWORD **)v11;
    if ( (*(_WORD *)(*(_QWORD *)v11 + 164LL) & 0x50) == 0 )
    {
      v9 += v13[1] - *v13;
      v10 += v13[3];
    }
    v11 += 8LL;
    --v12;
  }
  while ( v12 );
  if ( v10 < 0x400 )
  {
LABEL_11:
    v6 |= 4u;
    BugCheckParameter3 = v6;
  }
  if ( v9 < 0x400 )
  {
    v6 |= 8u;
    BugCheckParameter3 = v6;
  }
  if ( dword_14034F100 )
  {
    v14 = 243;
  }
  else
  {
    v15 = *(const void **)(a1 + 5696);
    v16 = *(_QWORD *)(a1 + 5632) >> 2;
    if ( (unsigned __int64)v15 < v16 )
    {
      v14 = *(_QWORD *)(a1 + 5744) < v16 ? 235 : 77;
    }
    else
    {
      v14 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 5696);
      v2 = v15;
    }
  }
  BugCheckCode = v14;
  if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    v34 = 0;
  }
  else
  {
    DbgPrintEx(
      0x66u,
      0,
      "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
      v14,
      *(const void **)(a1 + 5632),
      v2,
      v6,
      v7);
    if ( (MiFlags & 8) != 0 )
      __debugbreak();
    v34 = 1;
  }
  if ( *(_QWORD *)(a1 + 5504) < v5 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4004), 1, 0) )
  {
    v17 = 16LL;
    v36 = 0LL;
    v38 = 0LL;
    v18 = (__int64 *)(a1 + 2768);
    v40 = 16LL;
    v19 = 0LL;
    v20 = (KSPIN_LOCK *)(a1 + 2784);
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
      v24 = *v18;
      v37 = v24;
      if ( v24 == 0xFFFFFFFFFLL )
        goto LABEL_66;
      do
      {
        v25 = 48 * v24 - 0x58000000000LL;
        v26 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v25 + 16), v24, v22, v23);
        v35 = v26;
        if ( (*(_DWORD *)(v26 + 56) & 0x28) == 0
          && (!v19 || v19 == v26)
          && !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        {
          v27 = (volatile signed __int32 *)(v26 + 72);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26 + 72);
          }
          else
          {
            v28 = 0;
            if ( _interlockedbittestandset(v27, 0x1Fu) )
              v28 = ExpWaitForSpinLockExclusiveAndAcquire(v27);
            for ( i = *v27; (*v27 & 0xBFFFFFFF) != 0x80000000; i = *v27 )
            {
              if ( (i & 0x40000000) == 0 )
                _InterlockedCompareExchange(v27, i | 0x40000000, i);
              if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v28);
            }
            v26 = v35;
          }
          if ( (*(_DWORD *)(v26 + 56) & 8) != 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
            else
              *v27 = 0;
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v24 = v37;
            goto LABEL_63;
          }
          if ( !v36 )
          {
            v38 = ObFastReferenceObjectLocked((_QWORD *)(v26 + 64));
            v36 = v26;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
          else
            *v27 = 0;
          MiUnlinkPageFromList(v25, 1LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_62:
            *(_BYTE *)(v25 + 34) &= ~0x10u;
            *(_QWORD *)(v25 + 24) &= 0xC000000000000000uLL;
            MiPfnReferenceCountIsZero(v25, v37);
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            ++dword_14034E97C;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
            v24 = *v18;
            v37 = *v18;
LABEL_63:
            v19 = v36;
            continue;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_62;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_62;
        }
      }
      while ( v24 != 0xFFFFFFFFFLL );
      v17 = v40;
LABEL_66:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
        goto LABEL_72;
      }
      _m_prefetchw(&LockHandle);
      v31 = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
      {
LABEL_71:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
      }
      else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                0LL,
                                                (signed __int64)&LockHandle) != &LockHandle )
      {
        v31 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        goto LABEL_71;
      }
LABEL_72:
      __writecr8(CurrentIrql);
      v20 += 5;
      v18 += 5;
      v40 = --v17;
      if ( !v17 )
      {
        v32 = (struct _WORK_QUEUE_ITEM *)(a1 + 3960);
        if ( v19 )
        {
          *(_QWORD *)(a1 + 3992) = v38;
          *(_DWORD *)(a1 + 4000) = -1073741566;
          *(_QWORD *)(a1 + 3976) = MiLdwPopupWorker;
          *(_QWORD *)(a1 + 3984) = a1 + 3960;
          v32->List.Flink = 0LL;
          ExQueueWorkItem(v32, DelayedWorkQueue);
          ++dword_14034E978;
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 4004), 0);
          if ( !v34 )
            KeBugCheckEx(BugCheckCode, *(_QWORD *)(a1 + 5632), BugCheckParameter2, BugCheckParameter3, v45);
        }
        return;
      }
    }
  }
}
