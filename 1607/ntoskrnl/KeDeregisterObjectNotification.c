/*
 * XREFs of KeDeregisterObjectNotification @ 0x1400F9C48
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1400F9688 (ExpShutdownWorkerFactory.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400F9B2C (ExpLeaveWorkerFactoryAwayMode.c)
 *     IopCancelWaitCompletionPacket @ 0x1400F9B7C (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeDeregisterObjectNotification(volatile signed __int32 *a1, __int64 *a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 *v6; // rcx
  __int64 **v7; // rax

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    v6[1] = (__int64)v7;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
