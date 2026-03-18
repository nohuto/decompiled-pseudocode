/*
 * XREFs of HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C001D000
 * Callers:
 *     HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x1C00181E0 (HUBDSM_AcquiringAddressZeroOwnershipOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CDBC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 416),
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 224LL);
  v2[2] = *(_QWORD *)(a1 + 24);
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491007u);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x13u,
             (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
             v4);
  }
  return result;
}
