/*
 * XREFs of wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001030
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

int wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__()
{
  memset_0(&wil::details::g_threadFailureCallbacks, 0, 0xA0uLL);
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__);
}
