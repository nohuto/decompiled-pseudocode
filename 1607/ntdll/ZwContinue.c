/*
 * XREFs of ZwContinue @ 0x1800A6C80
 * Callers:
 *     LdrInitializeThunk @ 0x180078750 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800A9EB0 (KiUserApcDispatcher.c)
 *     RtlRestoreContext @ 0x1800AA210 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800AA510 (RcFrameConsolidation.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1800FCB40 (RtlpLoadUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwContinue()
{
  __int64 result; // rax

  result = 67LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
