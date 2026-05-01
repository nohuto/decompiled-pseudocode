/*
 * XREFs of atexit @ 0x180020128
 * Callers:
 *     _dynamic_initializer_for__g_pEnforcer__ @ 0x180001000 (_dynamic_initializer_for__g_pEnforcer__.c)
 *     _dynamic_initializer_for__g_pProxy__ @ 0x180001010 (_dynamic_initializer_for__g_pProxy__.c)
 * Callees:
 *     _onexit_0 @ 0x180020094 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
