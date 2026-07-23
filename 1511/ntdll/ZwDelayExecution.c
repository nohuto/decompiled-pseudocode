/*
 * XREFs of ZwDelayExecution @ 0x1800A5740
 * Callers:
 *     LdrpInitializeThread @ 0x180012D60 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x1800304C8 (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005C284 (EtwpWaitForBufferReferenceCount.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800865BC (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x18008C868 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
