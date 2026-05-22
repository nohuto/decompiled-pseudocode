/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800A3C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  void **v0; // rdi
  void *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void **result; // rax

  v0 = (void **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (void *)*((_QWORD *)v1 + 2);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &TestCommandHost::m_instance;
    ++v0;
  }
  while ( v0 != &TestCommandHost::m_instance );
  return result;
}
