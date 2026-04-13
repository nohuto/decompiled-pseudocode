/*
 * XREFs of sub_18000F274 @ 0x18000F274
 * Callers:
 *     sub_1800270DD @ 0x1800270DD (sub_1800270DD.c)
 *     sub_180027107 @ 0x180027107 (sub_180027107.c)
 *     sub_180027131 @ 0x180027131 (sub_180027131.c)
 *     sub_18002715B @ 0x18002715B (sub_18002715B.c)
 * Callees:
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 */

volatile signed __int64 *__fastcall sub_18000F274(volatile signed __int64 **a1, __int64 a2, __int64 a3)
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
