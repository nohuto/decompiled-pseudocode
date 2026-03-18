/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x1C0014E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     Template_pqqh @ 0x1C000A708 (Template_pqqh.c)
 *     Template_pqq @ 0x1C000A798 (Template_pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     UsbSleepStudy_DeviceD0Exit @ 0x1C0036608 (UsbSleepStudy_DeviceD0Exit.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     WMI_FireNotification @ 0x1C0074E28 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  PWDF_DRIVER_GLOBALS v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *); // rax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // esi
  __int64 v19; // [rsp+28h] [rbp-59h]
  __int64 v20; // [rsp+30h] [rbp-51h]
  _QWORD v21[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v22; // [rsp+58h] [rbp-29h]
  __int64 v23; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v24[7]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int128 v25; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v5 = WdfFunctions_01015;
  v6 = v4;
  v7 = WdfDriverGlobals;
  v8 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v25 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(v5 + 1616))(
                      v7,
                      v7->Driver,
                      off_1C005B110)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v8 + 2160)) >= 0 )
  {
    v25 = *(_OWORD *)(v8 + 2160);
    _InterlockedOr((volatile signed __int32 *)(v8 + 1620), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v8 + 1568));
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v10 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v11 = *(_DWORD *)(v6 + 32) >> 3;
    LOWORD(v11) = (*(_DWORD *)(v6 + 32) & 8) != 0;
    Template_pqqh(v11, &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START, (const GUID *)&v25, *(_QWORD *)(v8 + 24), a2, v9, v11);
  }
  if ( a2 == 5 )
  {
    v14 = 4075;
    if ( !v10 )
      goto LABEL_23;
  }
  else
  {
    if ( !v10 && (*(_DWORD *)(v8 + 1616) & 0x400) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v8 + 1616), 0x400u);
      memset(v24, 0, sizeof(v24));
      LODWORD(v24[0]) = 56;
      v22 = 0LL;
      v24[3] = 0x100000001LL;
      v21[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
      v24[4] = a1;
      v21[0] = 24LL;
      v12 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032);
      v22 = 1LL;
      v13 = v12(WdfDriverGlobals, v21, v24, &v23);
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v23);
      }
      else
      {
        LODWORD(v20) = v13;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v8 + 8) + 1432LL),
          2u,
          2u,
          0x42u,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
          v20);
      }
    }
    if ( a2 == 6 )
    {
      v14 = 4079;
      goto LABEL_23;
    }
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v6 + 32) & 4) != 0 )
      {
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v15 < 0 )
        {
          LODWORD(v20) = v15;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v8 + 8) + 1432LL),
            3u,
            5u,
            0x43u,
            (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
            v20);
        }
        _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v8 + 1616) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v6 + 72, 6008LL, 0LL);
    }
  }
  v14 = 4071;
LABEL_23:
  HUBSM_AddEvent(v8 + 488, v14);
  HUBMISC_WaitForSignal((PVOID)(v8 + 1568));
  LOBYTE(v16) = 1;
  v17 = *(_DWORD *)(v8 + 1560);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v8 + 2400),
         v16) == 1 )
    WMI_FireNotification(*(_QWORD *)v8, *(unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 200LL), 1LL);
  if ( *(_QWORD *)(v6 + 392) )
    UsbSleepStudy_DeviceD0Exit();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v20) = v10;
    LODWORD(v19) = v17;
    Template_pqq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      (const GUID *)&v25,
      *(_QWORD *)(v8 + 24),
      v19,
      v20);
  }
  _InterlockedAnd((volatile signed __int32 *)(v8 + 1620), 0xFFFFFF7F);
  return v17;
}
