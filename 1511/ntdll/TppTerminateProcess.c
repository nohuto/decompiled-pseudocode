/*
 * XREFs of TppTerminateProcess @ 0x1800F56FC
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x1800F58D4 (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
