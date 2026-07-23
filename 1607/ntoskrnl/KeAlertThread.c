/*
 * XREFs of KeAlertThread @ 0x1400C7B94
 * Callers:
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400AB68C (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     IoDecrementKeepAliveCount @ 0x1401C96E4 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x1401D2A68 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x140681FD8 (NtAlertThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // si
  char v8; // al
  int v9; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_BYTE *)(a2 + a1 + 114);
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || a2 > *(char *)(a1 + 391)
      || (v8 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v8) )
    {
      *(_BYTE *)(a2 + a1 + 114) = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 2LL, CurrentIrql);
  return v6;
}
