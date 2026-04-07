/*
 * XREFs of ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x180048430
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18004AD10 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

_BYTE *wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>()
{
  signed __int64 *v0; // r14
  signed __int64 v1; // rbp
  signed __int64 v2; // rsi
  _BYTE *result; // rax

  v0 = wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = *(_QWORD *)(v1 + 16);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, signed __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v2);
    }
    *v0 = 0LL;
    result = byte_1800BC620;
    ++v0;
  }
  while ( v0 != (signed __int64 *)byte_1800BC620 );
  return result;
}
