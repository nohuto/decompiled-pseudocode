/*
 * XREFs of HUBHTX_CancelInterruptTransfer @ 0x1C0003394
 * Callers:
 *     HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1C0006F10 (HUBHSM_CancellingInterruptTransferOnSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CancelInterruptTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 912));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 2464),
             2u,
             3u,
             0x1Fu,
             (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
  return result;
}
