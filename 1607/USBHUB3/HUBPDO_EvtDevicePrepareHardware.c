/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C00674F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C0001300 (Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0027888 (HUBMISC_GetDeviceInterfacePath.c)
 *     UsbSleepStudy_RegisterPdo @ 0x1C0033494 (UsbSleepStudy_RegisterPdo.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006BBB0 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C006D308 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C006D78C (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C006D8C0 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C006EE58 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C007134C (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C00715BC (WMI_FireNotification.c)
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
  char v26; // bl
  char v27; // r10
  const char *v28; // r8
  char v29; // r10
  const char *v30; // rdx
  const char *v31; // rcx
  __int64 v32; // rax
  const void *v33; // rbx
  struct _DEVICE_OBJECT *v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-160h]
  __int64 v39; // [rsp+28h] [rbp-158h]
  __int64 v40; // [rsp+40h] [rbp-140h]
  char v41; // [rsp+70h] [rbp-110h]
  char v42; // [rsp+C0h] [rbp-C0h]
  char v43; // [rsp+100h] [rbp-80h]
  __int16 v44; // [rsp+104h] [rbp-7Ch]
  char v45; // [rsp+108h] [rbp-78h]
  int v46; // [rsp+10Ch] [rbp-74h]
  int v47; // [rsp+110h] [rbp-70h]
  int v48; // [rsp+114h] [rbp-6Ch]
  int v49; // [rsp+118h] [rbp-68h]
  unsigned __int16 v50; // [rsp+11Ch] [rbp-64h]
  __int64 v51; // [rsp+120h] [rbp-60h] BYREF
  int v52; // [rsp+128h] [rbp-58h]
  __int64 v53; // [rsp+130h] [rbp-50h] BYREF
  wchar_t *v54; // [rsp+138h] [rbp-48h]
  const wchar_t *v55; // [rsp+140h] [rbp-40h]
  __int64 v56; // [rsp+148h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+150h] [rbp-30h] BYREF
  unsigned __int16 v58; // [rsp+160h] [rbp-20h] BYREF
  void *Src; // [rsp+168h] [rbp-18h]
  __int64 v60; // [rsp+170h] [rbp-10h]
  __int64 v61; // [rsp+178h] [rbp-8h]
  wchar_t *v62; // [rsp+180h] [rbp+0h]
  _QWORD v63[7]; // [rsp+188h] [rbp+8h] BYREF
  int v64; // [rsp+1C0h] [rbp+40h] BYREF
  char v65; // [rsp+1C4h] [rbp+44h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0058070);
  v56 = v2;
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
    if ( *(_BYTE *)(*(_QWORD *)v3 + 216LL) >= *(_BYTE *)(v4 + 202) )
    {
      *(_DWORD *)(v4 + 1424) = 7;
      WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x44u,
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids);
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
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
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
                      off_1C00580E8)
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
    v62 = PoolWithTag;
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v11, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v63, 0, sizeof(v63));
    v51 = 0LL;
    LODWORD(v63[0]) = 56;
    v12 = 0LL;
    v63[3] = 0x100000001LL;
    v63[4] = a1;
    v13 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v54 = 0LL;
    if ( v13(WdfDriverGlobals, 0LL, v63, &v51) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           a1,
           v51) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v51,
        &v58);
      v14 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v58 + 2LL, 0x64334855u);
      v54 = v14;
      v12 = v14;
      if ( v14 )
      {
        memset(v14, 0, v58 + 2LL);
        memmove(v12, Src, v58);
      }
    }
    memset(v63, 0, sizeof(v63));
    v53 = 0LL;
    LODWORD(v63[0]) = 56;
    v63[3] = 0x100000001LL;
    v63[4] = a1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           a1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v63,
           &v53) < 0 )
      v55 = 0LL;
    else
      v55 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v53,
                               0LL);
    v15 = *(_QWORD *)(v2 + 16);
    v16 = &v65;
    v17 = 5LL;
    v18 = (unsigned __int16 *)(v15 + 298);
    v64 = *(unsigned __int16 *)(v15 + 296);
    do
    {
      v19 = *v18++;
      *(_DWORD *)v16 = v19;
      v16 += 4;
      --v17;
    }
    while ( v17 );
    v20 = *(_BYTE *)(v15 + 216);
    if ( v20 < 6u )
      *(&v64 + v20) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    {
      v21 = *(_QWORD *)(v3 + 8);
      v60 = v21;
      v22 = *(_DWORD *)(v21 + 204) >> 1;
      if ( (*(_DWORD *)(v21 + 204) & 2) != 0 )
        v43 = *(_BYTE *)(v21 + 1341);
      else
        v43 = 0;
      v23 = *(_DWORD *)(v15 + 152);
      if ( v23 == 1 )
        v44 = *(_WORD *)(v15 + 164);
      else
        LOBYTE(v44) = 0;
      LOBYTE(v24) = -1;
      LOBYTE(v46) = -1;
      if ( v23 == 1 )
        v24 = *(_DWORD *)(v15 + 160);
      v45 = v24;
      if ( v23 == 1 )
      {
        v46 = *(_DWORD *)(v15 + 156);
        v47 = *(_DWORD *)(v15 + 176);
      }
      else
      {
        LOBYTE(v47) = 0;
      }
      if ( v23 == 1 )
        v48 = *(_DWORD *)(v15 + 172);
      else
        LOBYTE(v48) = 0;
      if ( v23 == 1 )
        v49 = *(_DWORD *)(v15 + 168);
      else
        LOBYTE(v49) = 0;
      v25 = *(_QWORD *)(v3 + 2000);
      v61 = v25;
      if ( v25 )
        v50 = *(_WORD *)(v25 + 2);
      else
        v50 = 0;
      v26 = *(_BYTE *)(v15 + 216);
      v27 = *(_BYTE *)(v2 + 32);
      LOBYTE(v22) = v22 & 1;
      v28 = 0LL;
      v52 = v22;
      v29 = ~v27;
      if ( v23 == 2 )
        v28 = (const char *)(v15 + 166);
      v30 = 0LL;
      if ( v23 == 2 )
        v30 = (const char *)(v15 + 161);
      v31 = 0LL;
      if ( v23 == 2 )
        v31 = (const char *)(v15 + 156);
      v42 = v23;
      v11 = v62;
      v41 = v26 + 1;
      v12 = v54;
      Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
        (__int64)v31,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V1,
        0LL,
        *(_QWORD *)(*(_QWORD *)v3 + 224LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v60 + 200),
        v55,
        v62,
        v40,
        v3 + 1972,
        v50,
        v61,
        v54,
        v29 & 1,
        v41,
        (__int64)&v64,
        v49,
        v48,
        v47,
        v46,
        v45,
        v44,
        *(_DWORD *)(v56 + 384),
        *(_DWORD *)(v3 + 2208),
        v42,
        v31,
        v30,
        v28,
        v52,
        v43,
        *(_QWORD *)(v60 + 1416));
      v2 = v56;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0x64334855u);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x64334855u);
    if ( v51 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v53 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  if ( (*(_DWORD *)(v3 + 1616) & 6) == 0 )
    WMI_RegisterDevice(a1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C00580E8)
                + 92) )
  {
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v33 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                          WdfDriverGlobals,
                          v32);
    v34 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                     WdfDriverGlobals,
                                     a1);
    v36 = UsbSleepStudy_RegisterPdo(v34, v33, v35, (_QWORD *)(v2 + 392));
    v6 = v36;
    if ( v36 < 0 )
    {
      LODWORD(v39) = v36;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x4Au,
        (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
        v39);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_84:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v38) = v6;
    Template_pq(v5, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v38);
  }
  LODWORD(v39) = *(_DWORD *)(v3 + 1628);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x4Bu,
    (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
    v39);
  return v6;
}
