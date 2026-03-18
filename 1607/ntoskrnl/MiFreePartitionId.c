/*
 * XREFs of MiFreePartitionId @ 0x140659A70
 * Callers:
 *     MiDereferencePartitionFinal @ 0x1401F196C (MiDereferencePartitionFinal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiFreePartitionId(unsigned __int16 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326FB8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326FB8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140326FB8, v3, (ULONG_PTR)&qword_140326FB8);
  if ( v5 )
    v5[26] |= 1u;
  _bittestandreset((signed __int32 *)qword_140326FD8->Buffer, a1);
  *(_QWORD *)(qword_140326FF8 + 8LL * a1) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326FB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326FB8);
  KeAbPostRelease((ULONG_PTR)&qword_140326FB8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
