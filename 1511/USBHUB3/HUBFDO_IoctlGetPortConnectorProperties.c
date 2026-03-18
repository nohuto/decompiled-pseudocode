/*
 * XREFs of HUBFDO_IoctlGetPortConnectorProperties @ 0x1C00651E0
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0066000 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002793C (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C0027958 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C0063830 (HUBFDO_IoctlValidateParameters.c)
 *     HUBCONNECTOR_GetCompanionPort @ 0x1C0069120 (HUBCONNECTOR_GetCompanionPort.c)
 */

__int64 __fastcall HUBFDO_IoctlGetPortConnectorProperties(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // esi
  __int16 v12; // bx
  __int64 i; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  PWDF_DRIVER_GLOBALS v16; // rcx
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  size_t *v19; // r8
  __int64 v21; // rax
  __int64 CompanionPort; // rax
  unsigned __int16 *v23; // rcx
  _WORD *v24; // rax
  __int16 v25; // r10
  size_t v26; // r8
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-38h]
  __int64 v30; // [rsp+28h] [rbp-30h]
  void *v31; // [rsp+30h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C0057198);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 0x12uLL, a4, v31, 0x12uLL, a3);
    if ( v11 < 0 )
      goto LABEL_10;
    v7 = *(unsigned __int16 *)v31;
    v12 = *((_WORD *)v31 + 6);
    memset(v31, 0, a3);
    *(_DWORD *)v31 = v7;
    *((_WORD *)v31 + 6) = v12;
    *((_DWORD *)v31 + 1) = 18;
    for ( i = v9[288]; ; i = *(_QWORD *)(v14 + 248) )
    {
      v14 = i - 248;
      if ( v9 + 288 == (_QWORD *)(v14 + 248) )
        goto LABEL_8;
      if ( *(_WORD *)(v14 + 200) == (_WORD)v7 )
        break;
    }
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 204) & 8) != 0 )
        *((_DWORD *)v31 + 2) |= 2u;
      if ( (*(_DWORD *)(v14 + 204) & 1) != 0 )
        *((_DWORD *)v31 + 2) |= 1u;
      if ( (*(_DWORD *)(v14 + 204) & 0x200) != 0 )
        *((_DWORD *)v31 + 2) |= 4u;
      v15 = WdfFunctions_01015;
      v16 = WdfDriverGlobals;
      if ( *((_WORD *)v31 + 6) <= 1u )
      {
        v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C00570E8);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(v21 + 56),
          0LL);
        CompanionPort = HUBCONNECTOR_GetCompanionPort(v14, *((unsigned __int16 *)v31 + 6));
        if ( CompanionPort )
        {
          v23 = (unsigned __int16 *)(*(_QWORD *)CompanionPort + 2488LL);
          *((_WORD *)v31 + 7) = *(_WORD *)(CompanionPort + 200);
          v24 = HUBMISC_StripSymbolicNamePrefix(v23, Size);
          if ( v24 )
          {
            v26 = Size[0];
            *((_DWORD *)v31 + 1) = LODWORD(Size[0]) + 18;
            if ( a3 - 18 >= v26 )
            {
              memmove((char *)v31 + 16, v24, v26);
              v27 = a3;
LABEL_30:
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
                WdfDriverGlobals,
                a2,
                v27);
              v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00570E8);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                WdfDriverGlobals,
                *(_QWORD *)(v28 + 56));
              goto LABEL_10;
            }
          }
          *((_WORD *)v31 + 8) = v25;
        }
        v27 = 18LL;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_8:
      v15 = WdfFunctions_01015;
      v11 = -1073741811;
      v16 = WdfDriverGlobals;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v15 + 2200))(v16, a2, 18LL);
    goto LABEL_10;
  }
  WPP_RECORDER_SF_d(v9[308], 2u, 3u, 0x32u, (__int64)&WPP_09f4d0c5c09a38c56fad3299ef2ac878_Traceguids, v10);
LABEL_10:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    {
      v19 = Size;
      LODWORD(v30) = v11;
      LODWORD(v29) = v7;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      Template_pqq(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_PORT_CONNECTOR_PROPERTIES_COMPLETE,
        (const GUID *)v19,
        v9[28],
        v29,
        v30);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
