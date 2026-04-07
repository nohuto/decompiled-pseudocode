/*
 * XREFs of ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800104B4
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010404 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x180076264 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

signed __int64 __fastcall wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // r14
  unsigned __int64 CurrentThreadId; // rbp
  unsigned __int64 v5; // rsi
  signed __int64 result; // rax
  signed __int64 v7; // rcx
  signed __int64 v8; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0x14;
  for ( result = *(_QWORD *)(v2 + 8 * (CurrentThreadId % 0x14)); result; result = *(_QWORD *)(result + 16) )
  {
    if ( *(_DWORD *)(result + 8) == (_DWORD)CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         24LL);
  if ( !v7 )
    return 0LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_DWORD *)(v7 + 8) = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v5));
  do
  {
    v8 = *(_QWORD *)(v2 + 8 * v5);
    *(_QWORD *)(v7 + 16) = v8;
  }
  while ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v5), v7, v8) );
  return v7;
}
