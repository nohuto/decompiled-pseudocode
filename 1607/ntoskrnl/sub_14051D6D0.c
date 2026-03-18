/*
 * XREFs of sub_14051D6D0 @ 0x14051D6D0
 * Callers:
 *     sub_14051D694 @ 0x14051D694 (sub_14051D694.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_14051D6D0(_QWORD *a1)
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
