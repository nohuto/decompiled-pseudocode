/*
 * XREFs of ZwContinue @ 0x14017F850
 * Callers:
 *     RtlRestoreContext @ 0x14018B6A0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x14018B950 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
