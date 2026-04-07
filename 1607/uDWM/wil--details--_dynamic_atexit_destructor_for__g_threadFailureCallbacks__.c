/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180051910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
_BYTE *__fastcall wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  return wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>();
}
