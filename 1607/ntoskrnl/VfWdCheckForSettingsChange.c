/*
 * XREFs of VfWdCheckForSettingsChange @ 0x140716CF8
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x140716890 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x140716E34 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((int *)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
