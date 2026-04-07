/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x18004F054
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180051910 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

_BYTE *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  _BYTE *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  _BYTE *result; // rax

  v0 = &wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = byte_1800B7E10;
    v0 += 8;
  }
  while ( v0 != byte_1800B7E10 );
  return result;
}
