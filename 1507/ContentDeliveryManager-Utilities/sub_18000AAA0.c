/*
 * XREFs of sub_18000AAA0 @ 0x18000AAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

exception *__fastcall sub_18000AAA0(exception *a1, const struct exception *a2)
{
  exception::exception(a1, a2);
  *(_QWORD *)a1 = &off_18002D630;
  return a1;
}
