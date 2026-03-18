/*
 * XREFs of longjmp @ 0x140171890
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  PopPoCoalescinCallback();
  _longjmp_internal(Buf, (unsigned int)Value);
}
