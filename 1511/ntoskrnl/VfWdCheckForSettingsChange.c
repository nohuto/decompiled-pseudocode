/*
 * XREFs of VfWdCheckForSettingsChange @ 0x1406C8350
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x1406C7EEC (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x1406C848C (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
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
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0LL, 0, (unsigned __int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
