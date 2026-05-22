/*
 * XREFs of ?GetLastHitTestedTarget@MPCInputProviderBase@@UEBA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x18002CCC0
 * Callers:
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall MPCInputProviderBase::GetLastHitTestedTarget(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 136);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
