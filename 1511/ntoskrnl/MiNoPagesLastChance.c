/*
 * XREFs of MiNoPagesLastChance @ 0x1401E3DB0
 * Callers:
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  struct _WORK_QUEUE_ITEM *v24; // rdi
  int v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h]
  unsigned __int64 v27; // [rsp+50h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  unsigned int BugCheckParameter3; // [rsp+D8h] [rbp+10h]
  ULONG BugCheckCode; // [rsp+E0h] [rbp+18h]
  int v33; // [rsp+E8h] [rbp+20h]

  v2 = *(const void **)(a1 + 6128);
  v4 = a2;
  v5 = 0;
  BugCheckParameter3 = 0;
  v6 = 0;
  v33 = 0;
  BugCheckParameter2 = (ULONG_PTR)v2;
  if ( *(int *)(a1 + 600) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 600);
    v33 = v6;
    v5 = 1;
    BugCheckParameter3 = 1;
  }
  if ( *(int *)(a1 + 596) < 0 )
  {
    v5 |= 2u;
    v33 = *(_DWORD *)(a1 + 596);
    BugCheckParameter3 = v5;
    v6 = v33;
  }
  v7 = *(_DWORD *)(a1 + 5720);
  v8 = 0LL;
  v9 = 0LL;
  if ( !v7 )
    goto LABEL_11;
  v10 = a1 + 5728;
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
  if ( dword_1402FEC44 )
  {
    v13 = 243;
  }
  else
  {
    v14 = *(const void **)(a1 + 6080);
    v15 = *(_QWORD *)(a1 + 6016) >> 2;
    if ( (unsigned __int64)v14 < v15 )
    {
      v13 = *(_QWORD *)(a1 + 6128) < v15 ? 235 : 77;
    }
    else
    {
      v13 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 6080);
      v2 = v14;
    }
  }
  BugCheckCode = v13;
  if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    v25 = 0;
  }
  else
  {
    DbgPrintEx(
      0x66u,
      0,
      "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
      v13,
      *(const void **)(a1 + 6016),
      v2,
      v5,
      v6);
    if ( (MiFlags & 8) != 0 )
      __debugbreak();
    v25 = 1;
  }
  if ( *(_QWORD *)(a1 + 5888) < v4 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4196), 1, 0) )
  {
    v27 = 0LL;
    v16 = 16LL;
    v17 = (__int64 *)(a1 + 2896);
    v26 = 16LL;
    v18 = (KSPIN_LOCK *)(a1 + 2912);
    v19 = 0LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
      v21 = *v17;
      if ( *v17 != 0xFFFFFFFFFLL )
      {
        do
        {
          v22 = 48 * v21 - 0x58000000000LL;
          v21 = *(_QWORD *)v22 & 0xFFFFFFFFFLL;
          v23 = *(_QWORD *)(*(__int64 *)(v22 + 16) >> 16);
          if ( (*(_DWORD *)(v23 + 56) & 0x28) == 0
            && (!v19 || v19 == v23)
            && !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
            if ( (*(_DWORD *)(v23 + 56) & 8) != 0 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              if ( !v19 )
              {
                v27 = ObFastReferenceObjectLocked((_QWORD *)(v23 + 64));
                v19 = v23;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
              MiUnlinkPageFromList(v22, 1);
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              *(_BYTE *)(v22 + 34) &= ~0x10u;
              *(_QWORD *)(v22 + 24) &= 0xC000000000000000uLL;
              MiPfnReferenceCountIsZero(v22, (v22 + 0x58000000000LL) / 48);
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              ++dword_1402FE4B4;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
              v21 = *v17;
            }
          }
        }
        while ( v21 != 0xFFFFFFFFFLL );
        v16 = v26;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      __writecr8(CurrentIrql);
      v18 += 5;
      v17 += 5;
      v26 = --v16;
    }
    while ( v16 );
    v24 = (struct _WORK_QUEUE_ITEM *)(a1 + 4152);
    if ( v19 )
    {
      *(_QWORD *)(a1 + 4184) = v27;
      *(_DWORD *)(a1 + 4192) = -1073741566;
      v24->List.Flink = 0LL;
      *(_QWORD *)(a1 + 4168) = MiLdwPopupWorker;
      *(_QWORD *)(a1 + 4176) = a1 + 4152;
      ExQueueWorkItem(v24, DelayedWorkQueue);
      ++dword_1402FE4B0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4196), 0);
      if ( !v25 )
        KeBugCheckEx(BugCheckCode, *(_QWORD *)(a1 + 6016), BugCheckParameter2, BugCheckParameter3, v33);
    }
  }
}
