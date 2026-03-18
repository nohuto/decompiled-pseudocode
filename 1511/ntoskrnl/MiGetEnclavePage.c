/*
 * XREFs of MiGetEnclavePage @ 0x1401DFB88
 * Callers:
 *     MiReserveEnclavePages @ 0x1401DFDA8 (MiReserveEnclavePages.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MiGetPageForEnclave @ 0x140629DA8 (MiGetPageForEnclave.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

__int64 __fastcall MiGetEnclavePage(_QWORD *a1, int a2)
{
  unsigned __int8 CurrentIrql; // r12
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a1 + 452;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(a1 + 452, &LockHandle);
  while ( 1 )
  {
    if ( !a2 && !a1[448] )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      result = -1LL;
      goto LABEL_17;
    }
    v6 = a1[450];
    v7 = 48 * v6 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    MiLockPageAtDpcInline(v7, v8, v9);
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v5, &LockHandle);
    if ( (*(_BYTE *)(v7 + 35) & 0x10) != 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v11 = *(_QWORD *)v7 & 0xFFFFFFFFFLL;
  v12 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
  if ( v11 == 0xFFFFFFFFFLL )
    a1[451] = v12;
  else
    MiSetPfnBlink(48 * v11 - 0x58000000000LL, *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL, 0);
  if ( v12 == 0xFFFFFFFFFLL )
    a1[450] = v11;
  else
    *(_QWORD *)(48 * v12 - 0x58000000000LL) ^= (v11 ^ *(_QWORD *)(48 * v12 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  if ( !a2 )
    --a1[448];
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  *(_BYTE *)(v7 + 35) &= ~0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
LABEL_17:
  __writecr8(CurrentIrql);
  return result;
}
