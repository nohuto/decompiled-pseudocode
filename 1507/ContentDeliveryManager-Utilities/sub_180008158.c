/*
 * XREFs of sub_180008158 @ 0x180008158
 * Callers:
 *     sub_18002701D @ 0x18002701D (sub_18002701D.c)
 *     sub_1800270D1 @ 0x1800270D1 (sub_1800270D1.c)
 *     sub_1800270FB @ 0x1800270FB (sub_1800270FB.c)
 *     sub_180027125 @ 0x180027125 (sub_180027125.c)
 *     sub_18002714F @ 0x18002714F (sub_18002714F.c)
 * Callees:
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 */

volatile signed __int64 *__fastcall sub_180008158(volatile signed __int64 **a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)sub_180007270(result, a2, a3);
  }
  return result;
}
