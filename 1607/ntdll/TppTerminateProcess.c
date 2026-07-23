/*
 * XREFs of TppTerminateProcess @ 0x1800FE668
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180090ECC (TppWorkerpInnerExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
