/*
 * XREFs of NtCreateThreadEx @ 0x180094430
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x180076580 (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 179LL;
  __asm { syscall; Low latency system call }
  return result;
}
