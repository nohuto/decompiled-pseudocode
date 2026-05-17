/*
 * XREFs of ZwCreateProcessEx @ 0x180093DD0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateProcessEx()
{
  __int64 result; // rax

  result = 77LL;
  __asm { syscall; Low latency system call }
  return result;
}
