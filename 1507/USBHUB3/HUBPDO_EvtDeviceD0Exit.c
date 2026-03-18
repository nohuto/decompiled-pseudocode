/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x1C0013520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     Template_pqqh @ 0x1C0009CB4 (Template_pqqh.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C002F1B8 (HUBIDLE_AddEvent.c)
 *     UsbSleepStudy_DeviceD0Exit @ 0x1C0032C0C (UsbSleepStudy_DeviceD0Exit.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     WMI_FireNotification @ 0x1C006F90C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v15; // [rsp+28h] [rbp-59h]
  __int64 v16; // [rsp+30h] [rbp-51h]
  _QWORD v17[3]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v18; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v19[7]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int128 v20; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v20 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0057090)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2160)) >= 0 )
  {
    v20 = *(_OWORD *)(v5 + 2160);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1620), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1568));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v7 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    v8 = *(_DWORD *)(v4 + 32) >> 3;
    LOWORD(v8) = (*(_DWORD *)(v4 + 32) & 8) != 0;
    Template_pqqh(v8, &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START, (const GUID *)&v20, *(_QWORD *)(v5 + 24), a2, v6, v8);
  }
  if ( a2 == 5 )
  {
    v10 = 4075;
    if ( !v7 )
      goto LABEL_23;
  }
  else
  {
    if ( !v7 && (*(_DWORD *)(v5 + 1616) & 0x400) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v5 + 1616), 0x400u);
      memset(v19, 0, sizeof(v19));
      LODWORD(v19[0]) = 56;
      v19[3] = 0x100000001LL;
      v17[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
      v19[4] = a1;
      v17[0] = 24LL;
      v17[2] = 1LL;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
             WdfDriverGlobals,
             v17,
             v19,
             &v18);
      if ( v9 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v18);
      }
      else
      {
        LODWORD(v16) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          2u,
          0x42u,
          (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
          v16);
      }
    }
    if ( a2 == 6 )
    {
      v10 = 4079;
      goto LABEL_23;
    }
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v11 < 0 )
        {
          LODWORD(v16) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x43u,
            (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
            v16);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1616) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
  }
  v10 = 4071;
LABEL_23:
  HUBSM_AddEvent(v5 + 488, v10);
  HUBMISC_WaitForSignal((PVOID)(v5 + 1568));
  LOBYTE(v12) = 1;
  v13 = *(_DWORD *)(v5 + 1560);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2400),
         v12) == 1 )
    WMI_FireNotification(*(_QWORD *)v5, *(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL), 1LL);
  if ( *(_QWORD *)(v4 + 392) )
    UsbSleepStudy_DeviceD0Exit();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    LODWORD(v16) = v7;
    LODWORD(v15) = v13;
    Template_pqq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      (const GUID *)&v20,
      *(_QWORD *)(v5 + 24),
      v15,
      v16);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1620), 0xFFFFFF7F);
  return v13;
}
