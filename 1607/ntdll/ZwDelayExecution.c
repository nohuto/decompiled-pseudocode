/*
 * XREFs of ZwDelayExecution @ 0x1800A6AA0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x180013B84 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180030334 (LdrpInitMuiCrits.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180053084 (EtwpWaitForBufferReferenceCount.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x18008A328 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800D8E50 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9100 (RtlLockHeapManagerForCloning.c)
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
