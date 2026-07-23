/*
 * XREFs of ZwContinue @ 0x14015AA50
 * Callers:
 *     RtlRestoreContext @ 0x1401675D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140167880 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
