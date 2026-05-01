/*
 * XREFs of ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x180006CA0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18000A2B0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

void wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>()
{
  RPC_BINDING_HANDLE *v0; // rbx
  RPC_BINDING_HANDLE v1; // rdi
  void *v2; // rcx

  v0 = (RPC_BINDING_HANDLE *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (RPC_BINDING_HANDLE)*((_QWORD *)v1 + 2);
      free(v2);
    }
    *v0++ = 0LL;
  }
  while ( v0 != &ExecutionModel::Internal::rpc_handle );
}
