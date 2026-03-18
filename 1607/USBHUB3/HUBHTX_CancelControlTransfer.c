/*
 * XREFs of HUBHTX_CancelControlTransfer @ 0x1C0003994
 * Callers:
 *     HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x1C000D9A0 (HUBPSM20_CancellingDisableOnHubStopSuspend.c)
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000D9C0 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CancelControlTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 16));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 1432),
             2u,
             4u,
             0x27u,
             (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  return result;
}
