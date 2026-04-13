/*
 * XREFs of sub_18000A8E0 @ 0x18000A8E0
 * Callers:
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 * Callees:
 *     <none>
 */

exception *__fastcall sub_18000A8E0(exception *a1, const char *a2)
{
  const char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  exception::exception(a1, &v4);
  *(_QWORD *)a1 = &off_18002D630;
  return a1;
}
