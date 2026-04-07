/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18004AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
_BYTE *__fastcall wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  return wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>();
}
