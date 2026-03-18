/*
 * XREFs of ZwContinue @ 0x14017F850
 * Callers:
 *     RtlRestoreContext @ 0x14018B6A0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x14018B950 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Context, TestAlert, v2);
}
