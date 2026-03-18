/*
 * XREFs of KeSuspendThread @ 0x14000C978
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PsSuspendThread @ 0x1404F399C (PsSuspendThread.c)
 * Callees:
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v4; // edi
  unsigned int v5; // edi

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
  if ( v5 == 127 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(a1 + 644);
  if ( !(unsigned __int8)KiSuspendThread(a1, CurrentPrcb) )
    --*(_BYTE *)(a1 + 644);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
