/*
 * XREFs of KeSuspendThread @ 0x1400C98A8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PsSuspendThread @ 0x140507C94 (PsSuspendThread.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiSuspendThread @ 0x1400C99D4 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // ebp

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644);
  if ( v5 == 127 )
  {
    _InterlockedAnd(v4, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(a1 + 644);
  if ( !(unsigned __int8)KiSuspendThread(a1, CurrentPrcb) )
    --*(_BYTE *)(a1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v5;
}
