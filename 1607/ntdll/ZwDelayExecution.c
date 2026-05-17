/*
 * XREFs of ZwDelayExecution @ 0x1800A6AA0
 * Callers:
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180030344 (LdrpInitMuiCrits.c)
 *     EtwpFreeLoggerContext @ 0x180051E5C (EtwpFreeLoggerContext.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180053094 (EtwpWaitForBufferReferenceCount.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x18008A338 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800D8D90 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800E9040 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 ZwDelayExecution()
{
  __int64 result; // rax

  result = 52LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
