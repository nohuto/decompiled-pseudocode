/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C0061E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     TemplateEventDescriptor @ 0x1C00011EC (TemplateEventDescriptor.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddHsmEvent @ 0x1C00083C8 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C0009ED8 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000B9D8 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C00313D4 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C0031758 (USBD_CloseHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00317C8 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C0068DD0 (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r9
  int DeviceCapabilities; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rbx
  struct _DEVICE_OBJECT *v23; // rax
  ULONG v24; // r8d
  ULONG v25; // r9d
  NTSTATUS UsbCapability; // r12d
  USBD_HANDLE v27; // rbx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rcx
  struct _DEVICE_OBJECT *v31; // rax
  NTSTATUS v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  const void *v36; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  int USBDHandle; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandlea; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandlec; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandled; // [rsp+28h] [rbp-E0h]
  int USBDHandlee; // [rsp+28h] [rbp-E0h]
  __int64 v46; // [rsp+30h] [rbp-D8h]
  __int64 v47; // [rsp+38h] [rbp-D0h]
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  USBD_HANDLE v50; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v51[7]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v52[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v53[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v54[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v55[18]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v56; // [rsp+208h] [rbp+100h] BYREF
  int v57; // [rsp+210h] [rbp+108h]
  __int64 v58; // [rsp+214h] [rbp+10Ch]
  _DWORD v59[6]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v60; // [rsp+238h] [rbp+130h]
  int v61; // [rsp+240h] [rbp+138h]
  int v62; // [rsp+248h] [rbp+140h] BYREF
  __m128i si128; // [rsp+24Ch] [rbp+144h]
  int v64; // [rsp+25Ch] [rbp+154h]
  int v65; // [rsp+260h] [rbp+158h]
  int v66; // [rsp+264h] [rbp+15Ch]
  int v67; // [rsp+268h] [rbp+160h]
  int v68; // [rsp+26Ch] [rbp+164h]
  int v69; // [rsp+270h] [rbp+168h]
  int v70; // [rsp+274h] [rbp+16Ch]
  __int64 v71; // [rsp+278h] [rbp+170h] BYREF
  int v72; // [rsp+280h] [rbp+178h]
  int v73; // [rsp+284h] [rbp+17Ch]
  __int64 v74; // [rsp+288h] [rbp+180h]
  char v75; // [rsp+290h] [rbp+188h]
  int v76; // [rsp+294h] [rbp+18Ch]
  char pszDest[16]; // [rsp+298h] [rbp+190h] BYREF
  GUID v78; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v79; // [rsp+2B8h] [rbp+1B0h]

  v2 = a2;
  v49 = a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
  {
    TemplateEventDescriptor(a1, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v49;
  }
  v3 = 0LL;
  memset(v51, 0, sizeof(v51));
  LODWORD(v51[0]) = 56;
  v51[3] = 0x100000001LL;
  v51[6] = off_1C0057140;
  v51[1] = HUBFDO_EvtDeviceCleanupCallback;
  v51[2] = HUBFDO_EvtDeviceDestroyCallback;
  memset(v55, 0, sizeof(v55));
  v55[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v55[0]) = 144;
  v55[3] = HUBFDO_EvtDeviceD0Exit;
  v55[5] = HUBFDO_EvtDevicePrepareHardware;
  v55[6] = HUBFDO_EvtDeviceReleaseHardware;
  v55[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v55[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v55);
  LOBYTE(v4) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v49,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v4,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v7 = 12;
LABEL_5:
    v8 = *(_QWORD *)(v6 + 64);
    v9 = 2;
    LODWORD(v46) = DeviceCapabilities;
LABEL_6:
    WPP_RECORDER_SF_d(v8, 2u, v9, v7, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v46);
    goto LABEL_50;
  }
  memset(v52, 0, sizeof(v52));
  v52[1] = HUBFDO_EvtDeviceArmWakeFromS0;
  v52[2] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  v52[4] = HUBFDO_EvtDeviceArmWakeFromSx;
  v52[5] = HUBFDO_EvtDeviceDisarmWakeFromSx;
  LODWORD(v52[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v49,
    v52);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v49,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v49,
                         v51,
                         &v48);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v7 = 13;
    goto LABEL_5;
  }
  v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v48);
  v12 = IoRegisterShutdownNotification(v11);
  if ( v12 < 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C0057090);
    LODWORD(v46) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      2u,
      2u,
      0xEu,
      (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
      v46);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v48,
         off_1C0057140);
  *(_QWORD *)(v3 + 16) = v48;
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v48);
  *(_QWORD *)v3 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v3 + 88) = USBD_AllocateHubNumber();
  v71 = 48LL;
  pszDest[0] = 0;
  v76 = 16;
  v74 = v3;
  v75 = 1;
  v72 = 1024;
  v73 = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v3 + 88));
  v14 = (__int64 *)(v3 + 2440);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v71, v3 + 2440) < 0 )
    *v14 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_1C0057090)
                     + 64);
  LOBYTE(v15) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v48,
    1LL,
    v15);
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v48,
    2LL,
    v16);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v48,
    3LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v48,
    4LL,
    v18);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v48, (_DWORD *)(v3 + 632), *v14);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v7 = 15;
    goto LABEL_5;
  }
  v69 = -1;
  v70 = -1;
  v62 = 48;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v64 = 2;
  v65 = 2;
  v67 = 2;
  v68 = 2;
  v66 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 664))(WdfDriverGlobals, v48, &v62);
  *(_QWORD *)(v3 + 296) = v3;
  LOWORD(v46) = 1013;
  LOWORD(USBDHandle) = 136;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v48,
          &GUID_HUB_PARENT_INTERFACE,
          v3 + 168,
          USBDHandle,
          v46,
          0LL);
  DeviceCapabilities = v19;
  if ( v19 < 0 )
  {
    v7 = 16;
LABEL_17:
    LODWORD(v46) = v19;
LABEL_18:
    v8 = *v14;
    v9 = 3;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 200) )
  {
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v48);
    *(_QWORD *)(v3 + 2368) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                               WdfDriverGlobals,
                               v20);
    *(_QWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                             WdfDriverGlobals,
                             v48);
    *(_DWORD *)(v3 + 84) = 500;
  }
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v48);
  v22 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                   WdfDriverGlobals,
                                   v21);
  v23 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v48);
  UsbCapability = USBD_CreateHandle(v23, v22, v24, v25, &v50);
  if ( UsbCapability < 0 )
    goto LABEL_25;
  v27 = v50;
  if ( USBD_QueryUsbCapability(v50, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)(v3 + 164), USBDHandleb) < 0 )
    *(_DWORD *)(v3 + 164) = 0;
  UsbCapability = USBD_QueryUsbCapability(v27, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandlec);
  USBD_CloseHandle(v27);
  if ( UsbCapability < 0 )
  {
LABEL_25:
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x80u);
    LODWORD(v46) = UsbCapability;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x11u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v46);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) == 0 && *(_BYTE *)(v3 + 220) )
  {
    v59[0] = 36;
    v59[3] = 50;
    v60 = 2LL;
    v61 = 2;
    v59[1] = 2;
    *(_DWORD *)(v3 + 2496) = 50;
    v59[4] = 2;
    v59[5] = 2;
    v59[2] = 3;
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v48,
            v59);
    v29 = v28;
    if ( v28 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x4000000u);
      v31 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v48);
      v32 = PoRegisterPowerSettingCallback(
              v31,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              (PVOID)v3,
              (PVOID *)(v3 + 2488));
      if ( v32 < 0 )
      {
        LODWORD(v46) = v32;
        WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x14u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v46);
        *(_QWORD *)(v3 + 2488) = 0LL;
      }
    }
    else
    {
      LODWORD(v46) = v28;
      WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x12u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v46);
      if ( v29 == -1073741101 && *(_DWORD *)(v3 + 216) == 3 )
      {
        WPP_RECORDER_SF_(*v14, 3u, 3u, 0x13u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
        if ( (*(_DWORD *)(v3 + 2512) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", v3 + 1184);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
        {
          LODWORD(USBDHandled) = -1073741101;
          Template_pq(
            v30,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(v3 + 2332),
            *(_QWORD *)(v3 + 208),
            USBDHandled);
        }
      }
    }
  }
  *(_DWORD *)(v3 + 2520) = 5;
  v58 = 0x10100000000LL;
  v56 = 0x500000014LL;
  v57 = 1;
  v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
          WdfDriverGlobals,
          v48,
          &v56);
  if ( v33 < 0 )
  {
    LODWORD(v46) = v33;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x15u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v46);
  }
  *(_QWORD *)(v3 + 336) = *(_QWORD *)(v3 + 208);
  *(_QWORD *)(v3 + 344) = v3;
  *(_QWORD *)(v3 + 352) = HUBHTX_ClearTTBuffer;
  *(_QWORD *)(v3 + 496) = HUBPDO_NoPingResponse;
  LOWORD(v46) = 1000;
  LOWORD(USBDHandled) = 232;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v48,
          &GUID_HUB_CONTROLLERSTACK_INTERFACE,
          v3 + 304,
          (_DWORD)USBDHandled,
          v46,
          0LL);
  DeviceCapabilities = v19;
  if ( v19 < 0 )
  {
    v7 = 22;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v3 + 200) )
    v47 = 0LL;
  else
    v47 = *(_QWORD *)(v3 + 208);
  LOWORD(v46) = 3;
  LOWORD(USBDHandlee) = 96;
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, int, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v48,
          &USB_BUS_INTERFACE_USBDI_GUID,
          v3 + 536,
          USBDHandlee,
          v46,
          v47);
  DeviceCapabilities = v34;
  if ( v34 < 0 )
  {
    v7 = 23;
    LODWORD(v46) = v34;
    goto LABEL_18;
  }
  memset(v54, 0, sizeof(v54));
  LODWORD(v54[0]) = 96;
  v54[5] = HUBFDO_EvtIoDeviceControl;
  BYTE5(v54[1]) = 1;
  v54[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
  *(_QWORD *)((char *)v54 + 4) = 1LL;
  memset(v53, 0, 0x38uLL);
  v53[6] = off_1C00570E8;
  LODWORD(v53[0]) = 56;
  v53[3] = 0x100000002LL;
  v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v48,
          v54,
          v53,
          v3 + 2320);
  DeviceCapabilities = v35;
  if ( v35 < 0 )
  {
    v7 = 24;
    LODWORD(v46) = v35;
    goto LABEL_18;
  }
  v78 = GUID_BUS_TYPE_USB;
  v79 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(WdfDriverGlobals, v48, &v78);
  HSMMUX_InitializeHSMMuxContext(v3);
  DeviceCapabilities = HUBMISC_InitializeHsm(v3);
  if ( DeviceCapabilities >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x20u);
    KeResetEvent((PRKEVENT)(v3 + 1072));
    HUBSM_AddHsmEvent(v3, 2023LL);
    v36 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1072), "Hub FDO PnpCallback", v36);
    DeviceCapabilities = *(_DWORD *)(v3 + 1096);
  }
LABEL_50:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
  {
    if ( v3 )
      v37 = *(_QWORD *)(v3 + 208);
    else
      v37 = 0LL;
    LODWORD(USBDHandlea) = DeviceCapabilities;
    Template_pq(v10, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v37, USBDHandlea);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v3 && *(_DWORD *)(v3 + 88) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v3 + 88) = 0;
    }
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C0057090);
    LODWORD(v46) = DeviceCapabilities;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v38 + 64),
      2u,
      3u,
      0x19u,
      (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
      v46);
  }
  return (unsigned int)DeviceCapabilities;
}
