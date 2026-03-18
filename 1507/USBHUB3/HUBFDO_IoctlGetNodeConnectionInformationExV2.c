/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C0064EA8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0065920 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0009DB8 (WPP_RECORDER_SF_Dd.c)
 *     HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher @ 0x1C0024F18 (HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x1C0024F54 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0026CEC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063230 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInformationExV2(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  __int64 i; // rbx
  __int64 v14; // rbx
  int ActivityIdIrp; // eax
  __int64 v16; // rcx
  const GUID *v17; // r8
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // r11
  char IsDeviceSuperSpeedPlusCapableOrHigher; // al
  __int64 v23; // r11
  __int64 v24; // r10
  _DWORD *v25; // rbx
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  void *v28; // [rsp+40h] [rbp-28h] BYREF
  char v29; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C0057140);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v28,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters(v9, 0x10uLL, a4, v28, 0x10uLL, a3);
    if ( v11 >= 0 )
    {
      if ( *((_DWORD *)v28 + 1) >= 0x10u )
      {
        v7 = *(unsigned __int16 *)v28;
        v12 = *((_DWORD *)v28 + 2);
        memset(v28, 0, a3);
        *(_DWORD *)v28 = v7;
        if ( (v12 & 4) != 0 )
        {
          *(_DWORD *)v28 = v7;
          *((_DWORD *)v28 + 1) = 16;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
            WdfDriverGlobals,
            a2,
            16LL);
          for ( i = *(_QWORD *)(v9 + 2280); ; i = *(_QWORD *)(v14 + 248) )
          {
            v14 = i - 248;
            if ( v9 + 2280 == v14 + 248 )
              break;
            if ( *(_WORD *)(v14 + 200) == (_WORD)v7 )
            {
              if ( !v14 )
                break;
              v19 = *(_DWORD *)(v14 + 208);
              if ( v19 == 512 )
              {
                *((_DWORD *)v28 + 2) |= 1u;
                if ( *(_DWORD *)(v9 + 216) == 2 || *(_DWORD *)(v9 + 2136) == 4 )
                  *((_DWORD *)v28 + 2) |= 2u;
              }
              else if ( v19 == 768 )
              {
                *((_DWORD *)v28 + 2) |= 4u;
              }
              else
              {
                LODWORD(v27) = *(_DWORD *)(v14 + 208);
                WPP_RECORDER_SF_Dd(
                  *(_QWORD *)(v9 + 2440),
                  248LL,
                  4u,
                  0x34u,
                  (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
                  v27,
                  v7);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v9 + 16),
                      0LL,
                      1LL);
              if ( v20 )
              {
                do
                {
                  if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                               WdfDriverGlobals,
                                               v20,
                                               off_1C00570C0)
                                           + 48) == v7 )
                    break;
                  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015
                                                                                                 + 1080))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v9 + 16),
                          v20,
                          1LL);
                }
                while ( v20 );
                if ( v20 )
                {
                  v21 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                      WdfDriverGlobals,
                                      v20,
                                      off_1C00570C0)
                                  + 24);
                  if ( v21 )
                  {
                    if ( (*(_DWORD *)(v21 + 1616) & 0x800) != 0 )
                      *((_DWORD *)v28 + 3) |= 2u;
                    IsDeviceSuperSpeedPlusCapableOrHigher = HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(v21);
                    *(_DWORD *)(v24 + 12) ^= (*(_DWORD *)(v24 + 12) ^ (8 * (IsDeviceSuperSpeedPlusCapableOrHigher != 0))) & 8;
                    if ( *(_DWORD *)(v14 + 208) == 768 )
                    {
                      *((_DWORD *)v28 + 3) |= 1u;
                      v25 = v28;
                      v25[3] ^= (v25[3] ^ (4 * HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(v23))) & 4;
                    }
                  }
                }
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              goto LABEL_11;
            }
          }
        }
      }
      v11 = -1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 2440),
      2u,
      3u,
      0x33u,
      (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
      v10);
  }
LABEL_11:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      v17 = (const GUID *)&v29;
      LODWORD(v27) = v11;
      LODWORD(v26) = v7;
      if ( ActivityIdIrp < 0 )
        v17 = 0LL;
      Template_pqq(
        v16,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_V2_COMPLETE,
        v17,
        *(_QWORD *)(v9 + 208),
        v26,
        v27);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
