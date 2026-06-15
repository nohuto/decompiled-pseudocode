/*
 * XREFs of wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800010D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x18002167E (memset.c)
 */

int wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__()
{
  memset(&wil::details::g_threadFailureCallbacks, 0, 0x50uLL);
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__);
}
