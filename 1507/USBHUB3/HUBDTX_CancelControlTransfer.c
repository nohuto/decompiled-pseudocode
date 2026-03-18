/*
 * XREFs of HUBDTX_CancelControlTransfer @ 0x1C001FAA8
 * Callers:
 *     HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x1C0017F60 (HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
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
             (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids);
  return result;
}
