/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x1C0064878
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0065920 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0026CEC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063230 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  char *v11; // rcx
  char *v12; // rcx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  char v20; // [rsp+38h] [rbp-50h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C0057140);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v19,
         0LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4DuLL, a3);
    if ( v10 >= 0 )
    {
      memset(v19, 0, a3);
      *((_WORD *)v19 + 2) = *(_WORD *)(v8 + 44);
      switch ( *(_DWORD *)(v8 + 2136) )
      {
        case 1:
          *(_DWORD *)v19 = 2;
          v12 = (char *)v19;
          *(_OWORD *)((char *)v19 + 6) = *(_OWORD *)(v8 + 1100);
          *(_OWORD *)(v12 + 22) = *(_OWORD *)(v8 + 1116);
          *(_OWORD *)(v12 + 38) = *(_OWORD *)(v8 + 1132);
          *(_OWORD *)(v12 + 54) = *(_OWORD *)(v8 + 1148);
          *(_DWORD *)(v12 + 70) = *(_DWORD *)(v8 + 1164);
          *((_WORD *)v12 + 37) = *(_WORD *)(v8 + 1168);
          v12[76] = *(_BYTE *)(v8 + 1170);
          break;
        case 2:
          *(_DWORD *)v19 = 3;
          v11 = (char *)v19;
          *(_QWORD *)((char *)v19 + 6) = *(_QWORD *)(v8 + 1100);
          *(_DWORD *)(v11 + 14) = *(_DWORD *)(v8 + 1108);
          break;
        case 4:
          *(_DWORD *)v19 = 1;
          break;
        default:
          WPP_RECORDER_SF_(
            *(_QWORD *)(v8 + 2440),
            2u,
            4u,
            0x31u,
            (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids);
          break;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2440),
      2u,
      3u,
      0x30u,
      (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
      v9);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      v15 = (const GUID *)&v20;
      LODWORD(v18) = v10;
      LODWORD(v17) = 0;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      Template_pqq(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
        v15,
        *(_QWORD *)(v8 + 208),
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           77LL);
}
