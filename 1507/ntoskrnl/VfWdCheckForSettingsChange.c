/*
 * XREFs of VfWdCheckForSettingsChange @ 0x14074AE14
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x14074A8F0 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x14074AF50 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 */

char __fastcall VfWdCheckForSettingsChange(char a1)
{
  char result; // al

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((int *)&ViWdIrpTimerDpc, 1);
    result = _InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
