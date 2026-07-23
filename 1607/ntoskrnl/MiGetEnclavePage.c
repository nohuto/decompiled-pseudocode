/*
 * XREFs of MiGetEnclavePage @ 0x1401F0238
 * Callers:
 *     MiReserveEnclavePages @ 0x1401F0464 (MiReserveEnclavePages.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiGetPageForEnclave @ 0x14065F5F8 (MiGetPageForEnclave.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 */

__int64 __fastcall MiGetEnclavePage(_QWORD *a1, int a2)
{
  unsigned __int8 CurrentIrql; // r12
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a1 + 468;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 468, &LockHandle);
  while ( 1 )
  {
    if ( !a2 && !a1[464] )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      result = -1LL;
      goto LABEL_17;
    }
    v6 = a1[466];
    v7 = 48 * v6 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    MiLockPageAtDpcInline(v7);
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v5, &LockHandle);
    if ( (*(_BYTE *)(v7 + 35) & 0x10) != 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v9 = *(_QWORD *)v7 & 0xFFFFFFFFFLL;
  v10 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
  if ( v9 == 0xFFFFFFFFFLL )
    a1[467] = v10;
  else
    MiSetPfnBlink(48 * v9 - 0x58000000000LL, *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL, 0);
  if ( v10 == 0xFFFFFFFFFLL )
    a1[466] = v9;
  else
    *(_QWORD *)(48 * v10 - 0x58000000000LL) ^= (v9 ^ *(_QWORD *)(48 * v10 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  if ( !a2 )
    --a1[464];
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  *(_BYTE *)(v7 + 35) &= ~0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
LABEL_17:
  __writecr8(CurrentIrql);
  return result;
}
