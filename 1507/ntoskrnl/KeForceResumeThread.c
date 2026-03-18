/*
 * XREFs of KeForceResumeThread @ 0x14000E584
 * Callers:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     KeRundownApcQueues @ 0x140421134 (KeRundownApcQueues.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 * Callees:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // edi
  unsigned int v7; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 736), 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_DWORD *)(a1 + 736) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)(a1 + 736), 7u) );
  }
  v7 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 13) & 1);
  if ( v7 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xDu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(a3) = 1;
  KiResumeThread(a1, CurrentPrcb, a3);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v7;
}
