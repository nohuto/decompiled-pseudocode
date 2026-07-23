/*
 * XREFs of ZwFlushKey @ 0x1800946A0
 * Callers:
 *     RtlApplyRXact @ 0x18007E210 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 218;
  __asm { syscall; Low latency system call }
  return result;
}
