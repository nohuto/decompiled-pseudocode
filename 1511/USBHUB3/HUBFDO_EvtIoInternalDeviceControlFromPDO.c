/*
 * XREFs of HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

void __fastcall HUBFDO_EvtIoInternalDeviceControlFromPDO(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v6,
                    off_1C0057198);
  if ( a5 == 2228243 )
  {
    memset(v9, 0, sizeof(v9));
    LOWORD(v9[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      a2,
      v9);
    v7[316] = *(_QWORD *)(*(_QWORD *)(v9[2] + 24LL) + 8LL);
    v7[309] = a2;
    HUBSM_AddEvent((__int64)(v7 + 151), 0x7F7u);
  }
  else
  {
    WPP_RECORDER_SF_d(v7[308], 2u, 3u, 0x21u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, a5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      3221225473LL);
  }
}
