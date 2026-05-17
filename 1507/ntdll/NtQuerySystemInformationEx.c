/*
 * XREFs of NtQuerySystemInformationEx @ 0x180094D70
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x18007D168 (TppPoolUpdateNodeRelation.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 327LL;
  __asm { syscall; Low latency system call }
  return result;
}
