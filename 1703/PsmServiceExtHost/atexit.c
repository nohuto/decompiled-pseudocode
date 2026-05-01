/*
 * XREFs of atexit @ 0x180020FA0
 * Callers:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 * Callees:
 *     _onexit_0 @ 0x180020F10 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
