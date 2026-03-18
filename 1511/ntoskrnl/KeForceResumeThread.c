/*
 * XREFs of KeForceResumeThread @ 0x140028C4C
 * Callers:
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1403EFBC4 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 * Callees:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  char CurrentIrql; // r14
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
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v6;
}
