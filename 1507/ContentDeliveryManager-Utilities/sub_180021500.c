/*
 * XREFs of sub_180021500 @ 0x180021500
 * Callers:
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 * Callees:
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

_QWORD *__fastcall sub_180021500(__int64 a1)
{
  _QWORD *result; // rax

  result = sub_180021148(0x10uLL);
  if ( result )
  {
    *result = qword_18003A378;
    result[1] = a1;
  }
  qword_18003A378 = result;
  return result;
}
