/*
 * XREFs of HUBUCX_ForwardRequestToUCX @ 0x1C001F324
 * Callers:
 *     HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile @ 0x1C0017440 (HUBDSM_FowardingStreamsRequestToUcxInConfiguredSuspendedWithSpecialFile.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBUCX_ForwardRequestToUCX(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax

  v2 = a1[55];
  v3 = *(_QWORD *)(*a1 + 32LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2008))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v2,
    HUBUCX_ClientRequestCompleteFromUCX,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v2,
          v3,
          0LL) )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, v2, v4);
    HUBSM_AddEvent((__int64)(a1 + 61), 0xFB0u);
  }
}
