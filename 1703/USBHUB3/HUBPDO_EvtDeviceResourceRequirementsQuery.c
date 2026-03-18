/*
 * XREFs of HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C006C7D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008E20 (HUBSM_AddDsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceResourceRequirementsQuery(const void *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_1C005B070)
                  + 24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
         WdfDriverGlobals,
         v3,
         v4,
         0LL,
         9754,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)v2 + 405) & 0x4000) == 0 )
    {
      KeClearEvent((PRKEVENT)(v2 + 199));
      HUBSM_AddDsmEvent((__int64)v2, 4095LL);
      HUBMISC_WaitForSignal(v2 + 199, "Pre Start Completion", a1);
    }
    KeClearEvent((PRKEVENT)(v2 + 196));
    HUBSM_AddDsmEvent((__int64)v2, 4091LL);
    HUBMISC_WaitForSignal(v2 + 196, "Device ResourcesQuery", a1);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      v6,
      0LL,
      9793LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  else
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2[1] + 1432LL),
      2u,
      5u,
      0x83u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      v8);
  }
  return 0LL;
}
