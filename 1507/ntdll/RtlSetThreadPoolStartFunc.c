/*
 * XREFs of RtlSetThreadPoolStartFunc @ 0x1800771B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetThreadPoolStartFunc(
        PRTL_START_POOL_THREAD StartPoolThread,
        PRTL_EXIT_POOL_THREAD ExitPoolThread)
{
  NTSTATUS result; // eax

  RtlpStartThreadFunc = (__int64 (__fastcall *)())StartPoolThread;
  result = 0;
  RtlpExitThreadFunc = (__int64 (__fastcall *)(NTSTATUS))ExitPoolThread;
  return result;
}
