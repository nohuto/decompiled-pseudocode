/*
 * XREFs of KeForceResumeThread @ 0x1400C9214
 * Callers:
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     NtTerminateProcess @ 0x1404EAD14 (NtTerminateProcess.c)
 *     KeRundownApcQueues @ 0x1404EE9DC (KeRundownApcQueues.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
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
