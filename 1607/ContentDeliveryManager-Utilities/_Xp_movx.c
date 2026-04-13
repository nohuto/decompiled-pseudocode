/*
 * XREFs of _Xp_movx @ 0x180056DD8
 * Callers:
 *     _Dtento @ 0x180057240 (_Dtento.c)
 *     _LDtento @ 0x180057C70 (_LDtento.c)
 * Callees:
 *     memcpy_0 @ 0x180058E98 (memcpy_0.c)
 */

void *__fastcall Xp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 8LL * a2);
  return a1;
}
