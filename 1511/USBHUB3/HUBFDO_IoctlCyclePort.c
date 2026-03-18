/*
 * XREFs of HUBFDO_IoctlCyclePort @ 0x1C00659B0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0066000 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002793C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063830 (HUBFDO_IoctlValidateParameters.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1C0069F78 (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C006D1C8 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBFDO_IoctlCyclePort(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // r12d
  bool v10; // si
  int v11; // eax
  int IsAdmin; // ebx
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  _BYTE v26[8]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_1C0057198);
  v27 = 0LL;
  v9 = 0;
  v10 = 0;
  v26[0] = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v27,
          0LL);
  IsAdmin = v11;
  if ( v11 < 0 )
  {
    v13 = 53;
LABEL_3:
    LODWORD(v25) = v11;
    WPP_RECORDER_SF_d(v8[308], 2u, 3u, v13, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v25);
    goto LABEL_22;
  }
  IsAdmin = HUBFDO_IoctlValidateParameters((__int64)v8, 4uLL, a4, v27, 8uLL, a3);
  v27[1] = 0;
  if ( IsAdmin >= 0 )
  {
    v9 = *(unsigned __int16 *)v27;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      v10 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
      {
        LODWORD(v24) = v9;
        Template_pq(
          v15,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_START,
          (const GUID *)((unsigned __int64)v28 & -(__int64)v10),
          v8[28],
          v24);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v8[2]);
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v8[2],
            0LL,
            1LL);
    if ( !v16 )
      goto LABEL_21;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v16,
                                   off_1C0057118)
                               + 48) == v9 )
        break;
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v8[2],
              v16,
              1LL);
    }
    while ( v16 );
    if ( v16
      && (v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v16,
                  off_1C0057118),
          v18 = v17,
          (v19 = *(_QWORD *)(v17 + 24)) != 0) )
    {
      HUBREG_UpdateUxdSettings(v8, *(_QWORD *)(v17 + 24), v26);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v19);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v20,
        "User Mode FDO Request",
        4816LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v8[2]);
      IsAdmin = HUBMISC_VerifyCallerIsAdmin(v8[308]);
      if ( IsAdmin >= 0 || v26[0] == 1 )
      {
        LOBYTE(v21) = 1;
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
                WdfDriverGlobals,
                v8[2],
                v21,
                0LL,
                4829,
                "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        IsAdmin = v11;
        if ( v11 < 0 )
        {
          v13 = 54;
          goto LABEL_3;
        }
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 4), 1, 0) )
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v19 + 8) + 1240LL))(*(_QWORD *)(v19 + 8), 3011LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          v8[2],
          0LL,
          4851LL,
          "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
      v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v19);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v22,
        "User Mode FDO Request",
        4856LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
    else
    {
LABEL_21:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v8[2]);
      IsAdmin = -1073741810;
      v27[1] = -1073713152;
    }
  }
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    LODWORD(v25) = IsAdmin;
    LODWORD(v24) = v9;
    Template_pqq(
      v14,
      &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_COMPLETE,
      (const GUID *)((unsigned __int64)v28 & -(__int64)v10),
      v8[28],
      v24,
      v25);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)IsAdmin,
           8LL);
}
