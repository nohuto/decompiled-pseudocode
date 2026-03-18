/*
 * XREFs of HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BA78
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C0008A2C (HUBSM_FindAndSetTargetState.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0023120 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0023250 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00659E4 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_CompleteGetDescriptorRequest(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  bool v9; // di
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF

  v9 = 0;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2464),
    4u,
    3u,
    0x2Fu,
    (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids,
    a4);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a3);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v10, v15);
      v10 = 1LL;
      v9 = v11 >= 0;
    }
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    {
      LODWORD(v14) = a4;
      LODWORD(v13) = a2;
      Template_pqq(
        v10,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_COMPLETE,
        (const GUID *)((unsigned __int64)v15 & -(__int64)v9),
        *(_QWORD *)(a1 + 224),
        v13,
        v14);
    }
  }
  if ( a4 >= 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4,
             a5 + 12LL);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4);
}
