/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_DeferredStaticInitializers__ @ 0x1800012F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_initializer_for__g_header_init_DeferredStaticInitializers__()
{
  void *result; // rax

  result = &wil::details::g_threadFailureCallbacks;
  wil::details::g_pThreadFailureCallbacks = (__int64)&wil::details::g_threadFailureCallbacks;
  return result;
}
