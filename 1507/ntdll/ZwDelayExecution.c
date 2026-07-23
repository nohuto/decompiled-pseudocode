/*
 * XREFs of ZwDelayExecution @ 0x180093C40
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180009C44 (EtwpWaitForBufferReferenceCount.c)
 *     RtlpInitMuiCriticalSection @ 0x18001CD58 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitializeThread @ 0x180021AB8 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800BDAA0 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800C7FA4 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800D8158 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  __asm { syscall; Low latency system call }
  return result;
}
