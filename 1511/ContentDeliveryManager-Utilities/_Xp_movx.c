/*
 * XREFs of _Xp_movx @ 0x1800269F8
 * Callers:
 *     _LDtento @ 0x1800261A8 (_LDtento.c)
 *     _Dtento @ 0x180026E58 (_Dtento.c)
 * Callees:
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

void *__fastcall Xp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 8LL * a2);
  return a1;
}
