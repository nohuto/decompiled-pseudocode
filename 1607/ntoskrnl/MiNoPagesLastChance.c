/*
 * XREFs of MiNoPagesLastChance @ 0x1401F31B0
 * Callers:
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  const void *v2; // r14
  unsigned __int64 v4; // r15
  int v5; // esi
  int v6; // r11d
  unsigned int v7; // eax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  int v13; // ebp
  const void *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  __int64 *v17; // rdi
  KSPIN_LOCK *v18; // rbx
  __int64 v19; // r13
  unsigned __int8 CurrentIrql; // bp
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 PrototypePteDirect; // rax
  __int64 v27; // r15
  struct _WORK_QUEUE_ITEM *v28; // rdi
  int v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  unsigned int BugCheckParameter3; // [rsp+D8h] [rbp+10h]
  ULONG BugCheckCode; // [rsp+E0h] [rbp+18h]
  int v37; // [rsp+E8h] [rbp+20h]

  v2 = *(const void **)(a1 + 7344);
  v4 = a2;
  v5 = 0;
  BugCheckParameter3 = 0;
  v6 = 0;
  v37 = 0;
  BugCheckParameter2 = (ULONG_PTR)v2;
  if ( *(int *)(a1 + 592) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 592);
    v37 = v6;
    v5 = 1;
    BugCheckParameter3 = 1;
  }
  if ( *(int *)(a1 + 588) < 0 )
  {
    v5 |= 2u;
    v37 = *(_DWORD *)(a1 + 588);
    BugCheckParameter3 = v5;
    v6 = v37;
  }
  v7 = *(_DWORD *)(a1 + 6296);
  v8 = 0LL;
  v9 = 0LL;
  if ( !v7 )
    goto LABEL_11;
  v10 = a1 + 6304;
  v11 = v7;
  do
  {
    v12 = *(_QWORD **)v10;
    if ( (*(_WORD *)(*(_QWORD *)v10 + 204LL) & 0x50) == 0 )
    {
      v8 += v12[1] - *v12;
      v9 += v12[3];
    }
    v10 += 8LL;
    --v11;
  }
  while ( v11 );
  if ( v9 < 0x400 )
  {
LABEL_11:
    v5 |= 4u;
    BugCheckParameter3 = v5;
  }
  if ( v8 < 0x400 )
  {
    v5 |= 8u;
    BugCheckParameter3 = v5;
  }
  if ( dword_140327054 )
  {
    v13 = 243;
  }
  else
  {
    v14 = *(const void **)(a1 + 7296);
    v15 = *(_QWORD *)(a1 + 7232) >> 2;
    if ( (unsigned __int64)v14 < v15 )
    {
      v13 = *(_QWORD *)(a1 + 7344) < v15 ? 235 : 77;
    }
    else
    {
      v13 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 7296);
      v2 = v14;
    }
  }
  BugCheckCode = v13;
  if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    v29 = 0;
  }
  else
  {
    DbgPrintEx(
      0x66u,
      0,
      "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
      v13,
      *(const void **)(a1 + 7232),
      v2,
      v5,
      v6);
    if ( (MiFlags & 8) != 0 )
      __debugbreak();
    v29 = 1;
  }
  if ( *(_QWORD *)(a1 + 6464) < v4 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4324), 1, 0) )
  {
    v31 = 0LL;
    v16 = 16LL;
    v17 = (__int64 *)(a1 + 3024);
    v30 = 16LL;
    v18 = (KSPIN_LOCK *)(a1 + 3040);
    v19 = 0LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
      v24 = *v17;
      if ( *v17 != 0xFFFFFFFFFLL )
      {
        do
        {
          v25 = 48 * v24 - 0x58000000000LL;
          v24 = *(_QWORD *)v25 & 0xFFFFFFFFFLL;
          PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v25 + 16), v21, v22, v23);
          v27 = *(_QWORD *)PrototypePteDirect;
          if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x28) == 0
            && (!v19 || v19 == v27)
            && !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
            if ( (*(_DWORD *)(v27 + 56) & 8) != 0 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              if ( !v19 )
              {
                v31 = ObFastReferenceObjectLocked((_QWORD *)(v27 + 64));
                v19 = v27;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
              MiUnlinkPageFromList(v25, 1);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              *(_QWORD *)(v25 + 24) &= 0xC000000000000000uLL;
              *(_BYTE *)(v25 + 34) &= ~0x10u;
              MiPfnReferenceCountIsZero(v25, (v25 + 0x58000000000LL) / 48);
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              ++dword_1403267BC;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
              v24 = *v17;
            }
          }
        }
        while ( v24 != 0xFFFFFFFFFLL );
        v16 = v30;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      __writecr8(CurrentIrql);
      v18 += 5;
      v17 += 5;
      v30 = --v16;
    }
    while ( v16 );
    v28 = (struct _WORK_QUEUE_ITEM *)(a1 + 4280);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 4312) = v31;
      *(_DWORD *)(a1 + 4320) = -1073741566;
      v28->List.Flink = 0LL;
      *(_QWORD *)(a1 + 4296) = MiLdwPopupWorker;
      *(_QWORD *)(a1 + 4304) = a1 + 4280;
      ExQueueWorkItem(v28, DelayedWorkQueue);
      ++dword_1403267B8;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4324), 0);
      if ( !v29 )
        KeBugCheckEx(BugCheckCode, *(_QWORD *)(a1 + 7232), BugCheckParameter2, BugCheckParameter3, v37);
    }
  }
}
