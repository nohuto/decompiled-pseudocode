/*
 * XREFs of HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0022114
 * Callers:
 *     HUBDSM_ClearingEndpointHaltOnClientResetPipe @ 0x1C0016F60 (HUBDSM_ClearingEndpointHaltOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0027038 (HUBMISC_ControlTransfer.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

void __fastcall HUBDTX_ClearEndpointHaltUsingControlTransfer(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  __int16 v5; // cx
  char v6; // al
  __int64 v7; // [rsp+28h] [rbp-60h]
  _WORD v8[20]; // [rsp+50h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 440);
  v8[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v8);
  v3 = *(_QWORD *)(a1 + 1640);
  if ( v3 )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 32) + 2LL);
    v6 = *(_BYTE *)(a1 + 384) & 0x1C;
    *(_BYTE *)(a1 + 385) = 1;
    *(_WORD *)(a1 + 386) = 0;
    *(_BYTE *)(a1 + 384) = v6 | 2;
    *(_WORD *)(a1 + 388) = v5;
    *(_WORD *)(a1 + 390) = 0;
    v4 = HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 232,
           (__int64)HUBDTX_ControlTransferComplete,
           0LL,
           0,
           0,
           *(_BYTE *)(a1 + 1496));
    if ( v4 >= 0 )
      return;
  }
  else
  {
    v4 = -1073741811;
    *(_DWORD *)(a1 + 1548) = -2147482112;
    *(_DWORD *)(a1 + 1544) = -1073741811;
  }
  LODWORD(v7) = v4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x4Eu,
    (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
    v7);
  HUBSM_AddEvent(a1 + 488, 0xFA4u);
}
