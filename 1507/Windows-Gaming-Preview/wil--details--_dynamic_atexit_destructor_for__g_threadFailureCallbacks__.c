/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180028140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  int *v0; // rbx
  _QWORD *v1; // rdi
  void *v2; // rcx
  int *result; // rax

  v0 = (int *)wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      free(v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = &Windows::Internal::Details::_git;
    v0 += 2;
  }
  while ( v0 != &Windows::Internal::Details::_git );
  return result;
}
