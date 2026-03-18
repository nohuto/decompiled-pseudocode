/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0063674
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0065920 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0026CEC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063230 (HUBFDO_IoctlValidateParameters.c)
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
  unsigned int v13; // ecx
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  char *v18; // [rsp+20h] [rbp-58h]
  int *v19; // [rsp+28h] [rbp-50h]
  void *v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+48h] [rbp-30h] BYREF
  char v22; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C0057140);
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v20,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v20, 0xAuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v20;
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
                                     off_1C00570C0)
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
        memset(v20, 0, a3);
        v19 = &v21;
        *(_DWORD *)v20 = v7;
        v18 = (char *)v20 + 8;
        v21 = a3 - 8;
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v12,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        if ( v11 == -1073741789 )
          v11 = 0;
        if ( v11 >= 0 )
        {
          v13 = v21 + 10;
          *((_DWORD *)v20 + 1) = v21 + 10;
          if ( a3 < v13 )
            *((_WORD *)v20 + 4) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2);
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
    WPP_RECORDER_SF_d(v9[305], 2u, 3u, 0x28u, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v10);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      v16 = (const GUID *)&v22;
      LODWORD(v19) = v11;
      LODWORD(v18) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      Template_pqq(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v16,
        v9[26],
        v18,
        v19);
    }
  }
  if ( v11 < 0 && v20 && a3 >= 0xA )
  {
    *((_WORD *)v20 + 4) = 0;
    *((_DWORD *)v20 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
