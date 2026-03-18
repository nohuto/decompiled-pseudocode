/*
 * XREFs of ExpUnblockPushLock @ 0x1400D2A8C
 * Callers:
 *     ExSweepSingleHandle @ 0x14002DBA0 (ExSweepSingleHandle.c)
 *     MiUnlockImageSection @ 0x1400D25F0 (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D27AC (ExTimedWaitForUnblockPushLock.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400D2A60 (CmpDecrementAppHiveUnloadCount.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     ExUnblockOnAddressPushLockEx @ 0x140213D30 (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D27AC (ExTimedWaitForUnblockPushLock.c)
 */

NTSTATUS __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  __int64 v9; // rbp
  NTSTATUS result; // eax

  v4 = 0;
  CurrentIrql = 2;
  v8 = _InterlockedExchange64(a1, 0LL);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    do
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( (void *)v8 == a2 )
        v4 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 52), 1u) )
        result = KeSetEvent((PRKEVENT)v8, 1, 0);
      v8 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v4 )
  {
    if ( a3 )
      return KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      return ExTimedWaitForUnblockPushLock((__int64)a1, (volatile signed __int32 *)a2, 0LL);
  }
  return result;
}
