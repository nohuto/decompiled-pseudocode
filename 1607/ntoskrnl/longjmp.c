/*
 * XREFs of longjmp @ 0x14014CC30
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  xHalFreeMessageTarget();
  _longjmp_internal(Buf, (unsigned int)Value);
}
