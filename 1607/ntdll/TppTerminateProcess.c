/*
 * XREFs of TppTerminateProcess @ 0x1800FE668
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090EDC (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
