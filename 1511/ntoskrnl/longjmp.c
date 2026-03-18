/*
 * XREFs of longjmp @ 0x140143800
 * Callers:
 *     <none>
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  PopPoCoalescinCallback();
  _longjmp_internal(Buf, (unsigned int)Value);
}
