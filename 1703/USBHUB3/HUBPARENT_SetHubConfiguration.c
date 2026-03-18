/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x1C00064CC
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x1C0008730 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002B70C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  struct _USB_CONFIGURATION_DESCRIPTOR *v1; // rdi
  PURB v2; // rsi
  int v4; // ecx
  int v5; // ecx
  struct _USB_INTERFACE_DESCRIPTOR *v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // eax
  int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-91h]
  __int64 v13; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v14[7]; // [rsp+58h] [rbp-61h] BYREF
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-29h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-19h]
  _QWORD v17[9]; // [rsp+B0h] [rbp-9h] BYREF

  v1 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1224);
  v2 = 0LL;
  v13 = 0LL;
  v4 = *(_DWORD *)(a1 + 248) - 1;
  if ( !v4 )
    goto LABEL_6;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v1,
                                               (_DWORD)v1,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               2,
                                               0LL,
                                               *(_QWORD *)(a1 + 2488));
    if ( v6 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
LABEL_6:
    v6 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v1,
                                               (_DWORD)v1,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               1,
                                               0LL,
                                               *(_QWORD *)(a1 + 2488));
    if ( !v6 )
    {
      v6 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v1,
                                                 (_DWORD)v1,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 0,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2488));
      if ( !v6 )
      {
        v6 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                   (_DWORD)v1,
                                                   (_DWORD)v1,
                                                   -1,
                                                   -1,
                                                   9,
                                                   -1,
                                                   -1,
                                                   0LL,
                                                   *(_QWORD *)(a1 + 2488));
        if ( !v6 )
          goto LABEL_9;
      }
    }
LABEL_10:
    if ( v6->bInterfaceClass != 9 || !v6->bNumEndpoints )
      goto LABEL_20;
    v16 = 0LL;
    InterfaceList.InterfaceDescriptor = v6;
    v2 = USBD_CreateConfigurationRequestEx(v1, &InterfaceList);
    if ( !v2 )
      return WPP_RECORDER_SF_(
               *(_QWORD *)(a1 + 2488),
               2u,
               3u,
               0xDu,
               (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    memset(v14, 0, sizeof(v14));
    v14[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v14[0]) = 56;
    v14[3] = 0x100000001LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           v14,
           v8,
           &v13);
    v10 = v9;
    if ( v9 >= 0 )
    {
      memset(v17, 0, sizeof(v17));
      LOBYTE(v17[0]) = 15;
      LODWORD(v17[3]) = 2228227;
      v17[1] = v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v13,
        v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), PURB))(WdfFunctions_01015 + 2080))(
        WdfDriverGlobals,
        v13,
        HUBPARENT_SetHubConfigurationComplete,
        v2);
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                 WdfDriverGlobals,
                 v13,
                 v8,
                 0LL);
      if ( (_BYTE)result )
        goto LABEL_19;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v13);
      v10 = v9;
      v11 = 15;
    }
    else
    {
      v11 = 14;
    }
    LODWORD(v12) = v9;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2488),
               2u,
               3u,
               v11,
               (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
               v12);
LABEL_19:
    if ( v10 >= 0 )
      return result;
    goto LABEL_20;
  }
LABEL_9:
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xCu, (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids);
LABEL_20:
  if ( v13 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return HUBSM_AddEvent(a1 + 1232, 2006LL);
}
