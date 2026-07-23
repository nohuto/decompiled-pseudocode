/*
 * XREFs of longjmp @ 0x14014D1A0
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  xHalFreeMessageTarget();
  _longjmp_internal(Buf, (unsigned int)Value);
}
