/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C0062160
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     TemplateEventDescriptor @ 0x1C00011EC (TemplateEventDescriptor.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008948 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A458 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000BF58 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C0027444 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C0031D54 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C00320D8 (USBD_CloseHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0032148 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C0069A40 (HUBMISC_InitializeHsm.c)
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
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  PWDF_DRIVER_GLOBALS v23; // rcx
  __int64 v24; // rax
  struct _DEVICE_OBJECT *v25; // rbx
  struct _DEVICE_OBJECT *v26; // rax
  ULONG v27; // r8d
  ULONG v28; // r9d
  NTSTATUS UsbCapability; // r12d
  USBD_HANDLE v30; // rbx
  PWDF_DRIVER_GLOBALS v31; // rcx
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rcx
  struct _DEVICE_OBJECT *v35; // rax
  NTSTATUS v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  const void *v40; // rax
  __int64 v41; // r9
  __int64 v42; // rax
  int USBDHandle; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandlea; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandlec; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandled; // [rsp+28h] [rbp-E0h]
  int USBDHandlee; // [rsp+28h] [rbp-E0h]
  __int64 v50; // [rsp+30h] [rbp-D8h]
  __int64 v51; // [rsp+38h] [rbp-D0h]
  __int64 v52; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  USBD_HANDLE v54; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v55[7]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v56[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v57[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v58[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v59[18]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v60; // [rsp+208h] [rbp+100h] BYREF
  int v61; // [rsp+210h] [rbp+108h]
  __int64 v62; // [rsp+214h] [rbp+10Ch]
  _DWORD v63[6]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v64; // [rsp+238h] [rbp+130h]
  int v65; // [rsp+240h] [rbp+138h]
  int v66; // [rsp+248h] [rbp+140h] BYREF
  __m128i si128; // [rsp+24Ch] [rbp+144h]
  int v68; // [rsp+25Ch] [rbp+154h]
  int v69; // [rsp+260h] [rbp+158h]
  int v70; // [rsp+264h] [rbp+15Ch]
  int v71; // [rsp+268h] [rbp+160h]
  int v72; // [rsp+26Ch] [rbp+164h]
  int v73; // [rsp+270h] [rbp+168h]
  int v74; // [rsp+274h] [rbp+16Ch]
  __int64 v75; // [rsp+278h] [rbp+170h] BYREF
  int v76; // [rsp+280h] [rbp+178h]
  int v77; // [rsp+284h] [rbp+17Ch]
  __int64 v78; // [rsp+288h] [rbp+180h]
  char v79; // [rsp+290h] [rbp+188h]
  int v80; // [rsp+294h] [rbp+18Ch]
  char pszDest[16]; // [rsp+298h] [rbp+190h] BYREF
  GUID v82; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v83; // [rsp+2B8h] [rbp+1B0h]

  v2 = a2;
  v53 = a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
  {
    TemplateEventDescriptor(a1, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v53;
  }
  v3 = 0LL;
  memset(v55, 0, sizeof(v55));
  LODWORD(v55[0]) = 56;
  v55[3] = 0x100000001LL;
  v55[6] = off_1C0057198;
  v55[1] = HUBFDO_EvtDeviceCleanupCallback;
  v55[2] = HUBFDO_EvtDeviceDestroyCallback;
  memset(v59, 0, sizeof(v59));
  v59[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v59[0]) = 144;
  v59[3] = HUBFDO_EvtDeviceD0Exit;
  v59[5] = HUBFDO_EvtDevicePrepareHardware;
  v59[6] = HUBFDO_EvtDeviceReleaseHardware;
  v59[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v59[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v59);
  LOBYTE(v4) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v53,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v4,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00570E8);
    v7 = 12;
LABEL_5:
    v8 = *(_QWORD *)(v6 + 64);
    v9 = 2;
    LODWORD(v50) = DeviceCapabilities;
LABEL_6:
    WPP_RECORDER_SF_d(v8, 2u, v9, v7, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v50);
    goto LABEL_50;
  }
  memset(v56, 0, sizeof(v56));
  v56[1] = HUBFDO_EvtDeviceArmWakeFromS0;
  v56[2] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  v56[4] = HUBFDO_EvtDeviceArmWakeFromSx;
  v56[5] = HUBFDO_EvtDeviceDisarmWakeFromSx;
  LODWORD(v56[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v53,
    v56);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v53,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v53,
                         v55,
                         &v52);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00570E8);
    v7 = 13;
    goto LABEL_5;
  }
  v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v52);
  v12 = IoRegisterShutdownNotification(v11);
  if ( v12 < 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00570E8);
    LODWORD(v50) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      2u,
      2u,
      0xEu,
      (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
      v50);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v52,
         off_1C0057198);
  *(_QWORD *)(v3 + 16) = v52;
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v52);
  *(_QWORD *)v3 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v3 + 88) = USBD_AllocateHubNumber();
  v75 = 48LL;
  pszDest[0] = 0;
  v80 = 16;
  v78 = v3;
  v79 = 1;
  v76 = 1024;
  v77 = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v3 + 88));
  v14 = (__int64 *)(v3 + 2464);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v75, v3 + 2464) < 0 )
    *v14 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_1C00570E8)
                     + 64);
  LOBYTE(v15) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v52,
    1LL,
    v15);
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v52,
    2LL,
    v16);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v52,
    3LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v52,
    4LL,
    v18);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v52, (_DWORD *)(v3 + 656), *v14);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00570E8);
    v7 = 15;
    goto LABEL_5;
  }
  v73 = -1;
  v74 = -1;
  v66 = 48;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v68 = 2;
  v69 = 2;
  v71 = 2;
  v72 = 2;
  v70 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 664))(WdfDriverGlobals, v52, &v66);
  v19 = WdfFunctions_01015;
  *(_QWORD *)(v3 + 312) = v3;
  LOWORD(v50) = 1013;
  LOWORD(USBDHandle) = 136;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(v19 + 1048))(
          WdfDriverGlobals,
          v52,
          &GUID_HUB_PARENT_INTERFACE,
          v3 + 184,
          USBDHandle,
          v50,
          0LL);
  DeviceCapabilities = v20;
  if ( v20 < 0 )
  {
    v7 = 16;
LABEL_17:
    LODWORD(v50) = v20;
LABEL_18:
    v8 = *v14;
    v9 = 3;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 216) )
  {
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v52);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(WdfDriverGlobals, v21);
    v23 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 2392) = v22;
    *(_QWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                             v23,
                             v52);
    *(_DWORD *)(v3 + 84) = 500;
  }
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v52);
  v25 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                   WdfDriverGlobals,
                                   v24);
  v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v52);
  UsbCapability = USBD_CreateHandle(v26, v25, v27, v28, &v54);
  if ( UsbCapability < 0 )
    goto LABEL_25;
  v30 = v54;
  if ( USBD_QueryUsbCapability(v54, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)(v3 + 148), USBDHandleb) < 0 )
    *(_DWORD *)(v3 + 148) = 0;
  UsbCapability = USBD_QueryUsbCapability(v30, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandlec);
  USBD_CloseHandle(v30);
  if ( UsbCapability < 0 )
  {
LABEL_25:
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x80u);
    LODWORD(v50) = UsbCapability;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x11u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v50);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) == 0 && *(_BYTE *)(v3 + 236) )
  {
    v31 = WdfDriverGlobals;
    v63[3] = 50;
    v63[0] = 36;
    v64 = 2LL;
    v65 = 2;
    v63[1] = 2;
    *(_DWORD *)(v3 + 2520) = 50;
    v63[4] = 2;
    v63[5] = 2;
    v63[2] = 3;
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(v31, v52, v63);
    v33 = v32;
    if ( v32 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x4000000u);
      v35 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v52);
      v36 = PoRegisterPowerSettingCallback(
              v35,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              (PVOID)v3,
              (PVOID *)(v3 + 2512));
      if ( v36 < 0 )
      {
        LODWORD(v50) = v36;
        WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x14u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v50);
        *(_QWORD *)(v3 + 2512) = 0LL;
      }
    }
    else
    {
      LODWORD(v50) = v32;
      WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x12u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v50);
      if ( v33 == -1073741101 && *(_DWORD *)(v3 + 232) == 3 )
      {
        WPP_RECORDER_SF_(*v14, 3u, 3u, 0x13u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids);
        if ( (*(_DWORD *)(v3 + 2536) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", v3 + 1208);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000) != 0 )
        {
          LODWORD(USBDHandled) = -1073741101;
          Template_pq(
            v34,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(v3 + 2356),
            *(_QWORD *)(v3 + 224),
            USBDHandled);
        }
      }
    }
  }
  *(_DWORD *)(v3 + 2544) = 5;
  v62 = 0x10100000000LL;
  v60 = 0x500000014LL;
  v61 = 1;
  v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
          WdfDriverGlobals,
          v52,
          &v60);
  if ( v37 < 0 )
  {
    LODWORD(v50) = v37;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x15u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v50);
  }
  *(_QWORD *)(v3 + 352) = *(_QWORD *)(v3 + 224);
  *(_QWORD *)(v3 + 360) = v3;
  *(_QWORD *)(v3 + 368) = HUBHTX_ClearTTBuffer;
  *(_QWORD *)(v3 + 512) = HUBPDO_NoPingResponse;
  LOWORD(v50) = 1000;
  LOWORD(USBDHandled) = 240;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v52,
          &GUID_HUB_CONTROLLERSTACK_INTERFACE,
          v3 + 320,
          (_DWORD)USBDHandled,
          v50,
          0LL);
  DeviceCapabilities = v20;
  if ( v20 < 0 )
  {
    v7 = 22;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v3 + 216) )
    v51 = 0LL;
  else
    v51 = *(_QWORD *)(v3 + 224);
  LOWORD(v50) = 3;
  LOWORD(USBDHandlee) = 96;
  v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, int, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v52,
          &USB_BUS_INTERFACE_USBDI_GUID,
          v3 + 560,
          USBDHandlee,
          v50,
          v51);
  DeviceCapabilities = v38;
  if ( v38 < 0 )
  {
    v7 = 23;
    LODWORD(v50) = v38;
    goto LABEL_18;
  }
  memset(v58, 0, sizeof(v58));
  LODWORD(v58[0]) = 96;
  v58[5] = HUBFDO_EvtIoDeviceControl;
  BYTE5(v58[1]) = 1;
  v58[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
  *(_QWORD *)((char *)v58 + 4) = 1LL;
  memset(v57, 0, 0x38uLL);
  v57[6] = off_1C0057140;
  LODWORD(v57[0]) = 56;
  v57[3] = 0x100000002LL;
  v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v52,
          v58,
          v57,
          v3 + 2344);
  DeviceCapabilities = v39;
  if ( v39 < 0 )
  {
    v7 = 24;
    LODWORD(v50) = v39;
    goto LABEL_18;
  }
  v82 = GUID_BUS_TYPE_USB;
  v83 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(WdfDriverGlobals, v52, &v82);
  HSMMUX_InitializeHSMMuxContext(v3);
  DeviceCapabilities = HUBMISC_InitializeHsm(v3);
  if ( DeviceCapabilities >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x20u);
    KeResetEvent((PRKEVENT)(v3 + 1096));
    HUBSM_AddHsmEvent(v3, 2023LL);
    v40 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1096), "Hub FDO PnpCallback", v40);
    DeviceCapabilities = *(_DWORD *)(v3 + 1120);
  }
LABEL_50:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 4) != 0 )
  {
    if ( v3 )
      v41 = *(_QWORD *)(v3 + 224);
    else
      v41 = 0LL;
    LODWORD(USBDHandlea) = DeviceCapabilities;
    Template_pq(v10, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v41, USBDHandlea);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v3 && *(_DWORD *)(v3 + 88) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v3 + 88) = 0;
    }
    v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00570E8);
    LODWORD(v50) = DeviceCapabilities;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v42 + 64),
      2u,
      3u,
      0x19u,
      (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
      v50);
  }
  return (unsigned int)DeviceCapabilities;
}
