/*
 * XREFs of KeForceResumeThread @ 0x1400CB374
 * Callers:
 *     KeRequestTerminationThread @ 0x1400C9DE0 (KeRequestTerminationThread.c)
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     KeRundownApcQueues @ 0x14050BA4C (KeRundownApcQueues.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400CB420 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v6 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 13) & 1);
  if ( v6 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xDu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v5) = 1;
  KiResumeThread(a1, CurrentPrcb, v5);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v6;
}
