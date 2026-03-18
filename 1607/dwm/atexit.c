/*
 * XREFs of atexit @ 0x1400031A8
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     _onexit_0 @ 0x140003114 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
