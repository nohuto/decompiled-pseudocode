/*
 * XREFs of sub_14040A84C @ 0x14040A84C
 * Callers:
 *     sub_14040A810 @ 0x14040A810 (sub_14040A810.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_14040A84C(_QWORD *a1)
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
