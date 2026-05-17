/*
 * XREFs of ZwCreatePrivateNamespace @ 0x1800943C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreatePrivateNamespace()
{
  __int64 result; // rax

  result = 172LL;
  __asm { syscall; Low latency system call }
  return result;
}
