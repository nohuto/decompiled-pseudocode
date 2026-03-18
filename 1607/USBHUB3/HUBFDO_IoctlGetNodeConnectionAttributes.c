/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0065014
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0067040 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C00279A0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0064850 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 i; // rcx
  __int64 v13; // rcx
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+38h] [rbp-50h] BYREF

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
          &v20,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v20, 0xCuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v20;
      memset(v20, 0, a3);
      *(_DWORD *)v20 = v7;
      *((_DWORD *)v20 + 2) = 0;
      for ( i = v9[288]; ; i = *(_QWORD *)(v13 + 248) )
      {
        v13 = i - 248;
        if ( v9 + 288 == (_QWORD *)(v13 + 248) )
          goto LABEL_8;
        if ( *(unsigned __int16 *)(v13 + 200) == v7 )
          break;
      }
      if ( !v13 )
      {
LABEL_8:
        *((_DWORD *)v20 + 1) = 3;
        goto LABEL_9;
      }
      *((_DWORD *)v20 + 1) = *(_DWORD *)(v13 + 1424);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v9[308], 2u, 3u, 0x2Au, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v10);
  }
LABEL_9:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    {
      v16 = (const GUID *)&v21;
      LODWORD(v19) = v11;
      LODWORD(v18) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      Template_pqq(v15, &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE, v16, v9[28], v18, v19);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11,
           12LL);
}
