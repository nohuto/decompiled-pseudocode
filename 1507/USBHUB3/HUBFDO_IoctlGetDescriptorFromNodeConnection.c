/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00643C4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0065920 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C00083F0 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000B444 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C0026CEC (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063230 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v5; // edi
  int v8; // r12d
  __int64 v9; // rax
  _QWORD *v10; // rsi
  int v11; // eax
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r13
  _DWORD *v16; // rbx
  int v17; // ecx
  int v18; // ecx
  unsigned __int16 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v26; // [rsp+20h] [rbp-79h]
  _DWORD *v27; // [rsp+30h] [rbp-69h] BYREF
  __int64 v28; // [rsp+38h] [rbp-61h]
  __int64 v29; // [rsp+40h] [rbp-59h]
  __int64 v30; // [rsp+48h] [rbp-51h]
  _QWORD v31[9]; // [rsp+50h] [rbp-49h] BYREF
  char v32; // [rsp+98h] [rbp-1h] BYREF

  v28 = a2;
  v5 = 0;
  v29 = a1;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C0057140);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v27,
          0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v27, 0xDuLL, a3);
    if ( v12 >= 0 )
    {
      v8 = *(unsigned __int16 *)v27;
      if ( a3 != 12 )
        memset(v27 + 3, 0, a3 - 12);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
        v13 = (int)HUBMISC_GetActivityIdIrp() >= 0;
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
        {
          LOBYTE(v13) = -(char)v13;
          LODWORD(v26) = v8;
          Template_pq(
            v13,
            &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
            (const GUID *)((unsigned __int64)&v32 & -(__int64)((_BYTE)v13 != 0)),
            v10[26],
            v26);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              0LL,
              1LL);
      if ( !v14 )
        goto LABEL_26;
      do
      {
        if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v14,
                                     off_1C00570C0)
                                 + 48) == v8 )
          break;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v10[2],
                v14,
                1LL);
      }
      while ( v14 );
      if ( v14
        && (v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v14,
                    off_1C00570C0),
            (v15 = *(_QWORD *)(v30 + 24)) != 0)
        && (*(_DWORD *)(v15 + 1620) & 2) != 0 )
      {
        v16 = v27;
        v17 = *((unsigned __int8 *)v27 + 7);
        *((_WORD *)v27 + 2) = 1664;
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 || (v19 = *(unsigned __int16 **)(v15 + 2000)) == 0LL || *((_BYTE *)v16 + 6) )
          {
            v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v29,
                    off_1C00570E8);
            *(_QWORD *)(v20 + 152) = *(_QWORD *)(v16 + 1);
            v21 = v20 + 24;
            *(_QWORD *)(v20 + 32) = *(_QWORD *)(*(_QWORD *)(v30 + 24) + 24LL);
            v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    v15);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              v22,
              "User Mode FDO Request",
              3991LL,
              "drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
            *(_DWORD *)v21 = 3276936;
            *(_DWORD *)(v21 + 36) = a3 - 12;
            *(_DWORD *)(v21 + 32) = 11;
            v23 = v27 + 3;
            *(_QWORD *)(v21 + 48) = 0LL;
            *(_QWORD *)(v21 + 40) = v23;
            *(_DWORD *)(v21 + 56) = 5000;
            memset(v31, 0, sizeof(v31));
            v31[1] = v21;
            v24 = v28;
            LOBYTE(v31[0]) = 15;
            LODWORD(v31[3]) = 2228227;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
              WdfDriverGlobals,
              v28,
              v31);
            *(_QWORD *)(v15 + 480) = v24;
            return HUBSM_AddDsmEvent(v15, 4051LL);
          }
          if ( v19[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v5 = a3 - 12;
          else
            v5 = v19[1];
        }
        else
        {
          v5 = a3 - 12;
          v19 = (unsigned __int16 *)(v15 + 1972);
          if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
            v5 = 18;
        }
        memmove(v27 + 3, v19, v5);
      }
      else
      {
LABEL_26:
        v12 = -1073741810;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v10[305], 2u, 3u, 0x2Eu, (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids, v11);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v8, v28, v12, v5);
}
