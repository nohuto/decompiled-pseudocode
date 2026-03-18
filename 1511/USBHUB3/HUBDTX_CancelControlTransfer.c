/*
 * XREFs of HUBDTX_CancelControlTransfer @ 0x1C00206C0
 * Callers:
 *     HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x1C0018990 (HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_CancelControlTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 232));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             3u,
             5u,
             0x24u,
             (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids);
  return result;
}
