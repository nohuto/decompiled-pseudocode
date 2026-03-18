/*
 * XREFs of HUBHTX_DisablePortUsingControlTransfer @ 0x1C0003E44
 * Callers:
 *     HUBPSM20_DisablingPortOnPortCycleWithTimer @ 0x1C000E5A0 (HUBPSM20_DisablingPortOnPortCycleWithTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_DisablePortUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 168) = *(_BYTE *)(a1 + 168) & 0x1C | 0x23;
  *(_BYTE *)(a1 + 169) = 1;
  *(_WORD *)(a1 + 170) = 1;
  *(_WORD *)(a1 + 172) = *(_WORD *)(a1 + 200);
  *(_WORD *)(a1 + 174) = 0;
  v3 = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 1432),
    4u,
    4u,
    0x32u,
    (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
    v3);
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 240LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2240LL));
  if ( (int)result < 0 )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x33u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v4);
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
