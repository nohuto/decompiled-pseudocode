/*
 * XREFs of KeResumeThread @ 0x1400A2840
 * Callers:
 *     KeAlertResumeThread @ 0x1401D2C3C (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x1404CCCE0 (PsResumeProcess.c)
 *     PsResumeThread @ 0x1404CCE44 (PsResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1400CB420 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v4; // rdi
  unsigned int v5; // ebp
  char v6; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v6 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v6;
    if ( !v6 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
      KiResumeThread(a1, CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v5;
}
