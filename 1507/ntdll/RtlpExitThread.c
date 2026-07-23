/*
 * XREFs of RtlpExitThread @ 0x1800F6160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpExitThread(NTSTATUS ExitStatus)
{
  return NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
