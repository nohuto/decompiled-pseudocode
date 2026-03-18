/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C0063160
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     TemplateEventDescriptor @ 0x1C00011EC (TemplateEventDescriptor.c)
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddHsmEvent @ 0x1C00089F8 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A508 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000C008 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C00274A8 (HUBMISC_WaitForSignal.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C0032024 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C00323A8 (USBD_CloseHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0032418 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C006AA80 (HUBMISC_InitializeHsm.c)
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
  int v33; // eax
  int v34; // ebx
  __int64 v35; // rcx
  struct _DEVICE_OBJECT *v36; // rax
  NTSTATUS v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  const void *v41; // rax
  __int64 v42; // r9
  __int64 v43; // rax
  int USBDHandle; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandlea; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandleb; // [rsp+28h] [rbp-E0h]
  ULONG *USBDHandlec; // [rsp+28h] [rbp-E0h]
  USBD_HANDLE *USBDHandled; // [rsp+28h] [rbp-E0h]
  int USBDHandlee; // [rsp+28h] [rbp-E0h]
  __int64 v51; // [rsp+30h] [rbp-D8h]
  __int64 v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h] BYREF
  USBD_HANDLE v55; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v56[7]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v57[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v59[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v60[18]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v61; // [rsp+208h] [rbp+100h] BYREF
  int v62; // [rsp+210h] [rbp+108h]
  __int64 v63; // [rsp+214h] [rbp+10Ch]
  _DWORD v64[6]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v65; // [rsp+238h] [rbp+130h]
  int v66; // [rsp+240h] [rbp+138h]
  int v67; // [rsp+248h] [rbp+140h] BYREF
  __m128i si128; // [rsp+24Ch] [rbp+144h]
  int v69; // [rsp+25Ch] [rbp+154h]
  int v70; // [rsp+260h] [rbp+158h]
  int v71; // [rsp+264h] [rbp+15Ch]
  int v72; // [rsp+268h] [rbp+160h]
  int v73; // [rsp+26Ch] [rbp+164h]
  int v74; // [rsp+270h] [rbp+168h]
  int v75; // [rsp+274h] [rbp+16Ch]
  __int64 v76; // [rsp+278h] [rbp+170h] BYREF
  int v77; // [rsp+280h] [rbp+178h]
  int v78; // [rsp+284h] [rbp+17Ch]
  __int64 v79; // [rsp+288h] [rbp+180h]
  char v80; // [rsp+290h] [rbp+188h]
  int v81; // [rsp+294h] [rbp+18Ch]
  char pszDest[16]; // [rsp+298h] [rbp+190h] BYREF
  GUID v83; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v84; // [rsp+2B8h] [rbp+1B0h]

  v2 = a2;
  v54 = a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    TemplateEventDescriptor(a1, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v54;
  }
  v3 = 0LL;
  memset(v56, 0, sizeof(v56));
  LODWORD(v56[0]) = 56;
  v56[3] = 0x100000001LL;
  v56[6] = off_1C00580C0;
  v56[1] = HUBFDO_EvtDeviceCleanupCallback;
  v56[2] = HUBFDO_EvtDeviceDestroyCallback;
  memset(v60, 0, sizeof(v60));
  v60[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v60[0]) = 144;
  v60[3] = HUBFDO_EvtDeviceD0Exit;
  v60[5] = HUBFDO_EvtDevicePrepareHardware;
  v60[6] = HUBFDO_EvtDeviceReleaseHardware;
  v60[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v60[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v60);
  LOBYTE(v4) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v54,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v4,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    v7 = 12;
LABEL_5:
    v8 = *(_QWORD *)(v6 + 64);
    v9 = 2;
    LODWORD(v51) = DeviceCapabilities;
LABEL_6:
    WPP_RECORDER_SF_d(v8, 2u, v9, v7, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v51);
    goto LABEL_52;
  }
  memset(v57, 0, sizeof(v57));
  v57[1] = HUBFDO_EvtDeviceArmWakeFromS0;
  v57[2] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  v57[4] = HUBFDO_EvtDeviceArmWakeFromSx;
  v57[5] = HUBFDO_EvtDeviceDisarmWakeFromSx;
  LODWORD(v57[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v54,
    v57);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v54,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v54,
                         v56,
                         &v53);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    v7 = 13;
    goto LABEL_5;
  }
  v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v53);
  v12 = IoRegisterShutdownNotification(v11);
  if ( v12 < 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00580E8);
    LODWORD(v51) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      2u,
      2u,
      0xEu,
      (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids,
      v51);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v53,
         off_1C00580C0);
  *(_QWORD *)(v3 + 16) = v53;
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v53);
  *(_QWORD *)v3 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v3 + 88) = USBD_AllocateHubNumber();
  v76 = 48LL;
  pszDest[0] = 0;
  v81 = 16;
  v79 = v3;
  v80 = 1;
  v77 = 1024;
  v78 = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v3 + 88));
  v14 = (__int64 *)(v3 + 2464);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v76, v3 + 2464) < 0 )
    *v14 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_1C00580E8)
                     + 64);
  LOBYTE(v15) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v53,
    1LL,
    v15);
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v53,
    2LL,
    v16);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v53,
    3LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v53,
    4LL,
    v18);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v53, (_DWORD *)(v3 + 656), *v14);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    v7 = 15;
    goto LABEL_5;
  }
  v74 = -1;
  v75 = -1;
  v67 = 48;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v69 = 2;
  v70 = 2;
  v72 = 2;
  v73 = 2;
  v71 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 664))(WdfDriverGlobals, v53, &v67);
  v19 = WdfFunctions_01015;
  *(_QWORD *)(v3 + 312) = v3;
  LOWORD(v51) = 1013;
  LOWORD(USBDHandle) = 136;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(v19 + 1048))(
          WdfDriverGlobals,
          v53,
          &GUID_HUB_PARENT_INTERFACE,
          v3 + 184,
          USBDHandle,
          v51,
          0LL);
  DeviceCapabilities = v20;
  if ( v20 < 0 )
  {
    v7 = 16;
LABEL_17:
    LODWORD(v51) = v20;
LABEL_18:
    v8 = *v14;
    v9 = 3;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 216) )
  {
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v53);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(WdfDriverGlobals, v21);
    v23 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 2392) = v22;
    *(_QWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                             v23,
                             v53);
    *(_DWORD *)(v3 + 84) = 500;
  }
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v53);
  v25 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                   WdfDriverGlobals,
                                   v24);
  v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v53);
  UsbCapability = USBD_CreateHandle(v26, v25, v27, v28, &v55);
  if ( UsbCapability < 0 )
    goto LABEL_25;
  v30 = v55;
  if ( USBD_QueryUsbCapability(v55, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)(v3 + 148), USBDHandleb) < 0 )
    *(_DWORD *)(v3 + 148) = 0;
  UsbCapability = USBD_QueryUsbCapability(v30, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandlec);
  USBD_CloseHandle(v30);
  if ( UsbCapability < 0 )
  {
LABEL_25:
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x80u);
    LODWORD(v51) = UsbCapability;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x11u, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v51);
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) == 0 && *(_BYTE *)(v3 + 236) )
  {
    v31 = WdfDriverGlobals;
    v64[3] = 50;
    v65 = 2LL;
    v64[0] = 36;
    v66 = 2;
    v64[1] = 2;
    *(_DWORD *)(v3 + 2520) = 50;
    v32 = HIDWORD(v65);
    v64[4] = 2;
    v64[5] = 2;
    v64[2] = 3;
    if ( !*(_BYTE *)(v3 + 216) )
      v32 = 2;
    HIDWORD(v65) = v32;
    v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(v31, v53, v64);
    v34 = v33;
    if ( v33 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x4000000u);
      v36 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v53);
      v37 = PoRegisterPowerSettingCallback(
              v36,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              (PVOID)v3,
              (PVOID *)(v3 + 2512));
      if ( v37 < 0 )
      {
        LODWORD(v51) = v37;
        WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x14u, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v51);
        *(_QWORD *)(v3 + 2512) = 0LL;
      }
    }
    else
    {
      LODWORD(v51) = v33;
      WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x12u, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v51);
      if ( v34 == -1073741101 && *(_DWORD *)(v3 + 232) == 3 )
      {
        WPP_RECORDER_SF_(*v14, 3u, 3u, 0x13u, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids);
        if ( (*(_DWORD *)(v3 + 2536) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", v3 + 1208);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
        {
          LODWORD(USBDHandled) = -1073741101;
          Template_pq(
            v35,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(v3 + 2356),
            *(_QWORD *)(v3 + 224),
            USBDHandled);
        }
      }
    }
  }
  *(_DWORD *)(v3 + 2544) = 5;
  v63 = 0x10100000000LL;
  v61 = 0x500000014LL;
  v62 = 1;
  v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 376))(
          WdfDriverGlobals,
          v53,
          &v61);
  if ( v38 < 0 )
  {
    LODWORD(v51) = v38;
    WPP_RECORDER_SF_d(*v14, 2u, 3u, 0x15u, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v51);
  }
  *(_QWORD *)(v3 + 352) = *(_QWORD *)(v3 + 224);
  *(_QWORD *)(v3 + 360) = v3;
  *(_QWORD *)(v3 + 368) = HUBHTX_ClearTTBuffer;
  *(_QWORD *)(v3 + 512) = HUBPDO_NoPingResponse;
  LOWORD(v51) = 1000;
  LOWORD(USBDHandled) = 240;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v53,
          &GUID_HUB_CONTROLLERSTACK_INTERFACE,
          v3 + 320,
          (_DWORD)USBDHandled,
          v51,
          0LL);
  DeviceCapabilities = v20;
  if ( v20 < 0 )
  {
    v7 = 22;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v3 + 216) )
    v52 = 0LL;
  else
    v52 = *(_QWORD *)(v3 + 224);
  LOWORD(v51) = 3;
  LOWORD(USBDHandlee) = 96;
  v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, int, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v53,
          &USB_BUS_INTERFACE_USBDI_GUID,
          v3 + 560,
          USBDHandlee,
          v51,
          v52);
  DeviceCapabilities = v39;
  if ( v39 < 0 )
  {
    v7 = 23;
    LODWORD(v51) = v39;
    goto LABEL_18;
  }
  memset(v59, 0, sizeof(v59));
  LODWORD(v59[0]) = 96;
  v59[5] = HUBFDO_EvtIoDeviceControl;
  BYTE5(v59[1]) = 1;
  v59[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
  *(_QWORD *)((char *)v59 + 4) = 1LL;
  memset(v58, 0, 0x38uLL);
  v58[6] = off_1C0058180;
  LODWORD(v58[0]) = 56;
  v58[3] = 0x100000002LL;
  v40 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v53,
          v59,
          v58,
          v3 + 2344);
  DeviceCapabilities = v40;
  if ( v40 < 0 )
  {
    v7 = 24;
    LODWORD(v51) = v40;
    goto LABEL_18;
  }
  v83 = GUID_BUS_TYPE_USB;
  v84 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(WdfDriverGlobals, v53, &v83);
  HSMMUX_InitializeHSMMuxContext(v3);
  DeviceCapabilities = HUBMISC_InitializeHsm(v3);
  if ( DeviceCapabilities >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x20u);
    KeResetEvent((PRKEVENT)(v3 + 1096));
    HUBSM_AddHsmEvent(v3, 2023LL);
    v41 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1096), "Hub FDO PnpCallback", v41);
    DeviceCapabilities = *(_DWORD *)(v3 + 1120);
  }
LABEL_52:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    if ( v3 )
      v42 = *(_QWORD *)(v3 + 224);
    else
      v42 = 0LL;
    LODWORD(USBDHandlea) = DeviceCapabilities;
    Template_pq(v10, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v42, USBDHandlea);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v3 && *(_DWORD *)(v3 + 88) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v3 + 88) = 0;
    }
    v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00580E8);
    LODWORD(v51) = DeviceCapabilities;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v43 + 64),
      2u,
      3u,
      0x19u,
      (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids,
      v51);
  }
  return (unsigned int)DeviceCapabilities;
}
