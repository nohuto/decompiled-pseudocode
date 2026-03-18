/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x180073310
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x180081520 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this, unsigned int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 39) + 56LL))(*((_QWORD *)this + 39), a2);
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x29Au);
    return 2291662989LL;
  }
  return result;
}
