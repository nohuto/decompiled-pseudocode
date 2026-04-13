/*
 * XREFs of sub_180020F64 @ 0x180020F64
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z @ 0x180026504 (--0exception@@QEAA@AEBV0@@Z.c)
 */

exception *__fastcall sub_180020F64(exception *a1, const struct exception *a2)
{
  exception::exception(a1, a2);
  *(_QWORD *)a1 = &off_18002B380;
  return a1;
}
