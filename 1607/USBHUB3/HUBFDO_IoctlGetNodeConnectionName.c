/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionName @ 0x1C0065604
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0067040 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0027888 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C00279A0 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C00279BC (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0064850 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v7; // r14d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int DeviceInterfacePath; // ebx
  __int64 v12; // rbx
  _WORD *v13; // rax
  size_t v14; // r8
  __int64 v15; // r8
  int ActivityIdIrp; // eax
  __int64 v17; // rcx
  size_t *v18; // r8
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  void *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v24[8]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C00580C0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v22,
          0LL);
  DeviceInterfacePath = v10;
  if ( v10 >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v22, 0xAuLL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_15;
    v7 = *(unsigned __int16 *)v22;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v9[2],
            0LL,
            1LL);
    if ( !v12 )
      goto LABEL_12;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v12,
                                   off_1C0058070)
                               + 48) == v7 )
        break;
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v9[2],
              v12,
              1LL);
    }
    while ( v12 );
    if ( v12
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v12,
                                    off_1C0058070)
                                + 24)
                    + 1616LL) & 2) != 0 )
    {
      memset(v22, 0, a3);
      *(_DWORD *)v22 = v7;
      v23 = 0LL;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath((__int64)&GUID_DEVINTERFACE_USB_HUB, v12, &v23, v9[308]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_15;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v23,
        v24);
      v13 = HUBMISC_StripSymbolicNamePrefix(v24, Size);
      v14 = Size[0];
      *((_DWORD *)v22 + 1) = LODWORD(Size[0]) + 10;
      if ( v14 <= a3 - 8 )
      {
        memmove((char *)v22 + 8, v13, v14);
        v15 = *((unsigned int *)v22 + 1);
LABEL_14:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v15);
        DeviceInterfacePath = 0;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_12:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      *((_DWORD *)v22 + 1) = 10;
    }
    v15 = 10LL;
    *((_WORD *)v22 + 4) = 0;
    goto LABEL_14;
  }
  WPP_RECORDER_SF_d(v9[308], 2u, 3u, 0x2Du, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v10);
LABEL_15:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    {
      v18 = Size;
      LODWORD(v21) = DeviceInterfacePath;
      LODWORD(v20) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      Template_pqq(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v18,
        v9[28],
        v20,
        v21);
    }
  }
  if ( v23 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
