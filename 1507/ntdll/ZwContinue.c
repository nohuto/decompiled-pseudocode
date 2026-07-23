/*
 * XREFs of ZwContinue @ 0x180093D30
 * Callers:
 *     LdrInitializeThunk @ 0x18006BDC0 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800956E0 (KiUserApcDispatcher.c)
 *     RtlRestoreContext @ 0x180095A40 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x180095D40 (RcFrameConsolidation.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1800F2F80 (RtlpLoadUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  NTSTATUS result; // eax

  result = 67;
  __asm { syscall; Low latency system call }
  return result;
}
