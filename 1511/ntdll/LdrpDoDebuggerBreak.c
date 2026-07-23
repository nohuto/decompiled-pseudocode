/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800CAAF0
 * Callers:
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 */

NTSTATUS LdrpDoDebuggerBreak()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger, &ThreadInformation, 1u, 0LL);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
