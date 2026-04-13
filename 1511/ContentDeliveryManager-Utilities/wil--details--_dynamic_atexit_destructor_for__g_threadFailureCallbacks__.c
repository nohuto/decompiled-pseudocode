/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180029C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
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
      free(v2);
    }
    *v0 = 0LL;
    result = &std::numpunct<char>::id;
    ++v0;
  }
  while ( v0 != (_QWORD **)&std::numpunct<char>::id );
  return result;
}
