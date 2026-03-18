/*
 * XREFs of KeResumeThread @ 0x14000C8A4
 * Callers:
 *     KeAlertResumeThread @ 0x1401FECBC (KeAlertResumeThread.c)
 *     PsResumeThread @ 0x1404209F4 (PsResumeThread.c)
 *     PsResumeProcess @ 0x140551728 (PsResumeProcess.c)
 * Callees:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1)
{
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v4; // edi
  unsigned int v5; // edi
  char v6; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 736), 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( (*(_DWORD *)(a1 + 736) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)(a1 + 736), 7u) );
  }
  v5 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v6 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v6;
    if ( !v6 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
      KiResumeThread(a1, CurrentPrcb, 0LL);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
