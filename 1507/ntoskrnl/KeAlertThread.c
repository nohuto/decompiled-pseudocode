/*
 * XREFs of KeAlertThread @ 0x14000C1F0
 * Callers:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14012C7C4 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     IoDecrementKeepAliveCount @ 0x1401F6E78 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x1401FECBC (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x1406C64B0 (NtAlertThread.c)
 * Callees:
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v6; // edi
  char v7; // si
  char v8; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_BYTE *)(a2 + a1 + 114);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || a2 > *(char *)(a1 + 391)
      || (v8 = KiSignalThread(CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v8) )
    {
      *(_BYTE *)(a2 + a1 + 114) = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 2, CurrentIrql);
  return v7;
}
