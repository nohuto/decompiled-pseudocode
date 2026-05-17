/*
 * XREFs of NtCreateDebugObject @ 0x1800942A0
 * Callers:
 *     DbgUiConnectToDbg @ 0x1800BBE80 (DbgUiConnectToDbg.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateDebugObject()
{
  __int64 result; // rax

  result = 154LL;
  __asm { syscall; Low latency system call }
  return result;
}
