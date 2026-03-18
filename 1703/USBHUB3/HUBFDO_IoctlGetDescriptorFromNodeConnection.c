/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068710
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069D80 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     Template_pq @ 0x1C00012BC (Template_pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008E20 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000BEF8 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002A208 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0067554 (HUBFDO_IoctlValidateParameters.c)
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
  __int64 v14; // rdi
  __int64 v15; // rdi
  _DWORD *v16; // r15
  char v17; // r8
  unsigned __int16 *v18; // rdx
  char v19; // al
  unsigned __int16 v20; // r10
  _DWORD *v21; // r9
  size_t v22; // r8
  _DWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rbx
  __int64 v31; // [rsp+20h] [rbp-79h]
  _DWORD *v32; // [rsp+30h] [rbp-69h] BYREF
  __int64 v33; // [rsp+38h] [rbp-61h]
  __int64 v34; // [rsp+40h] [rbp-59h]
  __int64 v35; // [rsp+48h] [rbp-51h]
  _QWORD v36[9]; // [rsp+50h] [rbp-49h] BYREF
  char v37; // [rsp+98h] [rbp-1h] BYREF

  v33 = a2;
  v34 = a1;
  v7 = 0;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C005B0C0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v32,
          0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v32, 0xDuLL, a3);
    if ( v12 < 0 )
      return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v33, v12, v8);
    v7 = *(unsigned __int16 *)v32;
    if ( a3 != 12 )
      memset(v32 + 3, 0, a3 - 12);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v33);
      v13 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v31) = v7;
        Template_pq(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)&v37 & -(__int64)((_BYTE)v13 != 0)),
          v10[30],
          v31);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v14 )
      goto LABEL_39;
    do
    {
      if ( *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v14,
                                   off_1C005B070)
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
      || (v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v14,
                  off_1C005B070),
          (v15 = *(_QWORD *)(v35 + 24)) == 0)
      || (*(_DWORD *)(v15 + 1620) & 2) == 0 )
    {
LABEL_39:
      v12 = -1073741810;
      goto LABEL_40;
    }
    v16 = v32;
    v17 = *((_BYTE *)v32 + 7);
    *((_WORD *)v32 + 2) = 1664;
    switch ( v17 )
    {
      case 1:
        v8 = a3 - 12;
        v18 = (unsigned __int16 *)(v15 + 1972);
        if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
          v8 = 18;
        goto LABEL_38;
      case 2:
        v18 = *(unsigned __int16 **)(v15 + 2000);
        if ( v18 && !*((_BYTE *)v16 + 6) )
          goto LABEL_19;
        break;
      case 15:
        v18 = *(unsigned __int16 **)(v15 + 2040);
        if ( v18 )
        {
LABEL_19:
          if ( v18[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v8 = a3 - 12;
          else
            v8 = v18[1];
LABEL_38:
          v23 = v32 + 3;
          v22 = v8;
          goto LABEL_33;
        }
        break;
    }
    if ( v17 != 3 )
      goto LABEL_35;
    v19 = *((_BYTE *)v16 + 6);
    if ( !v19 || v19 != *(_BYTE *)(v15 + 1988) || *((_WORD *)v16 + 4) != 1033 )
      goto LABEL_35;
    if ( (*(_DWORD *)(v15 + 1616) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_40;
    }
    v8 = a3 - 12;
    v20 = (*(_DWORD *)(v15 + 1620) & 0x800) != 0 ? 0xC : 0;
    if ( (unsigned __int16)(*(_WORD *)(v15 + 2132) - v20) < (unsigned __int64)(unsigned int)a3 - 12 )
      v8 = (unsigned __int16)(*(_WORD *)(v15 + 2132) - v20);
    if ( v8 > *((unsigned __int16 *)v16 + 5) )
    {
LABEL_35:
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v34,
              off_1C005B1B0);
      *(_QWORD *)(v24 + 152) = *(_QWORD *)(v16 + 1);
      v25 = v24 + 24;
      v26 = WdfFunctions_01015;
      *(_QWORD *)(v25 + 8) = *(_QWORD *)(*(_QWORD *)(v35 + 24) + 24LL);
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v26 + 1632))(WdfDriverGlobals, v15);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v27,
        "User Mode FDO Request",
        3924LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *(_DWORD *)v25 = 3276936;
      *(_DWORD *)(v25 + 36) = a3 - 12;
      *(_DWORD *)(v25 + 32) = 11;
      v28 = v32;
      *(_QWORD *)(v25 + 48) = 0LL;
      *(_QWORD *)(v25 + 40) = v28 + 3;
      *(_DWORD *)(v25 + 56) = 5000;
      memset(v36, 0, sizeof(v36));
      v36[1] = v25;
      v29 = v33;
      LOBYTE(v36[0]) = 15;
      LODWORD(v36[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v33,
        v36);
      *(_QWORD *)(v15 + 480) = v29;
      return HUBSM_AddDsmEvent(v15, 4051LL);
    }
    v21 = v32;
    *((_BYTE *)v32 + 12) = v8;
    *((_BYTE *)v21 + 13) = 3;
    v22 = *(_DWORD *)(v15 + 2132) - (unsigned int)v20 - 2LL;
    v18 = (unsigned __int16 *)(*(_QWORD *)(v15 + 2136) + 2 * ((unsigned __int64)v20 >> 1));
    v23 = (_DWORD *)((char *)v21 + 14);
LABEL_33:
    memmove(v23, v18, v22);
LABEL_40:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v33, v12, v8);
  }
  WPP_RECORDER_SF_d(v10[311], 2u, 3u, 0x29u, (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids, v11);
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v33, v12, v8);
}
