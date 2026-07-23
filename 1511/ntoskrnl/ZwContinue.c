/*
 * XREFs of ZwContinue @ 0x140150E80
 * Callers:
 *     RtlRestoreContext @ 0x14015BBC0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x14015BE70 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
