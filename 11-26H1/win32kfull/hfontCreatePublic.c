/*
 * XREFs of hfontCreatePublic @ 0x140247D30
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 */

struct HOBJ__ *__fastcall hfontCreatePublic(unsigned __int16 *a1, int a2)
{
  return hfontCreate(a1, a2, 2, 0LL, 8);
}
