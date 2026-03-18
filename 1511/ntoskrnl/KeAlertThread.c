/*
 * XREFs of KeAlertThread @ 0x140030D64
 * Callers:
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400EFEFC (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     IoDecrementKeepAliveCount @ 0x1401BB9D0 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x1401C2F08 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x140643714 (NtAlertThread.c)
 * Callees:
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // si
  char v7; // al
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
      || (v7 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v7) )
    {
      *(_BYTE *)(a2 + a1 + 114) = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v6;
}
