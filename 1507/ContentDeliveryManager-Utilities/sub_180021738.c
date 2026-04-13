/*
 * XREFs of sub_180021738 @ 0x180021738
 * Callers:
 *     sub_18000AA04 @ 0x18000AA04 (sub_18000AA04.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180021738(__int64 a1)
{
  const char *v1; // rdx
  char *result; // rax

  if ( *(_QWORD *)(a1 + 72) )
  {
    v1 = *(const char **)(a1 + 72);
    if ( !v1 )
      v1 = (const char *)(a1 + 80);
    return setlocale(0, v1);
  }
  return result;
}
