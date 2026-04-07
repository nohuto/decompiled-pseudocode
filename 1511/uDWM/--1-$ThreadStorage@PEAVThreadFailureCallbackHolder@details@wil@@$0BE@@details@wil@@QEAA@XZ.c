/*
 * XREFs of ??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x18004E978
 * Callers:
 *     j_??1?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ @ 0x1800513B0 (j_--1-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

int *wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::~ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>()
{
  int *v0; // r14
  __int64 v1; // rbp
  __int64 v2; // rsi
  int *result; // rax

  v0 = (int *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD *)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = *(_QWORD *)(v1 + 16);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = &dword_1800BE5B0;
    v0 += 2;
  }
  while ( v0 != &dword_1800BE5B0 );
  return result;
}
