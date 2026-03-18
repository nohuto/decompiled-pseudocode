/*
 * XREFs of ?CancelDitMouseFlushTimer@@YAXXZ @ 0x1C00856CC
 * Callers:
 *     UnqueueMouseEvent @ 0x1C0085604 (UnqueueMouseEvent.c)
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
