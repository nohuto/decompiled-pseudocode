/*
 * XREFs of sub_1404966D4 @ 0x1404966D4
 * Callers:
 *     sub_140496698 @ 0x140496698 (sub_140496698.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_1404966D4(_QWORD *a1)
{
  _WORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  result = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x20534C53u);
  if ( result )
  {
    *a1 = 0x800000LL;
    a1[1] = result;
    *result = 0;
  }
  return result;
}
