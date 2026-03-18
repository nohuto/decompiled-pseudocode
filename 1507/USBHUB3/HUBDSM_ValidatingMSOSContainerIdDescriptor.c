/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C0018830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0027430 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C0057090);
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
  if ( *(_DWORD *)(v1 + 240) == 24 )
  {
    if ( *(_QWORD *)(v1 + 1724) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(v1 + 1732) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_OWORD *)(v1 + 2048) = *(_OWORD *)(v1 + 1724);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1616), 8u);
      return v2;
    }
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x106u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    v4 = 114LL;
  }
  else
  {
    v8 = 24;
    v7 = *(_DWORD *)(v1 + 240);
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x105u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids, v7, v8);
    v4 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(v1, v4);
  WPP_RECORDER_SF_(v3, 2u, 5u, 0x107u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
  v2 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR,
      (const GUID *)(v1 + 1500),
      *(_QWORD *)(v1 + 24));
  return v2;
}
