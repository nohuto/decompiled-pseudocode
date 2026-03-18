/*
 * XREFs of HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0023250
 * Callers:
 *     HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x1C00175F0 (HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BA78 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64 *), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[60],
    HUBDTX_GetDeviceDescriptorComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a1[60],
             *(_QWORD *)(*a1 + 32),
             0LL);
  if ( !(_BYTE)result )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x65u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids);
    HUBSM_AddEvent((__int64)(a1 + 61), 0xFA4u);
    HUBFDO_CompleteGetDescriptorRequest(*a1, *(unsigned __int16 *)(a1[1] + 200), a1[60], -1073741823, 0);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v3,
             "User Mode FDO Request",
             5850LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
  }
  return result;
}
