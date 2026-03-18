/*
 * XREFs of MiFreePartitionId @ 0x140624414
 * Callers:
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402FEBE8, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FEBE8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FEBE8, v3, (ULONG_PTR)&qword_1402FEBE8);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  _bittestandreset((signed __int32 *)qword_1402FEC08->Buffer, a1);
  *(_QWORD *)(qword_1402FEC28 + 8LL * a1) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
  KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
