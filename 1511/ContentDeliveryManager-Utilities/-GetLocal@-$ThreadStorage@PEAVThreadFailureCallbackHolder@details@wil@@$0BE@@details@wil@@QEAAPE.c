/*
 * XREFs of ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x180003EFC
 * Callers:
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18000BEAC (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18000C4F0 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18000CAF0 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  signed __int64 v8; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0x14uLL;
  for ( result = *(_QWORD **)(v2 + 8 * v5); result; result = (_QWORD *)result[2] )
  {
    if ( *((_DWORD *)result + 2) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  v7 = malloc(0x18uLL);
  if ( !v7 )
    return 0LL;
  *v7 = 0LL;
  v7[2] = 0LL;
  *((_DWORD *)v7 + 2) = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v5));
  do
  {
    v8 = *(_QWORD *)(v2 + 8 * v5);
    v7[2] = v8;
  }
  while ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v5), (signed __int64)v7, v8) );
  return v7;
}
