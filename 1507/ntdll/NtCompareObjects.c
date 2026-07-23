/*
 * XREFs of NtCompareObjects @ 0x180094250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 149;
  __asm { syscall; Low latency system call }
  return result;
}
