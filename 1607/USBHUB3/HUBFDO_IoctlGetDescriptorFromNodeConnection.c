/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C00659E4
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0067040 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008A20 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BA78 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C00279A0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0064850 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // r14
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rsi
  _DWORD *v18; // r15
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int16 *v22; // rdx
  char v23; // al
  unsigned __int16 v24; // r10
  size_t v25; // r8
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v34; // [rsp+20h] [rbp-79h]
  _DWORD *v35; // [rsp+30h] [rbp-69h] BYREF
  __int64 v36; // [rsp+38h] [rbp-61h]
  __int64 v37; // [rsp+40h] [rbp-59h]
  __int64 v38; // [rsp+48h] [rbp-51h]
  _QWORD v39[9]; // [rsp+50h] [rbp-49h] BYREF
  char v40; // [rsp+98h] [rbp-1h] BYREF

  v36 = a2;
  v37 = a1;
  v7 = 0;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C00580C0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v35,
          0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v35, 0xDuLL, a3);
    if ( v12 < 0 )
      return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v36, v12, v8);
    v7 = *(unsigned __int16 *)v35;
    if ( a3 != 12 )
      memset(v35 + 3, 0, a3 - 12);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v36);
      v13 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v34) = v7;
        Template_pq(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)&v40 & -(__int64)((_BYTE)v13 != 0)),
          v10[28],
          v34);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v14 )
      goto LABEL_46;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v14,
                                   off_1C0058070)
                               + 48) == v7 )
        break;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              v14,
              1LL);
    }
    while ( v14 );
    if ( !v14
      || (v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v14,
                  off_1C0058070),
          (v17 = *(_QWORD *)(v38 + 24)) == 0)
      || (*(_DWORD *)(v17 + 1620) & 2) == 0 )
    {
LABEL_46:
      v12 = -1073741810;
      goto LABEL_47;
    }
    v18 = v35;
    v15 = *((unsigned __int8 *)v35 + 7);
    v19 = *((unsigned __int8 *)v35 + 7);
    *((_WORD *)v35 + 2) = 1664;
    v20 = v19 - 1;
    if ( !v20 )
    {
      v8 = a3 - 12;
      v22 = (unsigned __int16 *)(v17 + 1972);
      if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
        v8 = 18;
      goto LABEL_45;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 13 )
      {
        v22 = *(unsigned __int16 **)(v17 + 2040);
        if ( v22 )
        {
LABEL_19:
          if ( v22[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v8 = a3 - 12;
          else
            v8 = v22[1];
LABEL_45:
          v26 = v35 + 3;
          v25 = v8;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v22 = *(unsigned __int16 **)(v17 + 2000);
      if ( v22 && !*((_BYTE *)v18 + 6) )
        goto LABEL_19;
    }
    if ( (_BYTE)v15 != 3 )
      goto LABEL_42;
    v23 = *((_BYTE *)v18 + 6);
    if ( !v23 || v23 != *(_BYTE *)(v17 + 1988) || *((_WORD *)v18 + 4) != 1033 )
      goto LABEL_42;
    if ( (*(_DWORD *)(v17 + 1616) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_47;
    }
    v24 = 0;
    if ( (*(_DWORD *)(v17 + 1620) & 0x800) != 0 )
      v24 = 12;
    v8 = a3 - 12;
    if ( (unsigned __int16)(*(_WORD *)(v17 + 2132) - v24) < (unsigned __int64)(unsigned int)a3 - 12 )
      v8 = (unsigned __int16)(*(_WORD *)(v17 + 2132) - v24);
    if ( v8 > *((unsigned __int16 *)v18 + 5) )
    {
LABEL_42:
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v37,
              off_1C0058180);
      *(_QWORD *)(v27 + 152) = *(_QWORD *)(v18 + 1);
      v28 = v27 + 24;
      v29 = WdfFunctions_01015;
      *(_QWORD *)(v28 + 8) = *(_QWORD *)(*(_QWORD *)(v38 + 24) + 24LL);
      v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v29 + 1632))(WdfDriverGlobals, v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v30,
        "User Mode FDO Request",
        4113LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *(_DWORD *)v28 = 3276936;
      *(_DWORD *)(v28 + 36) = a3 - 12;
      *(_DWORD *)(v28 + 32) = 11;
      v31 = v35;
      *(_QWORD *)(v28 + 48) = 0LL;
      *(_QWORD *)(v28 + 40) = v31 + 3;
      *(_DWORD *)(v28 + 56) = 5000;
      memset(v39, 0, sizeof(v39));
      v39[1] = v28;
      v32 = v36;
      LOBYTE(v39[0]) = 15;
      LODWORD(v39[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v36,
        v39);
      *(_QWORD *)(v17 + 480) = v32;
      return HUBSM_AddDsmEvent(v17, 4051LL);
    }
    v16 = v35;
    if ( (_BYTE)v8 )
      *((_BYTE *)v35 + 12) = v8;
    if ( (unsigned __int8)v8 > 1u )
      *((_BYTE *)v16 + 13) = 3;
    if ( (unsigned __int8)v8 <= 2u )
      goto LABEL_47;
    v25 = (unsigned int)(unsigned __int8)v8 - 2;
    v22 = (unsigned __int16 *)(*(_QWORD *)(v17 + 2136) + 2 * ((unsigned __int64)v24 >> 1));
    v26 = (_DWORD *)((char *)v16 + 14);
LABEL_40:
    memmove(v26, v22, v25);
LABEL_47:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _DWORD *))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      v10[2],
      v15,
      v16);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v36, v12, v8);
  }
  WPP_RECORDER_SF_d(v10[308], 2u, 3u, 0x2Eu, (__int64)&WPP_771bea9a86b4322fb3e9b71551aa114b_Traceguids, v11);
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v36, v12, v8);
}
