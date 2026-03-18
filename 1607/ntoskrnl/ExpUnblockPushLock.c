/*
 * XREFs of ExpUnblockPushLock @ 0x140087548
 * Callers:
 *     MiUnlockImageSection @ 0x140083B04 (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1400872BC (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140087378 (ExTimedWaitForUnblockPushLock.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140087508 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     ExSweepSingleHandle @ 0x140088E4C (ExSweepSingleHandle.c)
 *     ExfUnblockPushLock @ 0x1401598C0 (ExfUnblockPushLock.c)
 *     ExUnblockOnAddressPushLockEx @ 0x14022D85C (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140087378 (ExTimedWaitForUnblockPushLock.c)
 */

LONG __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  __int64 v9; // rbp
  LONG result; // eax

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
