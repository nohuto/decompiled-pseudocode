/*
 * XREFs of ZwContinue @ 0x140150E80
 * Callers:
 *     RtlRestoreContext @ 0x14015BBC0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x14015BE70 (RcFrameConsolidation.c)
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
