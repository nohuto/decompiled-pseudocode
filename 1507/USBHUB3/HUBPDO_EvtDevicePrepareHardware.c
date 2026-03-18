/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_ppqzznhCR6zcqQ6qqqqqqqq @ 0x1C0001300 (Template_ppqzznhCR6zcqQ6qqqqqqqq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBUCX_GetControllerInfo @ 0x1C001D040 (HUBUCX_GetControllerInfo.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0026BD4 (HUBMISC_GetDeviceInterfacePath.c)
 *     UsbSleepStudy_RegisterPdo @ 0x1C00328D0 (UsbSleepStudy_RegisterPdo.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C0069EFC (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C006B658 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C006BADC (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C006BC10 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C006D1A8 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C006F69C (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C006F90C (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int DeviceInterfacePath; // eax
  unsigned __int16 v8; // r9
  _QWORD *v9; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // rdi
  wchar_t *v12; // rbx
  int (__fastcall *v13)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *); // rax
  wchar_t *v14; // rax
  __int64 v15; // r9
  char v16; // r10
  char v17; // r11
  char *v18; // rdx
  __int64 v19; // r8
  unsigned __int16 *v20; // rcx
  int v21; // eax
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  const void *v25; // rbx
  struct _DEVICE_OBJECT *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+30h] [rbp-118h]
  __int64 v32; // [rsp+48h] [rbp-100h]
  char v33[4]; // [rsp+C8h] [rbp-80h] BYREF
  unsigned __int16 v34; // [rsp+CCh] [rbp-7Ch] BYREF
  _WORD v35[2]; // [rsp+D0h] [rbp-78h] BYREF
  int v36; // [rsp+D4h] [rbp-74h]
  __int64 v37; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v38; // [rsp+E0h] [rbp-68h] BYREF
  wchar_t *v39; // [rsp+E8h] [rbp-60h]
  wchar_t *v40; // [rsp+F0h] [rbp-58h]
  const wchar_t *v41; // [rsp+F8h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp-48h] BYREF
  __int64 v43; // [rsp+110h] [rbp-38h]
  unsigned __int16 v44; // [rsp+118h] [rbp-30h] BYREF
  void *Src; // [rsp+120h] [rbp-28h]
  __int64 v46; // [rsp+128h] [rbp-20h]
  __int64 v47; // [rsp+130h] [rbp-18h]
  _QWORD v48[7]; // [rsp+138h] [rbp-10h] BYREF
  int v49; // [rsp+170h] [rbp+28h] BYREF
  char v50; // [rsp+174h] [rbp+2Ch] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  v3 = *(_QWORD *)(v2 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START,
      0LL,
      *(_QWORD *)(v3 + 24));
  _InterlockedOr((volatile signed __int32 *)(v3 + 1620), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( (*(_BYTE *)(v3 + 2448) & 4) != 0 && (*(_DWORD *)(v3 + 2452) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 2464, 8LL);
    *(_DWORD *)(v3 + 2452) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (*(_BYTE *)(v3 + 2448) & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)&g_MsOs20Flags, 4, 4, v3 + 2448);
  HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)L"*,", 4, 4, v3 + 32);
  if ( (*(_DWORD *)(v3 + 1616) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(*(_QWORD *)v3 + 200LL) >= *(_BYTE *)(v4 + 202) )
    {
      *(_DWORD *)(v4 + 1424) = 7;
      WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x44u,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
      v6 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x10) != 0 )
        Template_p(v5, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, *(_QWORD *)(v3 + 24));
      goto LABEL_64;
    }
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            a1,
                            &GUID_DEVINTERFACE_USB_HUB,
                            0LL);
    v6 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v8 = 69;
LABEL_14:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        v8,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
        DeviceInterfacePath);
      goto LABEL_64;
    }
    v9 = (_QWORD *)(v3 + 2120);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            a1,
                            (_QWORD *)(v3 + 2120),
                            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
    v6 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v8 = 70;
      goto LABEL_14;
    }
  }
  else
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            a1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v6 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v8 = 71;
      goto LABEL_14;
    }
    v9 = (_QWORD *)(v3 + 2120);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            a1,
                            (_QWORD *)(v3 + 2120),
                            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
    v6 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v8 = 72;
      goto LABEL_14;
    }
  }
  if ( *v9 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v6 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v8 = 73;
      goto LABEL_14;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*(_DWORD *)(v3 + 1620) & 2) != 0 )
    *(_BYTE *)v2 = 0;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0057090)
                  + 4) & 0x1000) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *v9 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v9,
        &DestinationString);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                               ExDefaultNonPagedPoolType,
                               DestinationString.Length + 2LL,
                               0x64334855u);
    v40 = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v11, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v48, 0, sizeof(v48));
    LODWORD(v48[0]) = 56;
    v48[3] = 0x100000001LL;
    v12 = 0LL;
    v48[4] = a1;
    v37 = 0LL;
    v13 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v39 = 0LL;
    if ( v13(WdfDriverGlobals, 0LL, v48, &v37) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           a1,
           v37) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v37,
        &v44);
      v14 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v44 + 2LL, 0x64334855u);
      v39 = v14;
      v12 = v14;
      if ( v14 )
      {
        memset(v14, 0, v44 + 2LL);
        memmove(v12, Src, v44);
      }
    }
    memset(v48, 0, sizeof(v48));
    LODWORD(v48[0]) = 56;
    v48[3] = 0x100000001LL;
    v48[4] = a1;
    v38 = 0LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           a1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v48,
           &v38) < 0 )
      v41 = 0LL;
    else
      v41 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v38,
                               0LL);
    v43 = *(_QWORD *)(v2 + 16);
    if ( (int)HUBUCX_GetControllerInfo(v43, (__int64)&v34, (__int64)v35, (__int64)v33) >= 0 )
    {
      v17 = v33[0];
      v16 = v35[0];
      v15 = v34;
    }
    else
    {
      v15 = 0LL;
      v34 = 0;
      v16 = 0;
      v35[0] = 0;
      v17 = 0;
      v33[0] = 0;
    }
    v18 = &v50;
    v19 = 5LL;
    v20 = (unsigned __int16 *)(v43 + 282);
    v49 = *(unsigned __int16 *)(v43 + 280);
    do
    {
      v21 = *v20++;
      *(_DWORD *)v18 = v21;
      v18 += 4;
      --v19;
    }
    while ( v19 );
    v47 = *(_QWORD *)(v2 + 16);
    v22 = *(_BYTE *)(v47 + 200);
    if ( v22 < 6u )
      *(&v49 + v22) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
    {
      v23 = *(_QWORD *)(v3 + 2000);
      v46 = v23;
      if ( v23 )
        v36 = *(unsigned __int16 *)(v23 + 2);
      else
        v36 = 0;
      v12 = v39;
      Template_ppqzznhCR6zcqQ6qqqqqqqq(
        v43,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION,
        0LL,
        *(_QWORD *)(*(_QWORD *)v3 + 208LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(*(_QWORD *)(v3 + 8) + 200LL),
        v41,
        v40,
        v32,
        v3 + 1972,
        v36,
        v46,
        v39,
        (*(_BYTE *)(v2 + 32) & 1) == 0,
        *(_BYTE *)(v47 + 200) + 1,
        (__int64)&v49,
        *(_DWORD *)(v43 + 264),
        *(_DWORD *)(v43 + 268),
        *(_DWORD *)(v43 + 272),
        v15,
        v16,
        v17,
        *(_DWORD *)(v2 + 384),
        *(_DWORD *)(v3 + 2208));
      v11 = v40;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0x64334855u);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x64334855u);
    if ( v37 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
        WdfDriverGlobals,
        v37,
        v19,
        v15);
    if ( v38 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
        WdfDriverGlobals,
        v38,
        v19,
        v15);
  }
  if ( (*(_DWORD *)(v3 + 1616) & 6) == 0 )
    WMI_RegisterDevice(a1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C0057090)
                + 92) )
  {
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v25 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                          WdfDriverGlobals,
                          v24);
    v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                     WdfDriverGlobals,
                                     a1);
    v28 = UsbSleepStudy_RegisterPdo(v26, v25, v27, (_QWORD *)(v2 + 392));
    v6 = v28;
    if ( v28 < 0 )
    {
      LODWORD(v31) = v28;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x4Au,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
        v31);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_64:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
  {
    LODWORD(v30) = v6;
    Template_pq(v5, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v30);
  }
  LODWORD(v31) = *(_DWORD *)(v3 + 1628);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x4Bu,
    (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
    v31);
  return v6;
}
