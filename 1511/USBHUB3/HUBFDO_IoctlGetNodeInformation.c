/*
 * XREFs of HUBFDO_IoctlGetNodeInformation @ 0x1C0063AA8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0066000 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B2EC (HUBFDO_BuildUsb20HubDescriptor.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002793C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063830 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeInformation(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  int ActivityIdIrp; // eax
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  void *v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+38h] [rbp-40h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C0057198);
  v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4CuLL, a3);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
            WdfDriverGlobals,
            a2,
            a3,
            &v17,
            0LL);
    v9 = v10;
    if ( v10 >= 0 )
    {
      memset(v17, 0, a3);
      *(_DWORD *)v17 = 0;
      if ( *(_DWORD *)(v8 + 84) == 100 )
        *((_BYTE *)v17 + 75) = 1;
      HUBFDO_BuildUsb20HubDescriptor(v8, (char *)v17 + 4);
    }
    else
    {
      LODWORD(v16) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 2464),
        2u,
        3u,
        0x27u,
        (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids,
        v16);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      v13 = (const GUID *)&v18;
      LODWORD(v16) = v9;
      LODWORD(v15) = 0;
      if ( ActivityIdIrp < 0 )
        v13 = 0LL;
      Template_pqq(
        v12,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_INFORMATION_COMPLETE,
        v13,
        *(_QWORD *)(v8 + 224),
        v15,
        v16);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           76LL);
}
