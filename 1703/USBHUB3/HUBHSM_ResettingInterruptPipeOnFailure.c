/*
 * XREFs of HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBHSM_ResettingInterruptPipeOnFailure(__int64 a1)
{
  _QWORD *v1; // rsi
  PWDF_DRIVER_GLOBALS v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _QWORD v7[9]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 960);
  memset(v1 + 99, 0, 0x28uLL);
  v2 = WdfDriverGlobals;
  v1[100] = v1[30];
  *((_DWORD *)v1 + 198) = 1966120;
  v1[102] = v1[134];
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(v2, v1[2]);
  v4 = v1[96];
  v5 = v3;
  memset(v7, 0, sizeof(v7));
  LOBYTE(v7[0]) = 15;
  LODWORD(v7[3]) = 2228227;
  v7[1] = v1 + 99;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v4, v7);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v4,
    HUBPARENT_ResetInterruptPipeComplete,
    v1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v4,
          v5,
          0LL) )
  {
    WPP_RECORDER_SF_(v1[311], 2u, 3u, 0x11u, (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v4) < 0 )
      HUBSM_AddEvent(v1 + 154, 2012LL);
  }
  return 1000LL;
}
