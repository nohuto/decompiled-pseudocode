/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18000A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>();
}
