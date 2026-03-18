/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C000FC98
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInDisabled @ 0x1C0016520 (HUBDSM_CompletingClientRequestOnFailureInDisabled.c)
 *     HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue @ 0x1C0016A00 (HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue.c)
 * Callees:
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C000FA0C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusFailed(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int USBDErrorFromNTStatus; // eax
  __int16 v6; // ax
  __int64 v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = 0LL;
  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v10);
  if ( LODWORD(v10[3]) == 2228227 )
  {
    v4 = v10[1];
    USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
    *(_DWORD *)(v4 + 4) = USBDErrorFromNTStatus;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
      Template_pqq(
        *(unsigned __int16 *)(v4 + 2),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v4 + 2),
        USBDErrorFromNTStatus);
    if ( *(_WORD *)(v4 + 2) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x10u);
    v6 = *(_WORD *)(v4 + 2);
    if ( v6 )
    {
      if ( v6 == 1 )
        *(_QWORD *)(v4 + 40) = -1LL;
    }
    else
    {
      *(_QWORD *)(v4 + 32) = 0LL;
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    LODWORD(v9) = -1073741823;
    LODWORD(v8) = v10[3];
    Template_pqq(
      v3,
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
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           3221225473LL);
}
