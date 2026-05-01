/*
 * XREFs of ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180007C14
 * Callers:
 *     ?StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180020CA8 (-StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021214 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021774 (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
        __int64 a1,
        char a2)
{
  DWORD CurrentThreadId; // edi
  unsigned __int64 v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  signed __int64 v7; // rax

  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId % 0x14uLL;
  for ( result = (_QWORD *)wil::details::g_threadFailureCallbacks[v4]; result; result = (_QWORD *)result[2] )
  {
    if ( *((_DWORD *)result + 2) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  v6 = malloc(0x18uLL);
  if ( !v6 )
    return 0LL;
  *v6 = 0LL;
  v6[2] = 0LL;
  *((_DWORD *)v6 + 2) = CurrentThreadId;
  _m_prefetchw(&wil::details::g_threadFailureCallbacks[v4]);
  do
  {
    v7 = wil::details::g_threadFailureCallbacks[v4];
    v6[2] = v7;
  }
  while ( v7 != _InterlockedCompareExchange64(&wil::details::g_threadFailureCallbacks[v4], (signed __int64)v6, v7) );
  return v6;
}
