/*
 * XREFs of ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800076C4
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800071D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x18006E1B4 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

signed __int64 __fastcall wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
        __int64 a1,
        char a2)
{
  unsigned __int64 CurrentThreadId; // rbp
  unsigned __int64 v4; // rsi
  signed __int64 result; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rax

  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId % 0x14;
  for ( result = wil::details::g_threadFailureCallbacks[CurrentThreadId % 0x14]; result; result = *(_QWORD *)(result + 16) )
  {
    if ( *(_DWORD *)(result + 8) == (_DWORD)CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         24LL);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_DWORD *)(v6 + 8) = CurrentThreadId;
  _m_prefetchw(&wil::details::g_threadFailureCallbacks[v4]);
  do
  {
    v7 = wil::details::g_threadFailureCallbacks[v4];
    *(_QWORD *)(v6 + 16) = v7;
  }
  while ( v7 != _InterlockedCompareExchange64(&wil::details::g_threadFailureCallbacks[v4], v6, v7) );
  return v6;
}
