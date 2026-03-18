/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x18007A600
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x18008F730 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 56LL))(*((_QWORD *)this + 39));
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x29Cu);
    return 2291662989LL;
  }
  return result;
}
