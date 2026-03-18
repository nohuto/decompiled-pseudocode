/*
 * XREFs of KeResumeThread @ 0x1400E2E00
 * Callers:
 *     KeAlertResumeThread @ 0x1401C2F08 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x1404A75D0 (PsResumeProcess.c)
 *     PsResumeThread @ 0x1404A7714 (PsResumeThread.c)
 * Callees:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // ebp
  char v8; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3);
  v7 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v8 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v8;
    if ( !v8 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
      KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v6, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v7;
}
