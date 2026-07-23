/*
 * XREFs of NtClearEvent @ 0x180093CE0
 * Callers:
 *     RtlBarrier @ 0x1800D38B0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800D39F0 (RtlBarrierForDelete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS result; // eax

  result = 62;
  __asm { syscall; Low latency system call }
  return result;
}
