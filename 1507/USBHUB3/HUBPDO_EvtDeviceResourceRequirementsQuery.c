/*
 * XREFs of HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C0067D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C00083F0 (HUBSM_AddDsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
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
                      off_1C00570C0)
                  + 24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
         WdfDriverGlobals,
         v3,
         v4,
         0LL,
         9440,
         "drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
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
      9479LL,
      "drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  else
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2[1] + 1432LL),
      2u,
      5u,
      0x7Cu,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v8);
  }
  return 0LL;
}
