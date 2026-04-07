/*
 * XREFs of sub_180001000 @ 0x180001000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *sub_180001000()
{
  void *result; // rax

  result = &wil::details::g_threadFailureCallbacks;
  wil::details::g_pThreadFailureCallbacks = (__int64)&wil::details::g_threadFailureCallbacks;
  return result;
}
