/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C00679A8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069D80 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A798 (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002A208 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0067554 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  PWDF_DRIVER_GLOBALS v14; // rcx
  int ActivityIdIrp; // eax
  __int64 v16; // rcx
  const GUID *v17; // r8
  char *v19; // [rsp+20h] [rbp-58h]
  int *v20; // [rsp+28h] [rbp-50h]
  void *v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-30h] BYREF
  char v23; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C005B0C0);
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v21,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v21, 0xAuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v21;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v9[2],
              0LL,
              1LL);
      if ( !v12 )
        goto LABEL_14;
      do
      {
        if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v12,
                                     off_1C005B070)
                                 + 48) == v7 )
          break;
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                v12,
                1LL);
      }
      while ( v12 );
      if ( v12 )
      {
        memset(v21, 0, a3);
        v20 = &v22;
        *(_DWORD *)v21 = v7;
        v19 = (char *)v21 + 8;
        v22 = a3 - 8;
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v12,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        if ( v11 == -1073741789 )
          v11 = 0;
        if ( v11 >= 0 )
        {
          v13 = (unsigned int)(v22 + 10);
          *((_DWORD *)v21 + 1) = v13;
          v14 = WdfDriverGlobals;
          if ( a3 < v13 )
          {
            v13 = 10LL;
            *((_WORD *)v21 + 4) = 0;
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64))(WdfFunctions_01015 + 2200))(
            v14,
            a2,
            v13);
        }
      }
      else
      {
LABEL_14:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v11 = -1073741811;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v9[311], 2u, 3u, 0x23u, (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids, v10);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v17 = (const GUID *)&v23;
      LODWORD(v20) = v11;
      LODWORD(v19) = v7;
      if ( ActivityIdIrp < 0 )
        v17 = 0LL;
      Template_pqq(
        v16,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v17,
        v9[30],
        v19,
        v20);
    }
  }
  if ( v11 < 0 && v21 && a3 >= 0xA )
  {
    *((_WORD *)v21 + 4) = 0;
    *((_DWORD *)v21 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
