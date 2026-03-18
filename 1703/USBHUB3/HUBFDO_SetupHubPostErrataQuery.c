/*
 * XREFs of HUBFDO_SetupHubPostErrataQuery @ 0x1C000C40C
 * Callers:
 *     HUBHSM_SettingUpHubPostErrataQuery @ 0x1C0007F30 (HUBHSM_SettingUpHubPostErrataQuery.c)
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     USBD_CreateHandle @ 0x1C0034E64 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00351F0 (USBD_QueryUsbCapability.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBFDO_SetupHubPostErrataQuery(char *Context)
{
  __int64 v1; // r14
  __int64 v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  ULONG v6; // r8d
  ULONG v7; // r9d
  NTSTATUS UsbCapability; // esi
  USBD_HANDLE v9; // rbx
  USBD_HANDLE v10; // rbx
  void (__fastcall *v11)(_QWORD); // rax
  PWDF_DRIVER_GLOBALS v12; // rcx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v22; // rax
  NTSTATUS v23; // eax
  int v24; // eax
  ULONG *USBDHandle; // [rsp+20h] [rbp-89h]
  ULONG *USBDHandlea; // [rsp+20h] [rbp-89h]
  USBD_HANDLE *USBDHandleb; // [rsp+20h] [rbp-89h]
  __int64 v28; // [rsp+28h] [rbp-81h]
  USBD_HANDLE v29; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v30[10]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v31; // [rsp+90h] [rbp-19h] BYREF
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  __int16 v34; // [rsp+A0h] [rbp-9h]
  __int16 v35; // [rsp+A2h] [rbp-7h]
  _DWORD v36[10]; // [rsp+A8h] [rbp-1h] BYREF

  v1 = *((_QWORD *)Context + 2);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v1);
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                  WdfDriverGlobals,
                                  v3);
  v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  v1);
  UsbCapability = USBD_CreateHandle(v5, v4, v6, v7, &v29);
  if ( UsbCapability < 0 )
    goto LABEL_12;
  v9 = v29;
  if ( USBD_QueryUsbCapability(v29, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 4u, (PUCHAR)Context + 156, USBDHandle) < 0 )
    *((_DWORD *)Context + 39) = 0;
  UsbCapability = USBD_QueryUsbCapability(v9, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0, 0LL, USBDHandlea);
  *((_BYTE *)v9 + 177) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 43, 0xFFFFFFFF) <= 1 )
  {
    if ( *((_BYTE *)v9 + 177) )
    {
      v10 = v29;
      v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)v29 + 14);
      if ( v11 )
        v11(*((_QWORD *)v29 + 6));
      ExFreePoolWithTag(v10, *((_DWORD *)v10 + 16));
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", v29);
    }
  }
  if ( UsbCapability < 0 )
  {
LABEL_12:
    _InterlockedOr((volatile signed __int32 *)Context + 10, 0x80u);
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 311),
      2u,
      3u,
      0x37u,
      (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
      UsbCapability);
  }
  if ( (*((_DWORD *)Context + 10) & 0x80u) == 0 && (*((_DWORD *)Context + 11) & 1) == 0 && Context[252] )
  {
    memset(v36, 0, 0x24uLL);
    v12 = WdfDriverGlobals;
    v36[3] = 50;
    *((_DWORD *)Context + 636) = 50;
    v13 = 0;
    v36[0] = 36;
    v14 = Context[232] == 0;
    v36[6] = 2;
    if ( v14 )
      v13 = 2;
    v36[8] = 2;
    v36[7] = v13;
    v36[1] = 2;
    v36[4] = 2;
    v36[5] = 2;
    v36[2] = 3;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(v12, v1, v36);
    v16 = v15;
    if ( v15 >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Context + 10, 0x4000000u);
      v22 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                       WdfDriverGlobals,
                                       v1);
      v23 = PoRegisterPowerSettingCallback(
              v22,
              &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT,
              (PPOWER_SETTING_CALLBACK)HUBFDO_PowerSettingCallback,
              Context,
              (PVOID *)Context + 317);
      if ( v23 < 0 )
      {
        LODWORD(v28) = v23;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 311),
          2u,
          3u,
          0x3Au,
          (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
          v28);
        *((_QWORD *)Context + 317) = 0LL;
      }
      if ( !Context[232] )
      {
        memset(v30, 0, 0x48uLL);
        v30[1] = HUBFDO_EvtPostPoFxRegisterDevice;
        LODWORD(v30[0]) = 72;
        v30[2] = HUBFDO_EvtPrePoFxUnregisterDevice;
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 3400))(
                WdfDriverGlobals,
                v1,
                v30);
        v20 = v24;
        if ( v24 < 0 )
        {
          LODWORD(v28) = v24;
          WPP_RECORDER_SF_d(
            *((_QWORD *)Context + 311),
            2u,
            3u,
            0x3Bu,
            (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
            v28);
LABEL_27:
          result = 2045LL;
          if ( v20 < 0 )
            return result;
          return 2053LL;
        }
      }
    }
    else
    {
      LODWORD(v28) = v15;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 311),
        2u,
        3u,
        0x38u,
        (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
        v28);
      if ( v16 == -1073741101 && *((_DWORD *)Context + 62) == 3 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 311),
          3u,
          3u,
          0x39u,
          (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids);
        if ( (*((_DWORD *)Context + 640) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierNoSelectiveSuspendSupport", Context + 1232);
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x80000) != 0 )
        {
          LODWORD(USBDHandleb) = -1073741101;
          Template_pq(
            v17,
            &USBHUB3_ETW_EVENT_HUB_SELECTIVE_SUSPEND_NOT_SUPPORTED,
            (const GUID *)(Context + 2380),
            *((_QWORD *)Context + 30),
            USBDHandleb);
        }
      }
    }
  }
  v33 = 0;
  v35 = 0;
  v18 = WdfFunctions_01015;
  *((_DWORD *)Context + 642) = 5;
  v31 = 0x500000014LL;
  v34 = 257;
  v32 = 1;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(v18 + 376))(WdfDriverGlobals, v1, &v31);
  if ( v19 < 0 )
  {
    LODWORD(v28) = v19;
    WPP_RECORDER_SF_d(
      *((_QWORD *)Context + 311),
      2u,
      3u,
      0x3Cu,
      (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
      v28);
    v20 = 0;
    goto LABEL_27;
  }
  return 2053LL;
}
