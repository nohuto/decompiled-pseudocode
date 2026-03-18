/*
 * XREFs of KeSuspendThread @ 0x140030E48
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PsSuspendThread @ 0x1404B09A0 (PsSuspendThread.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
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
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
