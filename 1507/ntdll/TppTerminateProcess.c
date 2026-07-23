/*
 * XREFs of TppTerminateProcess @ 0x1800F5CFC
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F5ED4 (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
