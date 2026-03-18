/*
 * XREFs of HUBPDO_EvtIoInternalDeviceControl @ 0x1C00100C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBPDO_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+28h] [rbp-60h]
  _QWORD v22[5]; // [rsp+30h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-30h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_1C00570C0);
  *(_QWORD *)(*(_QWORD *)(v7 + 24) + 440LL) = a2;
  v8 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0057090)
                  + 4) & 0x1000) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (!WPP_MAIN_CB.Queue.Wcb.DeviceObject
       || ((int (__fastcall *)(__int64, GUID *))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(v10, &ActivityId) < 0)
      && EtwActivityIdControl(3u, &ActivityId) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(__int64, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v9, &ActivityId);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
    Template_pq(v9, &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START, &ActivityId, *(_QWORD *)(v8 + 24), a5);
  if ( a5 != 2228227 )
  {
    if ( a5 != 2228231 && a5 != 2232243 )
    {
      v11 = 1000;
      goto LABEL_45;
    }
    v12 = *(_QWORD *)(v7 + 24);
    if ( (*(_DWORD *)(v12 + 2420) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPort", v12 + 488);
    v11 = 4023;
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
    *(_DWORD *)(v13 + 1424) = 10;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20000) != 0 )
    {
      v21 = 0;
      LODWORD(v20) = 2232243;
LABEL_40:
      Template_pqq(
        v13,
        &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
        (const GUID *)(v8 + 1500),
        *(_QWORD *)(*(_QWORD *)v8 + 208LL),
        v20,
        v21);
      goto LABEL_45;
    }
    goto LABEL_45;
  }
  memset(v22, 0, sizeof(v22));
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v22);
  v14 = v22[1];
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100) != 0 )
  {
    LODWORD(v20) = *(unsigned __int16 *)(v22[1] + 2LL);
    Template_pq(v13, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &ActivityId, *(_QWORD *)(v8 + 24), v20);
  }
  v15 = *(unsigned __int16 *)(v14 + 2);
  if ( !*(_WORD *)(v14 + 2) )
  {
    v19 = *(_QWORD *)(v14 + 24) == 0LL;
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(v8 + 24);
    if ( v19 )
    {
      *(_QWORD *)(v14 + 32) = 0LL;
      v11 = 4035;
    }
    else
    {
      v11 = 4031;
    }
    goto LABEL_45;
  }
  switch ( v15 )
  {
    case 1:
      v11 = 4039;
      goto LABEL_45;
    case 30:
      v18 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v18 + 2420) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v18 + 488);
      v11 = 4027;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20000) == 0 )
        goto LABEL_45;
      v21 = 30;
LABEL_39:
      LODWORD(v20) = 2228227;
      goto LABEL_40;
    case 48:
      v17 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v17 + 2420) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v17 + 488);
      v11 = 4047;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20000) == 0 )
        goto LABEL_45;
      v21 = 48;
      goto LABEL_39;
  }
  if ( v15 != 49 )
  {
    v11 = 1000;
    if ( (unsigned int)(v15 - 53) <= 1 )
      v11 = 4019;
    goto LABEL_45;
  }
  v16 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v16 + 2420) & 0x100) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v16 + 488);
  v11 = 4043;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x20000) != 0 )
  {
    v21 = 49;
    goto LABEL_39;
  }
LABEL_45:
  HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 488LL, v11);
}
