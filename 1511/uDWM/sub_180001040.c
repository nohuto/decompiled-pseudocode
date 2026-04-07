/*
 * XREFs of sub_180001040 @ 0x180001040
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

int sub_180001040()
{
  memset_0(&wil::details::g_threadFailureCallbacks, 0, 0xA0uLL);
  return atexit((void (__cdecl *)())wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>);
}
