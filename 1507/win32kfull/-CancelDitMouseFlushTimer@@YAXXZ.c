/*
 * XREFs of ?CancelDitMouseFlushTimer@@YAXXZ @ 0x1C004B4FC
 * Callers:
 *     UnqueueMouseEvent @ 0x1C004B444 (UnqueueMouseEvent.c)
 * Callees:
 *     <none>
 */

void CancelDitMouseFlushTimer(void)
{
  if ( gbtmrDitMouseFlushArmed == 1 && glDitMouseHandling )
  {
    if ( gbEnableDwmMouseProcessingContextSwitchOpt )
    {
      ZwCancelTimer(ghDITMouseFlushTimer, 0LL);
      gbtmrDitMouseFlushArmed = 0;
    }
  }
}
