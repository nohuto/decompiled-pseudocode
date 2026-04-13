/*
 * XREFs of sub_18001F5F0 @ 0x18001F5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D3EC @ 0x18001D3EC (sub_18001D3EC.c)
 */

void *__fastcall sub_18001F5F0(void *a1, char a2)
{
  sub_18001D3EC((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
