/*
 * XREFs of ExpUnblockPushLock @ 0x1400D2C68
 * Callers:
 *     PspHandleTableWalker @ 0x1400055C4 (PspHandleTableWalker.c)
 *     MiUnlockImageSection @ 0x140010874 (MiUnlockImageSection.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D2BD0 (ExTimedWaitForUnblockPushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x1401F7624 (IopCheckHandleForRevocation.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1402639E0 (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D2BD0 (ExTimedWaitForUnblockPushLock.c)
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
