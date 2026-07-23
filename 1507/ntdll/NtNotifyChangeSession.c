/*
 * XREFs of NtNotifyChangeSession @ 0x180094970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  NTSTATUS result; // eax

  result = 263;
  __asm { syscall; Low latency system call }
  return result;
}
