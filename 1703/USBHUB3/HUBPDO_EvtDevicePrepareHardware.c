/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C0001334 (Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002A0E8 (HUBMISC_GetDeviceInterfacePath.c)
 *     UsbSleepStudy_RegisterPdo @ 0x1C00362B0 (UsbSleepStudy_RegisterPdo.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006EFDC (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0070940 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070DC8 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C0070F04 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C00724F0 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C0074BAC (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C0074E28 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  int DeviceInterfacePath; // eax
  unsigned __int16 v8; // r9
  _QWORD *v9; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // r13
  wchar_t *v12; // rbx
  int (__fastcall *v13)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *); // rax
  wchar_t *v14; // rax
  __int64 v15; // r9
  char *v16; // rdx
  __int64 v17; // r8
  unsigned __int16 *v18; // rcx
  int v19; // eax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  int v22; // ecx
  int v23; // r13d
  int v24; // eax
  __int64 v25; // rax
  const char *v26; // r8
  const char *v27; // rdx
  const char *v28; // rcx
  __int64 v29; // rax
  const void *v30; // rbx
  struct _DEVICE_OBJECT *v31; // rax
  __int64 v32; // r8
  int v33; // eax
  __int64 v35; // [rsp+20h] [rbp-160h]
  __int64 v36; // [rsp+28h] [rbp-158h]
  __int64 v37; // [rsp+40h] [rbp-140h]
  char v38; // [rsp+C0h] [rbp-C0h]
  char v39; // [rsp+100h] [rbp-80h]
  char v40; // [rsp+104h] [rbp-7Ch]
  __int16 v41; // [rsp+108h] [rbp-78h]
  char v42; // [rsp+10Ch] [rbp-74h]
  int v43; // [rsp+110h] [rbp-70h]
  int v44; // [rsp+114h] [rbp-6Ch]
  int v45; // [rsp+118h] [rbp-68h]
  int v46; // [rsp+11Ch] [rbp-64h]
  unsigned __int16 v47; // [rsp+120h] [rbp-60h]
  __int64 v48; // [rsp+128h] [rbp-58h] BYREF
  __int64 v49; // [rsp+130h] [rbp-50h] BYREF
  wchar_t *v50; // [rsp+138h] [rbp-48h]
  const wchar_t *v51; // [rsp+140h] [rbp-40h]
  __int64 v52; // [rsp+148h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp-30h] BYREF
  unsigned __int16 v54; // [rsp+160h] [rbp-20h] BYREF
  void *Src; // [rsp+168h] [rbp-18h]
  __int64 v56; // [rsp+170h] [rbp-10h]
  __int64 v57; // [rsp+178h] [rbp-8h]
  wchar_t *v58; // [rsp+180h] [rbp+0h]
  _QWORD v59[7]; // [rsp+188h] [rbp+8h] BYREF
  int v60; // [rsp+1C0h] [rbp+40h] BYREF
  char v61; // [rsp+1C4h] [rbp+44h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v52 = v2;
  v3 = *(_QWORD *)(v2 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START,
      0LL,
      *(_QWORD *)(v3 + 24));
  _InterlockedOr((volatile signed __int32 *)(v3 + 1620), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( (*(_DWORD *)(v3 + 2448) & 4) != 0 && (*(_DWORD *)(v3 + 2452) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 2464, 8LL);
    *(_DWORD *)(v3 + 2452) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (*(_DWORD *)(v3 + 2448) & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)&g_MsOs20Flags, 4, 4, v3 + 2448);
  HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)L"*,", 4, 4, v3 + 32);
  if ( (*(_DWORD *)(v3 + 1616) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(*(_QWORD *)v3 + 232LL) >= *(_BYTE *)(v4 + 202) )
    {
      *(_DWORD *)(v4 + 1424) = 7;
      WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x44u,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids);
      v6 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        Template_p(v5, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, *(_QWORD *)(v3 + 24));
      goto LABEL_84;
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
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        DeviceInterfacePath);
      goto LABEL_84;
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
                      off_1C005B110)
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
    v58 = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v11, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v59, 0, sizeof(v59));
    v48 = 0LL;
    LODWORD(v59[0]) = 56;
    v12 = 0LL;
    v59[3] = 0x100000001LL;
    v59[4] = a1;
    v13 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v50 = 0LL;
    if ( v13(WdfDriverGlobals, 0LL, v59, &v48) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           a1,
           v48) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v48,
        &v54);
      v14 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v54 + 2LL, 0x64334855u);
      v50 = v14;
      v12 = v14;
      if ( v14 )
      {
        memset(v14, 0, v54 + 2LL);
        memmove(v12, Src, v54);
      }
    }
    memset(v59, 0, sizeof(v59));
    v49 = 0LL;
    LODWORD(v59[0]) = 56;
    v59[3] = 0x100000001LL;
    v59[4] = a1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           a1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v59,
           &v49) < 0 )
      v51 = 0LL;
    else
      v51 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v49,
                               0LL);
    v15 = *(_QWORD *)(v2 + 16);
    v16 = &v61;
    v17 = 5LL;
    v18 = (unsigned __int16 *)(v15 + 314);
    v60 = *(unsigned __int16 *)(v15 + 312);
    do
    {
      v19 = *v18++;
      *(_DWORD *)v16 = v19;
      v16 += 4;
      --v17;
    }
    while ( v17 );
    v20 = *(_BYTE *)(v15 + 232);
    if ( v20 < 6u )
      *(&v60 + v20) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    {
      v21 = *(_QWORD *)(v3 + 8);
      v56 = v21;
      v22 = *(_DWORD *)(v21 + 204);
      if ( (v22 & 2) != 0 )
        v40 = *(_BYTE *)(v21 + 1341);
      else
        v40 = 0;
      v23 = *(_DWORD *)(v15 + 160);
      if ( v23 == 1 )
        v41 = *(_WORD *)(v15 + 176);
      else
        LOBYTE(v41) = 0;
      LOBYTE(v24) = -1;
      LOBYTE(v43) = -1;
      if ( v23 == 1 )
        v24 = *(_DWORD *)(v15 + 172);
      v42 = v24;
      if ( v23 == 1 )
      {
        v43 = *(_DWORD *)(v15 + 168);
        v44 = *(_DWORD *)(v15 + 188);
      }
      else
      {
        LOBYTE(v44) = 0;
      }
      if ( v23 == 1 )
        v45 = *(_DWORD *)(v15 + 184);
      else
        LOBYTE(v45) = 0;
      if ( v23 == 1 )
        v46 = *(_DWORD *)(v15 + 180);
      else
        LOBYTE(v46) = 0;
      v25 = *(_QWORD *)(v3 + 2000);
      v57 = v25;
      if ( v25 )
        v47 = *(_WORD *)(v25 + 2);
      else
        v47 = 0;
      v26 = 0LL;
      v39 = (v22 & 2) != 0;
      if ( v23 == 2 )
        v26 = (const char *)(v15 + 178);
      v27 = 0LL;
      if ( v23 == 2 )
        v27 = (const char *)(v15 + 173);
      v28 = 0LL;
      if ( v23 == 2 )
        v28 = (const char *)(v15 + 168);
      v38 = v23;
      v11 = v58;
      v12 = v50;
      Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
        (__int64)v28,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V1,
        0LL,
        *(_QWORD *)(*(_QWORD *)v3 + 240LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v56 + 200),
        v51,
        v58,
        v37,
        v3 + 1972,
        v47,
        v57,
        v50,
        (*(_BYTE *)(v2 + 32) & 1) == 0,
        *(_BYTE *)(v15 + 232) + 1,
        (__int64)&v60,
        v46,
        v45,
        v44,
        v43,
        v42,
        v41,
        *(_DWORD *)(v52 + 384),
        *(_DWORD *)(v3 + 2208),
        v38,
        v28,
        v27,
        v26,
        v39,
        v40,
        *(_QWORD *)(v56 + 1416));
      v2 = v52;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0x64334855u);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x64334855u);
    if ( v48 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v49 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  if ( (*(_DWORD *)(v3 + 1616) & 6) == 0 )
    WMI_RegisterDevice(a1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C005B110)
                + 92) )
  {
    v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v30 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                          WdfDriverGlobals,
                          v29);
    v31 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                     WdfDriverGlobals,
                                     a1);
    v33 = UsbSleepStudy_RegisterPdo(v31, v30, v32, (_QWORD *)(v2 + 392));
    v6 = v33;
    if ( v33 < 0 )
    {
      LODWORD(v36) = v33;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x4Au,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        v36);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_84:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v35) = v6;
    Template_pq(v5, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v35);
  }
  LODWORD(v36) = *(_DWORD *)(v3 + 1628);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x4Bu,
    (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
    v36);
  return v6;
}
