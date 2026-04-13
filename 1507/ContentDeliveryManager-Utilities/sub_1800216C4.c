/*
 * XREFs of sub_1800216C4 @ 0x1800216C4
 * Callers:
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 * Callees:
 *     sub_1800213A0 @ 0x1800213A0 (sub_1800213A0.c)
 */

void **__fastcall sub_1800216C4(__int64 a1, char *a2)
{
  char *v4; // rax

  v4 = setlocale(0, 0LL);
  if ( !v4 )
    v4 = (char *)&unk_18002B658;
  sub_1800213A0((void **)(a1 + 72), v4);
  if ( a2 )
    a2 = setlocale(0, a2);
  if ( !a2 )
    a2 = (char *)&unk_18002B408;
  return sub_1800213A0((void **)(a1 + 88), a2);
}
