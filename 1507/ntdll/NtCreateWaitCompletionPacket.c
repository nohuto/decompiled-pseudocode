/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1800944B0
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18007CEC8 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 187;
  __asm { syscall; Low latency system call }
  return result;
}
