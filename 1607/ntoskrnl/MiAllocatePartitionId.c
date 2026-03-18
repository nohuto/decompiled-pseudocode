/*
 * XREFs of MiAllocatePartitionId @ 0x140659938
 * Callers:
 *     MiCreatePartition @ 0x1406601A8 (MiCreatePartition.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB08 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiExpandPartitionIds @ 0x1406603B4 (MiExpandPartitionIds.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  ULONG ClearBitsAndSet; // eax
  unsigned __int16 v7; // di

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326FB8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326FB8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140326FB8, v3, (ULONG_PTR)&qword_140326FB8);
  if ( v5 )
    v5[26] |= 1u;
  do
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140326FD8, 1u, 0);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet != 0xFFFFFFFFLL )
    {
      *(_QWORD *)(qword_140326FF8 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326FB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326FB8);
      KeAbPostRelease((ULONG_PTR)&qword_140326FB8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return v7;
    }
  }
  while ( (unsigned int)MiExpandPartitionIds() );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326FB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326FB8);
  KeAbPostRelease((ULONG_PTR)&qword_140326FB8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
