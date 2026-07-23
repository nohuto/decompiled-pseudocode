/*
 * XREFs of NtAdjustGroupsToken @ 0x180093FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 106;
  __asm { syscall; Low latency system call }
  return result;
}
