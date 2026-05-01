/*
 * XREFs of ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x180023D40
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800256F0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     free_0 @ 0x180024406 (free_0.c)
 */

void *wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>()
{
  _QWORD **v0; // rbx
  _QWORD *v1; // rdi
  void *v2; // rcx
  void *result; // rax

  v0 = (_QWORD **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      free_0(v2);
    }
    *v0 = 0LL;
    result = &RtlpTestHookInit;
    ++v0;
  }
  while ( v0 != (_QWORD **)&RtlpTestHookInit );
  return result;
}
