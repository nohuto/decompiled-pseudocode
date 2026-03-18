/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C00104F0
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInConfigured @ 0x1C0016F30 (HUBDSM_CompletingClientRequestOnFailureInConfigured.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C0016FB0 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 * Callees:
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithLastStatus(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int16 v6; // ax
  __int64 v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  _QWORD v10[5]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 1544);
  v3 = *(_QWORD *)(a1 + 440);
  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v10);
  if ( LODWORD(v10[3]) == 2228227 )
  {
    v5 = v10[1];
    *(_DWORD *)(v10[1] + 4LL) = *(_DWORD *)(a1 + 1548);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
      Template_pqq(
        *(unsigned __int16 *)(v5 + 2),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v5 + 2),
        *(_DWORD *)(v5 + 4));
    if ( *(_WORD *)(v5 + 2) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x10u);
    v6 = *(_WORD *)(v5 + 2);
    if ( v6 )
    {
      if ( v6 == 1 )
        *(_QWORD *)(v5 + 40) = -1LL;
    }
    else
    {
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 1544) = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    LODWORD(v9) = v1;
    LODWORD(v8) = v10[3];
    Template_pqq(
      v4,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1500),
      *(_QWORD *)(a1 + 24),
      v8,
      v9);
  }
  if ( (*(_DWORD *)(a1 + 1620) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1500) = 0LL;
    *(_QWORD *)(a1 + 1508) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFBF);
  }
  if ( v1 >= 0 )
    v1 = -1073741823;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v3,
           (unsigned int)v1);
}
